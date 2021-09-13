#ifndef TRIUMF_NMR_HEBEL_SLICHTER_HPP
#define TRIUMF_NMR_HEBEL_SLICHTER_HPP

#include <cmath>
#include <complex>

#include <boost/math/quadrature/exp_sinh.hpp>
#include <boost/math/quadrature/gauss_kronrod.hpp>

#include <triumf/constants/codata_2018.hpp>
#include <triumf/statistical_mechanics/fermi_dirac.hpp>
#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/dynes.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// Nuclear Magnetic Resonance (NMR)
namespace nmr {

// Hebel-Slichter
namespace hebel_slichter {

template <typename T = double>
T integrand(T energy, T temperature, T critical_temperature, T gap_meV, T alpha,
            T Gamma) {
  // alias some values
  T Delta = triumf::superconductivity::bcs::gap<T>(
      temperature, critical_temperature, gap_meV);
  constexpr T E_0 = 0.0;
  constexpr T E_F = 0.0;
  //
  T E = energy;
  T E_p = E + alpha * gap_meV;

  // calculate the Fermi factors
  // Note: 1e-3 used to convert energyies from meV to eV
  T f_E = triumf::statistical_mechanics::fermi_dirac::distribution<T>(
      temperature, E * 1e-3, E_0, E_F);
  T f_E_p = triumf::statistical_mechanics::fermi_dirac::distribution<T>(
      temperature, E_p * 1e-3, E_0, E_F);

  //
  return (triumf::superconductivity::dynes::N(E, Gamma * gap_meV, Delta) *
              triumf::superconductivity::dynes::N(E_p, Gamma * gap_meV, Delta) +
          triumf::superconductivity::dynes::M(E, Gamma * gap_meV, Delta) *
              triumf::superconductivity::dynes::M(E_p, Gamma * gap_meV,
                                                  Delta)) *
         f_E * (1.0 - f_E_p);
}

// ratio of SLR rates in the superconducting and normal states
template <typename T = double>
T slr_ratio(T temperature, T critical_temperature, T gap_meV, T alpha,
            T Gamma) {
  // define some convenience values
  T reduced_temperature = temperature / critical_temperature;
  constexpr T k_B =
      1e3 *
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  T beta = 1.0 / (k_B * temperature);
  // return limiting values...
  // if (temperature >= critical_temperature) {
  //   return 1.0;
  // } else if (temperature <= 0.0) {
  //  return 0.0;
  if (temperature <= 0.0) {
    return 0.0;
    // ...before attempting to evaluate the intergral!
  } else {
    // define the integrand
    auto hs_integrand = [&](T E) -> T {
      return integrand<T>(E, temperature, critical_temperature, gap_meV, alpha,
                          Gamma);
    };
    // setup values for numeric integration
    // const T tolerance = std::numeric_limits<T>::epsilon();
    // const T tolerance = std::pow(std::numeric_limits<T>::epsilon(), 2.0
    // / 3.0);
    const T tolerance = std::sqrt(std::numeric_limits<T>::epsilon());

    const std::size_t max_refinements = 15;
    static boost::math::quadrature::exp_sinh<T> hs_integrator(max_refinements);
    return 2.0 * beta *
           hs_integrator.integrate(hs_integrand, tolerance, nullptr, nullptr,
                                   nullptr);
    /*
    const unsigned max_depth = 15;
    return 2.0 * beta *
           boost::math::quadrature::gauss_kronrod<T, 61>::integrate(
               hs_integrand, 0.0, std::numeric_limits<T>::infinity(), max_depth,
               tolerance, nullptr, nullptr);
    */
  }
}

} // namespace hebel_slichter

} // namespace nmr

} // namespace triumf

#endif // TRIUMF_NMR_HEBEL_SLICHTER_HPP
