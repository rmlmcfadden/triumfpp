// C++ standard library headers
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

// Boost headers
#include <boost/math/interpolators/pchip.hpp>
#include <boost/math/quadrature/tanh_sinh.hpp>

// triumf++ headers
#include <triumf/bnmr/nuclei.hpp>
#include <triumf/nmr/dipole_dipole.hpp>
#include <triumf/nmr/nuclei.hpp>
#include <triumf/numpy.hpp>
#include <triumf/srim/pdf.hpp>
#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/pippard.hpp>

// ROOT headers
#include <ROOT/RCsvDS.hxx>
#include <ROOT/RDF/RInterface.hxx>
#include <ROOT/RDataFrame.hxx>
#include <TCanvas.h>
#include <TGraph.h>

//
double slr_fcn(double d, double R_0, double d_0) {
  // return d < d_0 ? 1.5 * R_0 : R_0 * std::exp((d - d_0) / (10.0 * d_0));
  return d < d_0 ? 1.0 * R_0 : 0.5 * R_0;
}

/// model slr rate
template <typename T = double>
T slr_rate_z(T z, T temperature, T critical_temperature, T gap_meV, T xi_0,
             T mean_free_path, T lambda_0, T exponent, T applied_field,
             T dipole_field, T correlation_rate, T slr_constant, T slr_exponent,
             T surface_thickness, T surface_rate) {
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  if (_z_ < 0.0) {
    return surface_rate;
  } else {
    // calculate the local field from the screening profile
    T screened_field =
        temperature > critical_temperature
            ? applied_field
            : triumf::superconductivity::pippard::field_penetration<T>(
                  _z_, temperature, critical_temperature, gap_meV, xi_0,
                  mean_free_path, lambda_0, exponent, applied_field);
    // calculate the dipole-dipole SLR rate in the superconducting state
    T dd_rate = triumf::nmr::dipole_dipole::slr_rate<double>(
        screened_field, dipole_field, correlation_rate,
        triumf::bnmr::nuclei::lithium_8<T>::gyromagnetic_ratio(),
        triumf::nmr::nuclei::niobium_93<T>::gyromagnetic_ratio());
    // calculate the SLR rate in the normal state
    T ns_rate = slr_constant * std::pow(temperature, slr_exponent);
    // return the "surface" contribution at shallow depths
    return dd_rate + ns_rate;
  }
}

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
const double SURFACE_THICKNESS = 5.0;
const double SURFACE_RATE = 10.0;

constexpr double GLOBAL_R_0 = 1.0;
constexpr double GLOBAL_D_0 = 15.0;

//
template <typename T = double> class DepthAverage {
public:
  // constructor
  DepthAverage(const std::string &csv_filename) {
    // read the data into a ROOT DataFrame...
    auto df = ROOT::RDF::MakeCsvDataFrame(csv_filename);
    // ...and extract the values
    _energy = df.Take<T>("Energy (keV)").GetValue();
    _alpha = df.Take<T>("Alpha").GetValue();
    _alpha_error = df.Take<T>("Alpha Error").GetValue();
    _beta = df.Take<T>("Beta").GetValue();
    _beta_error = df.Take<T>("Beta Error").GetValue();
    _z_max = df.Take<T>("Max (nm)").GetValue();
    _z_max_error = df.Take<T>("Max Error (nm)").GetValue();
  };

  //
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  //
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  //
  T alpha(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> alpha_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_alpha)));
    return alpha_interpolator(energy_keV);
  };

  //
  T beta(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> beta_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_beta)));
    return beta_interpolator(energy_keV);
  };

  //
  T z_max(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> z_max_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_z_max)));
    return z_max_interpolator(energy_keV);
  };

  //
  T z_average(T energy_keV) {
    T a = alpha(energy_keV);
    T b = beta(energy_keV);
    T zm = z_max(energy_keV);
    return zm * a / (a + b);
  };
  
  /*
  // depth-averaging using numeric integration
  T operator()(T energy_keV) {
    // T a = alpha(energy_keV);
    // T b = beta(energy_keV);
    // T zm = z_max(energy_keV);
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      // return slr_fcn(z, GLOBAL_R_0, GLOBAL_D_0) *
      return slr_rate_z<T>(z, TEMPERATURE, T_C, D_0, XI_0, ELL, LAMBDA_0,
                           EXPONENT, B_0, B_D, NU_C, SLR_C, SLR_N,
                           SURFACE_THICKNESS, SURFACE_RATE) *
             triumf::srim::pdf::modified_beta<T>(
                 z, alpha(energy_keV), beta(energy_keV), z_max(energy_keV));
    };
    T Q =
        integrator.integrate(integrand, 0.0, z_max(energy_keV),
                             std::cbrt(std::numeric_limits<double>::epsilon()));
    return Q;
  };
  */

  // depth-averaging using "histogram" summation
  T operator()(T energy_keV) {
    constexpr std::size_t n = 201;
    // bin edges
    std::vector<T> z_edge =
        triumf::numpy::linspace<T>(0.0, z_max(energy_keV), n);
    // bin widths - adjust ranges by one for "correct" size
    std::vector<T> dz(n - 1);
    std::adjacent_difference(std::begin(z_edge) + 1, std::end(z_edge),
                             std::begin(dz));
    // bin centres
    std::vector<T> z(n - 1);
    // probabilities
    std::vector<T> p_z(n - 1);
    std::vector<T> weights(n - 1);
    std::vector<T> slr_rates(n - 1);

    for (std::size_t i = 0; i < z.size(); ++i) {
      z.at(i) = z_edge.at(i) + 0.5 * dz.at(i);
      p_z.at(i) = triumf::srim::pdf::modified_beta<T>(
          z.at(i), alpha(energy_keV), beta(energy_keV), z_max(energy_keV));
      // std::cout << "p(" << z.at(i) << " nm ) = " << p_z.at(i) << " nm^-1\n";
      weights.at(i) = dz.at(i) * p_z.at(i);
      // slr_rates.at(i) = slr_fcn(z.at(i), GLOBAL_R_0, GLOBAL_D_0);
      slr_rates.at(i) = slr_rate_z<T>(z.at(i), TEMPERATURE, T_C, D_0, XI_0, ELL,
                                      LAMBDA_0, EXPONENT, B_0, B_D, NU_C, SLR_C,
                                      SLR_N, SURFACE_THICKNESS, SURFACE_RATE);
    }

    T sum_weights = std::reduce(std::begin(weights), std::end(weights));
    // std::cout << "sum_weights = " << sum_weights << "\n";
    T sum_weights_slr = std::transform_reduce(
        std::begin(weights), std::end(weights), std::begin(slr_rates), 0.0);
    // std::cout << "sum_weights_slr = " << sum_weights_slr << "\n";
    T weighted_average = sum_weights_slr / sum_weights;
    return weighted_average;
  };

private:
  // vectors of data from csv file
  std::vector<T> _energy;
  std::vector<T> _alpha;
  std::vector<T> _alpha_error;
  std::vector<T> _beta;
  std::vector<T> _beta_error;
  std::vector<T> _z_max;
  std::vector<T> _z_max_error;
};

void test_depth_averaging() {
  const double alpha = 2.5;
  const double beta = 4.5;
  const double z_max = 250.0;

  //
  // const double R_0 = 10.0;
  // const double d_0 = 25.0; // (1.0 / 6.0) * z_max;

  // bin edges
  std::vector<double> z_edge = triumf::numpy::linspace<double>(0.0, z_max, 201);
  // bin widths - adjust ranges by one for "correct" size
  std::vector<double> dz(z_edge.size() - 1);
  std::adjacent_difference(std::begin(z_edge) + 1, std::end(z_edge),
                           std::begin(dz));
  // bin centres
  std::vector<double> z(z_edge.size() - 1);
  // probabilities
  std::vector<double> p_z(z_edge.size() - 1);

  std::vector<double> weights(z_edge.size() - 1);

  std::vector<double> slr_rates(z_edge.size() - 1);

  std::cout << std::setprecision(16);
  std::cout << std::fixed;

  for (std::size_t i = 0; i < z.size(); ++i) {
    z.at(i) = z_edge.at(i) + 0.5 * dz.at(i);
    p_z.at(i) = triumf::srim::pdf::modified_beta(z.at(i), alpha, beta, z_max);
    // std::cout << "p(" << z.at(i) << " nm ) = " << p_z.at(i) << " nm^-1\n";

    weights.at(i) = dz.at(i) * p_z.at(i);
    // slr_rates.at(i) = slr_fcn(z.at(i), GLOBAL_R_0, GLOBAL_D_0);
    slr_rates.at(i) = slr_rate_z<double>(
        z.at(i), TEMPERATURE, T_C, D_0, XI_0, ELL, LAMBDA_0, EXPONENT, B_0, B_D,
        NU_C, SLR_C, SLR_N, SURFACE_THICKNESS, SURFACE_RATE);
  }

  double sum_weights = std::reduce(std::begin(weights), std::end(weights));
  std::cout << "sum_weights = " << sum_weights << "\n";

  double sum_weights_slr = std::transform_reduce(
      std::begin(weights), std::end(weights), std::begin(slr_rates), 0.0);
  std::cout << "sum_weights_slr = " << sum_weights_slr << "\n";

  double weighted_average = sum_weights_slr / sum_weights;
  // std::cout << "weighted_average = " << weighted_average << "\n";

  /*
  for (std::size_t i = 0; i < z.size(); ++i) {
    p_z.at(i) = triumf::srim::pdf::modified_beta(z.at(i), alpha, beta, z_max);
    std::cout << "p(" << z.at(i) << " nm ) = " << p_z.at(i) << " nm^-1\n";
  }
  */

  // double sum = std::reduce(std::begin(p_z), std::end(p_z));
  // std::cout << "sum = " << sum << "\n";

  //

  /*
  std::cout << dz.size() << "\n";
  for (auto &bw : dz) {
    std::cout << bw << "\n";
  }
  */

  /*
  std::transform(std::begin(z), std::end(z), std::begin(p_z), [&](double d) {
    return triumf::srim::pdf::modified_beta(z.at(i), alpha, beta, z_max);
  });
  */

  TCanvas *c_p = new TCanvas();

  TGraph *g_p = new TGraph(z.size(), z.data(), p_z.data());
  g_p->SetTitle(";Depth (nm);Stopping probability (nm^{-1})");
  g_p->SetMarkerStyle(kFullCircle);
  g_p->SetMarkerColor(kBlack);
  g_p->Draw("AP");

  TCanvas *c_slr = new TCanvas();

  TGraph *g_slr = new TGraph(z.size(), z.data(), slr_rates.data());
  g_slr->SetTitle(";Depth (nm);Model SLR Rate (s^{-1})");
  g_slr->SetMarkerStyle(kFullCircle);
  g_slr->SetMarkerColor(kBlack);
  g_slr->Draw("AP");
  // g_slr->GetYaxis()->SetRangeUser(0, 10);
  
  // logarithmic scale
  // gPad->SetLogx();
  gPad->SetLogy();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  c_slr->Print("toy_depth_model.pdf", "EmbedFonts");

  // use numeric integration!
  // the "summation" approach (which is error-prone) converges to this answer
  // when the number of "bins" becomes large (e.g., ~1000).
  static boost::math::quadrature::tanh_sinh<double> slr_integrator;
  auto slr_integrand = [&](double d) {
    return triumf::srim::pdf::modified_beta(d, alpha, beta, z_max) *
           slr_fcn(d, GLOBAL_R_0, GLOBAL_D_0);
    /*
    slr_rate_z<double>(d, TEMPERATURE, T_C, D_0, XI_0, ELL, LAMBDA_0,
                       EXPONENT, B_0, B_D, NU_C, SLR_C, SLR_N,
                       SURFACE_THICKNESS, SURFACE_RATE);
    */
  };
  double Q = slr_integrator.integrate(slr_integrand, 0.0, z_max);
  std::cout << "weighted_average    = " << weighted_average << "\n";
  std::cout << "numeric_integration = " << Q << "\n";
  double tolerance = std::sqrt(std::numeric_limits<double>::epsilon());
  std::cout << "tolerance           = " << tolerance << "\n";

  DepthAverage<double> da("srim_profile_8li_nb_fitpar.csv");
  // double delta = 0.001;
  std::vector<double> energies =
      triumf::numpy::linspace<double>(da.energy_min(), da.energy_max(), 100);
  std::vector<double> rates;
  std::vector<double> mean_depths;

  auto time_start = std::chrono::steady_clock::now();
  for (auto &e : energies) {
    rates.push_back(da(e));
    mean_depths.push_back(da.z_average(e));
  }
  auto time_stop = std::chrono::steady_clock::now();

  TCanvas *c_r = new TCanvas();

  TGraph *g_r = new TGraph(energies.size(), energies.data(), rates.data());
  g_r->SetMarkerStyle(kFullCircle);
  g_r->SetMarkerColor(kRed);
  g_r->SetTitle(";Energy (keV);Depth averaged SLR rate 1/T_{1} (s^{-1})");

  g_r->Draw("AP");
  // g_r->GetYaxis()->SetRangeUser(0, 10);
  
  // logarithmic scale
  // gPad->SetLogx();
  gPad->SetLogy();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  c_r->Print("toy_depth_average.pdf", "EmbedFonts");

  TCanvas *c_rz = new TCanvas();

  TGraph *g_rz =
      new TGraph(mean_depths.size(), mean_depths.data(), rates.data());
  g_rz->SetMarkerStyle(kFullCircle);
  g_rz->SetMarkerColor(kRed);
  g_rz->SetTitle(";z_{average} (nm);Depth averaged SLR rate 1/T_{1} (s^{-1})");

  g_rz->Draw("AP");
  // g_rz->GetYaxis()->SetRangeUser(0, 10);

  c_rz->Print("toy_depth_average2.pdf", "EmbedFonts");

  std::chrono::duration<double> elapsed_seconds = time_stop - time_start;
  std::cout << "Elapsed time: " << elapsed_seconds.count() << " (s)\n";
}

#ifndef __CLING__
int main() {
  test_depth_averaging();
  return EXIT_SUCCESS;
}
#endif
