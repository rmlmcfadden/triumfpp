#ifndef TRIUMF_SUPERCONDUCTIVITY_NONLOCAL_HPP
#define TRIUMF_SUPERCONDUCTIVITY_NONLOCAL_HPP

#include <cmath>

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/ooura_fourier_integrals.hpp>

#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/london.hpp>
#include <triumf/superconductivity/pippard.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// nonlocal effects on superconductivity in the Meissner-Ochsenfeld state
namespace nonlocal {

//
template <typename T = double>
T B_z_pippard(const T z, const T B_0, const T K) {

  // return the applied field if z isn't below the surface
  if (z <= 0.0) {
    return B_0;
  }

  // integrand for the sine transform
  // using the Kernel for Pippard's model
  auto integrand = [&, K](T q) {
    // need to check if this is a reasaonble cutoff...
    auto kappa = q > 1e-5 ? 1.0
                          : (3.0 / 2.0) * ((1.0 + q * q) * std::atan(q) - q) /
                                (q * q * q);
    return q / (q * q + K * kappa);
  };

  // create the integrator w/ default tolerance and evaluation levels
  // (root_epsilon and eight levels for type double).
  static boost::math::quadrature::ooura_fourier_sin<T> integrator =
      boost::math::quadrature::ooura_fourier_sin<T>();

  // evaluate the integral, which returns a pair
  // (first = integral, second = relative error)
  std::pair<T, T> result = integrator.integrate(integrand, z);

  // return the integral multiplied by the prefactors to get B vs. z
  return boost::math::constants::two_div_pi<T>() * B_0 * result.first;
}

// "extreme anomalous limit"
template <typename T = double>
auto B_z_extreme_anomalous_limit(const T z, const T B_0, const T K) {

  // return the applied field if z isn't below the surface
  if (z <= 0.0) {
    return B_0;
  }

  // integrand for the sine transform
  // using the Kernel for the "extreme anomalous limit"
  auto integrand = [&, K](T q) { return q / (q * q + K / q); };

  // create the integrator w/ default tolerance and evaluation levels
  // (root_epsilon and eight levels for type double).
  static boost::math::quadrature::ooura_fourier_sin<T> integrator =
      boost::math::quadrature::ooura_fourier_sin<T>();

  // evaluate the integral, which returns a pair
  // (first = integral, second = relative error)
  std::pair<T, T> result = integrator.integrate(integrand, z);

  // return the integral multiplied by the prefactors to get B vs. z
  return boost::math::constants::two_div_pi<T>() * B_0 * result.first;
}

// london
template <typename T = double>
auto B_z_london(const T z, const T B_0, const T K) {

  // return the applied field if z isn't below the surface
  if (z <= 0.0) {
    return B_0;
  }

  // integrand for the sine transform
  // using the Kernel for the "extreme anomalous limit"
  auto integrand = [&, K](T q) { return q / (q * q + K); };

  // create the integrator w/ default tolerance and evaluation levels
  // (root_epsilon and eight levels for type double).
  static boost::math::quadrature::ooura_fourier_sin<T> integrator =
      boost::math::quadrature::ooura_fourier_sin<T>();

  // evaluate the integral, which returns a pair
  // (first = integral, second = relative error)
  std::pair<T, T> result = integrator.integrate(integrand, z);

  // return the integral multiplied by the prefactors to get B vs. z
  return boost::math::constants::two_div_pi<T>() * B_0 * result.first;
}

} // namespace nonlocal

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_NONLOCAL_HPP
