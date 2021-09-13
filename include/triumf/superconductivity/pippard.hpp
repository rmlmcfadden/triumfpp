#ifndef TRIUMF_SUPERCONDUCTIVITY_PIPPARD_HPP
#define TRIUMF_SUPERCONDUCTIVITY_PIPPARD_HPP

#include <cmath>

// #include <boost/multiprecision/cpp_dec_float.hpp>

#include <triumf/constants/codata_2018.hpp>
#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/phenomenology.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// Pippard's phenomenological theory of superconductivity
namespace pippard {

///
template <typename T = double>
T J_0(T temperature, T critical_temperature, T gap_meV, T exponent) {
  // Boltzmann constant (meV / K)
  constexpr T k_B_meV_per_K =
      1e3 *
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  //
  // T reduced_temperature = temperature / critical_temperature;
  //
  return std::pow(phenomenology::reduced_penetration_depth<T>(
                      temperature, critical_temperature, exponent),
                  2) *
         bcs::reduced_gap<T>(temperature, critical_temperature) *
         std::tanh(bcs::gap<T>(temperature, critical_temperature, gap_meV) /
                   (2.0 * k_B_meV_per_K * temperature));
}

/// temperature dependence of the Pippard coherence length,
/// "borrowed" from BCS theory
template <typename T = double>
T coherence_length(T temperature, T critical_temperature, T gap_meV, T exponent,
                   T xi_0, T mean_free_path) {
  T fraction_1 =
      J_0<T>(temperature, critical_temperature, gap_meV, exponent) / xi_0;
  T fraction_2 = 1.0 / mean_free_path;
  T fraction = fraction_1 + fraction_2;
  // handle a some edge cases for very big/small args
  if (std::isinf(fraction)) {
    return 0.0;
  } else if (fraction == 0.0) {
    return std::numeric_limits<T>::infinity();
  } else {
    return 1.0 / fraction;
  }
}

/// temperature dependence of the (reduced) Pippard coherence length,
/// "borrowed" from BCS theory
template <typename T = double>
T reduced_coherence_length(T temperature, T critical_temperature, T gap_meV,
                           T exponent, T xi_0, T mean_free_path) {
  return coherence_length<T>(temperature, critical_temperature, gap_meV,
                             exponent, xi_0, mean_free_path) /
         coherence_length<T>(0.0, critical_temperature, gap_meV, exponent, xi_0,
                             mean_free_path);
}

/// helper function for the Pippard Kernel
template <typename T = double> T g(T x) {
  /*
  boost::multiprecision::cpp_dec_float_100 value =
      (3.0 / 2.0) * ((1.0 + x * x) * std::atan(x) - x) / (x * x * x);
  return value;
  */
  // return correct result when x ~ 0.
  if (x < 1.0e-4) {
    return 1.0;
  } else {
    return (3.0 / 2.0) * ((1.0 + x * x) * std::atan(x) - x) / (x * x * x);
  }
}

/// Pippard Kernel
template <typename T = double>
T kernel(T q, T temperature, T critical_temperature, T gap_meV, T xi_0,
         T mean_free_path, T lambda_0, T exponent) {
  T x = q * coherence_length<T>(temperature, critical_temperature, gap_meV,
                                exponent, xi_0, mean_free_path);
  return std::pow(phenomenology::penetration_depth<T>(
                      temperature, critical_temperature, exponent, lambda_0),
                  -2) *
         reduced_coherence_length<T>(temperature, critical_temperature, gap_meV,
                                     exponent, xi_0, mean_free_path) *
         g<T>(x);
}

/// (reduced) Pippard Kernel
template <typename T = double>
T reduced_kernel(T q, T temperature, T critical_temperature, T gap_meV, T xi_0,
                 T mean_free_path, T lambda_0, T exponent) {
  return kernel<T>(q, temperature, critical_temperature, gap_meV, xi_0,
                   mean_free_path, lambda_0, exponent) /
         kernel<T>(0.0, temperature, critical_temperature, gap_meV, xi_0,
                   mean_free_path, lambda_0, exponent);
}

/// (reduced) magnetic field penetration proifile
template <typename T = double>
T reduced_field_penetration(T z, T temperature, T critical_temperature,
                            T gap_meV, T xi_0, T mean_free_path, T lambda_0,
                            T exponent) {
  //
  if (z <= 0.0) {
    return 1.0;
  } else {
    //
    auto pippard_integrand = [&](T q) -> T {
      T K = kernel<T>(q, temperature, critical_temperature, gap_meV, xi_0,
                      mean_free_path, lambda_0, exponent);
      return q / (q * q + K);
    };
    // create the integrator w/ specific tolerance and evaluation levels
    // (defaults: root_epsilon and eight levels for type double).
    // static T tolerance = std::sqrt(std::numeric_limits<T>::epsilon());
    static T tolerance = std::cbrt(std::numeric_limits<T>::epsilon());
    std::size_t levels = sizeof(T);
    static boost::math::quadrature::ooura_fourier_sin<T> pippard_integrator =
        boost::math::quadrature::ooura_fourier_sin<T>(tolerance, levels);
    // evaluate the integral, which returns a pair
    // (first = integral, second = relative error)
    std::pair<T, T> result = pippard_integrator.integrate(pippard_integrand, z);
    // return the integral multiplied by the prefactors to get B vs. z
    return boost::math::constants::two_div_pi<T>() * result.first;
  }
}

/// magnetic field penetration proifile
template <typename T = double>
T field_penetration(T z, T temperature, T critical_temperature, T gap_meV,
                    T xi_0, T mean_free_path, T lambda_0, T exponent,
                    T applied_field) {
  return applied_field * reduced_field_penetration<T>(
                             z, temperature, critical_temperature, gap_meV,
                             xi_0, mean_free_path, lambda_0, exponent);
}

} // namespace pippard

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_PIPPARD_HPP
