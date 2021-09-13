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
// #include <triumf/bnmr/srf/local.hpp>
#include <triumf/bnmr/srf/nonlocal.hpp>
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

/*
const double TEMPERATURE = 2.5;
const double T_C = 9.25;
const double D_0 = triumf::superconductivity::bcs::gap_meV<double>(TEMPERATURE);
const double XI_0 = 38.0;
const double ELL = 1e4;
const double LAMBDA_0 = 40.0;
const double EXPONENT = 4.0;
const double B_0 = 0.02;
const double B_D = 5e-5;
const double NU_C = 0.1 / 23.8e-6;
const double SLR_C = 0.75;
const double SLR_N = 1.0;
const double SURFACE_THICKNESS = 10.0;
const double SURFACE_RATE = 10.0;
*/

// function for interfacing w/ ROOT's fitting functions
double slr_model(const double *x, const double *par) {
  // persistant instance of the depth-resolved analyzer
  static triumf::bnmr::srf::nonlocal::DepthResolvedAnalyzer<double> dra(
      "srim_profile_8li_nb_fitpar.csv");
  // aliases for the independent variables
  double sample_temperature = x[0];
  double magnetic_field = x[1];
  double implantation_energy = x[2];

  // set the model values
  dra.temperature = sample_temperature;
  dra.critical_temperature = par[0];
  dra.gap_meV = par[1];
  dra.xi_0 = par[2];
  dra.mean_free_path = par[3];
  dra.lambda_0 = par[4];
  dra.exponent = par[5];
  dra.applied_field = magnetic_field;
  dra.dipole_field = par[6];
  dra.correlation_rate = par[7];
  dra.slr_constant = par[8];
  dra.slr_exponent = par[9];
  dra.surface_thickness = par[10];
  dra.surface_rate = par[11];
  dra.electron_phonon_coupling = par[12];
  //
  return dra(implantation_energy);
}

void plot_depth_averaging3() {
  //
  const double T_min = 0.0;
  const double T_max = 15.0;
  const double B_min = 1e-4 * 25.0;
  const double B_max = 1e-4 * 240.0;
  const double E_min = 0.03;
  const double E_max = 21.0;
  const auto N_par = 13;
  TF3 *f_3d = new TF3("f_3d", slr_model, T_min, T_max, B_min, B_max, E_min,
                      E_max, N_par);

  f_3d->SetParName(0, "T_c (K)");
  f_3d->SetParLimits(0, 8.25, 9.25);
  // f_3d->SetParameter(0, 8.75);
  f_3d->SetParameter(0, 8.52336);

  f_3d->SetParName(1, "Delta_0 (meV)");
  f_3d->SetParLimits(1, 1.35, 1.65);
  // f_3d->SetParameter(1, triumf::superconductivity::bcs::gap_meV<double>(
  //                           f_3d->GetParameter(0)));
  f_3d->SetParameter(1, 1.50);

  f_3d->SetParName(2, "xi_0 (nm)");
  f_3d->SetParLimits(2, 0.0, 150.0);
  f_3d->SetParameter(2, 39.0);

  f_3d->SetParName(3, "ell (nm)");
  f_3d->SetParLimits(3, 0.0, 1e5);
  f_3d->SetParameter(3, 1.0e1);

  f_3d->SetParName(4, "lambda_0 (nm)");
  f_3d->SetParLimits(4, 0.0, 150.0);
  f_3d->SetParameter(4, 60.8873);

  f_3d->SetParName(5, "n (-)");
  f_3d->SetParLimits(5, 2.0, 4.0);
  f_3d->SetParameter(5, 4.0);

  f_3d->SetParName(6, "B_d (T)");
  f_3d->SetParLimits(6, 0.0, 1e-3);
  f_3d->SetParameter(6, 0.000238954);

  f_3d->SetParName(7, "nu_c (1/s)");
  f_3d->SetParLimits(7, 0.0, 1e6);
  // f_3d->SetParameter(7, 1.0 / 23.8e-6);
  // f_3d->SetParameter(7, 23061.9);
  f_3d->SetParameter(7, 8304.91);

  f_3d->SetParName(8, "c (1/(s K^m))");
  f_3d->SetParLimits(8, 0.0, 3.0);
  f_3d->SetParameter(8, 0.45744);

  f_3d->SetParName(9, "m (-)");
  f_3d->SetParLimits(9, 0.0, 4.0);
  f_3d->SetParameter(9, 1.0);

  f_3d->SetParName(10, "dl (nm)");
  f_3d->SetParLimits(10, 0.0, 30.0);
  f_3d->SetParameter(10, 7.41019);

  f_3d->SetParName(11, "dlr (1/s)");
  f_3d->SetParLimits(11, 0.0, 40.0);
  f_3d->SetParameter(11, 18.3114);

  f_3d->SetParName(12, "Z (-)");
  f_3d->SetParLimits(12, 0.0, 3.0);
  f_3d->SetParameter(12, 2.1);

  TFile *input = new TFile("fitresult_nonlocal.root", "READ");

  TFitResult *fr;
  input->GetObject("tfr", fr);

  // fr->Print();

  f_3d->SetFitResult(*fr);

  // std::cout << f_3d->GetParError(11) << "\n";

  double B_avg = 0.020014343022917;

  double T_low = 3.5077;
  double T_high = 11.8551;
  double E_1 = 19.9321;
  
  
  const std::size_t num = 200;
  const std::string delimiter = ",";
  const std::string header = "Temperature (K)" + delimiter + "Field (T)" +
                             delimiter + "Energy (keV)" + delimiter +
                             "Rate (1/s)" + "\n";
  std::vector<double> temperatures = triumf::numpy::linspace(T_min, T_max, num);
  std::vector<double> energies = triumf::numpy::linspace(E_min, E_max, num);
  
  //
  std::ofstream fit_T_scan("fit_T_scan.csv");
  fit_T_scan << header;
  for (auto &t : temperatures) {
    fit_T_scan << t << delimiter;
    fit_T_scan << B_avg << delimiter;
    fit_T_scan << E_1 << delimiter;
    fit_T_scan << f_3d->Eval(t, B_avg, E_1) << "\n";
  }
  fit_T_scan.close();
  
  //
  std::ofstream fit_E_scan_LT("fit_E_scan_LT.csv");
  fit_E_scan_LT << header;
  for (auto &e : energies) {
    fit_E_scan_LT << T_low << delimiter;
    fit_E_scan_LT << B_avg << delimiter;
    fit_E_scan_LT << e << delimiter;
    fit_E_scan_LT << f_3d->Eval(T_low, B_avg, e) << "\n";
  }
  fit_E_scan_LT.close();

  //
  std::ofstream fit_E_scan_HT("fit_E_scan_HT.csv");
  fit_E_scan_HT << header;
  for (auto &e : energies) {
    fit_E_scan_HT << T_high << delimiter;
    fit_E_scan_HT << B_avg << delimiter;
    fit_E_scan_HT << e << delimiter;
    fit_E_scan_HT << f_3d->Eval(T_high, B_avg, e) << "\n";
  }
  fit_E_scan_HT.close();
}

#ifndef __CLING__
int main() {
  plot_depth_averaging3();
  return EXIT_SUCCESS;
}
#endif
