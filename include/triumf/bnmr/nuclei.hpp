#ifndef TRIUMF_BNMR_NUCLEI_HPP
#define TRIUMF_BNMR_NUCLEI_HPP

#include <boost/math/constants/constants.hpp>

#include <triumf/nmr/utilities.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// β-NMR probe nuclei and their properties
namespace nuclei {

// lithium-8
template <typename T = double> struct lithium_8 {
  // radioactive half-life (s)
  static inline constexpr T half_life() { return 1e-3 * 838.40; }
  // radioactive lifetime (s)
  static inline constexpr T lifetime() {
    return half_life() / boost::math::constants::ln_two<T>();
  }
  // spin quantum number
  static inline constexpr T spin() { return 2.0; }
  // magnetic dipole moment (nm)
  static inline constexpr T magnetic_dipole_moment() { return 1.65350; }
  // electric dipole moment (b)
  static inline constexpr T electric_quadrupole_moment() { return 0.0326; }
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

// beryllium-11
template <typename T = double> struct beryllium_11 {
  // radioactive half-life (s)
  static inline constexpr T half_life() { return 13.76; }
  // radioactive lifetime (s)
  static inline constexpr T lifetime() {
    return half_life() / boost::math::constants::ln_two<T>();
  }
  // spin quantum number
  static inline constexpr T spin() { return 1.0 / 2.0; }
  // magnetic dipole moment (nm)
  static inline constexpr T magnetic_dipole_moment() { return -1.6816; }
  // electric dipole moment (b)
  static inline constexpr T electric_quadrupole_moment() { return 0.0; }
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

// boron-12
template <typename T = double> struct boron_12 {
  // radioactive half-life (s)
  static inline constexpr T half_life() { return 1e-3 * 20.20; }
  // radioactive lifetime (s)
  static inline constexpr T lifetime() {
    return half_life() / boost::math::constants::ln_two<T>();
  }
  // spin quantum number
  static inline constexpr T spin() { return 1.0; }
  // magnetic dipole moment (nm)
  static inline constexpr T magnetic_dipole_moment() { return 1.003; }
  // electric dipole moment (b)
  static inline constexpr T electric_quadrupole_moment() { return 0.0132; }
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

// magnesium-31
template <typename T = double> struct magnesium_31 {
  // radioactive half-life (s)
  static inline constexpr T half_life() { return 1e-3 * 236.0; }
  // radioactive lifetime (s)
  static inline constexpr T lifetime() {
    return half_life() / boost::math::constants::ln_two<T>();
  }
  // spin quantum number
  static inline constexpr T spin() { return 1.0 / 2.0; }
  // magnetic dipole moment (nm)
  static inline constexpr T magnetic_dipole_moment() { return -0.88340; }
  // electric dipole moment (b)
  static inline constexpr T electric_quadrupole_moment() { return 0.0; }
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

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_NUCLEI_HPP
