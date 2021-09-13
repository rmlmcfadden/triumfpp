#ifndef TRIUMF_CONSTANTS_CODATA_2014_HPP
#define TRIUMF_CONSTANTS_CODATA_2014_HPP

#include <cmath>
#include <type_traits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace constants {

// Committee on Data (CODATA) of the International Science Council (ISC)
// recommended values of fundamental physical constants: 2014
// https://physics.nist.gov/cuu/Constants/
// https://physics.nist.gov/cuu/Constants/Table/allascii.txt
namespace codata_2014 {

/// \brief CODATA recommended value for the {220} lattice spacing of silicon
/// (2014). \details {220} lattice spacing of silicon = (1.920155714e-10
/// ± 3.2e-18) m.
template <typename T> struct lattice_spacing_of_silicon_220 {
  /// \brief Returns the constant's value.
  /// \details value = 1.920155714e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = lattice_spacing_of_silicon_220<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.920155714e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// lattice_spacing_of_silicon_220<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.666531509225298e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = lattice_spacing_of_silicon_220<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-18) / static_cast<T>(1.920155714e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle-electron mass ratio
/// (2014). \details alpha particle-electron mass ratio = (7294.29954136
/// ± 2.4e-07) .
template <typename T> struct alpha_particle_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 7294.29954136 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7294.29954136); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// alpha_particle_electron_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.290240531515829e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// alpha_particle_electron_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-07) / static_cast<T>(7294.29954136));
  }
};

/// \brief CODATA recommended value for the alpha particle mass (2014).
/// \details alpha particle mass = (6.64465723e-27 ± 8.2e-35) kg.
template <typename T> struct alpha_particle_mass {
  /// \brief Returns the constant's value.
  /// \details value = 6.64465723e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.64465723e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = alpha_particle_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2340741916645112e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = alpha_particle_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.2e-35) / static_cast<T>(6.64465723e-27));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent (2014). \details alpha particle mass energy equivalent =
/// (5.971920097e-10 ± 7.3e-18) J.
template <typename T> struct alpha_particle_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 5.971920097e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.971920097e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2223874200304792e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-18) / static_cast<T>(5.971920097e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent in MeV (2014). \details alpha particle mass energy equivalent in
/// MeV = (3727.379378 ± 2.3e-05) MeV.
template <typename T> struct alpha_particle_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 3727.379378 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(3727.379378); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.170555145460162e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-05) / static_cast<T>(3727.379378));
  }
};

/// \brief CODATA recommended value for the alpha particle mass in u (2014).
/// \details alpha particle mass in u = (4.001506179127 ± 6.3e-11) u.
template <typename T> struct alpha_particle_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 4.001506179127 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.001506179127); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = alpha_particle_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.574407165197595e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = alpha_particle_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-11) / static_cast<T>(4.001506179127));
  }
};

/// \brief CODATA recommended value for the alpha particle molar mass (2014).
/// \details alpha particle molar mass = (0.004001506179127 ± 6.3e-14) kg
/// mol^-1.
template <typename T> struct alpha_particle_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.004001506179127 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.004001506179127);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = alpha_particle_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.574407165197595e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = alpha_particle_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-14) /
                    static_cast<T>(0.004001506179127));
  }
};

/// \brief CODATA recommended value for the alpha particle-proton mass ratio
/// (2014). \details alpha particle-proton mass ratio = (3.97259968907
/// ± 3.6e-10) .
template <typename T> struct alpha_particle_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3.97259968907 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = alpha_particle_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.97259968907); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// alpha_particle_proton_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.062075924500646e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = alpha_particle_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-10) / static_cast<T>(3.97259968907));
  }
};

/// \brief CODATA recommended value for the Angstrom star (2014).
/// \details Angstrom star = (1.00001495e-10 ± 9e-17) m.
template <typename T> struct Angstrom_star {
  /// \brief Returns the constant's value.
  /// \details value = 1.00001495e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Angstrom_star<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00001495e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-17 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Angstrom_star<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.999865452011492e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Angstrom_star<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-17) / static_cast<T>(1.00001495e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant (2014).
/// \details atomic mass constant = (1.66053904e-27 ± 2e-35) kg.
template <typename T> struct atomic_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.66053904e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.66053904e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2044281717098324e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-35) / static_cast<T>(1.66053904e-27));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent (2014). \details atomic mass constant energy equivalent =
/// (1.492418062e-10 ± 1.8e-18) J.
template <typename T> struct atomic_mass_constant_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.492418062e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_constant_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.492418062e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2060963652421944e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-18) / static_cast<T>(1.492418062e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent in MeV (2014). \details atomic mass constant energy equivalent in
/// MeV = (931.4940954 ± 5.7e-06) MeV.
template <typename T> struct atomic_mass_constant_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 931.4940954 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931.4940954); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.119201429347031e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-06) / static_cast<T>(931.4940954));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-electron volt
/// relationship (2014). \details atomic mass unit-electron volt relationship =
/// (931494095.4 ± 5.7) eV.
template <typename T> struct atomic_mass_unit_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 931494095.4 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// atomic_mass_unit_electron_volt_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931494095.4); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_electron_volt_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.119201429347032e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7) / static_cast<T>(931494095.4));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hartree
/// relationship (2014). \details atomic mass unit-hartree relationship =
/// (34231776.902 ± 0.016) E_h.
template <typename T> struct atomic_mass_unit_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 34231776.902 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_unit_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(34231776.902); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.016 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.016); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.674019711511147e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.016) / static_cast<T>(34231776.902));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hertz relationship
/// (2014). \details atomic mass unit-hertz relationship = (2.2523427206e+23 ±
/// 100000000000000.0) Hz.
template <typename T> struct atomic_mass_unit_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.2523427206e+23 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_unit_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.2523427206e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 100000000000000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(100000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.439821661481476e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_hertz_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(100000000000000.0) /
                    static_cast<T>(2.2523427206e+23));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-inverse meter
/// relationship (2014). \details atomic mass unit-inverse meter relationship =
/// (751300661660000.0 ± 340000.0) m^-1.
template <typename T> struct atomic_mass_unit_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 751300661660000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// atomic_mass_unit_inverse_meter_relationship<double>::value(); \endcode
  static inline constexpr T value() {
    return static_cast<T>(751300661660000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 340000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_inverse_meter_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(340000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.525485166601204e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(340000.0) /
                    static_cast<T>(751300661660000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-joule relationship
/// (2014). \details atomic mass unit-joule relationship = (1.492418062e-10
/// ± 1.8e-18) J.
template <typename T> struct atomic_mass_unit_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.492418062e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_unit_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.492418062e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2060963652421944e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_joule_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-18) / static_cast<T>(1.492418062e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kelvin relationship
/// (2014). \details atomic mass unit-kelvin relationship = (10809543800000.0 ±
/// 6200000.0) K.
template <typename T> struct atomic_mass_unit_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 10809543800000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_unit_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10809543800000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6200000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6200000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.735672212179759e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_kelvin_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6200000.0) /
                    static_cast<T>(10809543800000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kilogram
/// relationship (2014). \details atomic mass unit-kilogram relationship =
/// (1.66053904e-27 ± 2e-35) kg.
template <typename T> struct atomic_mass_unit_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.66053904e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_mass_unit_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.66053904e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_mass_unit_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2044281717098324e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_mass_unit_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-35) / static_cast<T>(1.66053904e-27));
  }
};

/// \brief CODATA recommended value for the atomic unit of 1st
/// hyperpolarizability (2014). \details atomic unit of 1st hyperpolarizability
/// = (3.206361329e-53 ± 2e-61) C^3 m^3 J^-2.
template <typename T> struct atomic_unit_of_1st_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 3.206361329e-53 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_1st_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.206361329e-53); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-61 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_1st_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-61); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.237600179090733e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_1st_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-61) / static_cast<T>(3.206361329e-53));
  }
};

/// \brief CODATA recommended value for the atomic unit of 2nd
/// hyperpolarizability (2014). \details atomic unit of 2nd hyperpolarizability
/// = (6.235380085e-65 ± 7.7e-73) C^4 m^4 J^-3.
template <typename T> struct atomic_unit_of_2nd_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 6.235380085e-65 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_2nd_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.235380085e-65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.7e-73 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.7e-73); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2348886346998044e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.7e-73) / static_cast<T>(6.235380085e-65));
  }
};

/// \brief CODATA recommended value for the atomic unit of action (2014).
/// \details atomic unit of action = (1.0545718e-34 ± 1.3e-42) J s.
template <typename T> struct atomic_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.0545718e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.0545718e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2327278237479894e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-42) / static_cast<T>(1.0545718e-34));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge (2014).
/// \details atomic unit of charge = (1.6021766208e-19 ± 9.8e-28) C.
template <typename T> struct atomic_unit_of_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.6021766208e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6021766208e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.8e-28 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.8e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.116678943365593e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.8e-28) / static_cast<T>(1.6021766208e-19));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge density
/// (2014). \details atomic unit of charge density = (1081202377000.0 ± 6700.0)
/// C m^-3.
template <typename T> struct atomic_unit_of_charge_density {
  /// \brief Returns the constant's value.
  /// \details value = 1081202377000.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_charge_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1081202377000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6700.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_charge_density<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6700.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.196804726410623e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_charge_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6700.0) / static_cast<T>(1081202377000.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of current (2014).
/// \details atomic unit of current = (0.006623618183 ± 4.1e-11) A.
template <typename T> struct atomic_unit_of_current {
  /// \brief Returns the constant's value.
  /// \details value = 0.006623618183 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.006623618183); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-11 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.189970325467959e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-11) / static_cast<T>(0.006623618183));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric dipole mom.
/// (2014). \details atomic unit of electric dipole mom. = (8.478353552e-30
/// ± 5.2e-38) C m.
template <typename T> struct atomic_unit_of_electric_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 8.478353552e-30 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.478353552e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-38 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_electric_dipole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.133266285850213e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_electric_dipole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-38) / static_cast<T>(8.478353552e-30));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// (2014). \details atomic unit of electric field = (514220670700.0 ± 3200.0) V
/// m^-1.
template <typename T> struct atomic_unit_of_electric_field {
  /// \brief Returns the constant's value.
  /// \details value = 514220670700.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_field<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(514220670700.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3200.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_electric_field<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3200.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.223009268849293e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_electric_field<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3200.0) / static_cast<T>(514220670700.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// gradient (2014). \details atomic unit of electric field gradient =
/// (9.717362356e+21 ± 60000000000000.0) V m^-2.
template <typename T> struct atomic_unit_of_electric_field_gradient {
  /// \brief Returns the constant's value.
  /// \details value = 9.717362356e+21 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_field_gradient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.717362356e+21); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 60000000000000.0 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_electric_field_gradient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(60000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.174515038327548e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_electric_field_gradient<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(60000000000000.0) /
                    static_cast<T>(9.717362356e+21));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric
/// polarizability (2014). \details atomic unit of electric polarizability =
/// (1.6487772731e-41 ± 1.1e-50) C^2 m^2 J^-1.
template <typename T> struct atomic_unit_of_electric_polarizability {
  /// \brief Returns the constant's value.
  /// \details value = 1.6487772731e-41 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_polarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6487772731e-41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-50 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_electric_polarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-50); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.671610641089203e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_electric_polarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-50) / static_cast<T>(1.6487772731e-41));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric potential
/// (2014). \details atomic unit of electric potential = (27.21138602 ± 1.7e-07)
/// V.
template <typename T> struct atomic_unit_of_electric_potential {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138602 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_potential<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138602); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_electric_potential<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.24738482174529e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_electric_potential<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(27.21138602));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric quadrupole
/// mom. (2014). \details atomic unit of electric quadrupole mom. =
/// (4.486551484e-40 ± 2.8e-48) C m^2.
template <typename T> struct atomic_unit_of_electric_quadrupole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.486551484e-40 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_electric_quadrupole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.486551484e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-48 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_electric_quadrupole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-48); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.2408734414068305e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// atomic_unit_of_electric_quadrupole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-48) / static_cast<T>(4.486551484e-40));
  }
};

/// \brief CODATA recommended value for the atomic unit of energy (2014).
/// \details atomic unit of energy = (4.35974465e-18 ± 5.4e-26) J.
template <typename T> struct atomic_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974465e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974465e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-26 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.238604650848072e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-26) / static_cast<T>(4.35974465e-18));
  }
};

/// \brief CODATA recommended value for the atomic unit of force (2014).
/// \details atomic unit of force = (8.23872336e-08 ± 1e-15) N.
template <typename T> struct atomic_unit_of_force {
  /// \brief Returns the constant's value.
  /// \details value = 8.23872336e-08 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_force<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.23872336e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-15 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_force<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2137802864641883e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_force<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-15) / static_cast<T>(8.23872336e-08));
  }
};

/// \brief CODATA recommended value for the atomic unit of length (2014).
/// \details atomic unit of length = (5.2917721067e-11 ± 1.2e-20) m.
template <typename T> struct atomic_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917721067e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917721067e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2676713505493936e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-20) / static_cast<T>(5.2917721067e-11));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. dipole mom.
/// (2014). \details atomic unit of mag. dipole mom. = (1.854801999e-23
/// ± 1.1e-31) J T^-1.
template <typename T> struct atomic_unit_of_mag_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.854801999e-23 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_mag_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.854801999e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_mag_dipole_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.93055215916877e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_mag_dipole_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-31) / static_cast<T>(1.854801999e-23));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. flux density
/// (2014). \details atomic unit of mag. flux density = (235051.755 ± 0.0014) T.
template <typename T> struct atomic_unit_of_mag_flux_density {
  /// \brief Returns the constant's value.
  /// \details value = 235051.755 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_mag_flux_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(235051.755); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0014 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_mag_flux_density<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0014); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.956135064807323e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_mag_flux_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0014) / static_cast<T>(235051.755));
  }
};

/// \brief CODATA recommended value for the atomic unit of magnetizability
/// (2014). \details atomic unit of magnetizability = (7.8910365886e-29 ± 9e-38)
/// J T^-2.
template <typename T> struct atomic_unit_of_magnetizability {
  /// \brief Returns the constant's value.
  /// \details value = 7.8910365886e-29 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_magnetizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.8910365886e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-38 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// atomic_unit_of_magnetizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.140534567157133e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_magnetizability<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-38) / static_cast<T>(7.8910365886e-29));
  }
};

/// \brief CODATA recommended value for the atomic unit of mass (2014).
/// \details atomic unit of mass = (9.10938356e-31 ± 1.1e-38) kg.
template <typename T> struct atomic_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938356e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938356e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2075460350908751e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-38) / static_cast<T>(9.10938356e-31));
  }
};

/// \brief CODATA recommended value for the atomic unit of mom.um (2014).
/// \details atomic unit of mom.um = (1.992851882e-24 ± 2.4e-32) kg m s^-1.
template <typename T> struct atomic_unit_of_momum {
  /// \brief Returns the constant's value.
  /// \details value = 1.992851882e-24 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_momum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.992851882e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-32 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_momum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.204304254459389e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_momum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-32) / static_cast<T>(1.992851882e-24));
  }
};

/// \brief CODATA recommended value for the atomic unit of permittivity (2014).
/// \details atomic unit of permittivity = (1.112650056e-10 ± 0.0) F m^-1.
template <typename T> struct atomic_unit_of_permittivity {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-10 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_permittivity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_permittivity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_permittivity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-10));
  }
};

/// \brief CODATA recommended value for the atomic unit of time (2014).
/// \details atomic unit of time = (2.418884326509e-17 ± 1.4e-28) s.
template <typename T> struct atomic_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 2.418884326509e-17 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.418884326509e-17);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-28 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.78779226710902e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-28) /
                    static_cast<T>(2.418884326509e-17));
  }
};

/// \brief CODATA recommended value for the atomic unit of velocity (2014).
/// \details atomic unit of velocity = (2187691.26277 ± 0.0005) m s^-1.
template <typename T> struct atomic_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 2187691.26277 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = atomic_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2187691.26277); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0005 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = atomic_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0005); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2855144531084907e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = atomic_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0005) / static_cast<T>(2187691.26277));
  }
};

/// \brief CODATA recommended value for the Avogadro constant (2014).
/// \details Avogadro constant = (6.022140857e+23 ± 7400000000000000.0) mol^-1.
template <typename T> struct Avogadro_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.022140857e+23 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Avogadro_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.022140857e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7400000000000000.0 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Avogadro_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(7400000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2287988899161014e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Avogadro_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7400000000000000.0) /
                    static_cast<T>(6.022140857e+23));
  }
};

/// \brief CODATA recommended value for the Bohr magneton (2014).
/// \details Bohr magneton = (9.274009994e-24 ± 5.7e-32) J T^-1.
template <typename T> struct Bohr_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 9.274009994e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.274009994e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-32 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Bohr_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.146208601983096e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Bohr_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-32) / static_cast<T>(9.274009994e-24));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in eV/T (2014).
/// \details Bohr magneton in eV/T = (5.7883818012e-05 ± 2.6e-14) eV T^-1.
template <typename T> struct Bohr_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 5.7883818012e-05 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.7883818012e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-14 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Bohr_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4917562270356613e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Bohr_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-14) / static_cast<T>(5.7883818012e-05));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in Hz/T (2014).
/// \details Bohr magneton in Hz/T = (13996245042.0 ± 86.0) Hz T^-1.
template <typename T> struct Bohr_magneton_in_Hz_T {
  /// \brief Returns the constant's value.
  /// \details value = 13996245042.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_magneton_in_Hz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13996245042.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 86.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Bohr_magneton_in_Hz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(86.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.144505168488461e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Bohr_magneton_in_Hz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(86.0) / static_cast<T>(13996245042.0));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in inverse meters per
/// tesla (2014). \details Bohr magneton in inverse meters per tesla =
/// (46.68644814 ± 2.9e-07) m^-1 T^-1.
template <typename T> struct Bohr_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 46.68644814 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_magneton_in_inverse_meters_per_tesla<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(46.68644814); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-07 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.211652664824032e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-07) / static_cast<T>(46.68644814));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in K/T (2014).
/// \details Bohr magneton in K/T = (0.67171405 ± 3.9e-07) K T^-1.
template <typename T> struct Bohr_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.67171405 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.67171405); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-07 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Bohr_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.806042020410323e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Bohr_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-07) / static_cast<T>(0.67171405));
  }
};

/// \brief CODATA recommended value for the Bohr radius (2014).
/// \details Bohr radius = (5.2917721067e-11 ± 1.2e-20) m.
template <typename T> struct Bohr_radius {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917721067e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Bohr_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917721067e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Bohr_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2676713505493936e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Bohr_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-20) / static_cast<T>(5.2917721067e-11));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant (2014).
/// \details Boltzmann constant = (1.38064852e-23 ± 7.9e-30) J K^-1.
template <typename T> struct Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.38064852e-23 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.38064852e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.9e-30 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.9e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.721948696979012e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.9e-30) / static_cast<T>(1.38064852e-23));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in eV/K (2014).
/// \details Boltzmann constant in eV/K = (8.6173303e-05 ± 5e-11) eV K^-1.
template <typename T> struct Boltzmann_constant_in_eV_K {
  /// \brief Returns the constant's value.
  /// \details value = 8.6173303e-05 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Boltzmann_constant_in_eV_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.6173303e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-11 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Boltzmann_constant_in_eV_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.802261055259772e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Boltzmann_constant_in_eV_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-11) / static_cast<T>(8.6173303e-05));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in Hz/K (2014).
/// \details Boltzmann constant in Hz/K = (20836612000.0 ± 12000.0) Hz K^-1.
template <typename T> struct Boltzmann_constant_in_Hz_K {
  /// \brief Returns the constant's value.
  /// \details value = 20836612000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Boltzmann_constant_in_Hz_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836612000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 12000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Boltzmann_constant_in_Hz_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(12000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.759093656876656e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Boltzmann_constant_in_Hz_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(12000.0) / static_cast<T>(20836612000.0));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in inverse meters
/// per kelvin (2014). \details Boltzmann constant in inverse meters per kelvin
/// = (69.503457 ± 4e-05) m^-1 K^-1.
template <typename T> struct Boltzmann_constant_in_inverse_meters_per_kelvin {
  /// \brief Returns the constant's value.
  /// \details value = 69.503457 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(69.503457); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-05 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.755109418514248e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-05) / static_cast<T>(69.503457));
  }
};

/// \brief CODATA recommended value for the characteristic impedance of vacuum
/// (2014). \details characteristic impedance of vacuum = (376.730313461 ± 0.0)
/// ohm.
template <typename T> struct characteristic_impedance_of_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 376.730313461 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = characteristic_impedance_of_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(376.730313461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// characteristic_impedance_of_vacuum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// characteristic_impedance_of_vacuum<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(376.730313461));
  }
};

/// \brief CODATA recommended value for the classical electron radius (2014).
/// \details classical electron radius = (2.8179403227e-15 ± 1.9e-24) m.
template <typename T> struct classical_electron_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.8179403227e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = classical_electron_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.8179403227e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = classical_electron_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.742513262947746e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = classical_electron_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-24) / static_cast<T>(2.8179403227e-15));
  }
};

/// \brief CODATA recommended value for the Compton wavelength (2014).
/// \details Compton wavelength = (2.4263102367e-12 ± 1.1e-21) m.
template <typename T> struct Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.4263102367e-12 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.4263102367e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.533632935152179e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-21) / static_cast<T>(2.4263102367e-12));
  }
};

/// \brief CODATA recommended value for the Compton wavelength over 2 pi (2014).
/// \details Compton wavelength over 2 pi = (3.8615926764e-13 ± 1.8e-22) m.
template <typename T> struct Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926764e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926764e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Compton_wavelength_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.661289138548046e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-22) / static_cast<T>(3.8615926764e-13));
  }
};

/// \brief CODATA recommended value for the conductance quantum (2014).
/// \details conductance quantum = (7.748091731e-05 ± 1.8e-14) S.
template <typename T> struct conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 7.748091731e-05 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.748091731e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-14 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = conductance_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3231526709966877e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-14) / static_cast<T>(7.748091731e-05));
  }
};

/// \brief CODATA recommended value for the conventional value of Josephson
/// constant (2014). \details conventional value of Josephson constant =
/// (483597900000000.0 ± 0.0) Hz V^-1.
template <typename T> struct conventional_value_of_Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597900000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = conventional_value_of_Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597900000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// conventional_value_of_Josephson_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// conventional_value_of_Josephson_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(483597900000000.0));
  }
};

/// \brief CODATA recommended value for the conventional value of von Klitzing
/// constant (2014). \details conventional value of von Klitzing constant =
/// (25812.807 ± 0.0) ohm.
template <typename T> struct conventional_value_of_von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.807 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// conventional_value_of_von_Klitzing_constant<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(25812.807); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// conventional_value_of_von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// conventional_value_of_von_Klitzing_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(25812.807));
  }
};

/// \brief CODATA recommended value for the Cu x unit (2014).
/// \details Cu x unit = (1.00207697e-13 ± 2.8e-20) m.
template <typename T> struct Cu_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00207697e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Cu_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00207697e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Cu_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.794196537617265e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Cu_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-20) / static_cast<T>(1.00207697e-13));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mag. mom. ratio
/// (2014). \details deuteron-electron mag. mom. ratio = (-0.0004664345535
/// ± 2.6e-12) .
template <typename T> struct deuteron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.0004664345535 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.0004664345535); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.5742010974322035e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-12) / static_cast<T>(-0.0004664345535));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mass ratio (2014).
/// \details deuteron-electron mass ratio = (3670.48296785 ± 1.3e-07) .
template <typename T> struct deuteron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3670.48296785 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3670.48296785); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.5417682397297167e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-07) / static_cast<T>(3670.48296785));
  }
};

/// \brief CODATA recommended value for the deuteron g factor (2014).
/// \details deuteron g factor = (0.8574382311 ± 4.8e-09) .
template <typename T> struct deuteron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382311 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382311); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.598070888257597e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-09) / static_cast<T>(0.8574382311));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. (2014).
/// \details deuteron mag. mom. = (4.33073504e-27 ± 3.6e-35) J T^-1.
template <typename T> struct deuteron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.33073504e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.33073504e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-35 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.312676639760442e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-35) / static_cast<T>(4.33073504e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to Bohr magneton
/// ratio (2014). \details deuteron mag. mom. to Bohr magneton ratio =
/// (0.0004669754554 ± 2.6e-12) .
template <typename T> struct deuteron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0004669754554 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0004669754554); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.567744449808185e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-12) / static_cast<T>(0.0004669754554));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to nuclear
/// magneton ratio (2014). \details deuteron mag. mom. to nuclear magneton ratio
/// = (0.8574382311 ± 4.8e-09) .
template <typename T> struct deuteron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382311 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382311); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.598070888257597e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-09) / static_cast<T>(0.8574382311));
  }
};

/// \brief CODATA recommended value for the deuteron mass (2014).
/// \details deuteron mass = (3.343583719e-27 ± 4.1e-35) kg.
template <typename T> struct deuteron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.343583719e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.343583719e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2262292033250568e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-35) / static_cast<T>(3.343583719e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent
/// (2014). \details deuteron mass energy equivalent = (3.005063183e-10
/// ± 3.7e-18) J.
template <typename T> struct deuteron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 3.005063183e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.005063183e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2312553096824522e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e-18) / static_cast<T>(3.005063183e-10));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent in
/// MeV (2014). \details deuteron mass energy equivalent in MeV = (1875.612928
/// ± 1.2e-05) MeV.
template <typename T> struct deuteron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1875.612928 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1875.612928); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.397908556109078e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-05) / static_cast<T>(1875.612928));
  }
};

/// \brief CODATA recommended value for the deuteron mass in u (2014).
/// \details deuteron mass in u = (2.013553212745 ± 4e-11) u.
template <typename T> struct deuteron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 2.013553212745 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.013553212745); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9865380138362236e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-11) / static_cast<T>(2.013553212745));
  }
};

/// \brief CODATA recommended value for the deuteron molar mass (2014).
/// \details deuteron molar mass = (0.002013553212745 ± 4e-14) kg mol^-1.
template <typename T> struct deuteron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.002013553212745 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.002013553212745);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.986538013836224e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-14) / static_cast<T>(0.002013553212745));
  }
};

/// \brief CODATA recommended value for the deuteron-neutron mag. mom. ratio
/// (2014). \details deuteron-neutron mag. mom. ratio = (-0.44820652 ± 1.1e-07)
/// .
template <typename T> struct deuteron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.44820652 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.44820652); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// deuteron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4542257885940616e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-0.44820652));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mag. mom. ratio
/// (2014). \details deuteron-proton mag. mom. ratio = (0.3070122077 ± 1.5e-09)
/// .
template <typename T> struct deuteron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.3070122077 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.3070122077); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.8857992040034445e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-09) / static_cast<T>(0.3070122077));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mass ratio (2014).
/// \details deuteron-proton mass ratio = (1.99900750087 ± 1.9e-10) .
template <typename T> struct deuteron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.99900750087 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.99900750087); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.504716711533547e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-10) / static_cast<T>(1.99900750087));
  }
};

/// \brief CODATA recommended value for the deuteron rms charge radius (2014).
/// \details deuteron rms charge radius = (2.1413e-15 ± 2.5e-18) m.
template <typename T> struct deuteron_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.1413e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = deuteron_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1413e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = deuteron_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0011675150609442863.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = deuteron_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-18) / static_cast<T>(2.1413e-15));
  }
};

/// \brief CODATA recommended value for the electric constant (2014).
/// \details electric constant = (8.854187817e-12 ± 0.0) F m^-1.
template <typename T> struct electric_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.854187817e-12 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electric_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.854187817e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electric_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electric_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.854187817e-12));
  }
};

/// \brief CODATA recommended value for the electron charge to mass quotient
/// (2014). \details electron charge to mass quotient = (-175882002400.0 ±
/// 1100.0) C kg^-1.
template <typename T> struct electron_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = -175882002400.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-175882002400.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1100.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1100.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.254193066885393e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1100.0) / static_cast<T>(-175882002400.0));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mag. mom. ratio
/// (2014). \details electron-deuteron mag. mom. ratio = (-2143.923499
/// ± 1.2e-05) .
template <typename T> struct electron_deuteron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2143.923499 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_deuteron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2143.923499); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_deuteron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.597214642032337e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_deuteron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-05) / static_cast<T>(-2143.923499));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mass ratio (2014).
/// \details electron-deuteron mass ratio = (0.0002724437107484 ± 9.6e-15) .
template <typename T> struct electron_deuteron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0002724437107484 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_deuteron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0002724437107484);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.6e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_deuteron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.6e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.523663649136514e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_deuteron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.6e-15) /
                    static_cast<T>(0.0002724437107484));
  }
};

/// \brief CODATA recommended value for the electron g factor (2014).
/// \details electron g factor = (-2.00231930436182 ± 5.2e-13) .
template <typename T> struct electron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.00231930436182 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-2.00231930436182);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.59698839674192e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-13) /
                    static_cast<T>(-2.00231930436182));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio (2014).
/// \details electron gyromag. ratio = (176085964400.0 ± 1100.0) s^-1 T^-1.
template <typename T> struct electron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 176085964400.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(176085964400.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1100.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1100.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.246948777253027e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1100.0) / static_cast<T>(176085964400.0));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio over 2 pi
/// (2014). \details electron gyromag. ratio over 2 pi = (28024.95164 ± 0.00017)
/// MHz T^-1.
template <typename T> struct electron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 28024.95164 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(28024.95164); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.066022956391443e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(28024.95164));
  }
};

/// \brief CODATA recommended value for the electron-helion mass ratio (2014).
/// \details electron-helion mass ratio = (0.0001819543074854 ± 8.8e-15) .
template <typename T> struct electron_helion_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001819543074854 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_helion_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001819543074854);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_helion_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.8363790457151504e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_helion_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-15) /
                    static_cast<T>(0.0001819543074854));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. (2014).
/// \details electron mag. mom. = (-9.28476462e-24 ± 5.7e-32) J T^-1.
template <typename T> struct electron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.28476462e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.28476462e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-32 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.1390893935230426e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-32) / static_cast<T>(-9.28476462e-24));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. anomaly (2014).
/// \details electron mag. mom. anomaly = (0.00115965218091 ± 2.6e-13) .
template <typename T> struct electron_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00115965218091 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00115965218091); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.242051576154268e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-13) / static_cast<T>(0.00115965218091));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to Bohr magneton
/// ratio (2014). \details electron mag. mom. to Bohr magneton ratio =
/// (-1.00115965218091 ± 2.6e-13) .
template <typename T> struct electron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.00115965218091 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-1.00115965218091);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.59698839674192e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-13) /
                    static_cast<T>(-1.00115965218091));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to nuclear
/// magneton ratio (2014). \details electron mag. mom. to nuclear magneton ratio
/// = (-1838.28197234 ± 1.7e-07) .
template <typename T> struct electron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1838.28197234 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1838.28197234); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.247765171934004e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(-1838.28197234));
  }
};

/// \brief CODATA recommended value for the electron mass (2014).
/// \details electron mass = (9.10938356e-31 ± 1.1e-38) kg.
template <typename T> struct electron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938356e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938356e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2075460350908751e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-38) / static_cast<T>(9.10938356e-31));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent
/// (2014). \details electron mass energy equivalent = (8.18710565e-14 ± 1e-21)
/// J.
template <typename T> struct electron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710565e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710565e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2214328759761392e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-21) / static_cast<T>(8.18710565e-14));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent in
/// MeV (2014). \details electron mass energy equivalent in MeV = (0.5109989461
/// ± 3.1e-09) MeV.
template <typename T> struct electron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.5109989461 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.5109989461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-09 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.066548715334034e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-09) / static_cast<T>(0.5109989461));
  }
};

/// \brief CODATA recommended value for the electron mass in u (2014).
/// \details electron mass in u = (0.00054857990907 ± 1.6e-14) u.
template <typename T> struct electron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054857990907 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054857990907); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.916621577907324e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-14) / static_cast<T>(0.00054857990907));
  }
};

/// \brief CODATA recommended value for the electron molar mass (2014).
/// \details electron molar mass = (5.4857990907e-07 ± 1.6e-17) kg mol^-1.
template <typename T> struct electron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.4857990907e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.4857990907e-07); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-17 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.916621577907325e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-17) / static_cast<T>(5.4857990907e-07));
  }
};

/// \brief CODATA recommended value for the electron-muon mag. mom. ratio
/// (2014). \details electron-muon mag. mom. ratio = (206.766988 ± 4.6e-06) .
template <typename T> struct electron_muon_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.766988 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_muon_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.766988); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_muon_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.224726511951705e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_muon_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-06) / static_cast<T>(206.766988));
  }
};

/// \brief CODATA recommended value for the electron-muon mass ratio (2014).
/// \details electron-muon mass ratio = (0.0048363317 ± 1.1e-10) .
template <typename T> struct electron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0048363317 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0048363317); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2744511092983964e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(0.0048363317));
  }
};

/// \brief CODATA recommended value for the electron-neutron mag. mom. ratio
/// (2014). \details electron-neutron mag. mom. ratio = (960.9205 ± 0.00023) .
template <typename T> struct electron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 960.9205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(960.9205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00023); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3935382791812643e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00023) / static_cast<T>(960.9205));
  }
};

/// \brief CODATA recommended value for the electron-neutron mass ratio (2014).
/// \details electron-neutron mass ratio = (0.00054386734428 ± 2.7e-13) .
template <typename T> struct electron_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054386734428 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054386734428); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.964445886293102e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-13) / static_cast<T>(0.00054386734428));
  }
};

/// \brief CODATA recommended value for the electron-proton mag. mom. ratio
/// (2014). \details electron-proton mag. mom. ratio = (-658.2106866 ± 2e-06) .
template <typename T> struct electron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2106866 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2106866); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0385407601493655e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-06) / static_cast<T>(-658.2106866));
  }
};

/// \brief CODATA recommended value for the electron-proton mass ratio (2014).
/// \details electron-proton mass ratio = (0.000544617021352 ± 5.2e-14) .
template <typename T> struct electron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000544617021352 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.000544617021352);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-14 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.547993904213849e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-14) /
                    static_cast<T>(0.000544617021352));
  }
};

/// \brief CODATA recommended value for the electron-tau mass ratio (2014).
/// \details electron-tau mass ratio = (0.000287592 ± 2.6e-08) .
template <typename T> struct electron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000287592 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000287592); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.04058527358202e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-08) / static_cast<T>(0.000287592));
  }
};

/// \brief CODATA recommended value for the electron to alpha particle mass
/// ratio (2014). \details electron to alpha particle mass ratio =
/// (0.0001370933554798 ± 4.5e-15) .
template <typename T> struct electron_to_alpha_particle_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001370933554798 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_to_alpha_particle_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001370933554798);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_to_alpha_particle_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.282434793612628e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_to_alpha_particle_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-15) /
                    static_cast<T>(0.0001370933554798));
  }
};

/// \brief CODATA recommended value for the electron to shielded helion mag.
/// mom. ratio (2014). \details electron to shielded helion mag. mom. ratio =
/// (864.058257 ± 1e-05) .
template <typename T> struct electron_to_shielded_helion_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 864.058257 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_to_shielded_helion_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(864.058257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1573293720633932e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-05) / static_cast<T>(864.058257));
  }
};

/// \brief CODATA recommended value for the electron to shielded proton mag.
/// mom. ratio (2014). \details electron to shielded proton mag. mom. ratio =
/// (-658.2275971 ± 7.2e-06) .
template <typename T> struct electron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2275971 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2275971); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0938465709614045e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-06) / static_cast<T>(-658.2275971));
  }
};

/// \brief CODATA recommended value for the electron-triton mass ratio (2014).
/// \details electron-triton mass ratio = (0.0001819200062203 ± 8.4e-15) .
template <typename T> struct electron_triton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001819200062203 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_triton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001819200062203);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_triton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.617414090140166e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_triton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-15) /
                    static_cast<T>(0.0001819200062203));
  }
};

/// \brief CODATA recommended value for the electron volt (2014).
/// \details electron volt = (1.6021766208e-19 ± 9.8e-28) J.
template <typename T> struct electron_volt {
  /// \brief Returns the constant's value.
  /// \details value = 1.6021766208e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6021766208e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.8e-28 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = electron_volt<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.8e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.116678943365593e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_volt<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.8e-28) / static_cast<T>(1.6021766208e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-atomic mass unit
/// relationship (2014). \details electron volt-atomic mass unit relationship =
/// (1.0735441105e-09 ± 6.6e-18) u.
template <typename T> struct electron_volt_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.0735441105e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// electron_volt_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.0735441105e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-18 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.147861029134676e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_volt_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-18) / static_cast<T>(1.0735441105e-09));
  }
};

/// \brief CODATA recommended value for the electron volt-hartree relationship
/// (2014). \details electron volt-hartree relationship = (0.03674932248
/// ± 2.3e-10) E_h.
template <typename T> struct electron_volt_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.03674932248 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.03674932248); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-10 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.258618784745552e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_volt_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-10) / static_cast<T>(0.03674932248));
  }
};

/// \brief CODATA recommended value for the electron volt-hertz relationship
/// (2014). \details electron volt-hertz relationship = (241798926200000.0 ±
/// 1500000.0) Hz.
template <typename T> struct electron_volt_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 241798926200000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798926200000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1500000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1500000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.2035014942924095e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_volt_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1500000.0) /
                    static_cast<T>(241798926200000.0));
  }
};

/// \brief CODATA recommended value for the electron volt-inverse meter
/// relationship (2014). \details electron volt-inverse meter relationship =
/// (806554.4005 ± 0.005) m^-1.
template <typename T> struct electron_volt_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 806554.4005 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(806554.4005); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.005 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.005); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.199209869663343e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_volt_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.005) / static_cast<T>(806554.4005));
  }
};

/// \brief CODATA recommended value for the electron volt-joule relationship
/// (2014). \details electron volt-joule relationship = (1.6021766208e-19
/// ± 9.8e-28) J.
template <typename T> struct electron_volt_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.6021766208e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6021766208e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.8e-28 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.8e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.116678943365593e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_volt_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.8e-28) / static_cast<T>(1.6021766208e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-kelvin relationship
/// (2014). \details electron volt-kelvin relationship = (11604.5221 ± 0.0067)
/// K.
template <typename T> struct electron_volt_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 11604.5221 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(11604.5221); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0067 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0067); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.7736113062338e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = electron_volt_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0067) / static_cast<T>(11604.5221));
  }
};

/// \brief CODATA recommended value for the electron volt-kilogram relationship
/// (2014). \details electron volt-kilogram relationship = (1.782661907e-36
/// ± 1.1e-44) kg.
template <typename T> struct electron_volt_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.782661907e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = electron_volt_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.782661907e-36); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-44 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// electron_volt_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-44); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.170547514818243e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// electron_volt_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-44) / static_cast<T>(1.782661907e-36));
  }
};

/// \brief CODATA recommended value for the elementary charge (2014).
/// \details elementary charge = (1.6021766208e-19 ± 9.8e-28) C.
template <typename T> struct elementary_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.6021766208e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = elementary_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6021766208e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.8e-28 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = elementary_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.8e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.116678943365593e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = elementary_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.8e-28) / static_cast<T>(1.6021766208e-19));
  }
};

/// \brief CODATA recommended value for the elementary charge over h (2014).
/// \details elementary charge over h = (241798926200000.0 ± 1500000.0) A J^-1.
template <typename T> struct elementary_charge_over_h {
  /// \brief Returns the constant's value.
  /// \details value = 241798926200000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = elementary_charge_over_h<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798926200000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1500000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = elementary_charge_over_h<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1500000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.2035014942924095e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = elementary_charge_over_h<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1500000.0) /
                    static_cast<T>(241798926200000.0));
  }
};

/// \brief CODATA recommended value for the Faraday constant (2014).
/// \details Faraday constant = (96485.33289 ± 0.00059) C mol^-1.
template <typename T> struct Faraday_constant {
  /// \brief Returns the constant's value.
  /// \details value = 96485.33289 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Faraday_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.33289); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00059 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Faraday_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00059); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.114919048604424e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Faraday_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00059) / static_cast<T>(96485.33289));
  }
};

/// \brief CODATA recommended value for the Faraday constant for conventional
/// electric current (2014). \details Faraday constant for conventional electric
/// current = (96485.3251 ± 0.0012) C_90 mol^-1.
template <typename T>
struct Faraday_constant_for_conventional_electric_current {
  /// \brief Returns the constant's value.
  /// \details value = 96485.3251 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// Faraday_constant_for_conventional_electric_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.3251); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0012 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Faraday_constant_for_conventional_electric_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0012); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2437124492831293e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Faraday_constant_for_conventional_electric_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0012) / static_cast<T>(96485.3251));
  }
};

/// \brief CODATA recommended value for the Fermi coupling constant (2014).
/// \details Fermi coupling constant = (1.1663787e-05 ± 6e-12) GeV^-2.
template <typename T> struct Fermi_coupling_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.1663787e-05 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Fermi_coupling_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.1663787e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-12 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Fermi_coupling_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.144126860341328e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Fermi_coupling_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-12) / static_cast<T>(1.1663787e-05));
  }
};

/// \brief CODATA recommended value for the fine-structure constant (2014).
/// \details fine-structure constant = (0.0072973525664 ± 1.7e-12) .
template <typename T> struct fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0072973525664 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0072973525664); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = fine_structure_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3296119853486266e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-12) / static_cast<T>(0.0072973525664));
  }
};

/// \brief CODATA recommended value for the first radiation constant (2014).
/// \details first radiation constant = (3.74177179e-16 ± 4.6e-24) W m^2.
template <typename T> struct first_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.74177179e-16 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = first_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.74177179e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-24 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = first_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2293641243150215e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = first_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-24) / static_cast<T>(3.74177179e-16));
  }
};

/// \brief CODATA recommended value for the first radiation constant for
/// spectral radiance (2014). \details first radiation constant for spectral
/// radiance = (1.191042953e-16 ± 1.5e-24) W m^2 sr^-1.
template <typename T> struct first_radiation_constant_for_spectral_radiance {
  /// \brief Returns the constant's value.
  /// \details value = 1.191042953e-16 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// first_radiation_constant_for_spectral_radiance<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.191042953e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-24 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// first_radiation_constant_for_spectral_radiance<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.259400423991258e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// first_radiation_constant_for_spectral_radiance<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-24) / static_cast<T>(1.191042953e-16));
  }
};

/// \brief CODATA recommended value for the hartree-atomic mass unit
/// relationship (2014). \details hartree-atomic mass unit relationship =
/// (2.9212623197e-08 ± 1.3e-17) u.
template <typename T> struct hartree_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.9212623197e-08 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9212623197e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hartree_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.450130997251572e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// hartree_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-17) / static_cast<T>(2.9212623197e-08));
  }
};

/// \brief CODATA recommended value for the hartree-electron volt relationship
/// (2014). \details hartree-electron volt relationship = (27.21138602
/// ± 1.7e-07) eV.
template <typename T> struct hartree_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138602 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138602); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hartree_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.24738482174529e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// hartree_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(27.21138602));
  }
};

/// \brief CODATA recommended value for the Hartree energy (2014).
/// \details Hartree energy = (4.35974465e-18 ± 5.4e-26) J.
template <typename T> struct Hartree_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974465e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Hartree_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974465e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-26 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Hartree_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.238604650848072e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Hartree_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-26) / static_cast<T>(4.35974465e-18));
  }
};

/// \brief CODATA recommended value for the Hartree energy in eV (2014).
/// \details Hartree energy in eV = (27.21138602 ± 1.7e-07) eV.
template <typename T> struct Hartree_energy_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138602 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Hartree_energy_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138602); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Hartree_energy_in_eV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.24738482174529e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Hartree_energy_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(27.21138602));
  }
};

/// \brief CODATA recommended value for the hartree-hertz relationship (2014).
/// \details hartree-hertz relationship = (6579683920711000.0 ± 39000.0) Hz.
template <typename T> struct hartree_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6579683920711000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(6579683920711000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 39000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hartree_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(39000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.92733639943386e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hartree_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(39000.0) /
                    static_cast<T>(6579683920711000.0));
  }
};

/// \brief CODATA recommended value for the hartree-inverse meter relationship
/// (2014). \details hartree-inverse meter relationship = (21947463.13702 ±
/// 0.00013) m^-1.
template <typename T> struct hartree_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 21947463.13702 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(21947463.13702); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00013 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hartree_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00013); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.9232358285966e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// hartree_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00013) / static_cast<T>(21947463.13702));
  }
};

/// \brief CODATA recommended value for the hartree-joule relationship (2014).
/// \details hartree-joule relationship = (4.35974465e-18 ± 5.4e-26) J.
template <typename T> struct hartree_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974465e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974465e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-26 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hartree_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.238604650848072e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hartree_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-26) / static_cast<T>(4.35974465e-18));
  }
};

/// \brief CODATA recommended value for the hartree-kelvin relationship (2014).
/// \details hartree-kelvin relationship = (315775.13 ± 0.18) K.
template <typename T> struct hartree_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 315775.13 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(315775.13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.18 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hartree_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.700258915260362e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hartree_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.18) / static_cast<T>(315775.13));
  }
};

/// \brief CODATA recommended value for the hartree-kilogram relationship
/// (2014). \details hartree-kilogram relationship = (4.850870129e-35 ± 6e-43)
/// kg.
template <typename T> struct hartree_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.850870129e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hartree_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.850870129e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-43 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hartree_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-43); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2368914937817334e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hartree_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-43) / static_cast<T>(4.850870129e-35));
  }
};

/// \brief CODATA recommended value for the helion-electron mass ratio (2014).
/// \details helion-electron mass ratio = (5495.88527922 ± 2.7e-07) .
template <typename T> struct helion_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5495.88527922 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5495.88527922); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.912766302107376e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-07) / static_cast<T>(5495.88527922));
  }
};

/// \brief CODATA recommended value for the helion g factor (2014).
/// \details helion g factor = (-4.255250616 ± 5e-08) .
template <typename T> struct helion_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -4.255250616 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.255250616); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175018923961775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-08) / static_cast<T>(-4.255250616));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. (2014).
/// \details helion mag. mom. = (-1.074617522e-26 ± 1.4e-34) J T^-1.
template <typename T> struct helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.074617522e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074617522e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.302789105275728e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-34) / static_cast<T>(-1.074617522e-26));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to Bohr magneton
/// ratio (2014). \details helion mag. mom. to Bohr magneton ratio =
/// (-0.001158740958 ± 1.4e-11) .
template <typename T> struct helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158740958 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158740958); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082079176837038e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158740958));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to nuclear magneton
/// ratio (2014). \details helion mag. mom. to nuclear magneton ratio =
/// (-2.127625308 ± 2.5e-08) .
template <typename T> struct helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127625308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127625308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175018923961775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127625308));
  }
};

/// \brief CODATA recommended value for the helion mass (2014).
/// \details helion mass = (5.0064127e-27 ± 6.2e-35) kg.
template <typename T> struct helion_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.0064127e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.0064127e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2384116874743467e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-35) / static_cast<T>(5.0064127e-27));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent
/// (2014). \details helion mass energy equivalent = (4.499539341e-10 ± 5.5e-18)
/// J.
template <typename T> struct helion_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.499539341e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.499539341e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.5e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2223473522908799e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.5e-18) / static_cast<T>(4.499539341e-10));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent in MeV
/// (2014). \details helion mass energy equivalent in MeV = (2808.391586
/// ± 1.7e-05) MeV.
template <typename T> struct helion_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.391586 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.391586); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// helion_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.0532869008531484e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// helion_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-05) / static_cast<T>(2808.391586));
  }
};

/// \brief CODATA recommended value for the helion mass in u (2014).
/// \details helion mass in u = (3.01493224673 ± 1.2e-10) u.
template <typename T> struct helion_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.01493224673 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.01493224673); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.980188945544371e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(3.01493224673));
  }
};

/// \brief CODATA recommended value for the helion molar mass (2014).
/// \details helion molar mass = (0.00301493224673 ± 1.2e-13) kg mol^-1.
template <typename T> struct helion_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00301493224673 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00301493224673); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.980188945544371e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-13) / static_cast<T>(0.00301493224673));
  }
};

/// \brief CODATA recommended value for the helion-proton mass ratio (2014).
/// \details helion-proton mass ratio = (2.99315267046 ± 2.9e-10) .
template <typename T> struct helion_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.99315267046 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = helion_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.99315267046); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = helion_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.688780758230804e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = helion_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-10) / static_cast<T>(2.99315267046));
  }
};

/// \brief CODATA recommended value for the hertz-atomic mass unit relationship
/// (2014). \details hertz-atomic mass unit relationship = (4.4398216616e-24 ±
/// 2e-33) u.
template <typename T> struct hertz_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.4398216616e-24 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4398216616e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-33 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hertz_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5046854410797445e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// hertz_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-33) / static_cast<T>(4.4398216616e-24));
  }
};

/// \brief CODATA recommended value for the hertz-electron volt relationship
/// (2014). \details hertz-electron volt relationship = (4.135667662e-15
/// ± 2.5e-23) eV.
template <typename T> struct hertz_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667662e-15 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667662e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-23 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hertz_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.044973156259383e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-23) / static_cast<T>(4.135667662e-15));
  }
};

/// \brief CODATA recommended value for the hertz-hartree relationship (2014).
/// \details hertz-hartree relationship = (1.5198298460088e-16 ± 9e-28) E_h.
template <typename T> struct hertz_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.5198298460088e-16 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.5198298460088e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-28 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hertz_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.92171552863944e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-28) /
                    static_cast<T>(1.5198298460088e-16));
  }
};

/// \brief CODATA recommended value for the hertz-inverse meter relationship
/// (2014). \details hertz-inverse meter relationship = (3.335640951e-09 ± 0.0)
/// m^-1.
template <typename T> struct hertz_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.335640951e-09 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.335640951e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// hertz_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.335640951e-09));
  }
};

/// \brief CODATA recommended value for the hertz-joule relationship (2014).
/// \details hertz-joule relationship = (6.62607004e-34 ± 8.1e-42) J.
template <typename T> struct hertz_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.62607004e-34 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62607004e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-42 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hertz_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2224440658040493e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-42) / static_cast<T>(6.62607004e-34));
  }
};

/// \brief CODATA recommended value for the hertz-kelvin relationship (2014).
/// \details hertz-kelvin relationship = (4.7992447e-11 ± 2.8e-17) K.
template <typename T> struct hertz_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.7992447e-11 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.7992447e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-17 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hertz_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.834251377096901e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-17) / static_cast<T>(4.7992447e-11));
  }
};

/// \brief CODATA recommended value for the hertz-kilogram relationship (2014).
/// \details hertz-kilogram relationship = (7.372497201e-51 ± 9.1e-59) kg.
template <typename T> struct hertz_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.372497201e-51 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = hertz_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.372497201e-51); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-59 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = hertz_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-59); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2343171861449716e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = hertz_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-59) / static_cast<T>(7.372497201e-51));
  }
};

/// \brief CODATA recommended value for the inverse fine-structure constant
/// (2014). \details inverse fine-structure constant = (137.035999139 ± 3.1e-08)
/// .
template <typename T> struct inverse_fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 137.035999139 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(137.035999139); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_fine_structure_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2621792955700425e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = inverse_fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-08) / static_cast<T>(137.035999139));
  }
};

/// \brief CODATA recommended value for the inverse meter-atomic mass unit
/// relationship (2014). \details inverse meter-atomic mass unit relationship =
/// (1.331025049e-15 ± 6.1e-25) u.
template <typename T> struct inverse_meter_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.331025049e-15 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// inverse_meter_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.331025049e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-25 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5829340361272195e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// inverse_meter_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-25) / static_cast<T>(1.331025049e-15));
  }
};

/// \brief CODATA recommended value for the inverse meter-electron volt
/// relationship (2014). \details inverse meter-electron volt relationship =
/// (1.2398419739e-06 ± 7.6e-15) eV.
template <typename T> struct inverse_meter_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.2398419739e-06 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.2398419739e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-15 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.129813443961515e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// inverse_meter_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-15) / static_cast<T>(1.2398419739e-06));
  }
};

/// \brief CODATA recommended value for the inverse meter-hartree relationship
/// (2014). \details inverse meter-hartree relationship = (4.556335252767e-08
/// ± 2.7e-19) E_h.
template <typename T> struct inverse_meter_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.556335252767e-08 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.556335252767e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-19 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.9258150469949e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// inverse_meter_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-19) /
                    static_cast<T>(4.556335252767e-08));
  }
};

/// \brief CODATA recommended value for the inverse meter-hertz relationship
/// (2014). \details inverse meter-hertz relationship = (299792458.0 ± 0.0) Hz.
template <typename T> struct inverse_meter_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = inverse_meter_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the inverse meter-joule relationship
/// (2014). \details inverse meter-joule relationship = (1.986445824e-25
/// ± 2.4e-33) J.
template <typename T> struct inverse_meter_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.986445824e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.986445824e-25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-33 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2081879963719564e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = inverse_meter_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-33) / static_cast<T>(1.986445824e-25));
  }
};

/// \brief CODATA recommended value for the inverse meter-kelvin relationship
/// (2014). \details inverse meter-kelvin relationship = (0.0143877736
/// ± 8.3e-09) K.
template <typename T> struct inverse_meter_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.0143877736 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0143877736); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-09 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.768786909463185e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = inverse_meter_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-09) / static_cast<T>(0.0143877736));
  }
};

/// \brief CODATA recommended value for the inverse meter-kilogram relationship
/// (2014). \details inverse meter-kilogram relationship = (2.210219057e-42
/// ± 2.7e-50) kg.
template <typename T> struct inverse_meter_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.210219057e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_meter_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.210219057e-42); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-50 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_meter_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-50); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2215983711880553e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// inverse_meter_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-50) / static_cast<T>(2.210219057e-42));
  }
};

/// \brief CODATA recommended value for the inverse of conductance quantum
/// (2014). \details inverse of conductance quantum = (12906.4037278 ± 2.9e-06)
/// ohm.
template <typename T> struct inverse_of_conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 12906.4037278 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = inverse_of_conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(12906.4037278); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-06 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// inverse_of_conductance_quantum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2469466019829277e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = inverse_of_conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-06) / static_cast<T>(12906.4037278));
  }
};

/// \brief CODATA recommended value for the Josephson constant (2014).
/// \details Josephson constant = (483597852500000.0 ± 3000000.0) Hz V^-1.
template <typename T> struct Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597852500000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597852500000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Josephson_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.2035014930096286e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Josephson_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3000000.0) /
                    static_cast<T>(483597852500000.0));
  }
};

/// \brief CODATA recommended value for the joule-atomic mass unit relationship
/// (2014). \details joule-atomic mass unit relationship = (6700535363.0 ± 82.0)
/// u.
template <typename T> struct joule_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6700535363.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6700535363.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 82.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// joule_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(82.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2237828107407602e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// joule_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(82.0) / static_cast<T>(6700535363.0));
  }
};

/// \brief CODATA recommended value for the joule-electron volt relationship
/// (2014). \details joule-electron volt relationship = (6.241509126e+18 ±
/// 38000000000.0) eV.
template <typename T> struct joule_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.241509126e+18 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.241509126e+18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 38000000000.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// joule_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(38000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.088271158926124e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(38000000000.0) /
                    static_cast<T>(6.241509126e+18));
  }
};

/// \brief CODATA recommended value for the joule-hartree relationship (2014).
/// \details joule-hartree relationship = (2.293712317e+17 ± 2800000000.0) E_h.
template <typename T> struct joule_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.293712317e+17 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.293712317e+17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2800000000.0 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = joule_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(2800000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2207285016728626e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2800000000.0) /
                    static_cast<T>(2.293712317e+17));
  }
};

/// \brief CODATA recommended value for the joule-hertz relationship (2014).
/// \details joule-hertz relationship = (1.509190205e+33 ± 1.9e+25) Hz.
template <typename T> struct joule_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.509190205e+33 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.509190205e+33); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e+25 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = joule_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e+25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.258953307346704e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e+25) / static_cast<T>(1.509190205e+33));
  }
};

/// \brief CODATA recommended value for the joule-inverse meter relationship
/// (2014). \details joule-inverse meter relationship = (5.034116651e+24
/// ± 6.2e+16) m^-1.
template <typename T> struct joule_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.034116651e+24 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.034116651e+24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e+16 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// joule_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e+16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2315964110145131e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e+16) / static_cast<T>(5.034116651e+24));
  }
};

/// \brief CODATA recommended value for the joule-kelvin relationship (2014).
/// \details joule-kelvin relationship = (7.2429731e+22 ± 4.2e+16) K.
template <typename T> struct joule_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.2429731e+22 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.2429731e+22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e+16 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = joule_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e+16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.798723731281012e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e+16) / static_cast<T>(7.2429731e+22));
  }
};

/// \brief CODATA recommended value for the joule-kilogram relationship (2014).
/// \details joule-kilogram relationship = (1.112650056e-17 ± 0.0) kg.
template <typename T> struct joule_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-17 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = joule_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = joule_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = joule_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-17));
  }
};

/// \brief CODATA recommended value for the kelvin-atomic mass unit relationship
/// (2014). \details kelvin-atomic mass unit relationship = (9.2510842e-14
/// ± 5.3e-20) u.
template <typename T> struct kelvin_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 9.2510842e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.2510842e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-20 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kelvin_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.729058222170327e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// kelvin_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-20) / static_cast<T>(9.2510842e-14));
  }
};

/// \brief CODATA recommended value for the kelvin-electron volt relationship
/// (2014). \details kelvin-electron volt relationship = (8.6173303e-05 ± 5e-11)
/// eV.
template <typename T> struct kelvin_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.6173303e-05 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.6173303e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-11 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kelvin_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.802261055259772e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-11) / static_cast<T>(8.6173303e-05));
  }
};

/// \brief CODATA recommended value for the kelvin-hartree relationship (2014).
/// \details kelvin-hartree relationship = (3.1668105e-06 ± 1.8e-12) E_h.
template <typename T> struct kelvin_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.1668105e-06 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.1668105e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-12 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kelvin_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.683952355216708e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-12) / static_cast<T>(3.1668105e-06));
  }
};

/// \brief CODATA recommended value for the kelvin-hertz relationship (2014).
/// \details kelvin-hertz relationship = (20836612000.0 ± 12000.0) Hz.
template <typename T> struct kelvin_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 20836612000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836612000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 12000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kelvin_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(12000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.759093656876656e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(12000.0) / static_cast<T>(20836612000.0));
  }
};

/// \brief CODATA recommended value for the kelvin-inverse meter relationship
/// (2014). \details kelvin-inverse meter relationship = (69.503457 ± 4e-05)
/// m^-1.
template <typename T> struct kelvin_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 69.503457 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(69.503457); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kelvin_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.755109418514248e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-05) / static_cast<T>(69.503457));
  }
};

/// \brief CODATA recommended value for the kelvin-joule relationship (2014).
/// \details kelvin-joule relationship = (1.38064852e-23 ± 7.9e-30) J.
template <typename T> struct kelvin_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.38064852e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.38064852e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.9e-30 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kelvin_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.9e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.721948696979012e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.9e-30) / static_cast<T>(1.38064852e-23));
  }
};

/// \brief CODATA recommended value for the kelvin-kilogram relationship (2014).
/// \details kelvin-kilogram relationship = (1.53617865e-40 ± 8.8e-47) kg.
template <typename T> struct kelvin_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.53617865e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kelvin_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.53617865e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-47 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kelvin_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-47); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.72850039284168e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kelvin_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-47) / static_cast<T>(1.53617865e-40));
  }
};

/// \brief CODATA recommended value for the kilogram-atomic mass unit
/// relationship (2014). \details kilogram-atomic mass unit relationship =
/// (6.022140857e+26 ± 7.4e+18) u.
template <typename T> struct kilogram_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.022140857e+26 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.022140857e+26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e+18 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kilogram_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e+18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2287988899161016e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// kilogram_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e+18) / static_cast<T>(6.022140857e+26));
  }
};

/// \brief CODATA recommended value for the kilogram-electron volt relationship
/// (2014). \details kilogram-electron volt relationship = (5.60958865e+35
/// ± 3.4e+27) eV.
template <typename T> struct kilogram_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.60958865e+35 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.60958865e+35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e+27 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kilogram_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.061050483621468e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// kilogram_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e+27) / static_cast<T>(5.60958865e+35));
  }
};

/// \brief CODATA recommended value for the kilogram-hartree relationship
/// (2014). \details kilogram-hartree relationship = (2.061485823e+34 ± 2.5e+26)
/// E_h.
template <typename T> struct kilogram_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.061485823e+34 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.061485823e+34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e+26 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kilogram_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e+26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2127175322320904e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kilogram_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e+26) / static_cast<T>(2.061485823e+34));
  }
};

/// \brief CODATA recommended value for the kilogram-hertz relationship (2014).
/// \details kilogram-hertz relationship = (1.356392512e+50 ± 1.7e+42) Hz.
template <typename T> struct kilogram_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.356392512e+50 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.356392512e+50); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e+42 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kilogram_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e+42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2533245243984359e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kilogram_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e+42) / static_cast<T>(1.356392512e+50));
  }
};

/// \brief CODATA recommended value for the kilogram-inverse meter relationship
/// (2014). \details kilogram-inverse meter relationship = (4.524438411e+41
/// ± 5.6e+33) m^-1.
template <typename T> struct kilogram_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.524438411e+41 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.524438411e+41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.6e+33 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// kilogram_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.6e+33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2377226721409337e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// kilogram_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.6e+33) / static_cast<T>(4.524438411e+41));
  }
};

/// \brief CODATA recommended value for the kilogram-joule relationship (2014).
/// \details kilogram-joule relationship = (8.987551787e+16 ± 0.0) J.
template <typename T> struct kilogram_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.987551787e+16 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.987551787e+16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kilogram_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kilogram_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.987551787e+16));
  }
};

/// \brief CODATA recommended value for the kilogram-kelvin relationship (2014).
/// \details kilogram-kelvin relationship = (6.5096595e+39 ± 3.7e+33) K.
template <typename T> struct kilogram_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.5096595e+39 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = kilogram_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.5096595e+39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e+33 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = kilogram_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e+33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.683861037585759e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = kilogram_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e+33) / static_cast<T>(6.5096595e+39));
  }
};

/// \brief CODATA recommended value for the lattice parameter of silicon (2014).
/// \details lattice parameter of silicon = (5.431020504e-10 ± 8.9e-18) m.
template <typename T> struct lattice_parameter_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 5.431020504e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = lattice_parameter_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.431020504e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = lattice_parameter_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.6387343766139464e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = lattice_parameter_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-18) / static_cast<T>(5.431020504e-10));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K, 100
/// kPa) (2014). \details Loschmidt constant (273.15 K, 100 kPa) =
/// (2.6516467e+25 ± 1.5e+19) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.6516467e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Loschmidt_constant_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.6516467e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e+19 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.656862205662618e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Loschmidt_constant_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e+19) / static_cast<T>(2.6516467e+25));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K,
/// 101.325 kPa) (2014). \details Loschmidt constant (273.15 K, 101.325 kPa) =
/// (2.6867811e+25 ± 1.5e+19) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.6867811e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Loschmidt_constant_27315_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.6867811e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e+19 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.582888758596672e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e+19) / static_cast<T>(2.6867811e+25));
  }
};

/// \brief CODATA recommended value for the mag. constant (2014).
/// \details mag. constant = (1.2566370614e-06 ± 0.0) N A^-2.
template <typename T> struct mag_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.2566370614e-06 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = mag_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.2566370614e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = mag_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = mag_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.2566370614e-06));
  }
};

/// \brief CODATA recommended value for the mag. flux quantum (2014).
/// \details mag. flux quantum = (2.067833831e-15 ± 1.3e-23) Wb.
template <typename T> struct mag_flux_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 2.067833831e-15 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = mag_flux_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.067833831e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-23 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = mag_flux_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.286772082509758e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = mag_flux_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-23) / static_cast<T>(2.067833831e-15));
  }
};

/// \brief CODATA recommended value for the molar gas constant (2014).
/// \details molar gas constant = (8.3144598 ± 4.8e-06) J mol^-1 K^-1.
template <typename T> struct molar_gas_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.3144598 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_gas_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.3144598); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-06 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_gas_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.773074998811107e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_gas_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-06) / static_cast<T>(8.3144598));
  }
};

/// \brief CODATA recommended value for the molar mass constant (2014).
/// \details molar mass constant = (0.001 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.001 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.001));
  }
};

/// \brief CODATA recommended value for the molar mass of carbon-12 (2014).
/// \details molar mass of carbon-12 = (0.012 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_of_carbon_12 {
  /// \brief Returns the constant's value.
  /// \details value = 0.012 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_mass_of_carbon_12<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.012); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_mass_of_carbon_12<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_mass_of_carbon_12<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.012));
  }
};

/// \brief CODATA recommended value for the molar Planck constant (2014).
/// \details molar Planck constant = (3.990312711e-10 ± 1.8e-19) J s mol^-1.
template <typename T> struct molar_Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.990312711e-10 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.990312711e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-19 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5109246577041013e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-19) / static_cast<T>(3.990312711e-10));
  }
};

/// \brief CODATA recommended value for the molar Planck constant times c
/// (2014). \details molar Planck constant times c = (0.119626565582 ± 5.4e-11)
/// J m mol^-1.
template <typename T> struct molar_Planck_constant_times_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.119626565582 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_Planck_constant_times_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.119626565582); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-11 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_Planck_constant_times_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5140475058597927e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_Planck_constant_times_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-11) / static_cast<T>(0.119626565582));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 100 kPa) (2014). \details molar volume of ideal gas (273.15 K, 100 kPa) =
/// (0.022710947 ± 1.3e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022710947 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_volume_of_ideal_gas_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.022710947); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.724111812686631e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.022710947));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 101.325 kPa) (2014). \details molar volume of ideal gas (273.15 K, 101.325
/// kPa) = (0.022413962 ± 1.3e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022413962 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.022413962); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.799956295098564e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.022413962));
  }
};

/// \brief CODATA recommended value for the molar volume of silicon (2014).
/// \details molar volume of silicon = (1.205883214e-05 ± 6.1e-13) m^3 mol^-1.
template <typename T> struct molar_volume_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 1.205883214e-05 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = molar_volume_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.205883214e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-13 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = molar_volume_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.058532973326553e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = molar_volume_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-13) / static_cast<T>(1.205883214e-05));
  }
};

/// \brief CODATA recommended value for the Mo x unit (2014).
/// \details Mo x unit = (1.00209952e-13 ± 5.3e-20) m.
template <typename T> struct Mo_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00209952e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Mo_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00209952e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Mo_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.288895857369535e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Mo_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-20) / static_cast<T>(1.00209952e-13));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength (2014).
/// \details muon Compton wavelength = (1.173444111e-14 ± 2.6e-22) m.
template <typename T> struct muon_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.173444111e-14 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.173444111e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2156999005127736e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-22) / static_cast<T>(1.173444111e-14));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength over 2 pi
/// (2014). \details muon Compton wavelength over 2 pi = (1.867594308e-15
/// ± 4.2e-23) m.
template <typename T> struct muon_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.867594308e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.867594308e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-23 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// muon_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.248882416276887e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-23) / static_cast<T>(1.867594308e-15));
  }
};

/// \brief CODATA recommended value for the muon-electron mass ratio (2014).
/// \details muon-electron mass ratio = (206.7682826 ± 4.6e-06) .
template <typename T> struct muon_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7682826 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7682826); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.224712582683124e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-06) / static_cast<T>(206.7682826));
  }
};

/// \brief CODATA recommended value for the muon g factor (2014).
/// \details muon g factor = (-2.0023318418 ± 1.3e-09) .
template <typename T> struct muon_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.0023318418 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.0023318418); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.492430339775063e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-09) / static_cast<T>(-2.0023318418));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. (2014).
/// \details muon mag. mom. = (-4.49044826e-26 ± 1e-33) J T^-1.
template <typename T> struct muon_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -4.49044826e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.49044826e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2269491643134978e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-33) / static_cast<T>(-4.49044826e-26));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. anomaly (2014).
/// \details muon mag. mom. anomaly = (0.00116592089 ± 6.3e-10) .
template <typename T> struct muon_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00116592089 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00116592089); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.403454088553126e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-10) / static_cast<T>(0.00116592089));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to Bohr magneton
/// ratio (2014). \details muon mag. mom. to Bohr magneton ratio =
/// (-0.00484197048 ± 1.1e-10) .
template <typename T> struct muon_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00484197048 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00484197048); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.271802367535293e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(-0.00484197048));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to nuclear magneton
/// ratio (2014). \details muon mag. mom. to nuclear magneton ratio =
/// (-8.89059705 ± 2e-07) .
template <typename T> struct muon_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -8.89059705 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-8.89059705); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2495677047921095e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(-8.89059705));
  }
};

/// \brief CODATA recommended value for the muon mass (2014).
/// \details muon mass = (1.883531594e-28 ± 4.8e-36) kg.
template <typename T> struct muon_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.883531594e-28 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.883531594e-28); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.548404292919973e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-36) / static_cast<T>(1.883531594e-28));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent (2014).
/// \details muon mass energy equivalent = (1.692833774e-11 ± 4.3e-19) J.
template <typename T> struct muon_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.692833774e-11 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.692833774e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5401194529806214e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-19) / static_cast<T>(1.692833774e-11));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent in MeV
/// (2014). \details muon mass energy equivalent in MeV = (105.6583745
/// ± 2.4e-06) MeV.
template <typename T> struct muon_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 105.6583745 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(105.6583745); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// muon_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.271471628592961e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// muon_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-06) / static_cast<T>(105.6583745));
  }
};

/// \brief CODATA recommended value for the muon mass in u (2014).
/// \details muon mass in u = (0.1134289257 ± 2.5e-09) u.
template <typename T> struct muon_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.1134289257 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1134289257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2040233428747004e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.1134289257));
  }
};

/// \brief CODATA recommended value for the muon molar mass (2014).
/// \details muon molar mass = (0.0001134289257 ± 2.5e-12) kg mol^-1.
template <typename T> struct muon_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001134289257 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0001134289257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2040233428747e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-12) / static_cast<T>(0.0001134289257));
  }
};

/// \brief CODATA recommended value for the muon-neutron mass ratio (2014).
/// \details muon-neutron mass ratio = (0.1124545167 ± 2.5e-09) .
template <typename T> struct muon_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1124545167 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1124545167); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2231210211585925e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.1124545167));
  }
};

/// \brief CODATA recommended value for the muon-proton mag. mom. ratio (2014).
/// \details muon-proton mag. mom. ratio = (-3.183345142 ± 7.1e-08) .
template <typename T> struct muon_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -3.183345142 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.183345142); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.23035821856856e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-08) / static_cast<T>(-3.183345142));
  }
};

/// \brief CODATA recommended value for the muon-proton mass ratio (2014).
/// \details muon-proton mass ratio = (0.1126095262 ± 2.5e-09) .
template <typename T> struct muon_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1126095262 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1126095262); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2200608459713066e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.1126095262));
  }
};

/// \brief CODATA recommended value for the muon-tau mass ratio (2014).
/// \details muon-tau mass ratio = (0.0594649 ± 5.4e-06) .
template <typename T> struct muon_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0594649 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = muon_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0594649); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = muon_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.080987271482841e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = muon_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-06) / static_cast<T>(0.0594649));
  }
};

/// \brief CODATA recommended value for the natural unit of action (2014).
/// \details natural unit of action = (1.0545718e-34 ± 1.3e-42) J s.
template <typename T> struct natural_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.0545718e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.0545718e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2327278237479894e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-42) / static_cast<T>(1.0545718e-34));
  }
};

/// \brief CODATA recommended value for the natural unit of action in eV s
/// (2014). \details natural unit of action in eV s = (6.582119514e-16 ± 4e-24)
/// eV s.
template <typename T> struct natural_unit_of_action_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.582119514e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_action_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.582119514e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-24 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// natural_unit_of_action_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.077069842764329e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_action_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-24) / static_cast<T>(6.582119514e-16));
  }
};

/// \brief CODATA recommended value for the natural unit of energy (2014).
/// \details natural unit of energy = (8.18710565e-14 ± 1e-21) J.
template <typename T> struct natural_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710565e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710565e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2214328759761392e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-21) / static_cast<T>(8.18710565e-14));
  }
};

/// \brief CODATA recommended value for the natural unit of energy in MeV
/// (2014). \details natural unit of energy in MeV = (0.5109989461 ± 3.1e-09)
/// MeV.
template <typename T> struct natural_unit_of_energy_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.5109989461 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_energy_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.5109989461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-09 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_energy_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.066548715334034e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_energy_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-09) / static_cast<T>(0.5109989461));
  }
};

/// \brief CODATA recommended value for the natural unit of length (2014).
/// \details natural unit of length = (3.8615926764e-13 ± 1.8e-22) m.
template <typename T> struct natural_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926764e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926764e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.661289138548046e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-22) / static_cast<T>(3.8615926764e-13));
  }
};

/// \brief CODATA recommended value for the natural unit of mass (2014).
/// \details natural unit of mass = (9.10938356e-31 ± 1.1e-38) kg.
template <typename T> struct natural_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938356e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938356e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2075460350908751e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-38) / static_cast<T>(9.10938356e-31));
  }
};

/// \brief CODATA recommended value for the natural unit of mom.um (2014).
/// \details natural unit of mom.um = (2.730924488e-22 ± 3.4e-30) kg m s^-1.
template <typename T> struct natural_unit_of_momum {
  /// \brief Returns the constant's value.
  /// \details value = 2.730924488e-22 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_momum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.730924488e-22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-30 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_momum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2449996383788699e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_momum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-30) / static_cast<T>(2.730924488e-22));
  }
};

/// \brief CODATA recommended value for the natural unit of mom.um in MeV/c
/// (2014). \details natural unit of mom.um in MeV/c = (0.5109989461 ± 3.1e-09)
/// MeV/c.
template <typename T> struct natural_unit_of_momum_in_MeV_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.5109989461 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_momum_in_MeV_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.5109989461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-09 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// natural_unit_of_momum_in_MeV_c<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.066548715334034e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_momum_in_MeV_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-09) / static_cast<T>(0.5109989461));
  }
};

/// \brief CODATA recommended value for the natural unit of time (2014).
/// \details natural unit of time = (1.28808866712e-21 ± 5.8e-31) s.
template <typename T> struct natural_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 1.28808866712e-21 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.28808866712e-21);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.8e-31 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.8e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5027956134169334e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.8e-31) /
                    static_cast<T>(1.28808866712e-21));
  }
};

/// \brief CODATA recommended value for the natural unit of velocity (2014).
/// \details natural unit of velocity = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct natural_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = natural_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = natural_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = natural_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength (2014).
/// \details neutron Compton wavelength = (1.31959090481e-15 ± 8.8e-25) m.
template <typename T> struct neutron_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.31959090481e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.31959090481e-15);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.668733444526932e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-25) /
                    static_cast<T>(1.31959090481e-15));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength over 2 pi
/// (2014). \details neutron Compton wavelength over 2 pi = (2.1001941536e-16
/// ± 1.4e-25) m.
template <typename T> struct neutron_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.1001941536e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1001941536e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.666050363011543e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-25) / static_cast<T>(2.1001941536e-16));
  }
};

/// \brief CODATA recommended value for the neutron-electron mag. mom. ratio
/// (2014). \details neutron-electron mag. mom. ratio = (0.00104066882
/// ± 2.5e-10) .
template <typename T> struct neutron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00104066882 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00104066882); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4023012431563005e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(0.00104066882));
  }
};

/// \brief CODATA recommended value for the neutron-electron mass ratio (2014).
/// \details neutron-electron mass ratio = (1838.68366158 ± 9e-07) .
template <typename T> struct neutron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1838.68366158 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1838.68366158); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.894806098546721e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(1838.68366158));
  }
};

/// \brief CODATA recommended value for the neutron g factor (2014).
/// \details neutron g factor = (-3.82608545 ± 9e-07) .
template <typename T> struct neutron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -3.82608545 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.82608545); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3522736534804782e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(-3.82608545));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio (2014).
/// \details neutron gyromag. ratio = (183247172.0 ± 43.0) s^-1 T^-1.
template <typename T> struct neutron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 183247172.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(183247172.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 43.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(43.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.346557359149859e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(43.0) / static_cast<T>(183247172.0));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio over 2 pi
/// (2014). \details neutron gyromag. ratio over 2 pi = (29.1646933 ± 6.9e-06)
/// MHz T^-1.
template <typename T> struct neutron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 29.1646933 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(29.1646933); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.9e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3658743567174767e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.9e-06) / static_cast<T>(29.1646933));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. (2014).
/// \details neutron mag. mom. = (-9.662365e-27 ± 2.3e-33) J T^-1.
template <typename T> struct neutron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.662365e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.662365e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3803696093037261e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-33) / static_cast<T>(-9.662365e-27));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to Bohr magneton
/// ratio (2014). \details neutron mag. mom. to Bohr magneton ratio =
/// (-0.00104187563 ± 2.5e-10) .
template <typename T> struct neutron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00104187563 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00104187563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.399518645042115e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(-0.00104187563));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to nuclear
/// magneton ratio (2014). \details neutron mag. mom. to nuclear magneton ratio
/// = (-1.91304273 ± 4.5e-07) .
template <typename T> struct neutron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.91304273 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.91304273); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.352273647332488e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-07) / static_cast<T>(-1.91304273));
  }
};

/// \brief CODATA recommended value for the neutron mass (2014).
/// \details neutron mass = (1.674927471e-27 ± 2.1e-35) kg.
template <typename T> struct neutron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.674927471e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.674927471e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2537856333242981e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-35) / static_cast<T>(1.674927471e-27));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent
/// (2014). \details neutron mass energy equivalent = (1.505349739e-10
/// ± 1.9e-18) J.
template <typename T> struct neutron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.505349739e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.505349739e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2621651638656177e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-18) / static_cast<T>(1.505349739e-10));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent in
/// MeV (2014). \details neutron mass energy equivalent in MeV = (939.5654133
/// ± 5.8e-06) MeV.
template <typename T> struct neutron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 939.5654133 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(939.5654133); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.8e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.173066736917103e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.8e-06) / static_cast<T>(939.5654133));
  }
};

/// \brief CODATA recommended value for the neutron mass in u (2014).
/// \details neutron mass in u = (1.00866491588 ± 4.9e-10) u.
template <typename T> struct neutron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.00866491588 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00866491588); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.857906647546119e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(1.00866491588));
  }
};

/// \brief CODATA recommended value for the neutron molar mass (2014).
/// \details neutron molar mass = (0.00100866491588 ± 4.9e-13) kg mol^-1.
template <typename T> struct neutron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00100866491588 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00100866491588); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.857906647546121e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-13) / static_cast<T>(0.00100866491588));
  }
};

/// \brief CODATA recommended value for the neutron-muon mass ratio (2014).
/// \details neutron-muon mass ratio = (8.89248408 ± 2e-07) .
template <typename T> struct neutron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.89248408 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.89248408); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2490903351721268e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(8.89248408));
  }
};

/// \brief CODATA recommended value for the neutron-proton mag. mom. ratio
/// (2014). \details neutron-proton mag. mom. ratio = (-0.68497934 ± 1.6e-07) .
template <typename T> struct neutron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68497934 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68497934); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.335836873561763e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68497934));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// (2014). \details neutron-proton mass difference = (2.30557377e-30 ± 8.5e-37)
/// .
template <typename T> struct neutron_proton_mass_difference {
  /// \brief Returns the constant's value.
  /// \details value = 2.30557377e-30 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_proton_mass_difference<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.30557377e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-37 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_proton_mass_difference<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.686717861992332e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_proton_mass_difference<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-37) / static_cast<T>(2.30557377e-30));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent (2014). \details neutron-proton mass difference energy
/// equivalent = (2.07214637e-13 ± 7.6e-20) .
template <typename T> struct neutron_proton_mass_difference_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.07214637e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.07214637e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-20 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.667694575070003e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-20) / static_cast<T>(2.07214637e-13));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent in MeV (2014). \details neutron-proton mass difference
/// energy equivalent in MeV = (1.29333205 ± 4.8e-07) .
template <typename T>
struct neutron_proton_mass_difference_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.29333205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.29333205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.7113438888334975e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-07) / static_cast<T>(1.29333205));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference in u
/// (2014). \details neutron-proton mass difference in u = (0.001388449
/// ± 5.1e-10) .
template <typename T> struct neutron_proton_mass_difference_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.001388449 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_proton_mass_difference_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001388449); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_proton_mass_difference_in_u<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.6731633643007413e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_proton_mass_difference_in_u<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-10) / static_cast<T>(0.001388449));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass ratio (2014).
/// \details neutron-proton mass ratio = (1.00137841898 ± 5.1e-10) .
template <typename T> struct neutron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.00137841898 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00137841898); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.092979740061545e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-10) / static_cast<T>(1.00137841898));
  }
};

/// \brief CODATA recommended value for the neutron-tau mass ratio (2014).
/// \details neutron-tau mass ratio = (0.52879 ± 4.8e-05) .
template <typename T> struct neutron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.52879 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.52879); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = neutron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.077327483500067e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = neutron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-05) / static_cast<T>(0.52879));
  }
};

/// \brief CODATA recommended value for the neutron to shielded proton mag. mom.
/// ratio (2014). \details neutron to shielded proton mag. mom. ratio =
/// (-0.68499694 ± 1.6e-07) .
template <typename T> struct neutron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68499694 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = neutron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68499694); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3357768576309262e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68499694));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// (2014). \details Newtonian constant of gravitation = (6.67408e-11 ± 3.1e-15)
/// m^3 kg^-1 s^-2.
template <typename T> struct Newtonian_constant_of_gravitation {
  /// \brief Returns the constant's value.
  /// \details value = 6.67408e-11 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Newtonian_constant_of_gravitation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.67408e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-15 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.64483494354278e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Newtonian_constant_of_gravitation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-15) / static_cast<T>(6.67408e-11));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// over h-bar c (2014). \details Newtonian constant of gravitation over h-bar c
/// = (6.70861e-39 ± 3.1e-43) (GeV/c^2)^-2.
template <typename T> struct Newtonian_constant_of_gravitation_over_h_bar_c {
  /// \brief Returns the constant's value.
  /// \details value = 6.70861e-39 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(6.70861e-39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-43 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-43); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.620927435042431e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-43) / static_cast<T>(6.70861e-39));
  }
};

/// \brief CODATA recommended value for the nuclear magneton (2014).
/// \details nuclear magneton = (5.050783699e-27 ± 3.1e-35) J T^-1.
template <typename T> struct nuclear_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 5.050783699e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = nuclear_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.050783699e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-35 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = nuclear_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.137661370479528e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = nuclear_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-35) / static_cast<T>(5.050783699e-27));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in eV/T (2014).
/// \details nuclear magneton in eV/T = (3.152451255e-08 ± 1.5e-17) eV T^-1.
template <typename T> struct nuclear_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 3.152451255e-08 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = nuclear_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.152451255e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-17 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = nuclear_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.758202042365917e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = nuclear_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-17) / static_cast<T>(3.152451255e-08));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in inverse meters
/// per tesla (2014). \details nuclear magneton in inverse meters per tesla =
/// (0.02542623432 ± 1.6e-10) m^-1 T^-1.
template <typename T> struct nuclear_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 0.02542623432 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.02542623432); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-10 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.2927131869521755e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-10) / static_cast<T>(0.02542623432));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in K/T (2014).
/// \details nuclear magneton in K/T = (0.0003658269 ± 2.1e-10) K T^-1.
template <typename T> struct nuclear_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.0003658269 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = nuclear_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0003658269); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-10 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = nuclear_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.740419854308144e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = nuclear_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-10) / static_cast<T>(0.0003658269));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in MHz/T (2014).
/// \details nuclear magneton in MHz/T = (7.622593285 ± 4.7e-08) MHz T^-1.
template <typename T> struct nuclear_magneton_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 7.622593285 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = nuclear_magneton_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.622593285); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-08 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = nuclear_magneton_in_MHz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.165880592434101e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = nuclear_magneton_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-08) / static_cast<T>(7.622593285));
  }
};

/// \brief CODATA recommended value for the Planck constant (2014).
/// \details Planck constant = (6.62607004e-34 ± 8.1e-42) J s.
template <typename T> struct Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.62607004e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62607004e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2224440658040493e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-42) / static_cast<T>(6.62607004e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant in eV s (2014).
/// \details Planck constant in eV s = (4.135667662e-15 ± 2.5e-23) eV s.
template <typename T> struct Planck_constant_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667662e-15 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_constant_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667662e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_constant_in_eV_s<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.044973156259383e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_constant_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-23) / static_cast<T>(4.135667662e-15));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi (2014).
/// \details Planck constant over 2 pi = (1.0545718e-34 ± 1.3e-42) J s.
template <typename T> struct Planck_constant_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.0545718e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_constant_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.0545718e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_constant_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2327278237479894e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_constant_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-42) / static_cast<T>(1.0545718e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi in eV s
/// (2014). \details Planck constant over 2 pi in eV s = (6.582119514e-16 ±
/// 4e-24) eV s.
template <typename T> struct Planck_constant_over_2_pi_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.582119514e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_constant_over_2_pi_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.582119514e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-24 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.077069842764329e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_constant_over_2_pi_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-24) / static_cast<T>(6.582119514e-16));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi times c in
/// MeV fm (2014). \details Planck constant over 2 pi times c in MeV fm =
/// (197.3269788 ± 1.2e-06) MeV fm.
template <typename T> struct Planck_constant_over_2_pi_times_c_in_MeV_fm {
  /// \brief Returns the constant's value.
  /// \details value = 197.3269788 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(197.3269788); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-06 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.081276910524512e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-06) / static_cast<T>(197.3269788));
  }
};

/// \brief CODATA recommended value for the Planck length (2014).
/// \details Planck length = (1.616229e-35 ± 3.8e-40) m.
template <typename T> struct Planck_length {
  /// \brief Returns the constant's value.
  /// \details value = 1.616229e-35 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.616229e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-40 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3511519716574815e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-40) / static_cast<T>(1.616229e-35));
  }
};

/// \brief CODATA recommended value for the Planck mass (2014).
/// \details Planck mass = (2.17647e-08 ± 5.1e-13) kg.
template <typename T> struct Planck_mass {
  /// \brief Returns the constant's value.
  /// \details value = 2.17647e-08 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.17647e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-13 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3432438765523993e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-13) / static_cast<T>(2.17647e-08));
  }
};

/// \brief CODATA recommended value for the Planck mass energy equivalent in GeV
/// (2014). \details Planck mass energy equivalent in GeV = (1.22091e+19 ±
/// 290000000000000.0) GeV.
template <typename T> struct Planck_mass_energy_equivalent_in_GeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.22091e+19 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_mass_energy_equivalent_in_GeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.22091e+19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 290000000000000.0 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Planck_mass_energy_equivalent_in_GeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(290000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.375277456978811e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Planck_mass_energy_equivalent_in_GeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(290000000000000.0) /
                    static_cast<T>(1.22091e+19));
  }
};

/// \brief CODATA recommended value for the Planck temperature (2014).
/// \details Planck temperature = (1.416808e+32 ± 3.3e+27) K.
template <typename T> struct Planck_temperature {
  /// \brief Returns the constant's value.
  /// \details value = 1.416808e+32 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_temperature<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.416808e+32); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e+27 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_temperature<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.329179394808612e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_temperature<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e+27) / static_cast<T>(1.416808e+32));
  }
};

/// \brief CODATA recommended value for the Planck time (2014).
/// \details Planck time = (5.39116e-44 ± 1.3e-48) s.
template <typename T> struct Planck_time {
  /// \brief Returns the constant's value.
  /// \details value = 5.39116e-44 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Planck_time<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.39116e-44); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-48 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Planck_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-48); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.411354884663041e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Planck_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-48) / static_cast<T>(5.39116e-44));
  }
};

/// \brief CODATA recommended value for the proton charge to mass quotient
/// (2014). \details proton charge to mass quotient = (95788332.26 ± 0.59) C
/// kg^-1.
template <typename T> struct proton_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = 95788332.26 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(95788332.26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.59 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.59); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.159414054715477e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.59) / static_cast<T>(95788332.26));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength (2014).
/// \details proton Compton wavelength = (1.32140985396e-15 ± 6.1e-25) m.
template <typename T> struct proton_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.32140985396e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.32140985396e-15);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.6162816038638765e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-25) /
                    static_cast<T>(1.32140985396e-15));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength over 2 pi
/// (2014). \details proton Compton wavelength over 2 pi = (2.10308910109e-16
/// ± 9.7e-26) m.
template <typename T> struct proton_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.10308910109e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.10308910109e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-26 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.6122629778132714e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// proton_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-26) /
                    static_cast<T>(2.10308910109e-16));
  }
};

/// \brief CODATA recommended value for the proton-electron mass ratio (2014).
/// \details proton-electron mass ratio = (1836.15267389 ± 1.7e-07) .
template <typename T> struct proton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1836.15267389 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1836.15267389); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.258489362970278e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(1836.15267389));
  }
};

/// \brief CODATA recommended value for the proton g factor (2014).
/// \details proton g factor = (5.585694702 ± 1.7e-08) .
template <typename T> struct proton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.585694702 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.585694702); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.043488931450733e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-08) / static_cast<T>(5.585694702));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio (2014).
/// \details proton gyromag. ratio = (267522190.0 ± 1.8) s^-1 T^-1.
template <typename T> struct proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267522190.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267522190.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.728413818681733e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8) / static_cast<T>(267522190.0));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio over 2 pi
/// (2014). \details proton gyromag. ratio over 2 pi = (42.57747892 ± 2.9e-07)
/// MHz T^-1.
template <typename T> struct proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.57747892 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.57747892); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.811112526058412e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-07) / static_cast<T>(42.57747892));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. (2014).
/// \details proton mag. mom. = (1.4106067873e-26 ± 9.7e-35) J T^-1.
template <typename T> struct proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.4106067873e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.4106067873e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-35 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.876473364038237e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-35) / static_cast<T>(1.4106067873e-26));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to Bohr magneton
/// ratio (2014). \details proton mag. mom. to Bohr magneton ratio =
/// (0.0015210322053 ± 4.6e-12) .
template <typename T> struct proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0015210322053 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0015210322053); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0242620662280593e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-12) / static_cast<T>(0.0015210322053));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to nuclear magneton
/// ratio (2014). \details proton mag. mom. to nuclear magneton ratio =
/// (2.7928473508 ± 8.5e-09) .
template <typename T> struct proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.7928473508 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.7928473508); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.043488931668682e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-09) / static_cast<T>(2.7928473508));
  }
};

/// \brief CODATA recommended value for the proton mag. shielding correction
/// (2014). \details proton mag. shielding correction = (2.5691e-05 ± 1.1e-08) .
template <typename T> struct proton_mag_shielding_correction {
  /// \brief Returns the constant's value.
  /// \details value = 2.5691e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mag_shielding_correction<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.5691e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_mag_shielding_correction<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0004281655054299171.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_mag_shielding_correction<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(2.5691e-05));
  }
};

/// \brief CODATA recommended value for the proton mass (2014).
/// \details proton mass = (1.672621898e-27 ± 2.1e-35) kg.
template <typename T> struct proton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.672621898e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.672621898e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2555138746605121e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-35) / static_cast<T>(1.672621898e-27));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent
/// (2014). \details proton mass energy equivalent = (1.503277593e-10 ± 1.8e-18)
/// J.
template <typename T> struct proton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.503277593e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.503277593e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1973836425033444e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-18) / static_cast<T>(1.503277593e-10));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent in MeV
/// (2014). \details proton mass energy equivalent in MeV = (938.2720813
/// ± 5.8e-06) MeV.
template <typename T> struct proton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 938.2720813 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(938.2720813); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.8e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// proton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.1815758089742495e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// proton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.8e-06) / static_cast<T>(938.2720813));
  }
};

/// \brief CODATA recommended value for the proton mass in u (2014).
/// \details proton mass in u = (1.007276466879 ± 9.1e-11) u.
template <typename T> struct proton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.007276466879 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.007276466879); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.034262488228215e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-11) / static_cast<T>(1.007276466879));
  }
};

/// \brief CODATA recommended value for the proton molar mass (2014).
/// \details proton molar mass = (0.001007276466879 ± 9.1e-14) kg mol^-1.
template <typename T> struct proton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.001007276466879 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.001007276466879);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.034262488228216e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-14) /
                    static_cast<T>(0.001007276466879));
  }
};

/// \brief CODATA recommended value for the proton-muon mass ratio (2014).
/// \details proton-muon mass ratio = (8.88024338 ± 2e-07) .
template <typename T> struct proton_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.88024338 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.88024338); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2521905249853637e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(8.88024338));
  }
};

/// \brief CODATA recommended value for the proton-neutron mag. mom. ratio
/// (2014). \details proton-neutron mag. mom. ratio = (-1.45989805 ± 3.4e-07) .
template <typename T> struct proton_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.45989805 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.45989805); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_neutron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3289297495808008e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(-1.45989805));
  }
};

/// \brief CODATA recommended value for the proton-neutron mass ratio (2014).
/// \details proton-neutron mass ratio = (0.99862347844 ± 5.1e-10) .
template <typename T> struct proton_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.99862347844 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.99862347844); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.107029936815592e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-10) / static_cast<T>(0.99862347844));
  }
};

/// \brief CODATA recommended value for the proton rms charge radius (2014).
/// \details proton rms charge radius = (8.751e-16 ± 6.1e-18) m.
template <typename T> struct proton_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 8.751e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.751e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.006970631927779683.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-18) / static_cast<T>(8.751e-16));
  }
};

/// \brief CODATA recommended value for the proton-tau mass ratio (2014).
/// \details proton-tau mass ratio = (0.528063 ± 4.8e-05) .
template <typename T> struct proton_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.528063 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = proton_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.528063); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = proton_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.089824509575563e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = proton_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-05) / static_cast<T>(0.528063));
  }
};

/// \brief CODATA recommended value for the quantum of circulation (2014).
/// \details quantum of circulation = (0.00036369475486 ± 1.7e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036369475486 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = quantum_of_circulation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036369475486); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = quantum_of_circulation<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.674249428354817e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = quantum_of_circulation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-13) / static_cast<T>(0.00036369475486));
  }
};

/// \brief CODATA recommended value for the quantum of circulation times 2
/// (2014). \details quantum of circulation times 2 = (0.00072738950972
/// ± 3.3e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation_times_2 {
  /// \brief Returns the constant's value.
  /// \details value = 0.00072738950972 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = quantum_of_circulation_times_2<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00072738950972); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// quantum_of_circulation_times_2<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5367715039914396e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = quantum_of_circulation_times_2<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-13) / static_cast<T>(0.00072738950972));
  }
};

/// \brief CODATA recommended value for the Rydberg constant (2014).
/// \details Rydberg constant = (10973731.568508 ± 6.5e-05) m^-1.
template <typename T> struct Rydberg_constant {
  /// \brief Returns the constant's value.
  /// \details value = 10973731.568508 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Rydberg_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10973731.568508); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.5e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Rydberg_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.5e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.92323582859768e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Rydberg_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.5e-05) / static_cast<T>(10973731.568508));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times c in Hz
/// (2014). \details Rydberg constant times c in Hz = (3289841960355000.0 ±
/// 19000.0) Hz.
template <typename T> struct Rydberg_constant_times_c_in_Hz {
  /// \brief Returns the constant's value.
  /// \details value = 3289841960355000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Rydberg_constant_times_c_in_Hz<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3289841960355000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 19000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Rydberg_constant_times_c_in_Hz<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(19000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.775353414833869e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Rydberg_constant_times_c_in_Hz<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(19000.0) /
                    static_cast<T>(3289841960355000.0));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in eV
/// (2014). \details Rydberg constant times hc in eV = (13.605693009 ± 8.4e-08)
/// eV.
template <typename T> struct Rydberg_constant_times_hc_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 13.605693009 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Rydberg_constant_times_hc_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13.605693009); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-08 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_eV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.173886177237354e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Rydberg_constant_times_hc_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-08) / static_cast<T>(13.605693009));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in J
/// (2014). \details Rydberg constant times hc in J = (2.179872325e-18
/// ± 2.7e-26) J.
template <typename T> struct Rydberg_constant_times_hc_in_J {
  /// \brief Returns the constant's value.
  /// \details value = 2.179872325e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Rydberg_constant_times_hc_in_J<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.179872325e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-26 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_J<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.238604650848072e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Rydberg_constant_times_hc_in_J<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-26) / static_cast<T>(2.179872325e-18));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K, 100
/// kPa) (2014). \details Sackur-Tetrode constant (1 K, 100 kPa) = (-1.1517084
/// ± 1.4e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1517084 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Sackur_Tetrode_constant_1_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1517084); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2155854728505931e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-06) / static_cast<T>(-1.1517084));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K,
/// 101.325 kPa) (2014). \details Sackur-Tetrode constant (1 K, 101.325 kPa) =
/// (-1.1648714 ± 1.4e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1648714 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Sackur_Tetrode_constant_1_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1648714); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.201849405865746e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-06) / static_cast<T>(-1.1648714));
  }
};

/// \brief CODATA recommended value for the second radiation constant (2014).
/// \details second radiation constant = (0.0143877736 ± 8.3e-09) m K.
template <typename T> struct second_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0143877736 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = second_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0143877736); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-09 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = second_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.768786909463185e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = second_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-09) / static_cast<T>(0.0143877736));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio
/// (2014). \details shielded helion gyromag. ratio = (203789458.5 ± 2.7) s^-1
/// T^-1.
template <typename T> struct shielded_helion_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 203789458.5 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_helion_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(203789458.5); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = shielded_helion_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3248967929320055e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = shielded_helion_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7) / static_cast<T>(203789458.5));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio over
/// 2 pi (2014). \details shielded helion gyromag. ratio over 2 pi =
/// (32.43409966 ± 4.3e-07) MHz T^-1.
template <typename T> struct shielded_helion_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 32.43409966 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_helion_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(32.43409966); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3257651808053919e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-07) / static_cast<T>(32.43409966));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. (2014).
/// \details shielded helion mag. mom. = (-1.07455308e-26 ± 1.4e-34) J T^-1.
template <typename T> struct shielded_helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.07455308e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.07455308e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = shielded_helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3028672348135655e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = shielded_helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-34) / static_cast<T>(-1.07455308e-26));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to Bohr
/// magneton ratio (2014). \details shielded helion mag. mom. to Bohr magneton
/// ratio = (-0.001158671471 ± 1.4e-11) .
template <typename T> struct shielded_helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158671471 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158671471); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082803754473384e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158671471));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to nuclear
/// magneton ratio (2014). \details shielded helion mag. mom. to nuclear
/// magneton ratio = (-2.12749772 ± 2.5e-08) .
template <typename T> struct shielded_helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.12749772 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.12749772); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175089390930111e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.12749772));
  }
};

/// \brief CODATA recommended value for the shielded helion to proton mag. mom.
/// ratio (2014). \details shielded helion to proton mag. mom. ratio =
/// (-0.7617665603 ± 9.2e-09) .
template <typename T> struct shielded_helion_to_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617665603 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_helion_to_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617665603); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2077190676861481e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.2e-09) / static_cast<T>(-0.7617665603));
  }
};

/// \brief CODATA recommended value for the shielded helion to shielded proton
/// mag. mom. ratio (2014). \details shielded helion to shielded proton mag.
/// mom. ratio = (-0.7617861313 ± 3.3e-09) .
template <typename T> struct shielded_helion_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617861313 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617861313); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3319244922042606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-09) / static_cast<T>(-0.7617861313));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio
/// (2014). \details shielded proton gyromag. ratio = (267515317.1 ± 3.3) s^-1
/// T^-1.
template <typename T> struct shielded_proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267515317.1 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267515317.1); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = shielded_proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2335742251223789e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = shielded_proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3) / static_cast<T>(267515317.1));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio over
/// 2 pi (2014). \details shielded proton gyromag. ratio over 2 pi =
/// (42.57638507 ± 5.3e-07) MHz T^-1.
template <typename T> struct shielded_proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.57638507 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.57638507); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2448215110996975e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-07) / static_cast<T>(42.57638507));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. (2014).
/// \details shielded proton mag. mom. = (1.410570547e-26 ± 1.8e-34) J T^-1.
template <typename T> struct shielded_proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.410570547e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = shielded_proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.410570547e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = shielded_proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2760793877542944e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = shielded_proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-34) / static_cast<T>(1.410570547e-26));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to Bohr
/// magneton ratio (2014). \details shielded proton mag. mom. to Bohr magneton
/// ratio = (0.001520993128 ± 1.7e-11) .
template <typename T> struct shielded_proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001520993128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.001520993128); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.117690782886956e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-11) / static_cast<T>(0.001520993128));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to nuclear
/// magneton ratio (2014). \details shielded proton mag. mom. to nuclear
/// magneton ratio = (2.7927756 ± 3e-08) .
template <typename T> struct shielded_proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.7927756 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.7927756); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0742001613018961e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-08) / static_cast<T>(2.7927756));
  }
};

/// \brief CODATA recommended value for the speed of light in vacuum (2014).
/// \details speed of light in vacuum = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct speed_of_light_in_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = speed_of_light_in_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = speed_of_light_in_vacuum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = speed_of_light_in_vacuum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the standard acceleration of gravity
/// (2014). \details standard acceleration of gravity = (9.80665 ± 0.0) m s^-2.
template <typename T> struct standard_acceleration_of_gravity {
  /// \brief Returns the constant's value.
  /// \details value = 9.80665 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = standard_acceleration_of_gravity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.80665); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// standard_acceleration_of_gravity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = standard_acceleration_of_gravity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(9.80665));
  }
};

/// \brief CODATA recommended value for the standard atmosphere (2014).
/// \details standard atmosphere = (101325.0 ± 0.0) Pa.
template <typename T> struct standard_atmosphere {
  /// \brief Returns the constant's value.
  /// \details value = 101325.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = standard_atmosphere<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(101325.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = standard_atmosphere<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = standard_atmosphere<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(101325.0));
  }
};

/// \brief CODATA recommended value for the standard-state pressure (2014).
/// \details standard-state pressure = (100000.0 ± 0.0) Pa.
template <typename T> struct standard_state_pressure {
  /// \brief Returns the constant's value.
  /// \details value = 100000.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = standard_state_pressure<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(100000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = standard_state_pressure<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = standard_state_pressure<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(100000.0));
  }
};

/// \brief CODATA recommended value for the Stefan-Boltzmann constant (2014).
/// \details Stefan-Boltzmann constant = (5.670367e-08 ± 1.3e-13) W m^-2 K^-4.
template <typename T> struct Stefan_Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 5.670367e-08 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Stefan_Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.670367e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-13 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Stefan_Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.292620565829337e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Stefan_Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-13) / static_cast<T>(5.670367e-08));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength (2014).
/// \details tau Compton wavelength = (6.97787e-16 ± 6.3e-20) m.
template <typename T> struct tau_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 6.97787e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.97787e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.02854309409605e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-20) / static_cast<T>(6.97787e-16));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength over 2 pi
/// (2014). \details tau Compton wavelength over 2 pi = (1.11056e-16 ± 1e-20) m.
template <typename T> struct tau_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.11056e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.11056e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// tau_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.00446621524276e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-20) / static_cast<T>(1.11056e-16));
  }
};

/// \brief CODATA recommended value for the tau-electron mass ratio (2014).
/// \details tau-electron mass ratio = (3477.15 ± 0.31) .
template <typename T> struct tau_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3477.15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3477.15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.31 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.915347339056411e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.31) / static_cast<T>(3477.15));
  }
};

/// \brief CODATA recommended value for the tau mass (2014).
/// \details tau mass = (3.16747e-27 ± 2.9e-31) kg.
template <typename T> struct tau_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.16747e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.16747e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.155572112758763e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-31) / static_cast<T>(3.16747e-27));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent (2014).
/// \details tau mass energy equivalent = (2.84678e-10 ± 2.6e-14) J.
template <typename T> struct tau_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.84678e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.84678e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.133125847448697e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-14) / static_cast<T>(2.84678e-10));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent in MeV
/// (2014). \details tau mass energy equivalent in MeV = (1776.82 ± 0.16) MeV.
template <typename T> struct tau_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1776.82 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1776.82); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.16 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// tau_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.00485136367218e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.16) / static_cast<T>(1776.82));
  }
};

/// \brief CODATA recommended value for the tau mass in u (2014).
/// \details tau mass in u = (1.90749 ± 0.00017) u.
template <typename T> struct tau_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.90749 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.90749); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.912235450775627e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.90749));
  }
};

/// \brief CODATA recommended value for the tau molar mass (2014).
/// \details tau molar mass = (0.00190749 ± 1.7e-07) kg mol^-1.
template <typename T> struct tau_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00190749 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00190749); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.912235450775626e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(0.00190749));
  }
};

/// \brief CODATA recommended value for the tau-muon mass ratio (2014).
/// \details tau-muon mass ratio = (16.8167 ± 0.0015) .
template <typename T> struct tau_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 16.8167 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(16.8167); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0015 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0015); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.919704817235248e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0015) / static_cast<T>(16.8167));
  }
};

/// \brief CODATA recommended value for the tau-neutron mass ratio (2014).
/// \details tau-neutron mass ratio = (1.89111 ± 0.00017) .
template <typename T> struct tau_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89111 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89111); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.989429488501463e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.89111));
  }
};

/// \brief CODATA recommended value for the tau-proton mass ratio (2014).
/// \details tau-proton mass ratio = (1.89372 ± 0.00017) .
template <typename T> struct tau_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89372 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = tau_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89372); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = tau_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.977039900302051e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = tau_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.89372));
  }
};

/// \brief CODATA recommended value for the Thomson cross section (2014).
/// \details Thomson cross section = (6.6524587158e-29 ± 9.1e-38) m^2.
template <typename T> struct Thomson_cross_section {
  /// \brief Returns the constant's value.
  /// \details value = 6.6524587158e-29 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Thomson_cross_section<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.6524587158e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-38 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = Thomson_cross_section<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.367915290986615e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = Thomson_cross_section<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-38) / static_cast<T>(6.6524587158e-29));
  }
};

/// \brief CODATA recommended value for the triton-electron mass ratio (2014).
/// \details triton-electron mass ratio = (5496.92153588 ± 2.6e-07) .
template <typename T> struct triton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5496.92153588 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5496.92153588); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.72992016172879e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-07) / static_cast<T>(5496.92153588));
  }
};

/// \brief CODATA recommended value for the triton g factor (2014).
/// \details triton g factor = (5.95792492 ± 2.8e-08) .
template <typename T> struct triton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.95792492 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.95792492); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.699622834454919e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-08) / static_cast<T>(5.95792492));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. (2014).
/// \details triton mag. mom. = (1.504609503e-26 ± 1.2e-34) J T^-1.
template <typename T> struct triton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.504609503e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.504609503e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.97549129928631e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-34) / static_cast<T>(1.504609503e-26));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to Bohr magneton
/// ratio (2014). \details triton mag. mom. to Bohr magneton ratio =
/// (0.0016223936616 ± 7.6e-12) .
template <typename T> struct triton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0016223936616 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0016223936616); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.684436447135094e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-12) / static_cast<T>(0.0016223936616));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to nuclear magneton
/// ratio (2014). \details triton mag. mom. to nuclear magneton ratio =
/// (2.97896246 ± 1.4e-08) .
template <typename T> struct triton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.97896246 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.97896246); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.699622834454919e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-08) / static_cast<T>(2.97896246));
  }
};

/// \brief CODATA recommended value for the triton mass (2014).
/// \details triton mass = (5.007356665e-27 ± 6.2e-35) kg.
template <typename T> struct triton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.007356665e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.007356665e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2381782275139773e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-35) / static_cast<T>(5.007356665e-27));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent
/// (2014). \details triton mass energy equivalent = (4.500387735e-10 ± 5.5e-18)
/// J.
template <typename T> struct triton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.500387735e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.500387735e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.5e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2221169205546243e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.5e-18) / static_cast<T>(4.500387735e-10));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent in MeV
/// (2014). \details triton mass energy equivalent in MeV = (2808.921112
/// ± 1.7e-05) MeV.
template <typename T> struct triton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.921112 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.921112); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// triton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.052145760653174e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// triton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-05) / static_cast<T>(2808.921112));
  }
};

/// \brief CODATA recommended value for the triton mass in u (2014).
/// \details triton mass in u = (3.01550071632 ± 1.1e-10) u.
template <typename T> struct triton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.01550071632 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.01550071632); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.6478187322150504e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(3.01550071632));
  }
};

/// \brief CODATA recommended value for the triton molar mass (2014).
/// \details triton molar mass = (0.00301550071632 ± 1.1e-13) kg mol^-1.
template <typename T> struct triton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00301550071632 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00301550071632); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.647818732215051e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-13) / static_cast<T>(0.00301550071632));
  }
};

/// \brief CODATA recommended value for the triton-proton mass ratio (2014).
/// \details triton-proton mass ratio = (2.99371703348 ± 2.2e-10) .
template <typename T> struct triton_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.99371703348 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = triton_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.99371703348); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = triton_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.34872392880313e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = triton_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-10) / static_cast<T>(2.99371703348));
  }
};

/// \brief CODATA recommended value for the unified atomic mass unit (2014).
/// \details unified atomic mass unit = (1.66053904e-27 ± 2e-35) kg.
template <typename T> struct unified_atomic_mass_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.66053904e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = unified_atomic_mass_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.66053904e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = unified_atomic_mass_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2044281717098324e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = unified_atomic_mass_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-35) / static_cast<T>(1.66053904e-27));
  }
};

/// \brief CODATA recommended value for the von Klitzing constant (2014).
/// \details von Klitzing constant = (25812.8074555 ± 5.9e-06) ohm.
template <typename T> struct von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.8074555 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = von_Klitzing_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(25812.8074555); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.9e-06 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2856870606466607e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = von_Klitzing_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.9e-06) / static_cast<T>(25812.8074555));
  }
};

/// \brief CODATA recommended value for the weak mixing angle (2014).
/// \details weak mixing angle = (0.2223 ± 0.0021) .
template <typename T> struct weak_mixing_angle {
  /// \brief Returns the constant's value.
  /// \details value = 0.2223 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = weak_mixing_angle<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.2223); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0021 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty = weak_mixing_angle<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0021); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.009446693657219972.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision = weak_mixing_angle<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0021) / static_cast<T>(0.2223));
  }
};

/// \brief CODATA recommended value for the Wien frequency displacement law
/// constant (2014). \details Wien frequency displacement law constant =
/// (58789238000.0 ± 34000.0) Hz K^-1.
template <typename T> struct Wien_frequency_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 58789238000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Wien_frequency_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(58789238000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 34000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Wien_frequency_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(34000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.78337143951415e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Wien_frequency_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(34000.0) / static_cast<T>(58789238000.0));
  }
};

/// \brief CODATA recommended value for the Wien wavelength displacement law
/// constant (2014). \details Wien wavelength displacement law constant =
/// (0.0028977729 ± 1.7e-09) m K.
template <typename T> struct Wien_wavelength_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0028977729 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double value = Wien_wavelength_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0028977729); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-09 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double uncertainty =
  /// Wien_wavelength_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.866574292278045e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2014;
  /// double precision =
  /// Wien_wavelength_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-09) / static_cast<T>(0.0028977729));
  }
};

} // namespace codata_2014

} // namespace constants

} // namespace triumf

#endif // TRIUMF_CONSTANTS_CODATA_2014_HPP
