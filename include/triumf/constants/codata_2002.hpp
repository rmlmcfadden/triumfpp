#ifndef TRIUMF_CONSTANTS_CODATA_2002_HPP
#define TRIUMF_CONSTANTS_CODATA_2002_HPP

#include <cmath>
#include <type_traits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace constants {

// Committee on Data (CODATA) of the International Science Council (ISC)
// recommended values of fundamental physical constants: 2002
// https://physics.nist.gov/cuu/Constants/
// https://physics.nist.gov/cuu/Constants/Table/allascii.txt
namespace codata_2002 {

/// \brief CODATA recommended value for the Wien displacement law constant
/// (2002). \details Wien displacement law constant = (0.0028977685 ± 5.1e-09) m
/// K.
template <typename T> struct Wien_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0028977685 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = Wien_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0028977685); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-09 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// Wien_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7599749600425294e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = Wien_displacement_law_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-09) / static_cast<T>(0.0028977685));
  }
};

/// \brief CODATA recommended value for the atomic unit of 1st
/// hyperpolarizablity (2002). \details atomic unit of 1st hyperpolarizablity =
/// (3.20636151e-53 ± 2.8e-60) C^3 m^3 J^-2.
template <typename T> struct atomic_unit_of_1st_hyperpolarizablity {
  /// \brief Returns the constant's value.
  /// \details value = 3.20636151e-53 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_1st_hyperpolarizablity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.20636151e-53); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-60 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_1st_hyperpolarizablity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-60); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.732639757767054e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// atomic_unit_of_1st_hyperpolarizablity<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-60) / static_cast<T>(3.20636151e-53));
  }
};

/// \brief CODATA recommended value for the atomic unit of 2nd
/// hyperpolarizablity (2002). \details atomic unit of 2nd hyperpolarizablity =
/// (6.2353808e-65 ± 1.1e-71) C^4 m^4 J^-3.
template <typename T> struct atomic_unit_of_2nd_hyperpolarizablity {
  /// \brief Returns the constant's value.
  /// \details value = 6.2353808e-65 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_2nd_hyperpolarizablity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.2353808e-65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-71 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_2nd_hyperpolarizablity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-71); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.764126418710466e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// atomic_unit_of_2nd_hyperpolarizablity<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-71) / static_cast<T>(6.2353808e-65));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric dipole
/// moment (2002). \details atomic unit of electric dipole moment =
/// (8.47835309e-30 ± 7.3e-37) C m.
template <typename T> struct atomic_unit_of_electric_dipole_moment {
  /// \brief Returns the constant's value.
  /// \details value = 8.47835309e-30 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_electric_dipole_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.47835309e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-37 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_electric_dipole_moment<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.610162755087614e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// atomic_unit_of_electric_dipole_moment<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-37) / static_cast<T>(8.47835309e-30));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric
/// polarizablity (2002). \details atomic unit of electric polarizablity =
/// (1.648777274e-41 ± 1.6e-49) C^2 m^2 J^-1.
template <typename T> struct atomic_unit_of_electric_polarizablity {
  /// \brief Returns the constant's value.
  /// \details value = 1.648777274e-41 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_electric_polarizablity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.648777274e-41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-49 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_electric_polarizablity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-49); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.704160927196283e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// atomic_unit_of_electric_polarizablity<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-49) / static_cast<T>(1.648777274e-41));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric quadrupole
/// moment (2002). \details atomic unit of electric quadrupole moment =
/// (4.48655124e-40 ± 3.9e-47) C m^2.
template <typename T> struct atomic_unit_of_electric_quadrupole_moment {
  /// \brief Returns the constant's value.
  /// \details value = 4.48655124e-40 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_electric_quadrupole_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.48655124e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-47 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_electric_quadrupole_moment<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-47); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.692645623278339e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// atomic_unit_of_electric_quadrupole_moment<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-47) / static_cast<T>(4.48655124e-40));
  }
};

/// \brief CODATA recommended value for the atomic unit of magn. dipole moment
/// (2002). \details atomic unit of magn. dipole moment = (1.8548019e-23
/// ± 1.6e-30) J T^-1.
template <typename T> struct atomic_unit_of_magn_dipole_moment {
  /// \brief Returns the constant's value.
  /// \details value = 1.8548019e-23 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_magn_dipole_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.8548019e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-30 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_magn_dipole_moment<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.626258146489931e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = atomic_unit_of_magn_dipole_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-30) / static_cast<T>(1.8548019e-23));
  }
};

/// \brief CODATA recommended value for the atomic unit of magn. flux density
/// (2002). \details atomic unit of magn. flux density = (235051.742 ± 0.02) T.
template <typename T> struct atomic_unit_of_magn_flux_density {
  /// \brief Returns the constant's value.
  /// \details value = 235051.742 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = atomic_unit_of_magn_flux_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(235051.742); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.02 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// atomic_unit_of_magn_flux_density<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.02); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.508764848890165e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = atomic_unit_of_magn_flux_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.02) / static_cast<T>(235051.742));
  }
};

/// \brief CODATA recommended value for the deuteron magn. moment (2002).
/// \details deuteron magn. moment = (4.33073482e-27 ± 3.8e-34) J T^-1.
template <typename T> struct deuteron_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = 4.33073482e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = deuteron_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.33073482e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = deuteron_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.774492454377523e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = deuteron_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-34) / static_cast<T>(4.33073482e-27));
  }
};

/// \brief CODATA recommended value for the deuteron magn. moment to Bohr
/// magneton ratio (2002). \details deuteron magn. moment to Bohr magneton ratio
/// = (0.0004669754567 ± 5e-12) .
template <typename T> struct deuteron_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0004669754567 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// deuteron_magn_moment_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.0004669754567); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// deuteron_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0707200835208262e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// deuteron_magn_moment_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-12) / static_cast<T>(0.0004669754567));
  }
};

/// \brief CODATA recommended value for the deuteron magn. moment to nuclear
/// magneton ratio (2002). \details deuteron magn. moment to nuclear magneton
/// ratio = (0.8574382329 ± 9.2e-09) .
template <typename T> struct deuteron_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382329 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// deuteron_magn_moment_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382329); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// deuteron_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.072963584663592e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// deuteron_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.2e-09) / static_cast<T>(0.8574382329));
  }
};

/// \brief CODATA recommended value for the deuteron-electron magn. moment ratio
/// (2002). \details deuteron-electron magn. moment ratio = (-0.0004664345548 ±
/// 5e-12) .
template <typename T> struct deuteron_electron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.0004664345548 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = deuteron_electron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.0004664345548); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// deuteron_electron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0719617465185278e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// deuteron_electron_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-12) / static_cast<T>(-0.0004664345548));
  }
};

/// \brief CODATA recommended value for the deuteron-proton magn. moment ratio
/// (2002). \details deuteron-proton magn. moment ratio = (0.3070122084
/// ± 4.5e-09) .
template <typename T> struct deuteron_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.3070122084 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = deuteron_proton_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.3070122084); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// deuteron_proton_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4657397578590884e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = deuteron_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-09) / static_cast<T>(0.3070122084));
  }
};

/// \brief CODATA recommended value for the deuteron-neutron magn. moment ratio
/// (2002). \details deuteron-neutron magn. moment ratio = (-0.44820652
/// ± 1.1e-07) .
template <typename T> struct deuteron_neutron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.44820652 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = deuteron_neutron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.44820652); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// deuteron_neutron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4542257885940616e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// deuteron_neutron_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-0.44820652));
  }
};

/// \brief CODATA recommended value for the electron gyromagn. ratio (2002).
/// \details electron gyromagn. ratio = (176085974000.0 ± 15000.0) s^-1 T^-1.
template <typename T> struct electron_gyromagn_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 176085974000.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_gyromagn_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(176085974000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 15000.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = electron_gyromagn_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(15000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.518566050013728e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_gyromagn_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(15000.0) / static_cast<T>(176085974000.0));
  }
};

/// \brief CODATA recommended value for the electron gyromagn. ratio over 2 pi
/// (2002). \details electron gyromagn. ratio over 2 pi = (28024.9532 ± 0.0024)
/// MHz T^-1.
template <typename T> struct electron_gyromagn_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 28024.9532 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_gyromagn_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(28024.9532); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0024 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_gyromagn_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0024); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.563796638204555e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_gyromagn_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0024) / static_cast<T>(28024.9532));
  }
};

/// \brief CODATA recommended value for the electron magn. moment (2002).
/// \details electron magn. moment = (-9.28476412e-24 ± 8e-31) J T^-1.
template <typename T> struct electron_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = -9.28476412e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.28476412e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = electron_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.61626627947119e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-31) / static_cast<T>(-9.28476412e-24));
  }
};

/// \brief CODATA recommended value for the electron magn. moment to Bohr
/// magneton ratio (2002). \details electron magn. moment to Bohr magneton ratio
/// = (-1.0011596521859 ± 3.8e-12) .
template <typename T> struct electron_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.0011596521859 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// electron_magn_moment_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1.0011596521859); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.795598425988504e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_magn_moment_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-12) / static_cast<T>(-1.0011596521859));
  }
};

/// \brief CODATA recommended value for the electron magn. moment to nuclear
/// magneton ratio (2002). \details electron magn. moment to nuclear magneton
/// ratio = (-1838.28197107 ± 8.5e-07) .
template <typename T> struct electron_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1838.28197107 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// electron_magn_moment_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1838.28197107); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.623882589161469e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-07) / static_cast<T>(-1838.28197107));
  }
};

/// \brief CODATA recommended value for the electron magn. moment anomaly
/// (2002). \details electron magn. moment anomaly = (0.0011596521859 ± 3.8e-12)
/// .
template <typename T> struct electron_magn_moment_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.0011596521859 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_magn_moment_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0011596521859); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = electron_magn_moment_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.2768445972020825e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_magn_moment_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-12) / static_cast<T>(0.0011596521859));
  }
};

/// \brief CODATA recommended value for the electron to shielded proton magn.
/// moment ratio (2002). \details electron to shielded proton magn. moment ratio
/// = (-658.2275956 ± 7.1e-06) .
template <typename T> struct electron_to_shielded_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2275956 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// electron_to_shielded_proton_magn_moment_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2275956); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_to_shielded_proton_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0786542599339176e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_to_shielded_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-06) / static_cast<T>(-658.2275956));
  }
};

/// \brief CODATA recommended value for the electron to shielded helion magn.
/// moment ratio (2002). \details electron to shielded helion magn. moment ratio
/// = (864.058255 ± 1e-05) .
template <typename T> struct electron_to_shielded_helion_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 864.058255 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// electron_to_shielded_helion_magn_moment_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(864.058255); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_to_shielded_helion_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1573293747422158e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_to_shielded_helion_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-05) / static_cast<T>(864.058255));
  }
};

/// \brief CODATA recommended value for the electron-deuteron magn. moment ratio
/// (2002). \details electron-deuteron magn. moment ratio = (-2143.923493
/// ± 2.3e-05) .
template <typename T> struct electron_deuteron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2143.923493 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_deuteron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2143.923493); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_deuteron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0727994760585425e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_deuteron_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-05) / static_cast<T>(-2143.923493));
  }
};

/// \brief CODATA recommended value for the electron-muon magn. moment ratio
/// (2002). \details electron-muon magn. moment ratio = (206.7669894 ± 5.4e-06)
/// .
template <typename T> struct electron_muon_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7669894 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_muon_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7669894); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_muon_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.611635452868861e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_muon_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-06) / static_cast<T>(206.7669894));
  }
};

/// \brief CODATA recommended value for the electron-neutron magn. moment ratio
/// (2002). \details electron-neutron magn. moment ratio = (960.9205 ± 0.00023)
/// .
template <typename T> struct electron_neutron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 960.9205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_neutron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(960.9205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_neutron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00023); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3935382791812643e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// electron_neutron_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00023) / static_cast<T>(960.9205));
  }
};

/// \brief CODATA recommended value for the electron-proton magn. moment ratio
/// (2002). \details electron-proton magn. moment ratio = (-658.2106862
/// ± 6.6e-06) .
template <typename T> struct electron_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2106862 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = electron_proton_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2106862); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// electron_proton_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0027184514586508e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = electron_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-06) / static_cast<T>(-658.2106862));
  }
};

/// \brief CODATA recommended value for the magn. constant (2002).
/// \details magn. constant = (1.2566370614e-06 ± 0.0) N A^-2.
template <typename T> struct magn_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.2566370614e-06 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = magn_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.2566370614e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = magn_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = magn_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.2566370614e-06));
  }
};

/// \brief CODATA recommended value for the magn. flux quantum (2002).
/// \details magn. flux quantum = (2.06783372e-15 ± 1.8e-22) Wb.
template <typename T> struct magn_flux_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 2.06783372e-15 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = magn_flux_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.06783372e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-22 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = magn_flux_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.704761812279567e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = magn_flux_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-22) / static_cast<T>(2.06783372e-15));
  }
};

/// \brief CODATA recommended value for the muon magn. moment (2002).
/// \details muon magn. moment = (-4.49044799e-26 ± 4e-33) J T^-1.
template <typename T> struct muon_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = -4.49044799e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = muon_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.49044799e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = muon_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.907797192858701e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = muon_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-33) / static_cast<T>(-4.49044799e-26));
  }
};

/// \brief CODATA recommended value for the muon magn. moment to Bohr magneton
/// ratio (2002). \details muon magn. moment to Bohr magneton ratio =
/// (-0.00484197045 ± 1.3e-10) .
template <typename T> struct muon_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00484197045 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = muon_magn_moment_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00484197045); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// muon_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6848573600857062e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// muon_magn_moment_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-10) / static_cast<T>(-0.00484197045));
  }
};

/// \brief CODATA recommended value for the muon magn. moment to nuclear
/// magneton ratio (2002). \details muon magn. moment to nuclear magneton ratio
/// = (-8.89059698 ± 2.3e-07) .
template <typename T> struct muon_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -8.89059698 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// muon_magn_moment_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-8.89059698); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// muon_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5870028808796595e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// muon_magn_moment_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-07) / static_cast<T>(-8.89059698));
  }
};

/// \brief CODATA recommended value for the muon-proton magn. moment ratio
/// (2002). \details muon-proton magn. moment ratio = (-3.183345118 ± 8.9e-08) .
template <typename T> struct muon_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -3.183345118 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = muon_proton_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.183345118); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = muon_proton_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.7958011682979578e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = muon_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-08) / static_cast<T>(-3.183345118));
  }
};

/// \brief CODATA recommended value for the neutron gyromagn. ratio (2002).
/// \details neutron gyromagn. ratio = (183247183.0 ± 46.0) s^-1 T^-1.
template <typename T> struct neutron_gyromagn_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 183247183.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = neutron_gyromagn_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(183247183.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 46.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = neutron_gyromagn_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(46.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.510270512589544e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = neutron_gyromagn_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(46.0) / static_cast<T>(183247183.0));
  }
};

/// \brief CODATA recommended value for the neutron gyromagn. ratio over 2 pi
/// (2002). \details neutron gyromagn. ratio over 2 pi = (29.164695 ± 7.3e-06)
/// MHz T^-1.
template <typename T> struct neutron_gyromagn_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 29.164695 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = neutron_gyromagn_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(29.164695); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_gyromagn_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5030263474382297e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = neutron_gyromagn_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-06) / static_cast<T>(29.164695));
  }
};

/// \brief CODATA recommended value for the neutron magn. moment (2002).
/// \details neutron magn. moment = (-9.6623645e-27 ± 2.4e-33) J T^-1.
template <typename T> struct neutron_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = -9.6623645e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = neutron_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.6623645e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = neutron_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4838640686759436e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = neutron_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-33) / static_cast<T>(-9.6623645e-27));
  }
};

/// \brief CODATA recommended value for the neutron magn. moment to Bohr
/// magneton ratio (2002). \details neutron magn. moment to Bohr magneton ratio
/// = (-0.00104187563 ± 2.5e-10) .
template <typename T> struct neutron_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00104187563 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// neutron_magn_moment_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00104187563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.399518645042115e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// neutron_magn_moment_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(-0.00104187563));
  }
};

/// \brief CODATA recommended value for the neutron magn. moment to nuclear
/// magneton ratio (2002). \details neutron magn. moment to nuclear magneton
/// ratio = (-1.91304273 ± 4.5e-07) .
template <typename T> struct neutron_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.91304273 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// neutron_magn_moment_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1.91304273); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.352273647332488e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// neutron_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-07) / static_cast<T>(-1.91304273));
  }
};

/// \brief CODATA recommended value for the neutron to shielded proton magn.
/// moment ratio (2002). \details neutron to shielded proton magn. moment ratio
/// = (-0.68499694 ± 1.6e-07) .
template <typename T> struct neutron_to_shielded_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68499694 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// neutron_to_shielded_proton_magn_moment_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68499694); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_to_shielded_proton_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3357768576309262e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// neutron_to_shielded_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68499694));
  }
};

/// \brief CODATA recommended value for the neutron-electron magn. moment ratio
/// (2002). \details neutron-electron magn. moment ratio = (0.00104066882
/// ± 2.5e-10) .
template <typename T> struct neutron_electron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00104066882 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = neutron_electron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00104066882); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_electron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4023012431563005e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// neutron_electron_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(0.00104066882));
  }
};

/// \brief CODATA recommended value for the neutron-proton magn. moment ratio
/// (2002). \details neutron-proton magn. moment ratio = (-0.68497934 ± 1.6e-07)
/// .
template <typename T> struct neutron_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68497934 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = neutron_proton_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68497934); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// neutron_proton_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.335836873561763e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = neutron_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68497934));
  }
};

/// \brief CODATA recommended value for the proton gyromagn. ratio (2002).
/// \details proton gyromagn. ratio = (267522205.0 ± 23.0) s^-1 T^-1.
template <typename T> struct proton_gyromagn_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267522205.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_gyromagn_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267522205.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 23.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = proton_gyromagn_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(23.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.597417175146265e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = proton_gyromagn_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(23.0) / static_cast<T>(267522205.0));
  }
};

/// \brief CODATA recommended value for the proton gyromagn. ratio over 2 pi
/// (2002). \details proton gyromagn. ratio over 2 pi = (42.5774813 ± 3.7e-06)
/// MHz T^-1.
template <typename T> struct proton_gyromagn_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.5774813 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_gyromagn_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.5774813); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// proton_gyromagn_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.690039633697167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = proton_gyromagn_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e-06) / static_cast<T>(42.5774813));
  }
};

/// \brief CODATA recommended value for the proton magn. moment (2002).
/// \details proton magn. moment = (1.41060671e-26 ± 1.2e-33) J T^-1.
template <typename T> struct proton_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = 1.41060671e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.41060671e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = proton_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.506977823747912e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = proton_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-33) / static_cast<T>(1.41060671e-26));
  }
};

/// \brief CODATA recommended value for the proton magn. moment to Bohr magneton
/// ratio (2002). \details proton magn. moment to Bohr magneton ratio =
/// (0.001521032206 ± 1.5e-11) .
template <typename T> struct proton_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001521032206 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_magn_moment_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001521032206); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// proton_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.861724124466041e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// proton_magn_moment_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-11) / static_cast<T>(0.001521032206));
  }
};

/// \brief CODATA recommended value for the proton magn. moment to nuclear
/// magneton ratio (2002). \details proton magn. moment to nuclear magneton
/// ratio = (2.792847351 ± 2.8e-08) .
template <typename T> struct proton_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792847351 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// proton_magn_moment_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(2.792847351); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// proton_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0025610597720062e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// proton_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-08) / static_cast<T>(2.792847351));
  }
};

/// \brief CODATA recommended value for the proton magn. shielding correction
/// (2002). \details proton magn. shielding correction = (2.5689e-05 ± 1.5e-08)
/// .
template <typename T> struct proton_magn_shielding_correction {
  /// \brief Returns the constant's value.
  /// \details value = 2.5689e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_magn_shielding_correction<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.5689e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// proton_magn_shielding_correction<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0005839075090505663.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = proton_magn_shielding_correction<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-08) / static_cast<T>(2.5689e-05));
  }
};

/// \brief CODATA recommended value for the proton-neutron magn. moment ratio
/// (2002). \details proton-neutron magn. moment ratio = (-1.45989805 ± 3.4e-07)
/// .
template <typename T> struct proton_neutron_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.45989805 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = proton_neutron_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.45989805); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// proton_neutron_magn_moment_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3289297495808008e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = proton_neutron_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(-1.45989805));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromagn. ratio
/// (2002). \details shielded helion gyromagn. ratio = (203789470.0 ± 18.0) s^-1
/// T^-1.
template <typename T> struct shielded_helion_gyromagn_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 203789470.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = shielded_helion_gyromagn_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(203789470.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 18.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_gyromagn_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(18.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.832644787780252e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = shielded_helion_gyromagn_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(18.0) / static_cast<T>(203789470.0));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromagn. ratio over
/// 2 pi (2002). \details shielded helion gyromagn. ratio over 2 pi =
/// (32.4341015 ± 2.8e-06) MHz T^-1.
template <typename T> struct shielded_helion_gyromagn_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 32.4341015 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = shielded_helion_gyromagn_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(32.4341015); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_gyromagn_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.632889059683063e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_helion_gyromagn_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-06) / static_cast<T>(32.4341015));
  }
};

/// \brief CODATA recommended value for the shielded helion magn. moment (2002).
/// \details shielded helion magn. moment = (-1.074553024e-26 ± 9.3e-34) J T^-1.
template <typename T> struct shielded_helion_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = -1.074553024e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = shielded_helion_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074553024e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = shielded_helion_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.654761368016028e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = shielded_helion_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.3e-34) / static_cast<T>(-1.074553024e-26));
  }
};

/// \brief CODATA recommended value for the shielded helion magn. moment to Bohr
/// magneton ratio (2002). \details shielded helion magn. moment to Bohr
/// magneton ratio = (-0.001158671474 ± 1.4e-11) .
template <typename T>
struct shielded_helion_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158671474 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_helion_magn_moment_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158671474); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082803723188925e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_helion_magn_moment_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158671474));
  }
};

/// \brief CODATA recommended value for the shielded helion magn. moment to
/// nuclear magneton ratio (2002). \details shielded helion magn. moment to
/// nuclear magneton ratio = (-2.127497723 ± 2.5e-08) .
template <typename T>
struct shielded_helion_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127497723 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_helion_magn_moment_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127497723); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175089389273109e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_helion_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127497723));
  }
};

/// \brief CODATA recommended value for the shielded helion to proton magn.
/// moment ratio (2002). \details shielded helion to proton magn. moment ratio =
/// (-0.761766562 ± 1.2e-08) .
template <typename T> struct shielded_helion_to_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.761766562 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_helion_to_proton_magn_moment_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.761766562); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_to_proton_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5752857369446992e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_helion_to_proton_magn_moment_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-08) / static_cast<T>(-0.761766562));
  }
};

/// \brief CODATA recommended value for the shielded helion to shielded proton
/// magn. moment ratio (2002). \details shielded helion to shielded proton magn.
/// moment ratio = (-0.7617861313 ± 3.3e-09) .
template <typename T>
struct shielded_helion_to_shielded_proton_magn_moment_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617861313 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_helion_to_shielded_proton_magn_moment_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617861313); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_helion_to_shielded_proton_magn_moment_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3319244922042606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_helion_to_shielded_proton_magn_moment_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-09) / static_cast<T>(-0.7617861313));
  }
};

/// \brief CODATA recommended value for the shielded proton magn. moment (2002).
/// \details shielded proton magn. moment = (1.41057047e-26 ± 1.2e-33) J T^-1.
template <typename T> struct shielded_proton_magn_moment {
  /// \brief Returns the constant's value.
  /// \details value = 1.41057047e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = shielded_proton_magn_moment<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.41057047e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty = shielded_proton_magn_moment<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.50719638275144e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = shielded_proton_magn_moment<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-33) / static_cast<T>(1.41057047e-26));
  }
};

/// \brief CODATA recommended value for the shielded proton magn. moment to Bohr
/// magneton ratio (2002). \details shielded proton magn. moment to Bohr
/// magneton ratio = (0.001520993132 ± 1.6e-11) .
template <typename T>
struct shielded_proton_magn_moment_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001520993132 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_proton_magn_moment_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001520993132); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_proton_magn_moment_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.05194426348008e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_proton_magn_moment_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-11) / static_cast<T>(0.001520993132));
  }
};

/// \brief CODATA recommended value for the shielded proton magn. moment to
/// nuclear magneton ratio (2002). \details shielded proton magn. moment to
/// nuclear magneton ratio = (2.792775604 ± 3e-08) .
template <typename T>
struct shielded_proton_magn_moment_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792775604 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value =
  /// shielded_proton_magn_moment_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792775604); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// shielded_proton_magn_moment_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0742001597633549e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision =
  /// shielded_proton_magn_moment_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-08) / static_cast<T>(2.792775604));
  }
};

/// \brief CODATA recommended value for the {220} lattice spacing of silicon
/// (2002). \details {220} lattice spacing of silicon = (1.920155965e-10 ±
/// 7e-18) m.
template <typename T> struct lattice_spacing_of_silicon_220 {
  /// \brief Returns the constant's value.
  /// \details value = 1.920155965e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double value = lattice_spacing_of_silicon_220<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.920155965e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double uncertainty =
  /// lattice_spacing_of_silicon_220<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.6455371998909476e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2002;
  /// double precision = lattice_spacing_of_silicon_220<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7e-18) / static_cast<T>(1.920155965e-10));
  }
};

} // namespace codata_2002

} // namespace constants

} // namespace triumf

#endif // TRIUMF_CONSTANTS_CODATA_2002_HPP
