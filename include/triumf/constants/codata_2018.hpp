#ifndef TRIUMF_CONSTANTS_CODATA_2018_HPP
#define TRIUMF_CONSTANTS_CODATA_2018_HPP

#include <cmath>
#include <type_traits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace constants {

// Committee on Data (CODATA) of the International Science Council (ISC)
// recommended values of fundamental physical constants: 2018
// https://physics.nist.gov/cuu/Constants/
// https://physics.nist.gov/cuu/Constants/Table/allascii.txt
namespace codata_2018 {

/// \brief CODATA recommended value for the alpha particle-electron mass ratio
/// (2018). \details alpha particle-electron mass ratio = (7294.29954142
/// ± 2.4e-07) .
template <typename T> struct alpha_particle_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 7294.29954142 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7294.29954142); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// alpha_particle_electron_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.290240531488765e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// alpha_particle_electron_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-07) / static_cast<T>(7294.29954142));
  }
};

/// \brief CODATA recommended value for the alpha particle mass (2018).
/// \details alpha particle mass = (6.6446573357e-27 ± 2e-36) kg.
template <typename T> struct alpha_particle_mass {
  /// \brief Returns the constant's value.
  /// \details value = 6.6446573357e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.6446573357e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = alpha_particle_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.009937004959646e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = alpha_particle_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-36) / static_cast<T>(6.6446573357e-27));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent (2018). \details alpha particle mass energy equivalent =
/// (5.9719201914e-10 ± 1.8e-19) J.
template <typename T> struct alpha_particle_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 5.9719201914e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.9719201914e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0141059195535316e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-19) / static_cast<T>(5.9719201914e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent in MeV (2018). \details alpha particle mass energy equivalent in
/// MeV = (3727.3794066 ± 1.1e-06) MeV.
template <typename T> struct alpha_particle_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 3727.3794066 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(3727.3794066); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9511350469239886e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-06) / static_cast<T>(3727.3794066));
  }
};

/// \brief CODATA recommended value for the alpha particle mass in u (2018).
/// \details alpha particle mass in u = (4.001506179127 ± 6.3e-11) u.
template <typename T> struct alpha_particle_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 4.001506179127 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.001506179127); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = alpha_particle_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.574407165197595e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = alpha_particle_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-11) / static_cast<T>(4.001506179127));
  }
};

/// \brief CODATA recommended value for the alpha particle molar mass (2018).
/// \details alpha particle molar mass = (0.0040015061777 ± 1.2e-12) kg mol^-1.
template <typename T> struct alpha_particle_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0040015061777 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0040015061777); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = alpha_particle_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9988707919220065e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = alpha_particle_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-12) / static_cast<T>(0.0040015061777));
  }
};

/// \brief CODATA recommended value for the alpha particle-proton mass ratio
/// (2018). \details alpha particle-proton mass ratio = (3.97259969009
/// ± 2.2e-10) .
template <typename T> struct alpha_particle_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3.97259969009 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.97259969009); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// alpha_particle_proton_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.537935285772925e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = alpha_particle_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-10) / static_cast<T>(3.97259969009));
  }
};

/// \brief CODATA recommended value for the alpha particle relative atomic mass
/// (2018). \details alpha particle relative atomic mass = (4.001506179127
/// ± 6.3e-11) .
template <typename T> struct alpha_particle_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 4.001506179127 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = alpha_particle_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.001506179127); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// alpha_particle_relative_atomic_mass<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.574407165197595e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// alpha_particle_relative_atomic_mass<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-11) / static_cast<T>(4.001506179127));
  }
};

/// \brief CODATA recommended value for the Angstrom star (2018).
/// \details Angstrom star = (1.00001495e-10 ± 9e-17) m.
template <typename T> struct Angstrom_star {
  /// \brief Returns the constant's value.
  /// \details value = 1.00001495e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Angstrom_star<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00001495e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-17 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Angstrom_star<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.999865452011492e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Angstrom_star<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-17) / static_cast<T>(1.00001495e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant (2018).
/// \details atomic mass constant = (1.6605390666e-27 ± 5e-37) kg.
template <typename T> struct atomic_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.6605390666e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6605390666e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0110703810405613e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-37) / static_cast<T>(1.6605390666e-27));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent (2018). \details atomic mass constant energy equivalent =
/// (1.4924180856e-10 ± 4.5e-20) J.
template <typename T> struct atomic_mass_constant_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.4924180856e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_constant_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.4924180856e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0152408654246877e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-20) / static_cast<T>(1.4924180856e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent in MeV (2018). \details atomic mass constant energy equivalent in
/// MeV = (931.49410242 ± 2.8e-07) MeV.
template <typename T> struct atomic_mass_constant_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 931.49410242 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931.49410242); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.005923486499448e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-07) / static_cast<T>(931.49410242));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-electron volt
/// relationship (2018). \details atomic mass unit-electron volt relationship =
/// (931494102.42 ± 0.28) eV.
template <typename T> struct atomic_mass_unit_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 931494102.42 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// atomic_mass_unit_electron_volt_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931494102.42); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.28 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_electron_volt_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.005923486499448e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.28) / static_cast<T>(931494102.42));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hartree
/// relationship (2018). \details atomic mass unit-hartree relationship =
/// (34231776.874 ± 0.01) E_h.
template <typename T> struct atomic_mass_unit_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 34231776.874 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_unit_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(34231776.874); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.01 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.01); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.921262322083924e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.01) / static_cast<T>(34231776.874));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hertz relationship
/// (2018). \details atomic mass unit-hertz relationship = (2.25234271871e+23 ±
/// 68000000000000.0) Hz.
template <typename T> struct atomic_mass_unit_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.25234271871e+23 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_unit_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.25234271871e+23);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 68000000000000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(68000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.019078732340792e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_hertz_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(68000000000000.0) /
                    static_cast<T>(2.25234271871e+23));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-inverse meter
/// relationship (2018). \details atomic mass unit-inverse meter relationship =
/// (751300661040000.0 ± 230000.0) m^-1.
template <typename T> struct atomic_mass_unit_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 751300661040000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// atomic_mass_unit_inverse_meter_relationship<double>::value(); \endcode
  static inline constexpr T value() {
    return static_cast<T>(751300661040000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 230000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_inverse_meter_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(230000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0613576152271556e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(230000.0) /
                    static_cast<T>(751300661040000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-joule relationship
/// (2018). \details atomic mass unit-joule relationship = (1.4924180856e-10
/// ± 4.5e-20) J.
template <typename T> struct atomic_mass_unit_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.4924180856e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_unit_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.4924180856e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0152408654246877e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_joule_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-20) / static_cast<T>(1.4924180856e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kelvin relationship
/// (2018). \details atomic mass unit-kelvin relationship = (10809540191600.0 ±
/// 3300.0) K.
template <typename T> struct atomic_mass_unit_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 10809540191600.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_unit_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10809540191600.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3300.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3300.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.052858809447234e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_kelvin_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3300.0) / static_cast<T>(10809540191600.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kilogram
/// relationship (2018). \details atomic mass unit-kilogram relationship =
/// (1.6605390666e-27 ± 5e-37) kg.
template <typename T> struct atomic_mass_unit_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.6605390666e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_mass_unit_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6605390666e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_mass_unit_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0110703810405613e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_mass_unit_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-37) / static_cast<T>(1.6605390666e-27));
  }
};

/// \brief CODATA recommended value for the atomic unit of 1st
/// hyperpolarizability (2018). \details atomic unit of 1st hyperpolarizability
/// = (3.2063613061e-53 ± 1.5e-62) C^3 m^3 J^-2.
template <typename T> struct atomic_unit_of_1st_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 3.2063613061e-53 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_1st_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.2063613061e-53); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-62 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_1st_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-62); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.67820016773e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_1st_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-62) / static_cast<T>(3.2063613061e-53));
  }
};

/// \brief CODATA recommended value for the atomic unit of 2nd
/// hyperpolarizability (2018). \details atomic unit of 2nd hyperpolarizability
/// = (6.2353799905e-65 ± 3.8e-74) C^4 m^4 J^-3.
template <typename T> struct atomic_unit_of_2nd_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 6.2353799905e-65 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_2nd_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.2353799905e-65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-74 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-74); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.094255692178411e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-74) / static_cast<T>(6.2353799905e-65));
  }
};

/// \brief CODATA recommended value for the atomic unit of action (2018).
/// \details atomic unit of action = (1.054571817e-34 ± 0.0) J s.
template <typename T> struct atomic_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571817e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571817e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.054571817e-34));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge (2018).
/// \details atomic unit of charge = (1.602176634e-19 ± 0.0) C.
template <typename T> struct atomic_unit_of_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176634e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176634e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.602176634e-19));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge density
/// (2018). \details atomic unit of charge density = (1081202384570.0 ± 490.0) C
/// m^-3.
template <typename T> struct atomic_unit_of_charge_density {
  /// \brief Returns the constant's value.
  /// \details value = 1081202384570.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_charge_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1081202384570.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 490.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_charge_density<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(490.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5319914845995796e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_charge_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(490.0) / static_cast<T>(1081202384570.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of current (2018).
/// \details atomic unit of current = (0.00662361823751 ± 1.3e-14) A.
template <typename T> struct atomic_unit_of_current {
  /// \brief Returns the constant's value.
  /// \details value = 0.00662361823751 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00662361823751); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-14 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9626735016792055e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-14) / static_cast<T>(0.00662361823751));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric dipole mom.
/// (2018). \details atomic unit of electric dipole mom. = (8.4783536255e-30
/// ± 1.3e-39) C m.
template <typename T> struct atomic_unit_of_electric_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 8.4783536255e-30 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.4783536255e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-39 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_electric_dipole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-39); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5333165581700234e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_electric_dipole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-39) / static_cast<T>(8.4783536255e-30));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// (2018). \details atomic unit of electric field = (514220674763.0 ± 78.0) V
/// m^-1.
template <typename T> struct atomic_unit_of_electric_field {
  /// \brief Returns the constant's value.
  /// \details value = 514220674763.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_field<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(514220674763.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 78.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_electric_field<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(78.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.516858497296896e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_electric_field<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(78.0) / static_cast<T>(514220674763.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// gradient (2018). \details atomic unit of electric field gradient =
/// (9.7173624292e+21 ± 2900000000000.0) V m^-2.
template <typename T> struct atomic_unit_of_electric_field_gradient {
  /// \brief Returns the constant's value.
  /// \details value = 9.7173624292e+21 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_field_gradient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.7173624292e+21); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2900000000000.0 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_electric_field_gradient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(2900000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.984348912710821e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_electric_field_gradient<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2900000000000.0) /
                    static_cast<T>(9.7173624292e+21));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric
/// polarizability (2018). \details atomic unit of electric polarizability =
/// (1.64877727436e-41 ± 5e-51) C^2 m^2 J^-1.
template <typename T> struct atomic_unit_of_electric_polarizability {
  /// \brief Returns the constant's value.
  /// \details value = 1.64877727436e-41 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_polarizability<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.64877727436e-41);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-51 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_electric_polarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-51); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0325502890867005e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_electric_polarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-51) / static_cast<T>(1.64877727436e-41));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric potential
/// (2018). \details atomic unit of electric potential = (27.211386245988
/// ± 5.3e-11) V.
template <typename T> struct atomic_unit_of_electric_potential {
  /// \brief Returns the constant's value.
  /// \details value = 27.211386245988 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_potential<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.211386245988); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-11 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_electric_potential<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9477140753097144e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_electric_potential<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-11) / static_cast<T>(27.211386245988));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric quadrupole
/// mom. (2018). \details atomic unit of electric quadrupole mom. =
/// (4.4865515246e-40 ± 1.4e-49) C m^2.
template <typename T> struct atomic_unit_of_electric_quadrupole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.4865515246e-40 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_electric_quadrupole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4865515246e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-49 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_electric_quadrupole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-49); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.120436692465752e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// atomic_unit_of_electric_quadrupole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-49) / static_cast<T>(4.4865515246e-40));
  }
};

/// \brief CODATA recommended value for the atomic unit of energy (2018).
/// \details atomic unit of energy = (4.3597447222071e-18 ± 8.5e-30) J.
template <typename T> struct atomic_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.3597447222071e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.3597447222071e-18);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-30 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.949655436636876e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-30) /
                    static_cast<T>(4.3597447222071e-18));
  }
};

/// \brief CODATA recommended value for the atomic unit of force (2018).
/// \details atomic unit of force = (8.2387234983e-08 ± 1.2e-17) N.
template <typename T> struct atomic_unit_of_force {
  /// \brief Returns the constant's value.
  /// \details value = 8.2387234983e-08 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_force<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.2387234983e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-17 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_force<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4565363193067605e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_force<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-17) / static_cast<T>(8.2387234983e-08));
  }
};

/// \brief CODATA recommended value for the atomic unit of length (2018).
/// \details atomic unit of length = (5.29177210903e-11 ± 8e-21) m.
template <typename T> struct atomic_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 5.29177210903e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(5.29177210903e-11);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.511780899700616e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-21) / static_cast<T>(5.29177210903e-11));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. dipole mom.
/// (2018). \details atomic unit of mag. dipole mom. = (1.85480201566e-23
/// ± 5.6e-33) J T^-1.
template <typename T> struct atomic_unit_of_mag_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.85480201566e-23 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_mag_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.85480201566e-23);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.6e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_mag_dipole_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.6e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.019190163003642e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_mag_dipole_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.6e-33) /
                    static_cast<T>(1.85480201566e-23));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. flux density
/// (2018). \details atomic unit of mag. flux density = (235051.756758
/// ± 7.1e-05) T.
template <typename T> struct atomic_unit_of_mag_flux_density {
  /// \brief Returns the constant's value.
  /// \details value = 235051.756758 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_mag_flux_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(235051.756758); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-05 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_mag_flux_density<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0206113317033747e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_mag_flux_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-05) / static_cast<T>(235051.756758));
  }
};

/// \brief CODATA recommended value for the atomic unit of magnetizability
/// (2018). \details atomic unit of magnetizability = (7.8910366008e-29
/// ± 4.8e-38) J T^-2.
template <typename T> struct atomic_unit_of_magnetizability {
  /// \brief Returns the constant's value.
  /// \details value = 7.8910366008e-29 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_magnetizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.8910366008e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-38 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// atomic_unit_of_magnetizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.082851015433603e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_magnetizability<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-38) / static_cast<T>(7.8910366008e-29));
  }
};

/// \brief CODATA recommended value for the atomic unit of mass (2018).
/// \details atomic unit of mass = (9.1093837015e-31 ± 2.8e-40) kg.
template <typename T> struct atomic_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.1093837015e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.1093837015e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0737534961217373e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-40) / static_cast<T>(9.1093837015e-31));
  }
};

/// \brief CODATA recommended value for the atomic unit of momentum (2018).
/// \details atomic unit of momentum = (1.9928519141e-24 ± 3e-34) kg m s^-1.
template <typename T> struct atomic_unit_of_momentum {
  /// \brief Returns the constant's value.
  /// \details value = 1.9928519141e-24 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_momentum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.9928519141e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-34 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_momentum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5053802938262185e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_momentum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-34) / static_cast<T>(1.9928519141e-24));
  }
};

/// \brief CODATA recommended value for the atomic unit of permittivity (2018).
/// \details atomic unit of permittivity = (1.11265005545e-10 ± 1.7e-20) F m^-1.
template <typename T> struct atomic_unit_of_permittivity {
  /// \brief Returns the constant's value.
  /// \details value = 1.11265005545e-10 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_permittivity<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.11265005545e-10);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-20 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_permittivity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5278838046814746e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_permittivity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-20) /
                    static_cast<T>(1.11265005545e-10));
  }
};

/// \brief CODATA recommended value for the atomic unit of time (2018).
/// \details atomic unit of time = (2.4188843265857e-17 ± 4.7e-29) s.
template <typename T> struct atomic_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 2.4188843265857e-17 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.4188843265857e-17);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-29 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9430445467535592e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-29) /
                    static_cast<T>(2.4188843265857e-17));
  }
};

/// \brief CODATA recommended value for the atomic unit of velocity (2018).
/// \details atomic unit of velocity = (2187691.26364 ± 0.00033) m s^-1.
template <typename T> struct atomic_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 2187691.26364 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = atomic_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2187691.26364); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00033 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = atomic_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00033); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5084395384517284e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = atomic_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00033) / static_cast<T>(2187691.26364));
  }
};

/// \brief CODATA recommended value for the Avogadro constant (2018).
/// \details Avogadro constant = (6.02214076e+23 ± 0.0) mol^-1.
template <typename T> struct Avogadro_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.02214076e+23 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Avogadro_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.02214076e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Avogadro_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Avogadro_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.02214076e+23));
  }
};

/// \brief CODATA recommended value for the Bohr magneton (2018).
/// \details Bohr magneton = (9.2740100783e-24 ± 2.8e-33) J T^-1.
template <typename T> struct Bohr_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 9.2740100783e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.2740100783e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Bohr_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.019190163003642e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Bohr_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-33) / static_cast<T>(9.2740100783e-24));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in eV/T (2018).
/// \details Bohr magneton in eV/T = (5.788381806e-05 ± 1.7e-14) eV T^-1.
template <typename T> struct Bohr_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 5.788381806e-05 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.788381806e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-14 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Bohr_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.936917530626348e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Bohr_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-14) / static_cast<T>(5.788381806e-05));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in Hz/T (2018).
/// \details Bohr magneton in Hz/T = (13996244936.1 ± 4.2) Hz T^-1.
template <typename T> struct Bohr_magneton_in_Hz_T {
  /// \brief Returns the constant's value.
  /// \details value = 13996244936.1 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_magneton_in_Hz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13996244936.1); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Bohr_magneton_in_Hz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.000804872431958e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Bohr_magneton_in_Hz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2) / static_cast<T>(13996244936.1));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in inverse meter per
/// tesla (2018). \details Bohr magneton in inverse meter per tesla =
/// (46.686447783 ± 1.4e-08) m^-1 T^-1.
template <typename T> struct Bohr_magneton_in_inverse_meter_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 46.686447783 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_magneton_in_inverse_meter_per_tesla<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(46.686447783); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-08 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Bohr_magneton_in_inverse_meter_per_tesla<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.998728895604227e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Bohr_magneton_in_inverse_meter_per_tesla<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-08) / static_cast<T>(46.686447783));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in K/T (2018).
/// \details Bohr magneton in K/T = (0.67171381563 ± 2e-10) K T^-1.
template <typename T> struct Bohr_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.67171381563 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.67171381563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-10 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Bohr_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.977458485239285e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Bohr_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-10) / static_cast<T>(0.67171381563));
  }
};

/// \brief CODATA recommended value for the Bohr radius (2018).
/// \details Bohr radius = (5.29177210903e-11 ± 8e-21) m.
template <typename T> struct Bohr_radius {
  /// \brief Returns the constant's value.
  /// \details value = 5.29177210903e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Bohr_radius<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(5.29177210903e-11);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Bohr_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.511780899700616e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Bohr_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-21) / static_cast<T>(5.29177210903e-11));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant (2018).
/// \details Boltzmann constant = (1.380649e-23 ± 0.0) J K^-1.
template <typename T> struct Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.380649e-23 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.380649e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.380649e-23));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in eV/K (2018).
/// \details Boltzmann constant in eV/K = (8.617333262e-05 ± 0.0) eV K^-1.
template <typename T> struct Boltzmann_constant_in_eV_K {
  /// \brief Returns the constant's value.
  /// \details value = 8.617333262e-05 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Boltzmann_constant_in_eV_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.617333262e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Boltzmann_constant_in_eV_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Boltzmann_constant_in_eV_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.617333262e-05));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in Hz/K (2018).
/// \details Boltzmann constant in Hz/K = (20836619120.0 ± 0.0) Hz K^-1.
template <typename T> struct Boltzmann_constant_in_Hz_K {
  /// \brief Returns the constant's value.
  /// \details value = 20836619120.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Boltzmann_constant_in_Hz_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836619120.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Boltzmann_constant_in_Hz_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Boltzmann_constant_in_Hz_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(20836619120.0));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in inverse meter
/// per kelvin (2018). \details Boltzmann constant in inverse meter per kelvin =
/// (69.50348004 ± 0.0) m^-1 K^-1.
template <typename T> struct Boltzmann_constant_in_inverse_meter_per_kelvin {
  /// \brief Returns the constant's value.
  /// \details value = 69.50348004 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// Boltzmann_constant_in_inverse_meter_per_kelvin<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(69.50348004); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Boltzmann_constant_in_inverse_meter_per_kelvin<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Boltzmann_constant_in_inverse_meter_per_kelvin<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(69.50348004));
  }
};

/// \brief CODATA recommended value for the classical electron radius (2018).
/// \details classical electron radius = (2.8179403262e-15 ± 1.3e-24) m.
template <typename T> struct classical_electron_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.8179403262e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = classical_electron_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.8179403262e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = classical_electron_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.6132985426027577e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = classical_electron_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-24) / static_cast<T>(2.8179403262e-15));
  }
};

/// \brief CODATA recommended value for the Compton wavelength (2018).
/// \details Compton wavelength = (2.42631023867e-12 ± 7.3e-22) m.
template <typename T> struct Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.42631023867e-12 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.42631023867e-12);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0086836727035986e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-22) /
                    static_cast<T>(2.42631023867e-12));
  }
};

/// \brief CODATA recommended value for the conductance quantum (2018).
/// \details conductance quantum = (7.748091729e-05 ± 0.0) S.
template <typename T> struct conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 7.748091729e-05 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.748091729e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = conductance_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(7.748091729e-05));
  }
};

/// \brief CODATA recommended value for the conventional value of ampere-90
/// (2018). \details conventional value of ampere-90 = (1.00000008887 ± 0.0) A.
template <typename T> struct conventional_value_of_ampere_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000008887 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_ampere_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000008887); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_ampere_90<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_ampere_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000008887));
  }
};

/// \brief CODATA recommended value for the conventional value of coulomb-90
/// (2018). \details conventional value of coulomb-90 = (1.00000008887 ± 0.0) C.
template <typename T> struct conventional_value_of_coulomb_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000008887 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_coulomb_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000008887); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_coulomb_90<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_coulomb_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000008887));
  }
};

/// \brief CODATA recommended value for the conventional value of farad-90
/// (2018). \details conventional value of farad-90 = (0.9999999822 ± 0.0) F.
template <typename T> struct conventional_value_of_farad_90 {
  /// \brief Returns the constant's value.
  /// \details value = 0.9999999822 F.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_farad_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.9999999822); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_farad_90<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_farad_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.9999999822));
  }
};

/// \brief CODATA recommended value for the conventional value of henry-90
/// (2018). \details conventional value of henry-90 = (1.00000001779 ± 0.0) H.
template <typename T> struct conventional_value_of_henry_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000001779 H.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_henry_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000001779); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 H.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_henry_90<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_henry_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000001779));
  }
};

/// \brief CODATA recommended value for the conventional value of Josephson
/// constant (2018). \details conventional value of Josephson constant =
/// (483597900000000.0 ± 0.0) Hz V^-1.
template <typename T> struct conventional_value_of_Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597900000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597900000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_Josephson_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// conventional_value_of_Josephson_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(483597900000000.0));
  }
};

/// \brief CODATA recommended value for the conventional value of ohm-90 (2018).
/// \details conventional value of ohm-90 = (1.00000001779 ± 0.0) ohm.
template <typename T> struct conventional_value_of_ohm_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000001779 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_ohm_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000001779); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = conventional_value_of_ohm_90<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_ohm_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000001779));
  }
};

/// \brief CODATA recommended value for the conventional value of volt-90
/// (2018). \details conventional value of volt-90 = (1.00000010666 ± 0.0) V.
template <typename T> struct conventional_value_of_volt_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000010666 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_volt_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000010666); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = conventional_value_of_volt_90<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_volt_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000010666));
  }
};

/// \brief CODATA recommended value for the conventional value of von Klitzing
/// constant (2018). \details conventional value of von Klitzing constant =
/// (25812.807 ± 0.0) ohm.
template <typename T> struct conventional_value_of_von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.807 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// conventional_value_of_von_Klitzing_constant<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(25812.807); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// conventional_value_of_von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// conventional_value_of_von_Klitzing_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(25812.807));
  }
};

/// \brief CODATA recommended value for the conventional value of watt-90
/// (2018). \details conventional value of watt-90 = (1.00000019553 ± 0.0) W.
template <typename T> struct conventional_value_of_watt_90 {
  /// \brief Returns the constant's value.
  /// \details value = 1.00000019553 W.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = conventional_value_of_watt_90<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00000019553); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 W.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = conventional_value_of_watt_90<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = conventional_value_of_watt_90<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.00000019553));
  }
};

/// \brief CODATA recommended value for the Cu x unit (2018).
/// \details Cu x unit = (1.00207697e-13 ± 2.8e-20) m.
template <typename T> struct Cu_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00207697e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Cu_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00207697e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Cu_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.794196537617265e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Cu_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-20) / static_cast<T>(1.00207697e-13));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mag. mom. ratio
/// (2018). \details deuteron-electron mag. mom. ratio = (-0.0004664345551
/// ± 1.2e-12) .
template <typename T> struct deuteron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.0004664345551 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.0004664345551); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.57270818998976e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-12) / static_cast<T>(-0.0004664345551));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mass ratio (2018).
/// \details deuteron-electron mass ratio = (3670.48296788 ± 1.3e-07) .
template <typename T> struct deuteron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3670.48296788 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3670.48296788); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.5417682397007686e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-07) / static_cast<T>(3670.48296788));
  }
};

/// \brief CODATA recommended value for the deuteron g factor (2018).
/// \details deuteron g factor = (0.8574382338 ± 2.2e-09) .
template <typename T> struct deuteron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382338 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382338); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5657824823719682e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-09) / static_cast<T>(0.8574382338));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. (2018).
/// \details deuteron mag. mom. = (4.330735094e-27 ± 1.1e-35) J T^-1.
template <typename T> struct deuteron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.330735094e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.330735094e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-35 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5399844971445857e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-35) / static_cast<T>(4.330735094e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to Bohr magneton
/// ratio (2018). \details deuteron mag. mom. to Bohr magneton ratio =
/// (0.000466975457 ± 1.2e-12) .
template <typename T> struct deuteron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000466975457 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000466975457); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.569728198799107e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-12) / static_cast<T>(0.000466975457));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to nuclear
/// magneton ratio (2018). \details deuteron mag. mom. to nuclear magneton ratio
/// = (0.8574382338 ± 2.2e-09) .
template <typename T> struct deuteron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382338 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382338); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5657824823719682e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-09) / static_cast<T>(0.8574382338));
  }
};

/// \brief CODATA recommended value for the deuteron mass (2018).
/// \details deuteron mass = (3.3435837724e-27 ± 1e-36) kg.
template <typename T> struct deuteron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.3435837724e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.3435837724e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9908028871733855e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-36) / static_cast<T>(3.3435837724e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent
/// (2018). \details deuteron mass energy equivalent = (3.00506323102e-10
/// ± 9.1e-20) J.
template <typename T> struct deuteron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 3.00506323102e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3.00506323102e-10);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0282224700181143e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-20) /
                    static_cast<T>(3.00506323102e-10));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent in
/// MeV (2018). \details deuteron mass energy equivalent in MeV = (1875.61294257
/// ± 5.7e-07) MeV.
template <typename T> struct deuteron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1875.61294257 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1875.61294257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0390065405444227e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-07) / static_cast<T>(1875.61294257));
  }
};

/// \brief CODATA recommended value for the deuteron mass in u (2018).
/// \details deuteron mass in u = (2.013553212745 ± 4e-11) u.
template <typename T> struct deuteron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 2.013553212745 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.013553212745); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9865380138362236e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-11) / static_cast<T>(2.013553212745));
  }
};

/// \brief CODATA recommended value for the deuteron molar mass (2018).
/// \details deuteron molar mass = (0.00201355321205 ± 6.1e-13) kg mol^-1.
template <typename T> struct deuteron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00201355321205 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00201355321205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0294704721458966e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-13) / static_cast<T>(0.00201355321205));
  }
};

/// \brief CODATA recommended value for the deuteron-neutron mag. mom. ratio
/// (2018). \details deuteron-neutron mag. mom. ratio = (-0.44820653 ± 1.1e-07)
/// .
template <typename T> struct deuteron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.44820653 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.44820653); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// deuteron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.454225733837479e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-0.44820653));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mag. mom. ratio
/// (2018). \details deuteron-proton mag. mom. ratio = (0.30701220939 ± 7.9e-10)
/// .
template <typename T> struct deuteron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.30701220939 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.30701220939); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.573187566610606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.9e-10) / static_cast<T>(0.30701220939));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mass ratio (2018).
/// \details deuteron-proton mass ratio = (1.99900750139 ± 1.1e-10) .
template <typename T> struct deuteron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.99900750139 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.99900750139); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.502730726298528e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(1.99900750139));
  }
};

/// \brief CODATA recommended value for the deuteron relative atomic mass
/// (2018). \details deuteron relative atomic mass = (2.013553212745 ± 4e-11) .
template <typename T> struct deuteron_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 2.013553212745 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.013553212745); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9865380138362236e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-11) / static_cast<T>(2.013553212745));
  }
};

/// \brief CODATA recommended value for the deuteron rms charge radius (2018).
/// \details deuteron rms charge radius = (2.12799e-15 ± 7.4e-19) m.
template <typename T> struct deuteron_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.12799e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = deuteron_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.12799e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-19 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = deuteron_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0003477459950469692.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = deuteron_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-19) / static_cast<T>(2.12799e-15));
  }
};

/// \brief CODATA recommended value for the electron charge to mass quotient
/// (2018). \details electron charge to mass quotient = (-175882001076.0 ± 53.0)
/// C kg^-1.
template <typename T> struct electron_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = -175882001076.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-175882001076.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 53.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(53.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0133839549106725e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(53.0) / static_cast<T>(-175882001076.0));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mag. mom. ratio
/// (2018). \details electron-deuteron mag. mom. ratio = (-2143.9234915
/// ± 5.6e-06) .
template <typename T> struct electron_deuteron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2143.9234915 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_deuteron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2143.9234915); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_deuteron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6120335087526603e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_deuteron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.6e-06) / static_cast<T>(-2143.9234915));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mass ratio (2018).
/// \details electron-deuteron mass ratio = (0.0002724437107462 ± 9.6e-15) .
template <typename T> struct electron_deuteron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0002724437107462 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_deuteron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0002724437107462);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.6e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_deuteron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.6e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.5236636491649676e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_deuteron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.6e-15) /
                    static_cast<T>(0.0002724437107462));
  }
};

/// \brief CODATA recommended value for the electron g factor (2018).
/// \details electron g factor = (-2.00231930436256 ± 3.5e-13) .
template <typename T> struct electron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.00231930436256 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-2.00231930436256);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7479729593448774e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-13) /
                    static_cast<T>(-2.00231930436256));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio (2018).
/// \details electron gyromag. ratio = (176085963023.0 ± 53.0) s^-1 T^-1.
template <typename T> struct electron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 176085963023.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(176085963023.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 53.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(53.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0098935253048675e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(53.0) / static_cast<T>(176085963023.0));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio in MHz/T
/// (2018). \details electron gyromag. ratio in MHz/T = (28024.9514242
/// ± 8.5e-06) MHz T^-1.
template <typename T> struct electron_gyromag_ratio_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 28024.9514242 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_gyromag_ratio_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(28024.9514242); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_gyromag_ratio_in_MHz_T<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.033011501550762e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_gyromag_ratio_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-06) / static_cast<T>(28024.9514242));
  }
};

/// \brief CODATA recommended value for the electron-helion mass ratio (2018).
/// \details electron-helion mass ratio = (0.0001819543074573 ± 7.9e-15) .
template <typename T> struct electron_helion_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001819543074573 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_helion_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001819543074573);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.9e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_helion_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.9e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3417493712557075e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_helion_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.9e-15) /
                    static_cast<T>(0.0001819543074573));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. (2018).
/// \details electron mag. mom. = (-9.2847647043e-24 ± 2.8e-33) J T^-1.
template <typename T> struct electron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.2847647043e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-9.2847647043e-24);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0156930080341743e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-33) /
                    static_cast<T>(-9.2847647043e-24));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. anomaly (2018).
/// \details electron mag. mom. anomaly = (0.00115965218128 ± 1.8e-13) .
template <typename T> struct electron_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00115965218128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00115965218128); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.552189552226942e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-13) / static_cast<T>(0.00115965218128));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to Bohr magneton
/// ratio (2018). \details electron mag. mom. to Bohr magneton ratio =
/// (-1.00115965218128 ± 1.8e-13) .
template <typename T> struct electron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.00115965218128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-1.00115965218128);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.797915043897588e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-13) /
                    static_cast<T>(-1.00115965218128));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to nuclear
/// magneton ratio (2018). \details electron mag. mom. to nuclear magneton ratio
/// = (-1838.28197188 ± 1.1e-07) .
template <typename T> struct electron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1838.28197188 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1838.28197188); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.983848053925246e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-1838.28197188));
  }
};

/// \brief CODATA recommended value for the electron mass (2018).
/// \details electron mass = (9.1093837015e-31 ± 2.8e-40) kg.
template <typename T> struct electron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.1093837015e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.1093837015e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0737534961217373e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-40) / static_cast<T>(9.1093837015e-31));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent
/// (2018). \details electron mass energy equivalent = (8.1871057769e-14
/// ± 2.5e-23) J.
template <typename T> struct electron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 8.1871057769e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.1871057769e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0535821426098767e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-23) / static_cast<T>(8.1871057769e-14));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent in
/// MeV (2018). \details electron mass energy equivalent in MeV = (0.51099895
/// ± 1.5e-10) MeV.
template <typename T> struct electron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099895 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099895); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9354267753387753e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(0.51099895));
  }
};

/// \brief CODATA recommended value for the electron mass in u (2018).
/// \details electron mass in u = (0.000548579909065 ± 1.6e-14) u.
template <typename T> struct electron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.000548579909065 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.000548579909065);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.916621577933908e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-14) /
                    static_cast<T>(0.000548579909065));
  }
};

/// \brief CODATA recommended value for the electron molar mass (2018).
/// \details electron molar mass = (5.4857990888e-07 ± 1.7e-16) kg mol^-1.
template <typename T> struct electron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.4857990888e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.4857990888e-07); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-16 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0989104275998364e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-16) / static_cast<T>(5.4857990888e-07));
  }
};

/// \brief CODATA recommended value for the electron-muon mag. mom. ratio
/// (2018). \details electron-muon mag. mom. ratio = (206.7669883 ± 4.6e-06) .
template <typename T> struct electron_muon_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7669883 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_muon_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7669883); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_muon_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2247265087238298e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_muon_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-06) / static_cast<T>(206.7669883));
  }
};

/// \brief CODATA recommended value for the electron-muon mass ratio (2018).
/// \details electron-muon mass ratio = (0.00483633169 ± 1.1e-10) .
template <typename T> struct electron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00483633169 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00483633169); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.27445111400124e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(0.00483633169));
  }
};

/// \brief CODATA recommended value for the electron-neutron mag. mom. ratio
/// (2018). \details electron-neutron mag. mom. ratio = (960.9205 ± 0.00023) .
template <typename T> struct electron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 960.9205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(960.9205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00023); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3935382791812643e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00023) / static_cast<T>(960.9205));
  }
};

/// \brief CODATA recommended value for the electron-neutron mass ratio (2018).
/// \details electron-neutron mass ratio = (0.00054386734424 ± 2.6e-13) .
template <typename T> struct electron_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054386734424 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054386734424); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.780577520485697e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-13) / static_cast<T>(0.00054386734424));
  }
};

/// \brief CODATA recommended value for the electron-proton mag. mom. ratio
/// (2018). \details electron-proton mag. mom. ratio = (-658.21068789 ± 2e-07) .
template <typename T> struct electron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.21068789 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.21068789); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.038540754194255e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(-658.21068789));
  }
};

/// \brief CODATA recommended value for the electron-proton mass ratio (2018).
/// \details electron-proton mass ratio = (0.000544617021487 ± 3.3e-14) .
template <typename T> struct electron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000544617021487 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.000544617021487);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-14 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.059303822326037e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-14) /
                    static_cast<T>(0.000544617021487));
  }
};

/// \brief CODATA recommended value for the electron relative atomic mass
/// (2018). \details electron relative atomic mass = (0.000548579909065
/// ± 1.6e-14) .
template <typename T> struct electron_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.000548579909065 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.000548579909065);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-14 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.916621577933908e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-14) /
                    static_cast<T>(0.000548579909065));
  }
};

/// \brief CODATA recommended value for the electron-tau mass ratio (2018).
/// \details electron-tau mass ratio = (0.000287585 ± 1.9e-08) .
template <typename T> struct electron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000287585 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000287585); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.606742354434343e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-08) / static_cast<T>(0.000287585));
  }
};

/// \brief CODATA recommended value for the electron to alpha particle mass
/// ratio (2018). \details electron to alpha particle mass ratio =
/// (0.0001370933554787 ± 4.5e-15) .
template <typename T> struct electron_to_alpha_particle_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001370933554787 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_to_alpha_particle_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001370933554787);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_to_alpha_particle_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.2824347936389655e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_to_alpha_particle_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-15) /
                    static_cast<T>(0.0001370933554787));
  }
};

/// \brief CODATA recommended value for the electron to shielded helion mag.
/// mom. ratio (2018). \details electron to shielded helion mag. mom. ratio =
/// (864.058257 ± 1e-05) .
template <typename T> struct electron_to_shielded_helion_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 864.058257 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_to_shielded_helion_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(864.058257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1573293720633932e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-05) / static_cast<T>(864.058257));
  }
};

/// \brief CODATA recommended value for the electron to shielded proton mag.
/// mom. ratio (2018). \details electron to shielded proton mag. mom. ratio =
/// (-658.2275971 ± 7.2e-06) .
template <typename T> struct electron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2275971 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2275971); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0938465709614045e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-06) / static_cast<T>(-658.2275971));
  }
};

/// \brief CODATA recommended value for the electron-triton mass ratio (2018).
/// \details electron-triton mass ratio = (0.0001819200062251 ± 9e-15) .
template <typename T> struct electron_triton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001819200062251 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_triton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.0001819200062251);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_triton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.947229382162502e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_triton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-15) / static_cast<T>(0.0001819200062251));
  }
};

/// \brief CODATA recommended value for the electron volt (2018).
/// \details electron volt = (1.602176634e-19 ± 0.0) J.
template <typename T> struct electron_volt {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176634e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176634e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = electron_volt<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_volt<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.602176634e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-atomic mass unit
/// relationship (2018). \details electron volt-atomic mass unit relationship =
/// (1.07354410233e-09 ± 3.2e-19) u.
template <typename T> struct electron_volt_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.07354410233e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// electron_volt_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.07354410233e-09);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-19 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.980781127719653e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_volt_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-19) /
                    static_cast<T>(1.07354410233e-09));
  }
};

/// \brief CODATA recommended value for the electron volt-hartree relationship
/// (2018). \details electron volt-hartree relationship = (0.036749322175655
/// ± 7.1e-14) E_h.
template <typename T> struct electron_volt_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.036749322175655 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.036749322175655);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-14 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9320084234651477e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_volt_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-14) /
                    static_cast<T>(0.036749322175655));
  }
};

/// \brief CODATA recommended value for the electron volt-hertz relationship
/// (2018). \details electron volt-hertz relationship = (241798924200000.0 ±
/// 0.0) Hz.
template <typename T> struct electron_volt_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 241798924200000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798924200000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_volt_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(241798924200000.0));
  }
};

/// \brief CODATA recommended value for the electron volt-inverse meter
/// relationship (2018). \details electron volt-inverse meter relationship =
/// (806554.3937 ± 0.0) m^-1.
template <typename T> struct electron_volt_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 806554.3937 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(806554.3937); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_volt_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(806554.3937));
  }
};

/// \brief CODATA recommended value for the electron volt-joule relationship
/// (2018). \details electron volt-joule relationship = (1.602176634e-19 ± 0.0)
/// J.
template <typename T> struct electron_volt_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176634e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176634e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_volt_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.602176634e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-kelvin relationship
/// (2018). \details electron volt-kelvin relationship = (11604.51812 ± 0.0) K.
template <typename T> struct electron_volt_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 11604.51812 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(11604.51812); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = electron_volt_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(11604.51812));
  }
};

/// \brief CODATA recommended value for the electron volt-kilogram relationship
/// (2018). \details electron volt-kilogram relationship = (1.782661921e-36 ±
/// 0.0) kg.
template <typename T> struct electron_volt_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.782661921e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = electron_volt_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.782661921e-36); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// electron_volt_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// electron_volt_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.782661921e-36));
  }
};

/// \brief CODATA recommended value for the elementary charge (2018).
/// \details elementary charge = (1.602176634e-19 ± 0.0) C.
template <typename T> struct elementary_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176634e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = elementary_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176634e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = elementary_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = elementary_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.602176634e-19));
  }
};

/// \brief CODATA recommended value for the elementary charge over h-bar (2018).
/// \details elementary charge over h-bar = (1519267447000000.0 ± 0.0) A J^-1.
template <typename T> struct elementary_charge_over_h_bar {
  /// \brief Returns the constant's value.
  /// \details value = 1519267447000000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = elementary_charge_over_h_bar<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1519267447000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = elementary_charge_over_h_bar<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = elementary_charge_over_h_bar<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1519267447000000.0));
  }
};

/// \brief CODATA recommended value for the Faraday constant (2018).
/// \details Faraday constant = (96485.33212 ± 0.0) C mol^-1.
template <typename T> struct Faraday_constant {
  /// \brief Returns the constant's value.
  /// \details value = 96485.33212 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Faraday_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.33212); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Faraday_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Faraday_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(96485.33212));
  }
};

/// \brief CODATA recommended value for the Fermi coupling constant (2018).
/// \details Fermi coupling constant = (1.1663787e-05 ± 6e-12) GeV^-2.
template <typename T> struct Fermi_coupling_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.1663787e-05 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Fermi_coupling_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.1663787e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-12 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Fermi_coupling_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.144126860341328e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Fermi_coupling_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-12) / static_cast<T>(1.1663787e-05));
  }
};

/// \brief CODATA recommended value for the fine-structure constant (2018).
/// \details fine-structure constant = (0.0072973525693 ± 1.1e-12) .
template <typename T> struct fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0072973525693 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0072973525693); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = fine_structure_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5073959899206537e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-12) / static_cast<T>(0.0072973525693));
  }
};

/// \brief CODATA recommended value for the first radiation constant (2018).
/// \details first radiation constant = (3.741771852e-16 ± 0.0) W m^2.
template <typename T> struct first_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.741771852e-16 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = first_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.741771852e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = first_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = first_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.741771852e-16));
  }
};

/// \brief CODATA recommended value for the first radiation constant for
/// spectral radiance (2018). \details first radiation constant for spectral
/// radiance = (1.191042972e-16 ± 0.0) W m^2 sr^-1.
template <typename T> struct first_radiation_constant_for_spectral_radiance {
  /// \brief Returns the constant's value.
  /// \details value = 1.191042972e-16 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// first_radiation_constant_for_spectral_radiance<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.191042972e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// first_radiation_constant_for_spectral_radiance<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// first_radiation_constant_for_spectral_radiance<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.191042972e-16));
  }
};

/// \brief CODATA recommended value for the hartree-atomic mass unit
/// relationship (2018). \details hartree-atomic mass unit relationship =
/// (2.92126232205e-08 ± 8.8e-18) u.
template <typename T> struct hartree_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.92126232205e-08 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.92126232205e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-18 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hartree_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0123963649469817e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// hartree_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-18) /
                    static_cast<T>(2.92126232205e-08));
  }
};

/// \brief CODATA recommended value for the hartree-electron volt relationship
/// (2018). \details hartree-electron volt relationship = (27.211386245988
/// ± 5.3e-11) eV.
template <typename T> struct hartree_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 27.211386245988 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.211386245988); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-11 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hartree_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9477140753097144e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// hartree_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-11) / static_cast<T>(27.211386245988));
  }
};

/// \brief CODATA recommended value for the Hartree energy (2018).
/// \details Hartree energy = (4.3597447222071e-18 ± 8.5e-30) J.
template <typename T> struct Hartree_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.3597447222071e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Hartree_energy<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.3597447222071e-18);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-30 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Hartree_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.949655436636876e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Hartree_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-30) /
                    static_cast<T>(4.3597447222071e-18));
  }
};

/// \brief CODATA recommended value for the Hartree energy in eV (2018).
/// \details Hartree energy in eV = (27.211386245988 ± 5.3e-11) eV.
template <typename T> struct Hartree_energy_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 27.211386245988 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Hartree_energy_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.211386245988); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-11 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Hartree_energy_in_eV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9477140753097144e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Hartree_energy_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-11) / static_cast<T>(27.211386245988));
  }
};

/// \brief CODATA recommended value for the hartree-hertz relationship (2018).
/// \details hartree-hertz relationship = (6579683920502000.0 ± 13000.0) Hz.
template <typename T> struct hartree_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6579683920502000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(6579683920502000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 13000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hartree_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(13000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.975778799874046e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hartree_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(13000.0) /
                    static_cast<T>(6579683920502000.0));
  }
};

/// \brief CODATA recommended value for the hartree-inverse meter relationship
/// (2018). \details hartree-inverse meter relationship = (21947463.13632
/// ± 4.3e-05) m^-1.
template <typename T> struct hartree_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 21947463.13632 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(21947463.13632); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hartree_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.959224158752133e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// hartree_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-05) / static_cast<T>(21947463.13632));
  }
};

/// \brief CODATA recommended value for the hartree-joule relationship (2018).
/// \details hartree-joule relationship = (4.3597447222071e-18 ± 8.5e-30) J.
template <typename T> struct hartree_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.3597447222071e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.3597447222071e-18);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-30 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hartree_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.949655436636876e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hartree_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-30) /
                    static_cast<T>(4.3597447222071e-18));
  }
};

/// \brief CODATA recommended value for the hartree-kelvin relationship (2018).
/// \details hartree-kelvin relationship = (315775.02480407 ± 6.1e-07) K.
template <typename T> struct hartree_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 315775.02480407 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(315775.02480407); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-07 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hartree_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9317550537079007e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hartree_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-07) / static_cast<T>(315775.02480407));
  }
};

/// \brief CODATA recommended value for the hartree-kilogram relationship
/// (2018). \details hartree-kilogram relationship = (4.8508702095432e-35
/// ± 9.4e-47) kg.
template <typename T> struct hartree_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.8508702095432e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hartree_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.8508702095432e-35);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.4e-47 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hartree_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.4e-47); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9377966414164657e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hartree_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.4e-47) /
                    static_cast<T>(4.8508702095432e-35));
  }
};

/// \brief CODATA recommended value for the helion-electron mass ratio (2018).
/// \details helion-electron mass ratio = (5495.88528007 ± 2.4e-07) .
template <typename T> struct helion_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5495.88528007 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5495.88528007); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.36690337897561e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-07) / static_cast<T>(5495.88528007));
  }
};

/// \brief CODATA recommended value for the helion g factor (2018).
/// \details helion g factor = (-4.255250615 ± 5e-08) .
template <typename T> struct helion_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -4.255250615 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.255250615); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1750189242379088e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-08) / static_cast<T>(-4.255250615));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. (2018).
/// \details helion mag. mom. = (-1.074617532e-26 ± 1.3e-34) J T^-1.
template <typename T> struct helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.074617532e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074617532e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2097327293558431e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-34) / static_cast<T>(-1.074617532e-26));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to Bohr magneton
/// ratio (2018). \details helion mag. mom. to Bohr magneton ratio =
/// (-0.001158740958 ± 1.4e-11) .
template <typename T> struct helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158740958 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158740958); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082079176837038e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158740958));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to nuclear magneton
/// ratio (2018). \details helion mag. mom. to nuclear magneton ratio =
/// (-2.127625307 ± 2.5e-08) .
template <typename T> struct helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127625307 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127625307); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1750189245140426e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127625307));
  }
};

/// \brief CODATA recommended value for the helion mass (2018).
/// \details helion mass = (5.0064127796e-27 ± 1.5e-36) kg.
template <typename T> struct helion_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.0064127796e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.0064127796e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.996157260767951e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-36) / static_cast<T>(5.0064127796e-27));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent
/// (2018). \details helion mass energy equivalent = (4.4995394125e-10
/// ± 1.4e-19) J.
template <typename T> struct helion_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.4995394125e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4995394125e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.1114295745709286e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-19) / static_cast<T>(4.4995394125e-10));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent in MeV
/// (2018). \details helion mass energy equivalent in MeV = (2808.39160743
/// ± 8.5e-07) MeV.
template <typename T> struct helion_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.39160743 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.39160743); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// helion_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0266434273311596e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// helion_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-07) / static_cast<T>(2808.39160743));
  }
};

/// \brief CODATA recommended value for the helion mass in u (2018).
/// \details helion mass in u = (3.014932247175 ± 9.7e-11) u.
template <typename T> struct helion_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.014932247175 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.014932247175); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.217319397173495e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-11) / static_cast<T>(3.014932247175));
  }
};

/// \brief CODATA recommended value for the helion molar mass (2018).
/// \details helion molar mass = (0.00301493224613 ± 9.1e-13) kg mol^-1.
template <typename T> struct helion_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00301493224613 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00301493224613); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.01830995097182e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-13) / static_cast<T>(0.00301493224613));
  }
};

/// \brief CODATA recommended value for the helion-proton mass ratio (2018).
/// \details helion-proton mass ratio = (2.99315267167 ± 1.3e-10) .
template <typename T> struct helion_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.99315267167 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.99315267167); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.343246545037336e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-10) / static_cast<T>(2.99315267167));
  }
};

/// \brief CODATA recommended value for the helion relative atomic mass (2018).
/// \details helion relative atomic mass = (3.014932247175 ± 9.7e-11) .
template <typename T> struct helion_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.014932247175 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.014932247175); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.217319397173495e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-11) / static_cast<T>(3.014932247175));
  }
};

/// \brief CODATA recommended value for the helion shielding shift (2018).
/// \details helion shielding shift = (5.996743e-05 ± 1e-10) .
template <typename T> struct helion_shielding_shift {
  /// \brief Returns the constant's value.
  /// \details value = 5.996743e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = helion_shielding_shift<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.996743e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = helion_shielding_shift<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.667571880269006e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = helion_shielding_shift<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-10) / static_cast<T>(5.996743e-05));
  }
};

/// \brief CODATA recommended value for the hertz-atomic mass unit relationship
/// (2018). \details hertz-atomic mass unit relationship = (4.4398216652e-24
/// ± 1.3e-33) u.
template <typename T> struct hertz_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.4398216652e-24 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4398216652e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-33 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hertz_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.928045534327647e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// hertz_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-33) / static_cast<T>(4.4398216652e-24));
  }
};

/// \brief CODATA recommended value for the hertz-electron volt relationship
/// (2018). \details hertz-electron volt relationship = (4.135667696e-15 ± 0.0)
/// eV.
template <typename T> struct hertz_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667696e-15 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667696e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hertz_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(4.135667696e-15));
  }
};

/// \brief CODATA recommended value for the hertz-hartree relationship (2018).
/// \details hertz-hartree relationship = (1.519829846057e-16 ± 2.9e-28) E_h.
template <typename T> struct hertz_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.519829846057e-16 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.519829846057e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-28 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hertz_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.908108336945528e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-28) /
                    static_cast<T>(1.519829846057e-16));
  }
};

/// \brief CODATA recommended value for the hertz-inverse meter relationship
/// (2018). \details hertz-inverse meter relationship = (3.335640951e-09 ± 0.0)
/// m^-1.
template <typename T> struct hertz_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.335640951e-09 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.335640951e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hertz_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.335640951e-09));
  }
};

/// \brief CODATA recommended value for the hertz-joule relationship (2018).
/// \details hertz-joule relationship = (6.62607015e-34 ± 0.0) J.
template <typename T> struct hertz_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.62607015e-34 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62607015e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hertz_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.62607015e-34));
  }
};

/// \brief CODATA recommended value for the hertz-kelvin relationship (2018).
/// \details hertz-kelvin relationship = (4.799243073e-11 ± 0.0) K.
template <typename T> struct hertz_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.799243073e-11 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.799243073e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hertz_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(4.799243073e-11));
  }
};

/// \brief CODATA recommended value for the hertz-kilogram relationship (2018).
/// \details hertz-kilogram relationship = (7.372497323e-51 ± 0.0) kg.
template <typename T> struct hertz_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.372497323e-51 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hertz_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.372497323e-51); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = hertz_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = hertz_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(7.372497323e-51));
  }
};

/// \brief CODATA recommended value for the hyperfine transition frequency of
/// Cs-133 (2018). \details hyperfine transition frequency of Cs-133 =
/// (9192631770.0 ± 0.0) Hz.
template <typename T> struct hyperfine_transition_frequency_of_Cs_133 {
  /// \brief Returns the constant's value.
  /// \details value = 9192631770.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = hyperfine_transition_frequency_of_Cs_133<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9192631770.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// hyperfine_transition_frequency_of_Cs_133<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// hyperfine_transition_frequency_of_Cs_133<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(9192631770.0));
  }
};

/// \brief CODATA recommended value for the inverse fine-structure constant
/// (2018). \details inverse fine-structure constant = (137.035999084 ± 2.1e-08)
/// .
template <typename T> struct inverse_fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 137.035999084 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(137.035999084); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_fine_structure_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5324440395495982e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = inverse_fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-08) / static_cast<T>(137.035999084));
  }
};

/// \brief CODATA recommended value for the inverse meter-atomic mass unit
/// relationship (2018). \details inverse meter-atomic mass unit relationship =
/// (1.3310250501e-15 ± 4e-25) u.
template <typename T> struct inverse_meter_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.3310250501e-15 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// inverse_meter_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.3310250501e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-25 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.005202644157208e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// inverse_meter_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-25) / static_cast<T>(1.3310250501e-15));
  }
};

/// \brief CODATA recommended value for the inverse meter-electron volt
/// relationship (2018). \details inverse meter-electron volt relationship =
/// (1.239841984e-06 ± 0.0) eV.
template <typename T> struct inverse_meter_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.239841984e-06 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.239841984e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// inverse_meter_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.239841984e-06));
  }
};

/// \brief CODATA recommended value for the inverse meter-hartree relationship
/// (2018). \details inverse meter-hartree relationship = (4.556335252912e-08
/// ± 8.8e-20) E_h.
template <typename T> struct inverse_meter_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.556335252912e-08 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.556335252912e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-20 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9313767559961332e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// inverse_meter_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-20) /
                    static_cast<T>(4.556335252912e-08));
  }
};

/// \brief CODATA recommended value for the inverse meter-hertz relationship
/// (2018). \details inverse meter-hertz relationship = (299792458.0 ± 0.0) Hz.
template <typename T> struct inverse_meter_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = inverse_meter_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the inverse meter-joule relationship
/// (2018). \details inverse meter-joule relationship = (1.986445857e-25 ± 0.0)
/// J.
template <typename T> struct inverse_meter_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.986445857e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.986445857e-25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = inverse_meter_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.986445857e-25));
  }
};

/// \brief CODATA recommended value for the inverse meter-kelvin relationship
/// (2018). \details inverse meter-kelvin relationship = (0.01438776877 ± 0.0)
/// K.
template <typename T> struct inverse_meter_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.01438776877 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.01438776877); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = inverse_meter_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.01438776877));
  }
};

/// \brief CODATA recommended value for the inverse meter-kilogram relationship
/// (2018). \details inverse meter-kilogram relationship = (2.210219094e-42 ±
/// 0.0) kg.
template <typename T> struct inverse_meter_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.210219094e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_meter_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.210219094e-42); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_meter_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// inverse_meter_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(2.210219094e-42));
  }
};

/// \brief CODATA recommended value for the inverse of conductance quantum
/// (2018). \details inverse of conductance quantum = (12906.40372 ± 0.0) ohm.
template <typename T> struct inverse_of_conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 12906.40372 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = inverse_of_conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(12906.40372); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// inverse_of_conductance_quantum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = inverse_of_conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(12906.40372));
  }
};

/// \brief CODATA recommended value for the Josephson constant (2018).
/// \details Josephson constant = (483597848400000.0 ± 0.0) Hz V^-1.
template <typename T> struct Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597848400000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597848400000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Josephson_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Josephson_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(483597848400000.0));
  }
};

/// \brief CODATA recommended value for the joule-atomic mass unit relationship
/// (2018). \details joule-atomic mass unit relationship = (6700535256.5 ± 2.0)
/// u.
template <typename T> struct joule_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6700535256.5 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6700535256.5); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// joule_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.984836171199691e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// joule_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.0) / static_cast<T>(6700535256.5));
  }
};

/// \brief CODATA recommended value for the joule-electron volt relationship
/// (2018). \details joule-electron volt relationship = (6.241509074e+18 ± 0.0)
/// eV.
template <typename T> struct joule_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.241509074e+18 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.241509074e+18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// joule_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.241509074e+18));
  }
};

/// \brief CODATA recommended value for the joule-hartree relationship (2018).
/// \details joule-hartree relationship = (2.2937122783963e+17 ± 450000.0) E_h.
template <typename T> struct joule_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.2937122783963e+17 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.2937122783963e+17);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 450000.0 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = joule_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(450000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.961885124993216e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(450000.0) /
                    static_cast<T>(2.2937122783963e+17));
  }
};

/// \brief CODATA recommended value for the joule-hertz relationship (2018).
/// \details joule-hertz relationship = (1.509190179e+33 ± 0.0) Hz.
template <typename T> struct joule_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.509190179e+33 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.509190179e+33); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = joule_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.509190179e+33));
  }
};

/// \brief CODATA recommended value for the joule-inverse meter relationship
/// (2018). \details joule-inverse meter relationship = (5.034116567e+24 ± 0.0)
/// m^-1.
template <typename T> struct joule_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.034116567e+24 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.034116567e+24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// joule_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(5.034116567e+24));
  }
};

/// \brief CODATA recommended value for the joule-kelvin relationship (2018).
/// \details joule-kelvin relationship = (7.242970516e+22 ± 0.0) K.
template <typename T> struct joule_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.242970516e+22 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.242970516e+22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = joule_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(7.242970516e+22));
  }
};

/// \brief CODATA recommended value for the joule-kilogram relationship (2018).
/// \details joule-kilogram relationship = (1.112650056e-17 ± 0.0) kg.
template <typename T> struct joule_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-17 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = joule_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = joule_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = joule_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-17));
  }
};

/// \brief CODATA recommended value for the kelvin-atomic mass unit relationship
/// (2018). \details kelvin-atomic mass unit relationship = (9.2510873014e-14
/// ± 2.8e-23) u.
template <typename T> struct kelvin_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 9.2510873014e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.2510873014e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-23 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kelvin_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0266712536333605e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// kelvin_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-23) / static_cast<T>(9.2510873014e-14));
  }
};

/// \brief CODATA recommended value for the kelvin-electron volt relationship
/// (2018). \details kelvin-electron volt relationship = (8.617333262e-05 ± 0.0)
/// eV.
template <typename T> struct kelvin_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.617333262e-05 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.617333262e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kelvin_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.617333262e-05));
  }
};

/// \brief CODATA recommended value for the kelvin-hartree relationship (2018).
/// \details kelvin-hartree relationship = (3.1668115634556e-06 ± 6.1e-18) E_h.
template <typename T> struct kelvin_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.1668115634556e-06 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3.1668115634556e-06);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-18 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kelvin_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.926227651304812e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-18) /
                    static_cast<T>(3.1668115634556e-06));
  }
};

/// \brief CODATA recommended value for the kelvin-hertz relationship (2018).
/// \details kelvin-hertz relationship = (20836619120.0 ± 0.0) Hz.
template <typename T> struct kelvin_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 20836619120.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836619120.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kelvin_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(20836619120.0));
  }
};

/// \brief CODATA recommended value for the kelvin-inverse meter relationship
/// (2018). \details kelvin-inverse meter relationship = (69.50348004 ± 0.0)
/// m^-1.
template <typename T> struct kelvin_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 69.50348004 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(69.50348004); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kelvin_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(69.50348004));
  }
};

/// \brief CODATA recommended value for the kelvin-joule relationship (2018).
/// \details kelvin-joule relationship = (1.380649e-23 ± 0.0) J.
template <typename T> struct kelvin_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.380649e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.380649e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kelvin_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.380649e-23));
  }
};

/// \brief CODATA recommended value for the kelvin-kilogram relationship (2018).
/// \details kelvin-kilogram relationship = (1.536179187e-40 ± 0.0) kg.
template <typename T> struct kelvin_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.536179187e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kelvin_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.536179187e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kelvin_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kelvin_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.536179187e-40));
  }
};

/// \brief CODATA recommended value for the kilogram-atomic mass unit
/// relationship (2018). \details kilogram-atomic mass unit relationship =
/// (6.0221407621e+26 ± 1.8e+17) u.
template <typename T> struct kilogram_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.0221407621e+26 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.0221407621e+26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e+17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kilogram_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e+17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9889703198706307e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// kilogram_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e+17) / static_cast<T>(6.0221407621e+26));
  }
};

/// \brief CODATA recommended value for the kilogram-electron volt relationship
/// (2018). \details kilogram-electron volt relationship = (5.609588603e+35 ±
/// 0.0) eV.
template <typename T> struct kilogram_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.609588603e+35 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.609588603e+35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kilogram_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// kilogram_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(5.609588603e+35));
  }
};

/// \brief CODATA recommended value for the kilogram-hartree relationship
/// (2018). \details kilogram-hartree relationship = (2.0614857887409e+34 ±
/// 4e+22) E_h.
template <typename T> struct kilogram_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.0614857887409e+34 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.0614857887409e+34);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e+22 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kilogram_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e+22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9403480838172994e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kilogram_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e+22) /
                    static_cast<T>(2.0614857887409e+34));
  }
};

/// \brief CODATA recommended value for the kilogram-hertz relationship (2018).
/// \details kilogram-hertz relationship = (1.356392489e+50 ± 0.0) Hz.
template <typename T> struct kilogram_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.356392489e+50 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.356392489e+50); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kilogram_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kilogram_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.356392489e+50));
  }
};

/// \brief CODATA recommended value for the kilogram-inverse meter relationship
/// (2018). \details kilogram-inverse meter relationship = (4.524438335e+41 ±
/// 0.0) m^-1.
template <typename T> struct kilogram_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.524438335e+41 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.524438335e+41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// kilogram_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// kilogram_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(4.524438335e+41));
  }
};

/// \brief CODATA recommended value for the kilogram-joule relationship (2018).
/// \details kilogram-joule relationship = (8.987551787e+16 ± 0.0) J.
template <typename T> struct kilogram_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.987551787e+16 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.987551787e+16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kilogram_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kilogram_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.987551787e+16));
  }
};

/// \brief CODATA recommended value for the kilogram-kelvin relationship (2018).
/// \details kilogram-kelvin relationship = (6.50965726e+39 ± 0.0) K.
template <typename T> struct kilogram_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.50965726e+39 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = kilogram_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.50965726e+39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = kilogram_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = kilogram_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.50965726e+39));
  }
};

/// \brief CODATA recommended value for the lattice parameter of silicon (2018).
/// \details lattice parameter of silicon = (5.431020511e-10 ± 8.9e-18) m.
template <typename T> struct lattice_parameter_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 5.431020511e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = lattice_parameter_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.431020511e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = lattice_parameter_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.6387343745017943e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = lattice_parameter_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-18) / static_cast<T>(5.431020511e-10));
  }
};

/// \brief CODATA recommended value for the lattice spacing of ideal Si (220)
/// (2018). \details lattice spacing of ideal Si (220) = (1.920155716e-10
/// ± 3.2e-18) m.
template <typename T> struct lattice_spacing_of_ideal_Si_220 {
  /// \brief Returns the constant's value.
  /// \details value = 1.920155716e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = lattice_spacing_of_ideal_Si_220<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.920155716e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// lattice_spacing_of_ideal_Si_220<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.6665315074894688e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = lattice_spacing_of_ideal_Si_220<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-18) / static_cast<T>(1.920155716e-10));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K, 100
/// kPa) (2018). \details Loschmidt constant (273.15 K, 100 kPa) =
/// (2.651645804e+25 ± 0.0) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.651645804e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Loschmidt_constant_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.651645804e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Loschmidt_constant_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(2.651645804e+25));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K,
/// 101.325 kPa) (2018). \details Loschmidt constant (273.15 K, 101.325 kPa) =
/// (2.686780111e+25 ± 0.0) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.686780111e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Loschmidt_constant_27315_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.686780111e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(2.686780111e+25));
  }
};

/// \brief CODATA recommended value for the luminous efficacy (2018).
/// \details luminous efficacy = (683.0 ± 0.0) lm W^-1.
template <typename T> struct luminous_efficacy {
  /// \brief Returns the constant's value.
  /// \details value = 683.0 lm W^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = luminous_efficacy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(683.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 lm W^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = luminous_efficacy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = luminous_efficacy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(683.0));
  }
};

/// \brief CODATA recommended value for the mag. flux quantum (2018).
/// \details mag. flux quantum = (2.067833848e-15 ± 0.0) Wb.
template <typename T> struct mag_flux_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 2.067833848e-15 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = mag_flux_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.067833848e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = mag_flux_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = mag_flux_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(2.067833848e-15));
  }
};

/// \brief CODATA recommended value for the molar gas constant (2018).
/// \details molar gas constant = (8.314462618 ± 0.0) J mol^-1 K^-1.
template <typename T> struct molar_gas_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.314462618 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_gas_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.314462618); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = molar_gas_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = molar_gas_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.314462618));
  }
};

/// \brief CODATA recommended value for the molar mass constant (2018).
/// \details molar mass constant = (0.00099999999965 ± 3e-13) kg mol^-1.
template <typename T> struct molar_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.00099999999965 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00099999999965); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = molar_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.00000000105e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = molar_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-13) / static_cast<T>(0.00099999999965));
  }
};

/// \brief CODATA recommended value for the molar mass of carbon-12 (2018).
/// \details molar mass of carbon-12 = (0.0119999999958 ± 3.6e-12) kg mol^-1.
template <typename T> struct molar_mass_of_carbon_12 {
  /// \brief Returns the constant's value.
  /// \details value = 0.0119999999958 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_mass_of_carbon_12<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0119999999958); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = molar_mass_of_carbon_12<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.00000000105e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = molar_mass_of_carbon_12<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-12) / static_cast<T>(0.0119999999958));
  }
};

/// \brief CODATA recommended value for the molar Planck constant (2018).
/// \details molar Planck constant = (3.990312712e-10 ± 0.0) J Hz^-1 mol^-1.
template <typename T> struct molar_Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.990312712e-10 J Hz^-1 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.990312712e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J Hz^-1 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = molar_Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = molar_Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.990312712e-10));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 100 kPa) (2018). \details molar volume of ideal gas (273.15 K, 100 kPa) =
/// (0.02271095464 ± 0.0) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.02271095464 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_volume_of_ideal_gas_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.02271095464); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.02271095464));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 101.325 kPa) (2018). \details molar volume of ideal gas (273.15 K, 101.325
/// kPa) = (0.02241396954 ± 0.0) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.02241396954 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.02241396954); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.02241396954));
  }
};

/// \brief CODATA recommended value for the molar volume of silicon (2018).
/// \details molar volume of silicon = (1.205883199e-05 ± 6e-13) m^3 mol^-1.
template <typename T> struct molar_volume_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 1.205883199e-05 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = molar_volume_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.205883199e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-13 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = molar_volume_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9756062651636626e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = molar_volume_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-13) / static_cast<T>(1.205883199e-05));
  }
};

/// \brief CODATA recommended value for the Mo x unit (2018).
/// \details Mo x unit = (1.00209952e-13 ± 5.3e-20) m.
template <typename T> struct Mo_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00209952e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Mo_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00209952e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Mo_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.288895857369535e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Mo_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-20) / static_cast<T>(1.00209952e-13));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength (2018).
/// \details muon Compton wavelength = (1.17344411e-14 ± 2.6e-22) m.
template <typename T> struct muon_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.17344411e-14 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.17344411e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.215699902400976e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-22) / static_cast<T>(1.17344411e-14));
  }
};

/// \brief CODATA recommended value for the muon-electron mass ratio (2018).
/// \details muon-electron mass ratio = (206.768283 ± 4.6e-06) .
template <typename T> struct muon_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.768283 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.768283); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2247125783793445e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-06) / static_cast<T>(206.768283));
  }
};

/// \brief CODATA recommended value for the muon g factor (2018).
/// \details muon g factor = (-2.0023318418 ± 1.3e-09) .
template <typename T> struct muon_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.0023318418 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.0023318418); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.492430339775063e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-09) / static_cast<T>(-2.0023318418));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. (2018).
/// \details muon mag. mom. = (-4.4904483e-26 ± 1e-33) J T^-1.
template <typename T> struct muon_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -4.4904483e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.4904483e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.226949144476288e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-33) / static_cast<T>(-4.4904483e-26));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. anomaly (2018).
/// \details muon mag. mom. anomaly = (0.00116592089 ± 6.3e-10) .
template <typename T> struct muon_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00116592089 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00116592089); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.403454088553126e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-10) / static_cast<T>(0.00116592089));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to Bohr magneton
/// ratio (2018). \details muon mag. mom. to Bohr magneton ratio =
/// (-0.00484197047 ± 1.1e-10) .
template <typename T> struct muon_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00484197047 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00484197047); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2718023722271896e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-10) / static_cast<T>(-0.00484197047));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to nuclear magneton
/// ratio (2018). \details muon mag. mom. to nuclear magneton ratio =
/// (-8.89059703 ± 2e-07) .
template <typename T> struct muon_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -8.89059703 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-8.89059703); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2495677098526642e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(-8.89059703));
  }
};

/// \brief CODATA recommended value for the muon mass (2018).
/// \details muon mass = (1.883531627e-28 ± 4.2e-36) kg.
template <typename T> struct muon_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.883531627e-28 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.883531627e-28); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2298537172373158e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-36) / static_cast<T>(1.883531627e-28));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent (2018).
/// \details muon mass energy equivalent = (1.692833804e-11 ± 3.8e-19) J.
template <typename T> struct muon_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.692833804e-11 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.692833804e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2447566861088037e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-19) / static_cast<T>(1.692833804e-11));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent in MeV
/// (2018). \details muon mass energy equivalent in MeV = (105.6583755
/// ± 2.3e-06) MeV.
template <typename T> struct muon_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 105.6583755 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(105.6583755); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// muon_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.176826956799085e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// muon_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-06) / static_cast<T>(105.6583755));
  }
};

/// \brief CODATA recommended value for the muon mass in u (2018).
/// \details muon mass in u = (0.1134289259 ± 2.5e-09) u.
template <typename T> struct muon_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.1134289259 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1134289259); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.204023338988525e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.1134289259));
  }
};

/// \brief CODATA recommended value for the muon molar mass (2018).
/// \details muon molar mass = (0.0001134289259 ± 2.5e-12) kg mol^-1.
template <typename T> struct muon_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001134289259 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0001134289259); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.204023338988525e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-12) / static_cast<T>(0.0001134289259));
  }
};

/// \brief CODATA recommended value for the muon-neutron mass ratio (2018).
/// \details muon-neutron mass ratio = (0.112454517 ± 2.5e-09) .
template <typename T> struct muon_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.112454517 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.112454517); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.223121015227872e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.112454517));
  }
};

/// \brief CODATA recommended value for the muon-proton mag. mom. ratio (2018).
/// \details muon-proton mag. mom. ratio = (-3.183345142 ± 7.1e-08) .
template <typename T> struct muon_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -3.183345142 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.183345142); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.23035821856856e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-08) / static_cast<T>(-3.183345142));
  }
};

/// \brief CODATA recommended value for the muon-proton mass ratio (2018).
/// \details muon-proton mass ratio = (0.1126095264 ± 2.5e-09) .
template <typename T> struct muon_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1126095264 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1126095264); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2200608420283702e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(0.1126095264));
  }
};

/// \brief CODATA recommended value for the muon-tau mass ratio (2018).
/// \details muon-tau mass ratio = (0.0594635 ± 4e-06) .
template <typename T> struct muon_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0594635 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = muon_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0594635); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = muon_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.726815609575621e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = muon_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-06) / static_cast<T>(0.0594635));
  }
};

/// \brief CODATA recommended value for the natural unit of action (2018).
/// \details natural unit of action = (1.054571817e-34 ± 0.0) J s.
template <typename T> struct natural_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571817e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571817e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.054571817e-34));
  }
};

/// \brief CODATA recommended value for the natural unit of action in eV s
/// (2018). \details natural unit of action in eV s = (6.582119569e-16 ± 0.0) eV
/// s.
template <typename T> struct natural_unit_of_action_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.582119569e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_action_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.582119569e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// natural_unit_of_action_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_action_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.582119569e-16));
  }
};

/// \brief CODATA recommended value for the natural unit of energy (2018).
/// \details natural unit of energy = (8.1871057769e-14 ± 2.5e-23) J.
template <typename T> struct natural_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 8.1871057769e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.1871057769e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0535821426098767e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-23) / static_cast<T>(8.1871057769e-14));
  }
};

/// \brief CODATA recommended value for the natural unit of energy in MeV
/// (2018). \details natural unit of energy in MeV = (0.51099895 ± 1.5e-10) MeV.
template <typename T> struct natural_unit_of_energy_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099895 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_energy_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099895); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_energy_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9354267753387753e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_energy_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(0.51099895));
  }
};

/// \brief CODATA recommended value for the natural unit of length (2018).
/// \details natural unit of length = (3.8615926796e-13 ± 1.2e-22) m.
template <typename T> struct natural_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926796e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926796e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.1075260897902393e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-22) / static_cast<T>(3.8615926796e-13));
  }
};

/// \brief CODATA recommended value for the natural unit of mass (2018).
/// \details natural unit of mass = (9.1093837015e-31 ± 2.8e-40) kg.
template <typename T> struct natural_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.1093837015e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.1093837015e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0737534961217373e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-40) / static_cast<T>(9.1093837015e-31));
  }
};

/// \brief CODATA recommended value for the natural unit of momentum (2018).
/// \details natural unit of momentum = (2.73092453075e-22 ± 8.2e-32) kg m s^-1.
template <typename T> struct natural_unit_of_momentum {
  /// \brief Returns the constant's value.
  /// \details value = 2.73092453075e-22 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_momentum<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.73092453075e-22);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.2e-32 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_momentum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.2e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0026461396749086e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_momentum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.2e-32) /
                    static_cast<T>(2.73092453075e-22));
  }
};

/// \brief CODATA recommended value for the natural unit of momentum in MeV/c
/// (2018). \details natural unit of momentum in MeV/c = (0.51099895 ± 1.5e-10)
/// MeV/c.
template <typename T> struct natural_unit_of_momentum_in_MeV_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099895 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_momentum_in_MeV_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099895); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// natural_unit_of_momentum_in_MeV_c<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9354267753387753e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_momentum_in_MeV_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(0.51099895));
  }
};

/// \brief CODATA recommended value for the natural unit of time (2018).
/// \details natural unit of time = (1.28808866819e-21 ± 3.9e-31) s.
template <typename T> struct natural_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 1.28808866819e-21 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.28808866819e-21);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-31 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.027741875472139e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-31) /
                    static_cast<T>(1.28808866819e-21));
  }
};

/// \brief CODATA recommended value for the natural unit of velocity (2018).
/// \details natural unit of velocity = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct natural_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = natural_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = natural_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = natural_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength (2018).
/// \details neutron Compton wavelength = (1.31959090581e-15 ± 7.5e-25) m.
template <typename T> struct neutron_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.31959090581e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.31959090581e-15);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.683579635914739e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-25) /
                    static_cast<T>(1.31959090581e-15));
  }
};

/// \brief CODATA recommended value for the neutron-electron mag. mom. ratio
/// (2018). \details neutron-electron mag. mom. ratio = (0.00104066882
/// ± 2.5e-10) .
template <typename T> struct neutron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00104066882 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00104066882); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4023012431563005e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(0.00104066882));
  }
};

/// \brief CODATA recommended value for the neutron-electron mass ratio (2018).
/// \details neutron-electron mass ratio = (1838.68366173 ± 8.9e-07) .
template <typename T> struct neutron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1838.68366173 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1838.68366173); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.840419363723542e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-07) / static_cast<T>(1838.68366173));
  }
};

/// \brief CODATA recommended value for the neutron g factor (2018).
/// \details neutron g factor = (-3.82608545 ± 9e-07) .
template <typename T> struct neutron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -3.82608545 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.82608545); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3522736534804782e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(-3.82608545));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio (2018).
/// \details neutron gyromag. ratio = (183247171.0 ± 43.0) s^-1 T^-1.
template <typename T> struct neutron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 183247171.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(183247171.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 43.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(43.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.346557371955281e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(43.0) / static_cast<T>(183247171.0));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio in MHz/T
/// (2018). \details neutron gyromag. ratio in MHz/T = (29.1646931 ± 6.9e-06)
/// MHz T^-1.
template <typename T> struct neutron_gyromag_ratio_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 29.1646931 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_gyromag_ratio_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(29.1646931); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.9e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_gyromag_ratio_in_MHz_T<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3658743729417128e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_gyromag_ratio_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.9e-06) / static_cast<T>(29.1646931));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. (2018).
/// \details neutron mag. mom. = (-9.6623651e-27 ± 2.3e-33) J T^-1.
template <typename T> struct neutron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.6623651e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.6623651e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3803695846682504e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-33) / static_cast<T>(-9.6623651e-27));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to Bohr magneton
/// ratio (2018). \details neutron mag. mom. to Bohr magneton ratio =
/// (-0.00104187563 ± 2.5e-10) .
template <typename T> struct neutron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00104187563 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00104187563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.399518645042115e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(-0.00104187563));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to nuclear
/// magneton ratio (2018). \details neutron mag. mom. to nuclear magneton ratio
/// = (-1.91304273 ± 4.5e-07) .
template <typename T> struct neutron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.91304273 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.91304273); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.352273647332488e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-07) / static_cast<T>(-1.91304273));
  }
};

/// \brief CODATA recommended value for the neutron mass (2018).
/// \details neutron mass = (1.67492749804e-27 ± 9.5e-37) kg.
template <typename T> struct neutron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.67492749804e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.67492749804e-27);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.5e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.5e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.671887297281165e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.5e-37) /
                    static_cast<T>(1.67492749804e-27));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent
/// (2018). \details neutron mass energy equivalent = (1.50534976287e-10
/// ± 8.6e-20) J.
template <typename T> struct neutron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.50534976287e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.50534976287e-10);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.6e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.6e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.712958019539466e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.6e-20) /
                    static_cast<T>(1.50534976287e-10));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent in
/// MeV (2018). \details neutron mass energy equivalent in MeV = (939.56542052
/// ± 5.4e-07) MeV.
template <typename T> struct neutron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 939.56542052 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(939.56542052); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.747337952275196e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-07) / static_cast<T>(939.56542052));
  }
};

/// \brief CODATA recommended value for the neutron mass in u (2018).
/// \details neutron mass in u = (1.00866491595 ± 4.9e-10) u.
template <typename T> struct neutron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.00866491595 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00866491595); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.857906647208987e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(1.00866491595));
  }
};

/// \brief CODATA recommended value for the neutron molar mass (2018).
/// \details neutron molar mass = (0.0010086649156 ± 5.7e-13) kg mol^-1.
template <typename T> struct neutron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0010086649156 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0010086649156); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.651034265040714e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-13) / static_cast<T>(0.0010086649156));
  }
};

/// \brief CODATA recommended value for the neutron-muon mass ratio (2018).
/// \details neutron-muon mass ratio = (8.89248406 ± 2e-07) .
template <typename T> struct neutron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.89248406 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.89248406); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.249090340230534e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(8.89248406));
  }
};

/// \brief CODATA recommended value for the neutron-proton mag. mom. ratio
/// (2018). \details neutron-proton mag. mom. ratio = (-0.68497934 ± 1.6e-07) .
template <typename T> struct neutron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68497934 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68497934); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.335836873561763e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68497934));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// (2018). \details neutron-proton mass difference = (2.30557435e-30 ± 8.2e-37)
/// kg.
template <typename T> struct neutron_proton_mass_difference {
  /// \brief Returns the constant's value.
  /// \details value = 2.30557435e-30 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_proton_mass_difference<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.30557435e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.2e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_proton_mass_difference<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.2e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.556597513326777e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_proton_mass_difference<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.2e-37) / static_cast<T>(2.30557435e-30));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent (2018). \details neutron-proton mass difference energy
/// equivalent = (2.07214689e-13 ± 7.4e-20) J.
template <typename T> struct neutron_proton_mass_difference_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.07214689e-13 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.07214689e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.571175400601065e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-20) / static_cast<T>(2.07214689e-13));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent in MeV (2018). \details neutron-proton mass difference
/// energy equivalent in MeV = (1.29333236 ± 4.6e-07) MeV.
template <typename T>
struct neutron_proton_mass_difference_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.29333236 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.29333236); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.556703707622378e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-07) / static_cast<T>(1.29333236));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference in u
/// (2018). \details neutron-proton mass difference in u = (0.00138844933
/// ± 4.9e-10) u.
template <typename T> struct neutron_proton_mass_difference_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.00138844933 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_proton_mass_difference_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00138844933); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_proton_mass_difference_in_u<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.5291169033874647e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_proton_mass_difference_in_u<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(0.00138844933));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass ratio (2018).
/// \details neutron-proton mass ratio = (1.00137841931 ± 4.9e-10) .
template <typename T> struct neutron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.00137841931 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00137841931); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.893255042760305e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(1.00137841931));
  }
};

/// \brief CODATA recommended value for the neutron relative atomic mass (2018).
/// \details neutron relative atomic mass = (1.00866491595 ± 4.9e-10) .
template <typename T> struct neutron_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.00866491595 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00866491595); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.857906647208987e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(1.00866491595));
  }
};

/// \brief CODATA recommended value for the neutron-tau mass ratio (2018).
/// \details neutron-tau mass ratio = (0.528779 ± 3.6e-05) .
template <typename T> struct neutron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.528779 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.528779); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = neutron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.808137236917502e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = neutron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-05) / static_cast<T>(0.528779));
  }
};

/// \brief CODATA recommended value for the neutron to shielded proton mag. mom.
/// ratio (2018). \details neutron to shielded proton mag. mom. ratio =
/// (-0.68499694 ± 1.6e-07) .
template <typename T> struct neutron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68499694 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = neutron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68499694); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3357768576309262e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68499694));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// (2018). \details Newtonian constant of gravitation = (6.6743e-11 ± 1.5e-15)
/// m^3 kg^-1 s^-2.
template <typename T> struct Newtonian_constant_of_gravitation {
  /// \brief Returns the constant's value.
  /// \details value = 6.6743e-11 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Newtonian_constant_of_gravitation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.6743e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-15 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2474266964325848e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Newtonian_constant_of_gravitation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-15) / static_cast<T>(6.6743e-11));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// over h-bar c (2018). \details Newtonian constant of gravitation over h-bar c
/// = (6.70883e-39 ± 1.5e-43) (GeV/c^2)^-2.
template <typename T> struct Newtonian_constant_of_gravitation_over_h_bar_c {
  /// \brief Returns the constant's value.
  /// \details value = 6.70883e-39 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(6.70883e-39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-43 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-43); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2358593078077695e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-43) / static_cast<T>(6.70883e-39));
  }
};

/// \brief CODATA recommended value for the nuclear magneton (2018).
/// \details nuclear magneton = (5.0507837461e-27 ± 1.5e-36) J T^-1.
template <typename T> struct nuclear_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 5.0507837461e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = nuclear_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.0507837461e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-36 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = nuclear_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.9698361193116537e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = nuclear_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-36) / static_cast<T>(5.0507837461e-27));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in eV/T (2018).
/// \details nuclear magneton in eV/T = (3.15245125844e-08 ± 9.6e-18) eV T^-1.
template <typename T> struct nuclear_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 3.15245125844e-08 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = nuclear_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3.15245125844e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.6e-18 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = nuclear_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.045249303791167e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = nuclear_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.6e-18) /
                    static_cast<T>(3.15245125844e-08));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in inverse meter
/// per tesla (2018). \details nuclear magneton in inverse meter per tesla =
/// (0.0254262341353 ± 7.8e-12) m^-1 T^-1.
template <typename T> struct nuclear_magneton_in_inverse_meter_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 0.0254262341353 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// nuclear_magneton_in_inverse_meter_per_tesla<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.0254262341353); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.8e-12 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// nuclear_magneton_in_inverse_meter_per_tesla<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.8e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0676977009234047e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// nuclear_magneton_in_inverse_meter_per_tesla<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.8e-12) / static_cast<T>(0.0254262341353));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in K/T (2018).
/// \details nuclear magneton in K/T = (0.00036582677756 ± 1.1e-13) K T^-1.
template <typename T> struct nuclear_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036582677756 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = nuclear_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036582677756); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-13 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = nuclear_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0068875967385595e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = nuclear_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-13) / static_cast<T>(0.00036582677756));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in MHz/T (2018).
/// \details nuclear magneton in MHz/T = (7.6225932291 ± 2.3e-09) MHz T^-1.
template <typename T> struct nuclear_magneton_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 7.6225932291 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = nuclear_magneton_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.6225932291); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-09 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = nuclear_magneton_in_MHz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0173458439570455e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = nuclear_magneton_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-09) / static_cast<T>(7.6225932291));
  }
};

/// \brief CODATA recommended value for the Planck constant (2018).
/// \details Planck constant = (6.62607015e-34 ± 0.0) J Hz^-1.
template <typename T> struct Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.62607015e-34 J Hz^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62607015e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J Hz^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.62607015e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant in eV/Hz (2018).
/// \details Planck constant in eV/Hz = (4.135667696e-15 ± 0.0) eV Hz^-1.
template <typename T> struct Planck_constant_in_eV_Hz {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667696e-15 eV Hz^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_constant_in_eV_Hz<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667696e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV Hz^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_constant_in_eV_Hz<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_constant_in_eV_Hz<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(4.135667696e-15));
  }
};

/// \brief CODATA recommended value for the Planck length (2018).
/// \details Planck length = (1.616255e-35 ± 1.8e-40) m.
template <typename T> struct Planck_length {
  /// \brief Returns the constant's value.
  /// \details value = 1.616255e-35 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.616255e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-40 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1136856498510445e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-40) / static_cast<T>(1.616255e-35));
  }
};

/// \brief CODATA recommended value for the Planck mass (2018).
/// \details Planck mass = (2.176434e-08 ± 2.4e-13) kg.
template <typename T> struct Planck_mass {
  /// \brief Returns the constant's value.
  /// \details value = 2.176434e-08 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.176434e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-13 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.102721240340851e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-13) / static_cast<T>(2.176434e-08));
  }
};

/// \brief CODATA recommended value for the Planck mass energy equivalent in GeV
/// (2018). \details Planck mass energy equivalent in GeV = (1.22089e+19 ±
/// 140000000000000.0) GeV.
template <typename T> struct Planck_mass_energy_equivalent_in_GeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.22089e+19 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_mass_energy_equivalent_in_GeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.22089e+19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 140000000000000.0 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Planck_mass_energy_equivalent_in_GeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(140000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1467044533086519e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Planck_mass_energy_equivalent_in_GeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(140000000000000.0) /
                    static_cast<T>(1.22089e+19));
  }
};

/// \brief CODATA recommended value for the Planck temperature (2018).
/// \details Planck temperature = (1.416784e+32 ± 1.6e+27) K.
template <typename T> struct Planck_temperature {
  /// \brief Returns the constant's value.
  /// \details value = 1.416784e+32 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_temperature<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.416784e+32); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e+27 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_temperature<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1293182305841964e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_temperature<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e+27) / static_cast<T>(1.416784e+32));
  }
};

/// \brief CODATA recommended value for the Planck time (2018).
/// \details Planck time = (5.391247e-44 ± 6e-49) s.
template <typename T> struct Planck_time {
  /// \brief Returns the constant's value.
  /// \details value = 5.391247e-44 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Planck_time<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.391247e-44); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-49 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Planck_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-49); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1129150639916886e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Planck_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-49) / static_cast<T>(5.391247e-44));
  }
};

/// \brief CODATA recommended value for the proton charge to mass quotient
/// (2018). \details proton charge to mass quotient = (95788331.56 ± 0.029) C
/// kg^-1.
template <typename T> struct proton_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = 95788331.56 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(95788331.56); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.029 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// proton_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.029); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0275086252896e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.029) / static_cast<T>(95788331.56));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength (2018).
/// \details proton Compton wavelength = (1.32140985539e-15 ± 4e-25) m.
template <typename T> struct proton_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.32140985539e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.32140985539e-15);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0270699008972073e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-25) / static_cast<T>(1.32140985539e-15));
  }
};

/// \brief CODATA recommended value for the proton-electron mass ratio (2018).
/// \details proton-electron mass ratio = (1836.15267343 ± 1.1e-07) .
template <typename T> struct proton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1836.15267343 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1836.15267343); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.990787236363956e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(1836.15267343));
  }
};

/// \brief CODATA recommended value for the proton g factor (2018).
/// \details proton g factor = (5.5856946893 ± 1.6e-09) .
template <typename T> struct proton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.5856946893 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.5856946893); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.864460177289984e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-09) / static_cast<T>(5.5856946893));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio (2018).
/// \details proton gyromag. ratio = (267522187.44 ± 0.11) s^-1 T^-1.
template <typename T> struct proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267522187.44 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267522187.44); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.11 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.111808484097075e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.11) / static_cast<T>(267522187.44));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio in MHz/T
/// (2018). \details proton gyromag. ratio in MHz/T = (42.577478518 ± 1.8e-08)
/// MHz T^-1.
template <typename T> struct proton_gyromag_ratio_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 42.577478518 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_gyromag_ratio_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.577478518); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-08 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_gyromag_ratio_in_MHz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.2275871250549377e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_gyromag_ratio_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-08) / static_cast<T>(42.577478518));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. (2018).
/// \details proton mag. mom. = (1.41060679736e-26 ± 6e-36) J T^-1.
template <typename T> struct proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.41060679736e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.41060679736e-26);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-36 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.253488648452007e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-36) / static_cast<T>(1.41060679736e-26));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to Bohr magneton
/// ratio (2018). \details proton mag. mom. to Bohr magneton ratio =
/// (0.0015210322023 ± 4.6e-13) .
template <typename T> struct proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0015210322023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0015210322023); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.024262072192947e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-13) / static_cast<T>(0.0015210322023));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to nuclear magneton
/// ratio (2018). \details proton mag. mom. to nuclear magneton ratio =
/// (2.79284734463 ± 8.2e-10) .
template <typename T> struct proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.79284734463 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.79284734463); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.936071681743259e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.2e-10) / static_cast<T>(2.79284734463));
  }
};

/// \brief CODATA recommended value for the proton mag. shielding correction
/// (2018). \details proton mag. shielding correction = (2.5689e-05 ± 1.1e-08) .
template <typename T> struct proton_mag_shielding_correction {
  /// \brief Returns the constant's value.
  /// \details value = 2.5689e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mag_shielding_correction<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.5689e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// proton_mag_shielding_correction<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0004281988399704153.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_mag_shielding_correction<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(2.5689e-05));
  }
};

/// \brief CODATA recommended value for the proton mass (2018).
/// \details proton mass = (1.67262192369e-27 ± 5.1e-37) kg.
template <typename T> struct proton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.67262192369e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.67262192369e-27);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0491050773439597e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-37) /
                    static_cast<T>(1.67262192369e-27));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent
/// (2018). \details proton mass energy equivalent = (1.50327761598e-10
/// ± 4.6e-20) J.
template <typename T> struct proton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.50327761598e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.50327761598e-10);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-20 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0599803729540796e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-20) /
                    static_cast<T>(1.50327761598e-10));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent in MeV
/// (2018). \details proton mass energy equivalent in MeV = (938.27208816
/// ± 2.9e-07) MeV.
template <typename T> struct proton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 938.27208816 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(938.27208816); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// proton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0907878818894096e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// proton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-07) / static_cast<T>(938.27208816));
  }
};

/// \brief CODATA recommended value for the proton mass in u (2018).
/// \details proton mass in u = (1.007276466621 ± 5.3e-11) u.
template <typename T> struct proton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.007276466621 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.007276466621); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.261713318667446e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-11) / static_cast<T>(1.007276466621));
  }
};

/// \brief CODATA recommended value for the proton molar mass (2018).
/// \details proton molar mass = (0.00100727646627 ± 3.1e-13) kg mol^-1.
template <typename T> struct proton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00100727646627 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00100727646627); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.077605904443961e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-13) / static_cast<T>(0.00100727646627));
  }
};

/// \brief CODATA recommended value for the proton-muon mass ratio (2018).
/// \details proton-muon mass ratio = (8.88024337 ± 2e-07) .
template <typename T> struct proton_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.88024337 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.88024337); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2521905275215445e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-07) / static_cast<T>(8.88024337));
  }
};

/// \brief CODATA recommended value for the proton-neutron mag. mom. ratio
/// (2018). \details proton-neutron mag. mom. ratio = (-1.45989805 ± 3.4e-07) .
template <typename T> struct proton_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.45989805 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.45989805); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_neutron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3289297495808008e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(-1.45989805));
  }
};

/// \brief CODATA recommended value for the proton-neutron mass ratio (2018).
/// \details proton-neutron mass ratio = (0.99862347812 ± 4.9e-10) .
template <typename T> struct proton_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.99862347812 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.99862347812); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.906754254591228e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-10) / static_cast<T>(0.99862347812));
  }
};

/// \brief CODATA recommended value for the proton relative atomic mass (2018).
/// \details proton relative atomic mass = (1.007276466621 ± 5.3e-11) .
template <typename T> struct proton_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.007276466621 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.007276466621); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.261713318667446e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-11) / static_cast<T>(1.007276466621));
  }
};

/// \brief CODATA recommended value for the proton rms charge radius (2018).
/// \details proton rms charge radius = (8.414e-16 ± 1.9e-18) m.
template <typename T> struct proton_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 8.414e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.414e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.002258141193249346.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-18) / static_cast<T>(8.414e-16));
  }
};

/// \brief CODATA recommended value for the proton-tau mass ratio (2018).
/// \details proton-tau mass ratio = (0.528051 ± 3.6e-05) .
template <typename T> struct proton_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.528051 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = proton_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.528051); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = proton_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.817523307407807e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = proton_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-05) / static_cast<T>(0.528051));
  }
};

/// \brief CODATA recommended value for the quantum of circulation (2018).
/// \details quantum of circulation = (0.00036369475516 ± 1.1e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036369475516 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = quantum_of_circulation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036369475516); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = quantum_of_circulation<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0245143334994695e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = quantum_of_circulation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-13) / static_cast<T>(0.00036369475516));
  }
};

/// \brief CODATA recommended value for the quantum of circulation times 2
/// (2018). \details quantum of circulation times 2 = (0.00072738951032
/// ± 2.2e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation_times_2 {
  /// \brief Returns the constant's value.
  /// \details value = 0.00072738951032 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = quantum_of_circulation_times_2<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00072738951032); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// quantum_of_circulation_times_2<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0245143334994695e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = quantum_of_circulation_times_2<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-13) / static_cast<T>(0.00072738951032));
  }
};

/// \brief CODATA recommended value for the reduced Compton wavelength (2018).
/// \details reduced Compton wavelength = (3.8615926796e-13 ± 1.2e-22) m.
template <typename T> struct reduced_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926796e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926796e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = reduced_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.1075260897902393e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-22) / static_cast<T>(3.8615926796e-13));
  }
};

/// \brief CODATA recommended value for the reduced muon Compton wavelength
/// (2018). \details reduced muon Compton wavelength = (1.867594306e-15
/// ± 4.2e-23) m.
template <typename T> struct reduced_muon_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.867594306e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_muon_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.867594306e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-23 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_muon_Compton_wavelength<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2488824186852067e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_muon_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-23) / static_cast<T>(1.867594306e-15));
  }
};

/// \brief CODATA recommended value for the reduced neutron Compton wavelength
/// (2018). \details reduced neutron Compton wavelength = (2.1001941552e-16
/// ± 1.2e-25) m.
template <typename T> struct reduced_neutron_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.1001941552e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_neutron_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1001941552e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_neutron_Compton_wavelength<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.713757449656958e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// reduced_neutron_Compton_wavelength<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-25) / static_cast<T>(2.1001941552e-16));
  }
};

/// \brief CODATA recommended value for the reduced Planck constant (2018).
/// \details reduced Planck constant = (1.054571817e-34 ± 0.0) J s.
template <typename T> struct reduced_Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571817e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571817e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = reduced_Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.054571817e-34));
  }
};

/// \brief CODATA recommended value for the reduced Planck constant in eV s
/// (2018). \details reduced Planck constant in eV s = (6.582119569e-16 ± 0.0)
/// eV s.
template <typename T> struct reduced_Planck_constant_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.582119569e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_Planck_constant_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.582119569e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_Planck_constant_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_Planck_constant_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(6.582119569e-16));
  }
};

/// \brief CODATA recommended value for the reduced Planck constant times c in
/// MeV fm (2018). \details reduced Planck constant times c in MeV fm =
/// (197.3269804 ± 0.0) MeV fm.
template <typename T> struct reduced_Planck_constant_times_c_in_MeV_fm {
  /// \brief Returns the constant's value.
  /// \details value = 197.3269804 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_Planck_constant_times_c_in_MeV_fm<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(197.3269804); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_Planck_constant_times_c_in_MeV_fm<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// reduced_Planck_constant_times_c_in_MeV_fm<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(197.3269804));
  }
};

/// \brief CODATA recommended value for the reduced proton Compton wavelength
/// (2018). \details reduced proton Compton wavelength = (2.10308910336e-16
/// ± 6.4e-26) m.
template <typename T> struct reduced_proton_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.10308910336e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_proton_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.10308910336e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.4e-26 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_proton_Compton_wavelength<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.4e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0431425800148176e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_proton_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.4e-26) /
                    static_cast<T>(2.10308910336e-16));
  }
};

/// \brief CODATA recommended value for the reduced tau Compton wavelength
/// (2018). \details reduced tau Compton wavelength = (1.110538e-16 ± 7.5e-21)
/// m.
template <typename T> struct reduced_tau_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.110538e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = reduced_tau_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.110538e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// reduced_tau_Compton_wavelength<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.75348344676184e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = reduced_tau_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-21) / static_cast<T>(1.110538e-16));
  }
};

/// \brief CODATA recommended value for the Rydberg constant (2018).
/// \details Rydberg constant = (10973731.56816 ± 2.1e-05) m^-1.
template <typename T> struct Rydberg_constant {
  /// \brief Returns the constant's value.
  /// \details value = 10973731.56816 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Rydberg_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10973731.56816); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Rydberg_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9136608062230136e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Rydberg_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-05) / static_cast<T>(10973731.56816));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times c in Hz
/// (2018). \details Rydberg constant times c in Hz = (3289841960250800.0 ±
/// 6400.0) Hz.
template <typename T> struct Rydberg_constant_times_c_in_Hz {
  /// \brief Returns the constant's value.
  /// \details value = 3289841960250800.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Rydberg_constant_times_c_in_Hz<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3289841960250800.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6400.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Rydberg_constant_times_c_in_Hz<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6400.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.945382202953025e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Rydberg_constant_times_c_in_Hz<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6400.0) /
                    static_cast<T>(3289841960250800.0));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in eV
/// (2018). \details Rydberg constant times hc in eV = (13.605693122994
/// ± 2.6e-11) eV.
template <typename T> struct Rydberg_constant_times_hc_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 13.605693122994 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Rydberg_constant_times_hc_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13.605693122994); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-11 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_eV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9109647531340598e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Rydberg_constant_times_hc_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-11) / static_cast<T>(13.605693122994));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in J
/// (2018). \details Rydberg constant times hc in J = (2.1798723611035e-18
/// ± 4.2e-30) J.
template <typename T> struct Rydberg_constant_times_hc_in_J {
  /// \brief Returns the constant's value.
  /// \details value = 2.1798723611035e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Rydberg_constant_times_hc_in_J<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.1798723611035e-18);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-30 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_J<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9267183138529572e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Rydberg_constant_times_hc_in_J<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-30) /
                    static_cast<T>(2.1798723611035e-18));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K, 100
/// kPa) (2018). \details Sackur-Tetrode constant (1 K, 100 kPa) =
/// (-1.15170753706 ± 4.5e-10) .
template <typename T> struct Sackur_Tetrode_constant_1_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.15170753706 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Sackur_Tetrode_constant_1_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.15170753706); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.9072419474542043e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-10) / static_cast<T>(-1.15170753706));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K,
/// 101.325 kPa) (2018). \details Sackur-Tetrode constant (1 K, 101.325 kPa) =
/// (-1.16487052358 ± 4.5e-10) .
template <typename T> struct Sackur_Tetrode_constant_1_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.16487052358 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Sackur_Tetrode_constant_1_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.16487052358); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.863090282489196e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-10) / static_cast<T>(-1.16487052358));
  }
};

/// \brief CODATA recommended value for the second radiation constant (2018).
/// \details second radiation constant = (0.01438776877 ± 0.0) m K.
template <typename T> struct second_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.01438776877 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = second_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.01438776877); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = second_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = second_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.01438776877));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio
/// (2018). \details shielded helion gyromag. ratio = (203789456.9 ± 2.4) s^-1
/// T^-1.
template <typename T> struct shielded_helion_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 203789456.9 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_helion_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(203789456.9); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = shielded_helion_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1776860474080786e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = shielded_helion_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4) / static_cast<T>(203789456.9));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio in
/// MHz/T (2018). \details shielded helion gyromag. ratio in MHz/T =
/// (32.43409942 ± 3.8e-07) MHz T^-1.
template <typename T> struct shielded_helion_gyromag_ratio_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 32.43409942 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_helion_gyromag_ratio_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(32.43409942); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_helion_gyromag_ratio_in_MHz_T<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1716064475207186e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_helion_gyromag_ratio_in_MHz_T<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-07) / static_cast<T>(32.43409942));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. (2018).
/// \details shielded helion mag. mom. = (-1.07455309e-26 ± 1.3e-34) J T^-1.
template <typename T> struct shielded_helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.07455309e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.07455309e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = shielded_helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.209805278211056e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = shielded_helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-34) / static_cast<T>(-1.07455309e-26));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to Bohr
/// magneton ratio (2018). \details shielded helion mag. mom. to Bohr magneton
/// ratio = (-0.001158671471 ± 1.4e-11) .
template <typename T> struct shielded_helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158671471 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158671471); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082803754473384e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158671471));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to nuclear
/// magneton ratio (2018). \details shielded helion mag. mom. to nuclear
/// magneton ratio = (-2.127497719 ± 2.5e-08) .
template <typename T> struct shielded_helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127497719 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127497719); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1750893914824451e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127497719));
  }
};

/// \brief CODATA recommended value for the shielded helion to proton mag. mom.
/// ratio (2018). \details shielded helion to proton mag. mom. ratio =
/// (-0.7617665618 ± 8.9e-09) .
template <typename T> struct shielded_helion_to_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617665618 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_helion_to_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617665618); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1683369218740628e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-09) / static_cast<T>(-0.7617665618));
  }
};

/// \brief CODATA recommended value for the shielded helion to shielded proton
/// mag. mom. ratio (2018). \details shielded helion to shielded proton mag.
/// mom. ratio = (-0.7617861313 ± 3.3e-09) .
template <typename T> struct shielded_helion_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617861313 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617861313); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3319244922042606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-09) / static_cast<T>(-0.7617861313));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio
/// (2018). \details shielded proton gyromag. ratio = (267515315.1 ± 2.9) s^-1
/// T^-1.
template <typename T> struct shielded_proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267515315.1 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267515315.1); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = shielded_proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.08405008472728e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = shielded_proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9) / static_cast<T>(267515315.1));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio in
/// MHz/T (2018). \details shielded proton gyromag. ratio in MHz/T =
/// (42.57638474 ± 4.6e-07) MHz T^-1.
template <typename T> struct shielded_proton_gyromag_ratio_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 42.57638474 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_proton_gyromag_ratio_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.57638474); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_proton_gyromag_ratio_in_MHz_T<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0804111312152709e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_proton_gyromag_ratio_in_MHz_T<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-07) / static_cast<T>(42.57638474));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. (2018).
/// \details shielded proton mag. mom. = (1.41057056e-26 ± 1.5e-34) J T^-1.
template <typename T> struct shielded_proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.41057056e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielded_proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.41057056e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = shielded_proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0633994799948185e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = shielded_proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-34) / static_cast<T>(1.41057056e-26));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to Bohr
/// magneton ratio (2018). \details shielded proton mag. mom. to Bohr magneton
/// ratio = (0.001520993128 ± 1.7e-11) .
template <typename T> struct shielded_proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001520993128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.001520993128); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.117690782886956e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-11) / static_cast<T>(0.001520993128));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to nuclear
/// magneton ratio (2018). \details shielded proton mag. mom. to nuclear
/// magneton ratio = (2.792775599 ± 3e-08) .
template <typename T> struct shielded_proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792775599 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792775599); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0742001616865314e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-08) / static_cast<T>(2.792775599));
  }
};

/// \brief CODATA recommended value for the shielding difference of d and p in
/// HD (2018). \details shielding difference of d and p in HD = (2.02e-08 ±
/// 2e-11) .
template <typename T> struct shielding_difference_of_d_and_p_in_HD {
  /// \brief Returns the constant's value.
  /// \details value = 2.02e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielding_difference_of_d_and_p_in_HD<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.02e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielding_difference_of_d_and_p_in_HD<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0009900990099009901.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielding_difference_of_d_and_p_in_HD<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-11) / static_cast<T>(2.02e-08));
  }
};

/// \brief CODATA recommended value for the shielding difference of t and p in
/// HT (2018). \details shielding difference of t and p in HT = (2.414e-08 ±
/// 2e-11) .
template <typename T> struct shielding_difference_of_t_and_p_in_HT {
  /// \brief Returns the constant's value.
  /// \details value = 2.414e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = shielding_difference_of_t_and_p_in_HT<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.414e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// shielding_difference_of_t_and_p_in_HT<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0008285004142502071.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// shielding_difference_of_t_and_p_in_HT<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-11) / static_cast<T>(2.414e-08));
  }
};

/// \brief CODATA recommended value for the speed of light in vacuum (2018).
/// \details speed of light in vacuum = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct speed_of_light_in_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = speed_of_light_in_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = speed_of_light_in_vacuum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = speed_of_light_in_vacuum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the standard acceleration of gravity
/// (2018). \details standard acceleration of gravity = (9.80665 ± 0.0) m s^-2.
template <typename T> struct standard_acceleration_of_gravity {
  /// \brief Returns the constant's value.
  /// \details value = 9.80665 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = standard_acceleration_of_gravity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.80665); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// standard_acceleration_of_gravity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = standard_acceleration_of_gravity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(9.80665));
  }
};

/// \brief CODATA recommended value for the standard atmosphere (2018).
/// \details standard atmosphere = (101325.0 ± 0.0) Pa.
template <typename T> struct standard_atmosphere {
  /// \brief Returns the constant's value.
  /// \details value = 101325.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = standard_atmosphere<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(101325.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = standard_atmosphere<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = standard_atmosphere<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(101325.0));
  }
};

/// \brief CODATA recommended value for the standard-state pressure (2018).
/// \details standard-state pressure = (100000.0 ± 0.0) Pa.
template <typename T> struct standard_state_pressure {
  /// \brief Returns the constant's value.
  /// \details value = 100000.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = standard_state_pressure<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(100000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = standard_state_pressure<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = standard_state_pressure<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(100000.0));
  }
};

/// \brief CODATA recommended value for the Stefan-Boltzmann constant (2018).
/// \details Stefan-Boltzmann constant = (5.670374419e-08 ± 0.0) W m^-2 K^-4.
template <typename T> struct Stefan_Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 5.670374419e-08 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Stefan_Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.670374419e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Stefan_Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Stefan_Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(5.670374419e-08));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength (2018).
/// \details tau Compton wavelength = (6.97771e-16 ± 4.7e-20) m.
template <typename T> struct tau_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 6.97771e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.97771e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.735734216526625e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-20) / static_cast<T>(6.97771e-16));
  }
};

/// \brief CODATA recommended value for the tau-electron mass ratio (2018).
/// \details tau-electron mass ratio = (3477.23 ± 0.23) .
template <typename T> struct tau_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3477.23 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3477.23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.23 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.6144603606894e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.23) / static_cast<T>(3477.23));
  }
};

/// \brief CODATA recommended value for the tau energy equivalent (2018).
/// \details tau energy equivalent = (1776.86 ± 0.12) MeV.
template <typename T> struct tau_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1776.86 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1776.86); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.12 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.75348648739912e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.12) / static_cast<T>(1776.86));
  }
};

/// \brief CODATA recommended value for the tau mass (2018).
/// \details tau mass = (3.16754e-27 ± 2.1e-31) kg.
template <typename T> struct tau_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.16754e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.16754e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.629750531958555e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-31) / static_cast<T>(3.16754e-27));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent (2018).
/// \details tau mass energy equivalent = (2.84684e-10 ± 1.9e-14) J.
template <typename T> struct tau_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.84684e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.84684e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.674066684464179e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-14) / static_cast<T>(2.84684e-10));
  }
};

/// \brief CODATA recommended value for the tau mass in u (2018).
/// \details tau mass in u = (1.90754 ± 0.00013) u.
template <typename T> struct tau_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.90754 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.90754); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00013 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00013); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.815060234647766e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00013) / static_cast<T>(1.90754));
  }
};

/// \brief CODATA recommended value for the tau molar mass (2018).
/// \details tau molar mass = (0.00190754 ± 1.3e-07) kg mol^-1.
template <typename T> struct tau_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00190754 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00190754); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.815060234647766e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-07) / static_cast<T>(0.00190754));
  }
};

/// \brief CODATA recommended value for the tau-muon mass ratio (2018).
/// \details tau-muon mass ratio = (16.817 ± 0.0011) .
template <typename T> struct tau_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 16.817 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(16.817); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0011 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0011); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.541000178390915e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0011) / static_cast<T>(16.817));
  }
};

/// \brief CODATA recommended value for the tau-neutron mass ratio (2018).
/// \details tau-neutron mass ratio = (1.89115 ± 0.00013) .
template <typename T> struct tau_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89115 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89115); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00013 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00013); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.874124210136688e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00013) / static_cast<T>(1.89115));
  }
};

/// \brief CODATA recommended value for the tau-proton mass ratio (2018).
/// \details tau-proton mass ratio = (1.89376 ± 0.00013) .
template <typename T> struct tau_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89376 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = tau_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89376); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00013 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = tau_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00013); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.864650219668806e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = tau_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00013) / static_cast<T>(1.89376));
  }
};

/// \brief CODATA recommended value for the Thomson cross section (2018).
/// \details Thomson cross section = (6.6524587321e-29 ± 6e-38) m^2.
template <typename T> struct Thomson_cross_section {
  /// \brief Returns the constant's value.
  /// \details value = 6.6524587321e-29 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Thomson_cross_section<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.6524587321e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-38 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = Thomson_cross_section<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.019221676713751e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = Thomson_cross_section<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-38) / static_cast<T>(6.6524587321e-29));
  }
};

/// \brief CODATA recommended value for the triton-electron mass ratio (2018).
/// \details triton-electron mass ratio = (5496.92153573 ± 2.7e-07) .
template <typename T> struct triton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5496.92153573 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5496.92153573); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9118401680831626e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-07) / static_cast<T>(5496.92153573));
  }
};

/// \brief CODATA recommended value for the triton g factor (2018).
/// \details triton g factor = (5.957924931 ± 1.2e-08) .
template <typename T> struct triton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.957924931 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.957924931); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.0141240681906133e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-08) / static_cast<T>(5.957924931));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. (2018).
/// \details triton mag. mom. = (1.5046095202e-26 ± 3e-35) J T^-1.
template <typename T> struct triton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.5046095202e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.5046095202e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-35 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.993872802028546e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-35) / static_cast<T>(1.5046095202e-26));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to Bohr magneton
/// ratio (2018). \details triton mag. mom. to Bohr magneton ratio =
/// (0.0016223936651 ± 3.2e-12) .
template <typename T> struct triton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0016223936651 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0016223936651); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9723942892755076e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-12) / static_cast<T>(0.0016223936651));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to nuclear magneton
/// ratio (2018). \details triton mag. mom. to nuclear magneton ratio =
/// (2.9789624656 ± 5.9e-09) .
template <typename T> struct triton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.9789624656 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9789624656); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.9e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.980555333654285e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.9e-09) / static_cast<T>(2.9789624656));
  }
};

/// \brief CODATA recommended value for the triton mass (2018).
/// \details triton mass = (5.0073567446e-27 ± 1.5e-36) kg.
template <typename T> struct triton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.0073567446e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.0073567446e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.995592438301146e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-36) / static_cast<T>(5.0073567446e-27));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent
/// (2018). \details triton mass energy equivalent = (4.500387806e-10 ± 1.4e-19)
/// J.
template <typename T> struct triton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.500387806e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.500387806e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.1108430214247187e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-19) / static_cast<T>(4.500387806e-10));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent in MeV
/// (2018). \details triton mass energy equivalent in MeV = (2808.92113298
/// ± 8.5e-07) MeV.
template <typename T> struct triton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.92113298 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.92113298); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-07 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// triton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0260728577246676e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// triton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-07) / static_cast<T>(2808.92113298));
  }
};

/// \brief CODATA recommended value for the triton mass in u (2018).
/// \details triton mass in u = (3.01550071621 ± 1.2e-10) u.
template <typename T> struct triton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.01550071621 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.01550071621); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.9794386171070364e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(3.01550071621));
  }
};

/// \brief CODATA recommended value for the triton molar mass (2018).
/// \details triton molar mass = (0.00301550071517 ± 9.2e-13) kg mol^-1.
template <typename T> struct triton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00301550071517 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00301550071517); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.2e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0509029408342706e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.2e-13) / static_cast<T>(0.00301550071517));
  }
};

/// \brief CODATA recommended value for the triton-proton mass ratio (2018).
/// \details triton-proton mass ratio = (2.99371703414 ± 1.5e-10) .
template <typename T> struct triton_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.99371703414 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.99371703414); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.0104935867156945e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(2.99371703414));
  }
};

/// \brief CODATA recommended value for the triton relative atomic mass (2018).
/// \details triton relative atomic mass = (3.01550071621 ± 1.2e-10) .
template <typename T> struct triton_relative_atomic_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.01550071621 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_relative_atomic_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.01550071621); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = triton_relative_atomic_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.9794386171070364e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_relative_atomic_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(3.01550071621));
  }
};

/// \brief CODATA recommended value for the triton to proton mag. mom. ratio
/// (2018). \details triton to proton mag. mom. ratio = (1.0666399191 ± 2.1e-09)
/// .
template <typename T> struct triton_to_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.0666399191 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = triton_to_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.0666399191); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// triton_to_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.96879936930536e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = triton_to_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-09) / static_cast<T>(1.0666399191));
  }
};

/// \brief CODATA recommended value for the unified atomic mass unit (2018).
/// \details unified atomic mass unit = (1.6605390666e-27 ± 5e-37) kg.
template <typename T> struct unified_atomic_mass_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.6605390666e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = unified_atomic_mass_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6605390666e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-37 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = unified_atomic_mass_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.0110703810405613e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = unified_atomic_mass_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-37) / static_cast<T>(1.6605390666e-27));
  }
};

/// \brief CODATA recommended value for the vacuum electric permittivity (2018).
/// \details vacuum electric permittivity = (8.8541878128e-12 ± 1.3e-21) F m^-1.
template <typename T> struct vacuum_electric_permittivity {
  /// \brief Returns the constant's value.
  /// \details value = 8.8541878128e-12 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = vacuum_electric_permittivity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.8541878128e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-21 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = vacuum_electric_permittivity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.468231787584925e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = vacuum_electric_permittivity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-21) / static_cast<T>(8.8541878128e-12));
  }
};

/// \brief CODATA recommended value for the vacuum mag. permeability (2018).
/// \details vacuum mag. permeability = (1.25663706212e-06 ± 1.9e-16) N A^-2.
template <typename T> struct vacuum_mag_permeability {
  /// \brief Returns the constant's value.
  /// \details value = 1.25663706212e-06 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = vacuum_mag_permeability<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.25663706212e-06);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-16 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = vacuum_mag_permeability<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.511971958549925e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = vacuum_mag_permeability<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-16) /
                    static_cast<T>(1.25663706212e-06));
  }
};

/// \brief CODATA recommended value for the von Klitzing constant (2018).
/// \details von Klitzing constant = (25812.80745 ± 0.0) ohm.
template <typename T> struct von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.80745 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = von_Klitzing_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(25812.80745); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = von_Klitzing_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(25812.80745));
  }
};

/// \brief CODATA recommended value for the weak mixing angle (2018).
/// \details weak mixing angle = (0.2229 ± 0.0003) .
template <typename T> struct weak_mixing_angle {
  /// \brief Returns the constant's value.
  /// \details value = 0.2229 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = weak_mixing_angle<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.2229); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0003 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = weak_mixing_angle<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0003); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0013458950201884253.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = weak_mixing_angle<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0003) / static_cast<T>(0.2229));
  }
};

/// \brief CODATA recommended value for the Wien frequency displacement law
/// constant (2018). \details Wien frequency displacement law constant =
/// (58789257570.0 ± 0.0) Hz K^-1.
template <typename T> struct Wien_frequency_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 58789257570.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Wien_frequency_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(58789257570.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Wien_frequency_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Wien_frequency_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(58789257570.0));
  }
};

/// \brief CODATA recommended value for the Wien wavelength displacement law
/// constant (2018). \details Wien wavelength displacement law constant =
/// (0.002897771955 ± 0.0) m K.
template <typename T> struct Wien_wavelength_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.002897771955 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = Wien_wavelength_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.002897771955); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty =
  /// Wien_wavelength_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision =
  /// Wien_wavelength_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.002897771955));
  }
};

/// \brief CODATA recommended value for the W to Z mass ratio (2018).
/// \details W to Z mass ratio = (0.88153 ± 0.00017) .
template <typename T> struct W_to_Z_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.88153 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double value = W_to_Z_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.88153); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double uncertainty = W_to_Z_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00019284652819529682.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2018;
  /// double precision = W_to_Z_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(0.88153));
  }
};

} // namespace codata_2018

} // namespace constants

} // namespace triumf

#endif // TRIUMF_CONSTANTS_CODATA_2018_HPP
