#ifndef TRIUMF_STATISTICAL_MECHANICS_FERMI_DIRAC_HPP
#define TRIUMF_STATISTICAL_MECHANICS_FERMI_DIRAC_HPP

#include <cmath>

#include <boost/math/constants/constants.hpp>

#include <triumf/constants/codata_2018.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace statistical_mechanics {

// Fermi-Dirac statistics
namespace fermi_dirac {

// chemical potential of a Fermi gas
template <typename T> T chemical_potential(T temperature, T E_0, T E_F) {
  /*
  // Sommerfeld expansion
  constexpr T k_B =
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  T fraction = (k_B * temperature) / E_F;
  return E_0 +
         E_F * (1.0 -
                std::pow(boost::math::constants::pi<T>() * fraction, 2) / 12.0 -
                std::pow(boost::math::constants::pi<T>() * fraction, 4) / 80.0);
  */
  return E_0 + E_F;
}

// Fermi-Dirac distribution
template <typename T> T distribution(T temperature, T energy, T E_0, T E_F) {
  constexpr T k_B =
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  T mu = chemical_potential<T>(temperature, E_0, E_F);
  T arg = (energy - mu) / (k_B * temperature);
  return 1.0 / (std::exp(arg) + 1.0);
}

// Fermi-Dirac function
template <typename T> T function(T temperature, T energy, T E_0, T E_F) {
  T f_E = distribution<T>(temperature, energy, E_0, E_F);
  return f_E * (1.0 - f_E);
}

} // namespace fermi_dirac

} // namespace statistical_mechanics

} // namespace triumf

#endif // TRIUMF_STATISTICAL_MECHANICS_FERMI_DIRAC_HPP
