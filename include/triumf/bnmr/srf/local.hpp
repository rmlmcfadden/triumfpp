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
#include <triumf/math/pdf.hpp>
#include <triumf/nmr/dipole_dipole.hpp>
#include <triumf/nmr/nuclei.hpp>
#include <triumf/numpy.hpp>
#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/phenomenology.hpp>
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

/// Model SLR rate.
/// The surface "dead layer" has its own distict SLR rate.
template <typename T = double>
T slr_rate_z(T z, T temperature, T critical_temperature, T lambda_0, T exponent,
             T applied_field, T dipole_field, T correlation_rate,
             T slr_constant, T slr_exponent, T surface_thickness,
             T surface_rate) {
  // correct for the field-dependence to the critical temperature
  // https://doi.org/10.1103/PhysRevB.2.3545
  // https://doi.org/10.1016/j.nima.2004.09.003
  // https://doi.org/10.1088/0953-2048/25/6/065014
  constexpr T Nb_B_c2 = 0.425; // T
  T corrected_critical_temperature =
      triumf::superconductivity::phenomenology::critical_temperature<T>(
          applied_field, critical_temperature, Nb_B_c2, 0.5);
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  if (_z_ < 0.0) {
    return surface_rate;
  } else {
    // calculate the local field from the screening profile
    T lambda = triumf::superconductivity::phenomenology::penetration_depth(
        temperature, corrected_critical_temperature, exponent, lambda_0);
    T screened_field = temperature > corrected_critical_temperature
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

/// Model SLR rate.
/// The surface "dead layer" has the same SLR rate as the normal state.
template <typename T = double>
T slr_rate_nss_z(T z, T temperature, T critical_temperature, T lambda_0,
                 T exponent, T applied_field, T dipole_field,
                 T correlation_rate, T slr_constant, T slr_exponent,
                 T surface_thickness) {
  // correct for the field-dependence to the critical temperature
  // https://doi.org/10.1103/PhysRevB.2.3545
  // https://doi.org/10.1016/j.nima.2004.09.003
  // https://doi.org/10.1088/0953-2048/25/6/065014
  constexpr T Nb_B_c2 = 0.425; // T
  T corrected_critical_temperature =
      triumf::superconductivity::phenomenology::critical_temperature<T>(
          applied_field, critical_temperature, Nb_B_c2, 0.5);
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  if (_z_ < 0.0) {
    // calculate the dipole-dipole SLR rate in the normal state
    T dd_rate_surf = triumf::nmr::dipole_dipole::slr_rate<T>(
        applied_field, dipole_field, correlation_rate,
        triumf::bnmr::nuclei::lithium_8<T>::gyromagnetic_ratio(),
        triumf::nmr::nuclei::niobium_93<T>::gyromagnetic_ratio());
    // calculate the SLR rate in the normal state
    T ns_rate_surf = slr_constant * std::pow(temperature, slr_exponent);
    // return the "surface" contribution at shallow depths
    return dd_rate_surf + ns_rate_surf;
  } else {
    // calculate the local field from the screening profile
    T lambda = triumf::superconductivity::phenomenology::penetration_depth(
        temperature, corrected_critical_temperature, exponent, lambda_0);
    T screened_field = temperature > corrected_critical_temperature
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

/// Model SLR rate for a thin film.
/// The surface "dead layer" has its own distict SLR rate.
template <typename T = double>
T slr_rate_film_z(T z, T temperature, T critical_temperature, T lambda_0,
                  T exponent, T applied_field, T dipole_field,
                  T correlation_rate, T slr_constant, T slr_exponent,
                  T surface_thickness, T surface_rate, T film_thickness) {
  // correct for the field-dependence to the critical temperature
  // https://doi.org/10.1103/PhysRevB.2.3545
  // https://doi.org/10.1016/j.nima.2004.09.003
  // https://doi.org/10.1088/0953-2048/25/6/065014
  constexpr T Nb_B_c2 = 0.425; // T
  T corrected_critical_temperature =
      triumf::superconductivity::phenomenology::critical_temperature<T>(
          applied_field, critical_temperature, Nb_B_c2, 0.5);
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  // correct film thickness for the surface layer
  T _d_ = 0.5 * (film_thickness - surface_thickness);
  if (_z_ < 0.0) {
    return surface_rate;
  } else {
    // calculate the local field from the screening profile
    T lambda = triumf::superconductivity::phenomenology::penetration_depth(
        temperature, corrected_critical_temperature, exponent, lambda_0);
    T screened_field = temperature > corrected_critical_temperature
                           ? applied_field
                           : applied_field *
                                 std::cosh((0.5 * _d_ - _z_) / lambda) /
                                 std::cosh(0.5 * _d_ / lambda);
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

/// Model SLR rate for a thin film.
/// The surface "dead layer" has the same SLR rate as the normal state.
template <typename T = double>
T slr_rate_film_nss_z(T z, T temperature, T critical_temperature, T lambda_0,
                      T exponent, T applied_field, T dipole_field,
                      T correlation_rate, T slr_constant, T slr_exponent,
                      T surface_thickness, T film_thickness) {
  // correct for the field-dependence to the critical temperature
  // https://doi.org/10.1103/PhysRevB.2.3545
  // https://doi.org/10.1016/j.nima.2004.09.003
  // https://doi.org/10.1088/0953-2048/25/6/065014
  constexpr T Nb_B_c2 = 0.425; // T
  T corrected_critical_temperature =
      triumf::superconductivity::phenomenology::critical_temperature<T>(
          applied_field, critical_temperature, Nb_B_c2, 0.5);
  // correct depth for the surface layer
  T _z_ = z - surface_thickness;
  // correct film thickness for the surface layer
  T _d_ = 0.5 * (film_thickness - surface_thickness);
  if (_z_ < 0.0) {
    // calculate the dipole-dipole SLR rate in the normal state
    T dd_rate_surf = triumf::nmr::dipole_dipole::slr_rate<T>(
        applied_field, dipole_field, correlation_rate,
        triumf::bnmr::nuclei::lithium_8<T>::gyromagnetic_ratio(),
        triumf::nmr::nuclei::niobium_93<T>::gyromagnetic_ratio());
    // calculate the SLR rate in the normal state
    T ns_rate_surf = slr_constant * std::pow(temperature, slr_exponent);
    // return the "surface" contribution at shallow depths
    return dd_rate_surf + ns_rate_surf;
  } else {
    // calculate the local field from the screening profile
    T lambda = triumf::superconductivity::phenomenology::penetration_depth(
        temperature, corrected_critical_temperature, exponent, lambda_0);
    T screened_field = temperature > corrected_critical_temperature
                           ? applied_field
                           : applied_field *
                                 std::cosh((0.5 * _d_ - _z_) / lambda) /
                                 std::cosh(0.5 * _d_ / lambda);
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

/// Depth-resolved analyzer.
/// For implantation averaging over the SLR model (independent surface rate).
template <typename T = double> class DepthResolvedAnalyzer {
public:
  /// constructor.
  DepthResolvedAnalyzer(const std::string &csv_filename) {
    // read in the data for the stopping profiles
    read_csv_data(csv_filename);

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
  };

  /// Read the CSV data
  void read_csv_data(const std::string &csv_filename) {
    // read the data into a ROOT DataFrame...
    auto df = ROOT::RDF::MakeCsvDataFrame(csv_filename);
    // ...and extract the values
    _energy = df.Take<T>("Energy (keV)").GetValue();
    _alpha_1 = df.Take<T>("alpha_1").GetValue();
    _alpha_1_error = df.Take<T>("alpha_1_error").GetValue();
    _beta_1 = df.Take<T>("beta_1").GetValue();
    _beta_1_error = df.Take<T>("beta_1_error").GetValue();
    _z_max_1 = df.Take<T>("z_max_1").GetValue();
    _z_max_1_error = df.Take<T>("z_max_1_error").GetValue();
    _fraction_1 = df.Take<T>("fraction_1").GetValue();
    _fraction_1_error = df.Take<T>("fraction_1_error").GetValue();
    _alpha_2 = df.Take<T>("alpha_2").GetValue();
    _alpha_2_error = df.Take<T>("alpha_2_error").GetValue();
    _beta_2 = df.Take<T>("beta_2").GetValue();
    _beta_2_error = df.Take<T>("beta_2_error").GetValue();
    _z_max_2 = df.Take<T>("z_max_2").GetValue();
    _z_max_2_error = df.Take<T>("z_max_2_error").GetValue();
  };

  /// Return the the minium energy available for interpolation.
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return the the maximum energy available for interpolation.
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return an interpolated alpha_1 value.
  T alpha_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_1)));
    return alpha_interpolator_1(energy_keV);
  };

  /// Return an interpolated alpha_2 value.
  T alpha_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_2)));
    return alpha_interpolator_2(energy_keV);
  };

  /// Return an interpolated beta_1 value.
  T beta_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_1(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_1)));
    return beta_interpolator_1(energy_keV);
  };

  /// Return an interpolated beta_2 value.
  T beta_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_2(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_2)));
    return beta_interpolator_2(energy_keV);
  };

  /// Return an interpolated z_max_1 value.
  T z_max_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_1)));
    return z_max_interpolator_1(energy_keV);
  };

  /// Return an interpolated z_max_2 value.
  T z_max_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_2)));
    return z_max_interpolator_2(energy_keV);
  };

  /// Return an interpolated fraction_1 value.
  T fraction_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        fraction_interpolator_1(std::move(std::vector<T>(_energy)),
                                std::move(std::vector<T>(_fraction_1)));
    return fraction_interpolator_1(energy_keV);
  };

  /// Return the average implantation depth.
  T z_average(T energy_keV) {
    T a_1 = alpha_1(energy_keV);
    T b_1 = beta_1(energy_keV);
    T zm_1 = z_max_1(energy_keV);
    T f_1 = fraction_1(energy_keV);
    T a_2 = alpha_2(energy_keV);
    T b_2 = beta_2(energy_keV);
    T zm_2 = z_max_2(energy_keV);
    return f_1 * zm_1 * a_1 / (a_1 + b_1) +
           (1.0 - f_1) * zm_2 * a_2 / (a_2 + b_2);
  };

  /// depth-averaging using numeric integration
  T operator()(T energy_keV) {
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      return slr_rate_z<T>(z, temperature, critical_temperature, lambda_0,
                           exponent, applied_field, dipole_field,
                           correlation_rate, slr_constant, slr_exponent,
                           surface_thickness, surface_rate) *
             triumf::math::pdf::two_modified_beta<T>(
                 z, alpha_1(energy_keV), beta_1(energy_keV),
                 z_max_1(energy_keV), fraction_1(energy_keV),
                 alpha_2(energy_keV), beta_2(energy_keV), z_max_2(energy_keV));
    };
    T z_max = std::max(z_max_1(energy_keV), z_max_2(energy_keV));
    T Q = integrator.integrate(integrand, 0.0, z_max);
    return Q;
  };

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
  std::vector<T> _alpha_1;
  std::vector<T> _alpha_1_error;
  std::vector<T> _beta_1;
  std::vector<T> _beta_1_error;
  std::vector<T> _z_max_1;
  std::vector<T> _z_max_1_error;
  std::vector<T> _fraction_1;
  std::vector<T> _fraction_1_error;
  std::vector<T> _alpha_2;
  std::vector<T> _alpha_2_error;
  std::vector<T> _beta_2;
  std::vector<T> _beta_2_error;
  std::vector<T> _z_max_2;
  std::vector<T> _z_max_2_error;
};

/// Depth-resolved analyzer.
/// For implantation averaging over the SLR model (normal state surface rate).
template <typename T = double> class DepthResolvedAnalyzerNSS {
public:
  /// constructor.
  DepthResolvedAnalyzerNSS(const std::string &csv_filename) {
    // read in the data for the stopping profiles
    read_csv_data(csv_filename);

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
  };

  /// Read the CSV data
  void read_csv_data(const std::string &csv_filename) {
    // read the data into a ROOT DataFrame...
    auto df = ROOT::RDF::MakeCsvDataFrame(csv_filename);
    // ...and extract the values
    _energy = df.Take<T>("Energy (keV)").GetValue();
    _alpha_1 = df.Take<T>("alpha_1").GetValue();
    _alpha_1_error = df.Take<T>("alpha_1_error").GetValue();
    _beta_1 = df.Take<T>("beta_1").GetValue();
    _beta_1_error = df.Take<T>("beta_1_error").GetValue();
    _z_max_1 = df.Take<T>("z_max_1").GetValue();
    _z_max_1_error = df.Take<T>("z_max_1_error").GetValue();
    _fraction_1 = df.Take<T>("fraction_1").GetValue();
    _fraction_1_error = df.Take<T>("fraction_1_error").GetValue();
    _alpha_2 = df.Take<T>("alpha_2").GetValue();
    _alpha_2_error = df.Take<T>("alpha_2_error").GetValue();
    _beta_2 = df.Take<T>("beta_2").GetValue();
    _beta_2_error = df.Take<T>("beta_2_error").GetValue();
    _z_max_2 = df.Take<T>("z_max_2").GetValue();
    _z_max_2_error = df.Take<T>("z_max_2_error").GetValue();
  };

  /// Return the the minium energy available for interpolation.
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return the the maximum energy available for interpolation.
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return an interpolated alpha_1 value.
  T alpha_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_1)));
    return alpha_interpolator_1(energy_keV);
  };

  /// Return an interpolated alpha_2 value.
  T alpha_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_2)));
    return alpha_interpolator_2(energy_keV);
  };

  /// Return an interpolated beta_1 value.
  T beta_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_1(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_1)));
    return beta_interpolator_1(energy_keV);
  };

  /// Return an interpolated beta_2 value.
  T beta_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_2(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_2)));
    return beta_interpolator_2(energy_keV);
  };

  /// Return an interpolated z_max_1 value.
  T z_max_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_1)));
    return z_max_interpolator_1(energy_keV);
  };

  /// Return an interpolated z_max_2 value.
  T z_max_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_2)));
    return z_max_interpolator_2(energy_keV);
  };

  /// Return an interpolated fraction_1 value.
  T fraction_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        fraction_interpolator_1(std::move(std::vector<T>(_energy)),
                                std::move(std::vector<T>(_fraction_1)));
    return fraction_interpolator_1(energy_keV);
  };

  /// Return the average implantation depth.
  T z_average(T energy_keV) {
    T a_1 = alpha_1(energy_keV);
    T b_1 = beta_1(energy_keV);
    T zm_1 = z_max_1(energy_keV);
    T f_1 = fraction_1(energy_keV);
    T a_2 = alpha_2(energy_keV);
    T b_2 = beta_2(energy_keV);
    T zm_2 = z_max_2(energy_keV);
    return f_1 * zm_1 * a_1 / (a_1 + b_1) +
           (1.0 - f_1) * zm_2 * a_2 / (a_2 + b_2);
  };

  /// depth-averaging using numeric integration
  T operator()(T energy_keV) {
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      return slr_rate_nss_z<T>(z, temperature, critical_temperature, lambda_0,
                               exponent, applied_field, dipole_field,
                               correlation_rate, slr_constant, slr_exponent,
                               surface_thickness) *
             triumf::math::pdf::two_modified_beta<T>(
                 z, alpha_1(energy_keV), beta_1(energy_keV),
                 z_max_1(energy_keV), fraction_1(energy_keV),
                 alpha_2(energy_keV), beta_2(energy_keV), z_max_2(energy_keV));
    };
    T z_max = std::max(z_max_1(energy_keV), z_max_2(energy_keV));
    T Q = integrator.integrate(integrand, 0.0, z_max);
    return Q;
  };

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
  std::vector<T> _alpha_1;
  std::vector<T> _alpha_1_error;
  std::vector<T> _beta_1;
  std::vector<T> _beta_1_error;
  std::vector<T> _z_max_1;
  std::vector<T> _z_max_1_error;
  std::vector<T> _fraction_1;
  std::vector<T> _fraction_1_error;
  std::vector<T> _alpha_2;
  std::vector<T> _alpha_2_error;
  std::vector<T> _beta_2;
  std::vector<T> _beta_2_error;
  std::vector<T> _z_max_2;
  std::vector<T> _z_max_2_error;
};

/// Depth-resolved analyzer for thin films.
/// For implantation averaging over the SLR model (independent surface rate).
template <typename T = double> class DepthResolvedFilmAnalyzer {
public:
  /// constructor.
  DepthResolvedFilmAnalyzer(const std::string &csv_filename) {
    // read in the data for the stopping profiles
    read_csv_data(csv_filename);

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
    film_thickness = 300.0;
  };

  /// Read the CSV data
  void read_csv_data(const std::string &csv_filename) {
    // read the data into a ROOT DataFrame...
    auto df = ROOT::RDF::MakeCsvDataFrame(csv_filename);
    // ...and extract the values
    _energy = df.Take<T>("Energy (keV)").GetValue();
    _alpha_1 = df.Take<T>("alpha_1").GetValue();
    _alpha_1_error = df.Take<T>("alpha_1_error").GetValue();
    _beta_1 = df.Take<T>("beta_1").GetValue();
    _beta_1_error = df.Take<T>("beta_1_error").GetValue();
    _z_max_1 = df.Take<T>("z_max_1").GetValue();
    _z_max_1_error = df.Take<T>("z_max_1_error").GetValue();
    _fraction_1 = df.Take<T>("fraction_1").GetValue();
    _fraction_1_error = df.Take<T>("fraction_1_error").GetValue();
    _alpha_2 = df.Take<T>("alpha_2").GetValue();
    _alpha_2_error = df.Take<T>("alpha_2_error").GetValue();
    _beta_2 = df.Take<T>("beta_2").GetValue();
    _beta_2_error = df.Take<T>("beta_2_error").GetValue();
    _z_max_2 = df.Take<T>("z_max_2").GetValue();
    _z_max_2_error = df.Take<T>("z_max_2_error").GetValue();
  };

  /// Return the the minium energy available for interpolation.
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return the the maximum energy available for interpolation.
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return an interpolated alpha_1 value.
  T alpha_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_1)));
    return alpha_interpolator_1(energy_keV);
  };

  /// Return an interpolated alpha_2 value.
  T alpha_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_2)));
    return alpha_interpolator_2(energy_keV);
  };

  /// Return an interpolated beta_1 value.
  T beta_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_1(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_1)));
    return beta_interpolator_1(energy_keV);
  };

  /// Return an interpolated beta_2 value.
  T beta_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_2(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_2)));
    return beta_interpolator_2(energy_keV);
  };

  /// Return an interpolated z_max_1 value.
  T z_max_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_1)));
    return z_max_interpolator_1(energy_keV);
  };

  /// Return an interpolated z_max_2 value.
  T z_max_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_2)));
    return z_max_interpolator_2(energy_keV);
  };

  /// Return an interpolated fraction_1 value.
  T fraction_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        fraction_interpolator_1(std::move(std::vector<T>(_energy)),
                                std::move(std::vector<T>(_fraction_1)));
    return fraction_interpolator_1(energy_keV);
  };

  /// Return the average implantation depth.
  T z_average(T energy_keV) {
    T a_1 = alpha_1(energy_keV);
    T b_1 = beta_1(energy_keV);
    T zm_1 = z_max_1(energy_keV);
    T f_1 = fraction_1(energy_keV);
    T a_2 = alpha_2(energy_keV);
    T b_2 = beta_2(energy_keV);
    T zm_2 = z_max_2(energy_keV);
    return f_1 * zm_1 * a_1 / (a_1 + b_1) +
           (1.0 - f_1) * zm_2 * a_2 / (a_2 + b_2);
  };

  /// depth-averaging using numeric integration
  T operator()(T energy_keV) {
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      return slr_rate_film_z<T>(z, temperature, critical_temperature, lambda_0,
                                exponent, applied_field, dipole_field,
                                correlation_rate, slr_constant, slr_exponent,
                                surface_thickness, surface_rate,
                                film_thickness) *
             triumf::math::pdf::two_modified_beta<T>(
                 z, alpha_1(energy_keV), beta_1(energy_keV),
                 z_max_1(energy_keV), fraction_1(energy_keV),
                 alpha_2(energy_keV), beta_2(energy_keV), z_max_2(energy_keV));
    };
    T z_max = std::max(z_max_1(energy_keV), z_max_2(energy_keV));
    T Q = integrator.integrate(integrand, 0.0, z_max);
    return Q;
  };

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
  T film_thickness;

private:
  /// vectors of data from csv file
  std::vector<T> _energy;
  std::vector<T> _alpha_1;
  std::vector<T> _alpha_1_error;
  std::vector<T> _beta_1;
  std::vector<T> _beta_1_error;
  std::vector<T> _z_max_1;
  std::vector<T> _z_max_1_error;
  std::vector<T> _fraction_1;
  std::vector<T> _fraction_1_error;
  std::vector<T> _alpha_2;
  std::vector<T> _alpha_2_error;
  std::vector<T> _beta_2;
  std::vector<T> _beta_2_error;
  std::vector<T> _z_max_2;
  std::vector<T> _z_max_2_error;
};

/// Depth-resolved analyzer for thin films.
/// For implantation averaging over the SLR model (normal state surface rate).
template <typename T = double> class DepthResolvedFilmAnalyzerNSS {
public:
  /// constructor.
  DepthResolvedFilmAnalyzerNSS(const std::string &csv_filename) {
    // read in the data for the stopping profiles
    read_csv_data(csv_filename);

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
    film_thickness = 300.0;
  };

  /// Read the CSV data
  void read_csv_data(const std::string &csv_filename) {
    // read the data into a ROOT DataFrame...
    auto df = ROOT::RDF::MakeCsvDataFrame(csv_filename);
    // ...and extract the values
    _energy = df.Take<T>("Energy (keV)").GetValue();
    _alpha_1 = df.Take<T>("alpha_1").GetValue();
    _alpha_1_error = df.Take<T>("alpha_1_error").GetValue();
    _beta_1 = df.Take<T>("beta_1").GetValue();
    _beta_1_error = df.Take<T>("beta_1_error").GetValue();
    _z_max_1 = df.Take<T>("z_max_1").GetValue();
    _z_max_1_error = df.Take<T>("z_max_1_error").GetValue();
    _fraction_1 = df.Take<T>("fraction_1").GetValue();
    _fraction_1_error = df.Take<T>("fraction_1_error").GetValue();
    _alpha_2 = df.Take<T>("alpha_2").GetValue();
    _alpha_2_error = df.Take<T>("alpha_2_error").GetValue();
    _beta_2 = df.Take<T>("beta_2").GetValue();
    _beta_2_error = df.Take<T>("beta_2_error").GetValue();
    _z_max_2 = df.Take<T>("z_max_2").GetValue();
    _z_max_2_error = df.Take<T>("z_max_2_error").GetValue();
  };

  /// Return the the minium energy available for interpolation.
  T energy_min() {
    return *std::min_element(_energy.begin(), _energy.end()) +
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return the the maximum energy available for interpolation.
  T energy_max() {
    return *std::max_element(_energy.begin(), _energy.end()) -
           std::sqrt(std::numeric_limits<T>::epsilon());
  };

  /// Return an interpolated alpha_1 value.
  T alpha_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_1)));
    return alpha_interpolator_1(energy_keV);
  };

  /// Return an interpolated alpha_2 value.
  T alpha_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        alpha_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_alpha_2)));
    return alpha_interpolator_2(energy_keV);
  };

  /// Return an interpolated beta_1 value.
  T beta_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_1(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_1)));
    return beta_interpolator_1(energy_keV);
  };

  /// Return an interpolated beta_2 value.
  T beta_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        beta_interpolator_2(std::move(std::vector<T>(_energy)),
                            std::move(std::vector<T>(_beta_2)));
    return beta_interpolator_2(energy_keV);
  };

  /// Return an interpolated z_max_1 value.
  T z_max_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_1(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_1)));
    return z_max_interpolator_1(energy_keV);
  };

  /// Return an interpolated z_max_2 value.
  T z_max_2(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        z_max_interpolator_2(std::move(std::vector<T>(_energy)),
                             std::move(std::vector<T>(_z_max_2)));
    return z_max_interpolator_2(energy_keV);
  };

  /// Return an interpolated fraction_1 value.
  T fraction_1(T energy_keV) {
    static boost::math::interpolators::pchip<std::vector<T>>
        fraction_interpolator_1(std::move(std::vector<T>(_energy)),
                                std::move(std::vector<T>(_fraction_1)));
    return fraction_interpolator_1(energy_keV);
  };

  /// Return the average implantation depth.
  T z_average(T energy_keV) {
    T a_1 = alpha_1(energy_keV);
    T b_1 = beta_1(energy_keV);
    T zm_1 = z_max_1(energy_keV);
    T f_1 = fraction_1(energy_keV);
    T a_2 = alpha_2(energy_keV);
    T b_2 = beta_2(energy_keV);
    T zm_2 = z_max_2(energy_keV);
    return f_1 * zm_1 * a_1 / (a_1 + b_1) +
           (1.0 - f_1) * zm_2 * a_2 / (a_2 + b_2);
  };

  /// depth-averaging using numeric integration
  T operator()(T energy_keV) {
    static boost::math::quadrature::tanh_sinh<T> integrator;
    auto integrand = [&](T z) {
      return slr_rate_film_nss_z<T>(
                 z, temperature, critical_temperature, lambda_0, exponent,
                 applied_field, dipole_field, correlation_rate, slr_constant,
                 slr_exponent, surface_thickness, film_thickness) *
             triumf::math::pdf::two_modified_beta<T>(
                 z, alpha_1(energy_keV), beta_1(energy_keV),
                 z_max_1(energy_keV), fraction_1(energy_keV),
                 alpha_2(energy_keV), beta_2(energy_keV), z_max_2(energy_keV));
    };
    T z_max = std::max(z_max_1(energy_keV), z_max_2(energy_keV));
    T Q = integrator.integrate(integrand, 0.0, z_max);
    return Q;
  };

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
  T film_thickness;

private:
  /// vectors of data from csv file
  std::vector<T> _energy;
  std::vector<T> _alpha_1;
  std::vector<T> _alpha_1_error;
  std::vector<T> _beta_1;
  std::vector<T> _beta_1_error;
  std::vector<T> _z_max_1;
  std::vector<T> _z_max_1_error;
  std::vector<T> _fraction_1;
  std::vector<T> _fraction_1_error;
  std::vector<T> _alpha_2;
  std::vector<T> _alpha_2_error;
  std::vector<T> _beta_2;
  std::vector<T> _beta_2_error;
  std::vector<T> _z_max_2;
  std::vector<T> _z_max_2_error;
};

} // namespace local

} // namespace srf

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SRF_LOCAL_HPP
