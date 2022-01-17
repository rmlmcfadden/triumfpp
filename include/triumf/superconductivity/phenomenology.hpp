#ifndef TRIUMF_SUPERCONDUCTIVITY_PHENOMENOLOGY_HPP
#define TRIUMF_SUPERCONDUCTIVITY_PHENOMENOLOGY_HPP

#include <cmath>

#include <boost/math/constants/constants.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// purely phenomenological relations in superconductivity
namespace phenomenology {

// temperature dependence of the (reduced) penetration depth
template <typename T = double>
T reduced_penetration_depth(T reduced_temperature, T exponent) {
  if (reduced_temperature >= 1.0) {
    return std::numeric_limits<T>::infinity();
  } else if (reduced_temperature <= 0.0) {
    return 1.0;
  } else {
    return 1.0 / std::sqrt(1.0 - std::pow(reduced_temperature, exponent));
  }
}

// temperature dependence of the (reduced) penetration depth
template <typename T = double>
T reduced_penetration_depth(T temperature, T critical_temperature, T exponent) {
  return reduced_penetration_depth<T>(temperature / critical_temperature,
                                      exponent);
}

// temperature dependence of the penetration depth
template <typename T = double>
T penetration_depth(T temperature, T critical_temperature, T exponent,
                    T lambda_0) {
  return lambda_0 * reduced_penetration_depth<T>(
                        temperature, critical_temperature, exponent);
}

// reduced gap
// after Halbritter ca. 1970
template <typename T = double> T reduced_gap(T reduced_temperature) {
  if (reduced_temperature >= 1.0) {
    return 0.0;
  } else if (reduced_temperature <= 0.0) {
    return 1.0;
  } else {
    return std::cos(boost::math::constants::half_pi<T>() *
                    std::pow(reduced_temperature, 2));
  }
}

/// The superconducting transition temperature T_c (K) as a function of applied
/// magnetic field. The calculation assumes a "parabolic" relationship by
/// default (i.e., exponent = 2).
template <typename T = double>
T critical_temperature(T applied_field, T critical_temperature_0,
                       T critical_field, T exponent = 2.0) {
  if (applied_field < 0.0) {
    // don't consider negative fields
    return critical_temperature_0;
  } else if (applied_field > critical_field) {
    // no superconductivity above the critical field
    return 0.0;
  } else {
    // the phenomenological field dependence
    return critical_temperature_0 *
           std::pow(1.0 - (applied_field / critical_field), exponent);
  }
}

} // namespace phenomenology

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_PHENOMENOLOGY_HPP
