#ifndef TRIUMF_SUPERCONDUCTIVITY_BCS_HPP
#define TRIUMF_SUPERCONDUCTIVITY_BCS_HPP

#include <cmath>
#include <limits>
#include <tuple>

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/ooura_fourier_integrals.hpp>
#include <boost/math/tools/roots.hpp>

#include <triumf/constants/codata_2018.hpp>
#include <triumf/superconductivity/phenomenology.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// Bardeen-Cooper-Schrieffer (BCS) theory of superconductivity
namespace bcs {

/// Find the reduced gap Delta(t) for a given reduced temperature x = T / T_c.
template <typename T = double> T reduced_gap_solver(T x) {
  // Use 1 as the initial guess for the Delta(t).
  // This ensures that the first "root" is found as Delta(t) -> 0.0,
  // otherwise the wrong solution is found when t >= 0.9.
  T guess = 1.0;
  // T guess = std::cos(boost::math::constants::half_pi<T>() * std::pow(x, 2));

  // Bound the possible values for the gap.
  // The adjustments by machine epsilon needed for "exact" results!?
  T min = 0.0 - std::numeric_limits<T>::epsilon();
  T max = 1.0 + std::numeric_limits<T>::epsilon();

  // Maximum possible binary digits accuracy for type T.
  const int digits = std::numeric_limits<T>::digits;

  // Digits used to control how accurate to try to make the result.
  // Accuracy triples with each step, so stop when just over one third of the
  // digits are correct.
  int get_digits = static_cast<int>(0.4 * digits);

  // Limit the number of iterations taken to find the "root" of the expression.
  // boost::uintmax_t max_iterations = 20;
  boost::uintmax_t max_iterations =
      std::numeric_limits<boost::uintmax_t>::max();

  // Return the "root" of Thouless' Eqn. using both its 1st and 2nd derivatives.
  T result = boost::math::tools::halley_iterate(
      [x](const T &delta) {
        // Return a tuple containing: f(delta), f'(delta), and  f''(delta).
        T f = std::tanh(delta / x) - delta;
        T df_dx = 1.0 / (x * std::pow(std::cosh(delta / x), 2)) - 1.0;
        T df2_dx2 =
            -2.0 * std::tanh(delta / x) / std::pow(x * std::cosh(delta / x), 2);
        return std::make_tuple(f, df_dx, df2_dx2);
      },
      guess, min, max, get_digits, max_iterations);
  //
  return result;
}

/// temperature dependence of the (reduced) energy gap
template <typename T = double> T reduced_gap(T reduced_temperature) {
  if (reduced_temperature >= 1.0) {
    return 0.0;
  } else if (reduced_temperature <= 0.0) {
    return 1.0;
  } else {
    return reduced_gap_solver<T>(reduced_temperature);
  }
}

/// temperature dependence of the (reduced) energy gap
template <typename T = double>
T reduced_gap(T temperature, T critical_temperature) {
  T reduced_temperature = temperature / critical_temperature;
  return reduced_gap<T>(reduced_temperature);
}

/// temperature dependence of the energy gap
template <typename T = double>
T gap(T temperature, T critical_temperature, T gap_meV) {
  return gap_meV * reduced_gap<T>(temperature, critical_temperature);
}

/// energy gap at absolute zero
template <typename T = double> T gap_meV(T critical_temperature) {
  // Boltzmann constant (meV / K)
  constexpr T k_B_meV_per_K =
      1e3 *
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  //
  return boost::math::constants::pi<T>() *
         std::exp(-boost::math::constants::euler<T>()) * k_B_meV_per_K *
         critical_temperature;
}

// energy gap ratio (at absolute zero)
template <typename T = double> T gap_ratio(T critical_temperature, T gap_meV) {
  // Boltzmann constant (meV / K)
  constexpr T k_B_meV_per_K =
      1e3 *
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  //
  return (2.0 * gap_meV) / (k_B_meV_per_K * critical_temperature);
}

/// helper function for BCS Kernel
template <typename T = double>
T a(T temperature, T critical_temperature, T gap_meV) {
  return boost::math::constants::pi<T>() * 1e3 *
         triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<
             T>::value() *
         temperature / gap<T>(temperature, critical_temperature, gap_meV);
}

/// helper function for BCS Kernel
template <typename T = double>
T f(T temperature, T critical_temperature, T gap_meV, T n) {
  return std::sqrt(1.0 +
                   std::pow(a<T>(temperature, critical_temperature, gap_meV) *
                                (2.0 * n + 1.0),
                            2));
}

/// temperature dependence of the BCS coherence length (helper function)
template <typename T = double>
T coherence_length(T temperature, T critical_temperature, T gap_meV, T xi_0,
                   T mean_free_path, T n) {
  T fraction_1 = boost::math::constants::two_div_pi<T>() *
                 f<T>(temperature, critical_temperature, gap_meV, n) *
                 reduced_gap<T>(temperature, critical_temperature) / xi_0;
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

/// helper function for BCS Kernel
template <typename T = double>
T Lambda(T temperature, T critical_temperature, T gap_meV, T xi_0,
         T mean_free_path, T lambda_0, T exponent, T n) {
  return std::pow(
             lambda_0,
             // triumf::superconductivity::phenomenology::penetration_depth<T>(
             //    temperature, critical_temperature, exponent, lambda_0),
             2) *
         std::pow(f<T>(temperature, critical_temperature, gap_meV, n), 3) *
         (1.0 + coherence_length<T>(temperature, critical_temperature, gap_meV,
                                    xi_0, mean_free_path, n) /
                    mean_free_path) /
         (2.0 * a<T>(temperature, critical_temperature, gap_meV));
}

/// helper function for the BCS Kernel
template <typename T = double> T g(T x) {
  // return correct result when x ~ 0.
  if (x < 1.0e-4) {
    return 1.0;
  } else {
    return (3.0 / 2.0) * ((1.0 + x * x) * std::atan(x) - x) / (x * x * x);
  }
}

/// BCS Kernel
template <typename T = double>
T kernel(T q, T temperature, T critical_temperature, T gap_meV, T xi_0,
         T mean_free_path, T lambda_0, T exponent) {
  //
  T sum = 0.0;
  T change = 0.0;
  // const T precision = std::sqrt(std::numeric_limits<T>::epsilon());
  const T precision = std::numeric_limits<T>::epsilon();
  const T max_iterations = 100;
  T n = 0.0;
  do {
    //
    T x = q * coherence_length<T>(temperature, critical_temperature, gap_meV,
                                  xi_0, mean_free_path, n);
    //
    change = g<T>(x) / Lambda<T>(temperature, critical_temperature, gap_meV,
                                 xi_0, mean_free_path, lambda_0, exponent, n);
    //
    sum += change;
    n += 1.0;
  } while ((std::abs(change) > precision) and (n < max_iterations));
  //
  return sum;
}

/// (reduced) BCS Kernel
template <typename T = double>
T reduced_kernel(T q, T temperature, T critical_temperature, T gap_meV, T xi_0,
                 T mean_free_path, T lambda_0, T exponent) {
  return kernel<T>(q, temperature, critical_temperature, gap_meV, xi_0,
                   mean_free_path, lambda_0, exponent) /
         kernel<T>(0.0, temperature, critical_temperature, gap_meV, xi_0,
                   mean_free_path, lambda_0, exponent);
}

/// BCS magnetic penetration depth
template <typename T = double>
T penetration_depth(T temperature, T critical_temperature, T gap_meV, T xi_0,
                    T mean_free_path, T lambda_0, T exponent) {
  T K_0 = kernel<T>(0.0, temperature, critical_temperature, gap_meV, xi_0,
                    mean_free_path, lambda_0, exponent);
  return std::sqrt(1.0 / K_0);
}

/// (reduced) BCS magnetic field penetration profile
template <typename T = double>
T reduced_field_penetration(T z, T temperature, T critical_temperature,
                            T gap_meV, T xi_0, T mean_free_path, T lambda_0,
                            T exponent) {
  //
  if (z <= 0.0) {
    return 1.0;
  } else {
    //
    auto bcs_integrand = [&](T q) -> T {
      T K = kernel<T>(q, temperature, critical_temperature, gap_meV, xi_0,
                      mean_free_path, lambda_0, exponent);
      return q / (q * q + K);
    };
    // create the integrator w/ default tolerance and evaluation levels
    // (root_epsilon and eight levels for type double).
    static boost::math::quadrature::ooura_fourier_sin<T> bcs_integrator =
        boost::math::quadrature::ooura_fourier_sin<T>();
    // evaluate the integral, which returns a pair
    // (first = integral, second = relative error)
    std::pair<T, T> result = bcs_integrator.integrate(bcs_integrand, z);
    // return the integral multiplied by the prefactors to get B vs. z
    return boost::math::constants::two_div_pi<T>() * result.first;
  }
}

/// BCS magnetic field penetration proifile
template <typename T = double>
T field_penetration(T z, T temperature, T critical_temperature, T gap_meV,
                    T xi_0, T mean_free_path, T lambda_0, T exponent,
                    T applied_field) {
  return applied_field * reduced_field_penetration<T>(
                             z, temperature, critical_temperature, gap_meV,
                             xi_0, mean_free_path, lambda_0, exponent);
}

} // namespace bcs

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_BCS_HPP
