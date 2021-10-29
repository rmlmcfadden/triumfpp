#ifndef TRIUMF_BNMR_SRF_LOCAL_HPP
#define TRIUMF_BNMR_SRF_LOCAL_HPP

// C++ standard library headers
#include <algorithm>
#include <cmath>
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

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// superconducting radio-frequency (SRF) materials
namespace srf {

// local electrodynamics
namespace local {

/// model slr rate
template <typename T = double>
T slr_rate_z(T z, T temperature, T critical_temperature, T lambda_0, T exponent,
             T applied_field, T dipole_field, T correlation_rate,
             T slr_constant, T slr_exponent, T surface_thickness,
             T surface_rate) {
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  if (_z_ < 0.0) {
    return surface_rate;
  } else {
    // calculate the local field from the screening profile
    T lambda = triumf::superconductivity::phenomenology::penetration_depth(
        temperature, critical_temperature, exponent, lambda_0);
    T screened_field = temperature > critical_temperature
                           ? applied_field
                           : applied_field * std::exp(-1.0 * _z_ / lambda);
    // calculate the dipole-dipole SLR rate in the superconducting state
    T dd_rate = triumf::nmr::dipole_dipole::slr_rate<T>(
        screened_field, dipole_field, correlation_rate,
        triumf::bnmr::nuclei::lithium_8<T>::gyromagnetic_ratio(),
        triumf::nmr::nuclei::niobium_93<T>::gyromagnetic_ratio());
    // calculate the SLR rate in the normal state
    T ns_rate = slr_constant * std::pow(temperature, slr_exponent);
    // return the "surface" contribution at shallow depths
    return dd_rate + ns_rate;
  }
}

/// depth-resolved analyzer
template <typename T = double> class DepthResolvedAnalyzer {
public:
  /// constructor.
  DepthResolvedAnalyzer(const std::string &csv_filename) {
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

    // default initialized values
    temperature = 2.5;
    critical_temperature = 9.25;
    lambda_0 = 40.0;
    exponent = 4.0;
    applied_field = 0.02;
    dipole_field = 1e-5;
    correlation_rate = 1.0 / 23.8e-6;
    slr_constant = 0.75;
    slr_exponent = 1.0;
    surface_thickness = 5.0;
    surface_rate = 10.0;
    //
    n_bins = 201;
  };

  /// Return the the minium energy available for interpolation.
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return the the maximum energy availalbe for interpolation.
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return an interpolated alpha value.
  T alpha(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> alpha_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_alpha)));
    return alpha_interpolator(energy_keV);
  };

  /// Return an interpolated beta value.
  T beta(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> beta_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_beta)));
    return beta_interpolator(energy_keV);
  };

  /// Return an interpolated z_max value.
  T z_max(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>> z_max_interpolator(
        std::move(std::vector<T>(_energy)), std::move(std::vector<T>(_z_max)));
    return z_max_interpolator(energy_keV);
  };

  /// Return the average implantation depth.
  T z_average(T energy_keV) {
    T a = alpha(energy_keV);
    T b = beta(energy_keV);
    T zm = z_max(energy_keV);
    return zm * a / (a + b);
  };

  /// depth-averaging using numeric integration
  T operator()(T energy_keV) {
    // T a = alpha(energy_keV);
    // T b = beta(energy_keV);
    // T zm = z_max(energy_keV);
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      return slr_rate_z<T>(z, temperature, critical_temperature, lambda_0,
                           exponent, applied_field, dipole_field,
                           correlation_rate, slr_constant, slr_exponent,
                           surface_thickness, surface_rate) *
             triumf::srim::pdf::modified_beta<T>(
                 z, alpha(energy_keV), beta(energy_keV), z_max(energy_keV));
    };
    T Q = integrator.integrate(integrand, 0.0, z_max(energy_keV));
    return Q;
  };

  /*
  // depth-averaging using "histogram" summation
  T operator()(T energy_keV) {
    // bin edges
    std::vector<T> z_edge =
        triumf::numpy::linspace<T>(0.0, z_max(energy_keV), n_bins);
    // bin widths - adjust ranges by one for "correct" size
    std::vector<T> dz(n_bins - 1);
    std::adjacent_difference(std::begin(z_edge) + 1, std::end(z_edge),
                             std::begin(dz));
    // bin centres
    std::vector<T> z(n_bins - 1);
    // probabilities
    std::vector<T> p_z(n_bins - 1);
    std::vector<T> weights(n_bins - 1);
    std::vector<T> slr_rates(n_bins - 1);

    for (std::size_t i = 0; i < z.size(); ++i) {
      z.at(i) = z_edge.at(i) + 0.5 * dz.at(i);
      p_z.at(i) = triumf::srim::pdf::modified_beta<T>(
          z.at(i), alpha(energy_keV), beta(energy_keV), z_max(energy_keV));
      // std::cout << "p(" << z.at(i) << " nm ) = " << p_z.at(i) << " nm^-1\n";
      weights.at(i) = dz.at(i) * p_z.at(i);
      slr_rates.at(i) = slr_rate_z<T>(
          z.at(i), temperature, critical_temperature, lambda_0, exponent,
          applied_field, dipole_field, correlation_rate, slr_constant,
          slr_exponent, surface_thickness, surface_rate);
    }

    T sum_weights = std::reduce(std::begin(weights), std::end(weights), 0.0);
    // std::cout << "sum_weights = " << sum_weights << "\n";
    T sum_weights_slr = std::transform_reduce(
        std::begin(weights), std::end(weights), std::begin(slr_rates), 0.0);
    // std::cout << "sum_weights_slr = " << sum_weights_slr << "\n";
    T weighted_average = sum_weights_slr / sum_weights;
    return weighted_average;
  };
  */

  /// model parameters
  T temperature;
  T critical_temperature;
  T lambda_0;
  T exponent;
  T applied_field;
  T dipole_field;
  T correlation_rate;
  T slr_constant;
  T slr_exponent;
  T surface_thickness;
  T surface_rate;
  T electron_phonon_coupling;

private:
  /// vectors of data from csv file
  std::vector<T> _energy;
  std::vector<T> _alpha;
  std::vector<T> _alpha_error;
  std::vector<T> _beta;
  std::vector<T> _beta_error;
  std::vector<T> _z_max;
  std::vector<T> _z_max_error;
  /// number of bins + 1 used in the "histogram" summation
  std::size_t n_bins;
};

} // namespace local

} // namespace srf

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SRF_LOCAL_HPP
