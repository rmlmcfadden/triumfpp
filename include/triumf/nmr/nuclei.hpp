#ifndef TRIUMF_NMR_NUCLEI_HPP
#define TRIUMF_NMR_NUCLEI_HPP

#include <boost/math/constants/constants.hpp>

#include <triumf/nmr/utilities.hpp>

// TRIUMF: Canada's particle accerlator centre
namespace triumf {

// nuclear magnetic resonance (NMR)
namespace nmr {

// NMR probe nuclei and their properties
namespace nuclei {

// niobium-93
template <typename T = double> struct niobium_93 {
  // radioactive half-life (s)
  static inline constexpr T half_life() {
    return std::numeric_limits<T>::infinity();
  }
  // radioactive lifetime (s)
  static inline constexpr T lifetime() {
    return half_life() / boost::math::constants::ln_two<T>();
  }
  // spin quantum number
  static inline constexpr T spin() { return 9.0 / 2.0; }
  // magnetic dipole moment (nm)
  static inline constexpr T magnetic_dipole_moment() { return 6.163; }
  // electric dipole moment (b)
  static inline constexpr T electric_quadrupole_moment() { return -0.32; }
  // gyromagnetic ratio (s^-1 T^-1)
  static inline constexpr T gyromagnetic_ratio() {
    return triumf::nmr::utilities::calculate_gamma<T>(magnetic_dipole_moment(),
                                                      spin());
  }
  // gyromagnetic ratio (MHz / T)
  static inline constexpr T gyromagnetic_ratio_in_MHz_T() {
    return gyromagnetic_ratio() / 1e6 / boost::math::constants::two_pi<T>();
  }
};

} // namespace nuclei

} // namespace nmr

} // namespace triumf

#endif // TRIUMF_NMR_NUCLEI_HPP
