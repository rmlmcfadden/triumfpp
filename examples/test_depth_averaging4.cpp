// C++ standard library headers
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

// triumf++ headers
#include <triumf/bnmr/srf/local.hpp>
// #include <triumf/bnmr/srfnonlocal.hpp>
#include <triumf/numpy.hpp>
#include <triumf/superconductivity/bcs.hpp>

// ROOT headers
#include <Fit/BinData.h>
#include <Fit/FitExecutionPolicy.h>
#include <Fit/Fitter.h>
#include <Math/WrappedMultiTF1.h>
#include <ROOT/RCsvDS.hxx>
#include <ROOT/RDF/RInterface.hxx>
#include <ROOT/RDataFrame.hxx>
#include <TCanvas.h>
#include <TF3.h>
#include <TFile.h>
#include <TFitResult.h>
#include <TGraph.h>


// function for interfacing w/ ROOT's fitting functions
double slr_model(const double *x, const double *par) {
  // persistant instance of the depth-resolved analyzer
  static triumf::bnmr::srf::local::DepthResolvedAnalyzer<double> dra(
      "srim_profile_8li_nb_fitpar.csv");
  // aliases for the independent variables
  double sample_temperature = x[0];
  double magnetic_field = x[1];
  double implantation_energy = x[2];

  // set the model values
  dra.temperature = sample_temperature;
  dra.critical_temperature = par[0];
  dra.lambda_0 = par[1];
  dra.exponent = par[2];
  dra.applied_field = magnetic_field;
  dra.dipole_field = par[3];
  dra.correlation_rate = par[4];
  dra.slr_constant = par[5];
  dra.slr_exponent = par[6];
  dra.surface_thickness = par[7];
  dra.surface_rate = par[8];
  //
  return dra(implantation_energy);
}

void test_depth_averaging4() {
  //
  const double T_min = 0.0;
  const double T_max = 20.0;
  const double B_min = 1e-4 * 25.0;
  const double B_max = 1e-4 * 240.0;
  const double E_min = 0.03;
  const double E_max = 29.95;
  const auto N_par = 9;
  TF3 *f_3d = new TF3("f_3d", slr_model, T_min, T_max, B_min, B_max, E_min,
                      E_max, N_par);

  f_3d->SetParName(0, "T_c (K)");
  f_3d->SetParLimits(0, 8.0, 9.25);
  // f_3d->SetParameter(0, 8.75);
  f_3d->SetParameter(0, 8.53147);

  f_3d->SetParName(1, "lambda_0 (nm)");
  f_3d->SetParLimits(1, 0.0, 150.0);
  f_3d->SetParameter(1, 61.3246);

  f_3d->SetParName(2, "n (-)");
  f_3d->SetParLimits(2, 2.0, 4.0);
  f_3d->SetParameter(2, 4.0);

  f_3d->SetParName(3, "B_d (T)");
  f_3d->SetParLimits(3, 0.0, 1e-3);
  f_3d->SetParameter(3, 0.000239548);

  f_3d->SetParName(4, "nu_c (1/s)");
  f_3d->SetParLimits(4, 0.0, 1e6);
  // f_3d->SetParameter(4, 1.0 / 23.8e-6);
  // f_3d->SetParameter(4, 23061.9);
  f_3d->SetParameter(4, 8363.69);

  f_3d->SetParName(5, "c (1/(s K^m))");
  f_3d->SetParLimits(5, 0.0, 3.0);
  f_3d->SetParameter(5, 0.451973);

  f_3d->SetParName(6, "m (-)");
  f_3d->SetParLimits(6, 0.0, 4.0);
  f_3d->SetParameter(6, 1.0);

  f_3d->SetParName(7, "dl (nm)");
  f_3d->SetParLimits(7, 0.0, 30.0);
  f_3d->SetParameter(7, 7.41019);

  f_3d->SetParName(8, "dlr (1/s)");
  f_3d->SetParLimits(8, 0.0, 40.0);
  f_3d->SetParameter(8, 18.2169);
  
  //
  /*
  triumf::bnmr::srf::DepthResolvedAnalyzer<double> dra(
      "srim_profile_8li_nb_fitpar.csv");
  dra.critical_temperature = 9.25;
  dra.gap_meV = triumf::superconductivity::bcs::gap_meV<double>(9.25);
  dra.xi_0 = 38.0;
  dra.mean_free_path = 1e4;
  dra.lambda_0 = 40.0;
  dra.exponent = 4.0;
  dra.applied_field = 0.020;
  dra.dipole_field = 4e-5;
  dra.correlation_rate = 1.0 / 23.8e-6;
  dra.slr_constant = 0.75;
  dra.slr_exponent = 1.0;
  dra.surface_thickness = 10.0;
  dra.surface_rate = 20.0;
  */

  //
  /*
  const auto n_points = 10;
  std::vector<double> energies =
      triumf::numpy::linspace<double>(E_min, E_max, n_points);
  std::vector<double> fields =
      triumf::numpy::linspace<double>(B_min, B_max, n_points);
  std::vector<double> temperatures =
      triumf::numpy::linspace<double>(T_min, T_max, n_points);

  //
  std::ofstream ofs("depth_averaged_slr.csv");
  ofs << "Temperature (K)"
      << ","
      << "Field (T)"
      << ","
      << "Energy (keV)"
      << ","
      << "Rate (1/s)"
      << "\n";
  ofs << std::scientific;
  ofs << std::setprecision(10);
  //

  for (const auto &t : temperatures) {
    for (const auto &b : fields) {
      for (const auto &e : energies) {
        ofs << t << ",";
        ofs << b << ",";
        ofs << e << ",";
        ofs << f_3d->Eval(t, b, e) << "\n";
      }
    }
  }
  ofs.close();
  */

  //
  // read the data into a DataFrame ...
  auto df = ROOT::RDF::MakeCsvDataFrame("relaxation-rates.dat", true, '\t');
  // auto df = ROOT::RDF::MakeCsvDataFrame("relaxation-rates-trimmed.dat", true,
  // '\t'); get the average magnetic field from ALL runs auto field_average =
  // df.Mean<double>("Field(T)").GetValue();

  // ... and extract some of the values in std::vectors
  auto df_energy = df.Take<double>("Energy(keV)").GetValue();
  auto df_energy_error = df.Take<double>("EnergyError(keV)").GetValue();
  auto df_field = df.Take<double>("Field(T)").GetValue();
  auto df_field_error = df.Take<double>("FieldError(T)").GetValue();
  auto df_temperature = df.Take<double>("Temperature(K)").GetValue();
  auto df_temperature_error = df.Take<double>("TemperatureError(K)").GetValue();
  auto df_rate = df.Take<double>("Rate(1/s)").GetValue();
  auto df_rate_error = df.Take<double>("RateError(1/s)").GetValue();

  std::vector<double> zero_error(df.Count().GetValue(), 0.0);

  // create a 3d binned data structure (w/ coordinate/value uncertainties)
  // https://root.cern.ch/doc/master/classROOT_1_1Fit_1_1BinData.html

  ROOT::Fit::BinData data(df.Count().GetValue(), df_temperature.data(),
                          df_field.data(), df_energy.data(), df_rate.data(),
                          df_temperature_error.data(), df_field_error.data(),
                          df_energy_error.data(), df_rate_error.data());
  /*
  // the uncertainties are practically zero, so ignore them to speed up the
  // minimization...
  ROOT::Fit::BinData data(df.Count().GetValue(), df_temperature.data(),
                          df_field.data(), df_energy.data(), df_rate.data(),
                          zero_error.data(), zero_error.data(),
                          zero_error.data(), df_rate_error.data());
  */
  // wrapped the TF1 in a IParamMultiFunction interface for the Fitter class
  ROOT::Math::WrappedMultiTF1 wf(*f_3d, 3);

  // ROOT "fitter" object
  ROOT::Fit::Fitter fitter;
  fitter.SetFunction(wf);
  
  
  // Read the old fit result
  TFile *input = new TFile("fitresult_local.root", "READ");
  TFitResult *fr;
  input->GetObject("tfr", fr);
  
  
  //
  for (auto i = 0; i < f_3d->GetNpar(); ++i) {
    //
    auto name = f_3d->GetParName(i);
    auto value = f_3d->GetParameter(i);
    double lower;
    double upper;
    f_3d->GetParLimits(i, lower, upper);
    auto step = 0.10 * value;
    // auto is_good = (lower <= value and value <= upper);
    // std::cout << "par[" << i << "] : " << is_good << "\n";
    fitter.Config().ParSettings(i).Set(name, value, step, lower, upper);
    //
    
    fitter.Config().ParSettings(i).SetValue(fr->Value(i));
    fitter.Config().ParSettings(i).SetStepSize(fr->Error(i));
    
  }

  // critical temperature
  //fitter.Config().ParSettings(0).SetValue(8.53);
  // fitter.Config().ParSettings(0).SetStepSize(0.01);
  // fitter.Config().ParSettings(0).Fix();
  
  // magnetic penetration depth
  //fitter.Config().ParSettings(1).SetValue(88.0);
  // fitter.Config().ParSettings(1).SetStepSize(1.0);
  // fitter.Config().ParSettings(1).Fix();
  
  // two-fluid exponent
  fitter.Config().ParSettings(2).Fix();
  
  // dipole-dipole interaction field
  //fitter.Config().ParSettings(3).SetValue(0.000175);
  // fitter.Config().ParSettings(3).SetStepSize(1e-6);
  // fitter.Config().ParSettings(3).Fix();
  
  // correlation rate
  //fitter.Config().ParSettings(4).SetValue(15546);
  // fitter.Config().ParSettings(4).SetStepSize(500.0);
  // fitter.Config().ParSettings(4).Fix();
  
  // SLR power law constant
  //fitter.Config().ParSettings(5).SetValue(0.45);
  // fitter.Config().ParSettings(5).SetStepSize(0.01);
  
  // SLR power law exponent
  // fitter.Config().ParSettings(6).SetStepSize(0.01);
  fitter.Config().ParSettings(6).Fix();
  
  // surface layer thickness
  //fitter.Config().ParSettings(7).SetValue(7.56);
  // fitter.Config().ParSettings(7).SetStepSize(0.01);
  // fitter.Config().ParSettings(7).Fix();
  
  // surface layer rate
  //fitter.Config().ParSettings(8).SetValue(17.9);
  // fitter.Config().ParSettings(8).SetStepSize(0.25);
  // fitter.Config().ParSettings(8).Fix();
  

  // fitter.Config().SetMinimizer("Minuit2", "Migrad");
  // fitter.Config().SetMinimizer("Minuit2", "Minimize");

  fitter.Config().MinimizerOptions().SetMinimizerType("Minuit2");
  // fitter.Config().MinimizerOptions().SetMinimizerAlgorithm("Minimize");
  fitter.Config().MinimizerOptions().SetMinimizerAlgorithm("Migrad");
  // fitter.Config().MinimizerOptions().SetMinimizerAlgorithm("Simplex");
  // fitter.Config().MinimizerOptions().SetMinimizerAlgorithm("Scan");
  // fitter.Config().MinimizerOptions().SetMinimizerAlgorithm("Minos");
  fitter.Config().SetMinosErrors();

  fitter.Config().MinimizerOptions().SetMaxFunctionCalls(
      std::numeric_limits<unsigned int>::max());
  fitter.Config().MinimizerOptions().SetMaxIterations(
      std::numeric_limits<unsigned int>::max());
  fitter.Config().MinimizerOptions().SetPrintLevel(3);
  // 2 is more accurate?
  // http://www.fresco.org.uk/minuit/cern/node20.html
  // 1 = default (computes Hessian @ end of minimization)
  // 2 = computes full Hessian
  fitter.Config().MinimizerOptions().SetStrategy(1);
  // default = 0.01
  // minimization goal: EDM < 0.002 * tolerance * UPERROR
  // https://root-forum.cern.ch/t/minuit2-edm-question/18470
  fitter.Config().MinimizerOptions().SetTolerance(0.01);

  fitter.Fit(data);
  // fitter.Fit(data, ROOT::Fit::ExecutionPolicy::kMultithread);
  const ROOT::Fit::FitResult &fit_result = fitter.Result();
  fit_result.Print(std::cout);
  f_3d->SetFitResult(fit_result);

  //
  TFitResult tfr(fit_result);
  tfr.SetName("tfr");

  //
  TFile *output = new TFile("fitresult_local.root", "RECREATE");
  tfr.Write();
  // f_3d->Write();
  output->Close();
}

#ifndef __CLING__
int main() {
  test_depth_averaging4();
  return EXIT_SUCCESS;
}
#endif
