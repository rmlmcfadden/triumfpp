#ifndef TRIUMF_CONSTANTS_CODATA_2006_HPP
#define TRIUMF_CONSTANTS_CODATA_2006_HPP

#include <cmath>
#include <type_traits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace constants {

// Committee on Data (CODATA) of the International Science Council (ISC)
// recommended values of fundamental physical constants: 2006
// https://physics.nist.gov/cuu/Constants/
// https://physics.nist.gov/cuu/Constants/Table/allascii.txt
namespace codata_2006 {

/// \brief CODATA recommended value for the lattice spacing of silicon (2006).
/// \details lattice spacing of silicon = (1.920155762e-10 ± 5e-18) m.
template <typename T> struct lattice_spacing_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 1.920155762e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = lattice_spacing_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.920155762e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = lattice_spacing_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6039554180709222e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = lattice_spacing_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-18) / static_cast<T>(1.920155762e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle-electron mass ratio
/// (2006). \details alpha particle-electron mass ratio = (7294.2995365
/// ± 3.1e-06) .
template <typename T> struct alpha_particle_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 7294.2995365 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7294.2995365); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// alpha_particle_electron_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.249894022706206e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// alpha_particle_electron_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-06) / static_cast<T>(7294.2995365));
  }
};

/// \brief CODATA recommended value for the alpha particle mass (2006).
/// \details alpha particle mass = (6.6446562e-27 ± 3.3e-34) kg.
template <typename T> struct alpha_particle_mass {
  /// \brief Returns the constant's value.
  /// \details value = 6.6446562e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.6446562e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = alpha_particle_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9663969070363636e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = alpha_particle_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-34) / static_cast<T>(6.6446562e-27));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent (2006). \details alpha particle mass energy equivalent =
/// (5.97191917e-10 ± 3e-17) J.
template <typename T> struct alpha_particle_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 5.97191917e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.97191917e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.02351072511251e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-17) / static_cast<T>(5.97191917e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent in MeV (2006). \details alpha particle mass energy equivalent in
/// MeV = (3727.379109 ± 9.3e-05) MeV.
template <typename T> struct alpha_particle_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 3727.379109 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(3727.379109); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.3e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4950507388809856e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.3e-05) / static_cast<T>(3727.379109));
  }
};

/// \brief CODATA recommended value for the alpha particle mass in u (2006).
/// \details alpha particle mass in u = (4.001506179127 ± 6.2e-11) u.
template <typename T> struct alpha_particle_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 4.001506179127 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.001506179127); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = alpha_particle_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5494165752738238e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = alpha_particle_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-11) / static_cast<T>(4.001506179127));
  }
};

/// \brief CODATA recommended value for the alpha particle molar mass (2006).
/// \details alpha particle molar mass = (0.004001506179127 ± 6.2e-14) kg
/// mol^-1.
template <typename T> struct alpha_particle_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.004001506179127 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.004001506179127);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = alpha_particle_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5494165752738238e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = alpha_particle_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-14) /
                    static_cast<T>(0.004001506179127));
  }
};

/// \brief CODATA recommended value for the alpha particle-proton mass ratio
/// (2006). \details alpha particle-proton mass ratio = (3.97259968951
/// ± 4.1e-10) .
template <typename T> struct alpha_particle_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3.97259968951 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = alpha_particle_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.97259968951); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// alpha_particle_proton_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0320697579538184e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = alpha_particle_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-10) / static_cast<T>(3.97259968951));
  }
};

/// \brief CODATA recommended value for the Angstrom star (2006).
/// \details Angstrom star = (1.00001498e-10 ± 9e-17) m.
template <typename T> struct Angstrom_star {
  /// \brief Returns the constant's value.
  /// \details value = 1.00001498e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Angstrom_star<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00001498e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-17 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Angstrom_star<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.999865182019573e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Angstrom_star<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-17) / static_cast<T>(1.00001498e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant (2006).
/// \details atomic mass constant = (1.660538782e-27 ± 8.3e-35) kg.
template <typename T> struct atomic_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538782e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538782e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9983776891999135e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-35) / static_cast<T>(1.660538782e-27));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent (2006). \details atomic mass constant energy equivalent =
/// (1.49241783e-10 ± 7.4e-18) J.
template <typename T> struct atomic_mass_constant_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.49241783e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_constant_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.49241783e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9583969390127165e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-18) / static_cast<T>(1.49241783e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent in MeV (2006). \details atomic mass constant energy equivalent in
/// MeV = (931.494028 ± 2.3e-05) MeV.
template <typename T> struct atomic_mass_constant_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 931.494028 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931.494028); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.469151632607139e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-05) / static_cast<T>(931.494028));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-electron volt
/// relationship (2006). \details atomic mass unit-electron volt relationship =
/// (931494028.0 ± 23.0) eV.
template <typename T> struct atomic_mass_unit_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 931494028.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// atomic_mass_unit_electron_volt_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931494028.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 23.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_electron_volt_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(23.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.469151632607139e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(23.0) / static_cast<T>(931494028.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hartree
/// relationship (2006). \details atomic mass unit-hartree relationship =
/// (34231777.149 ± 0.049) E_h.
template <typename T> struct atomic_mass_unit_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 34231777.149 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_unit_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(34231777.149); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.049 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.049); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4314185263218631e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.049) / static_cast<T>(34231777.149));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hertz relationship
/// (2006). \details atomic mass unit-hertz relationship = (2.2523427369e+23 ±
/// 320000000000000.0) Hz.
template <typename T> struct atomic_mass_unit_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.2523427369e+23 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_unit_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.2523427369e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 320000000000000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(320000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4207429213922847e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_hertz_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(320000000000000.0) /
                    static_cast<T>(2.2523427369e+23));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-inverse meter
/// relationship (2006). \details atomic mass unit-inverse meter relationship =
/// (751300667100000.0 ± 1100000.0) m^-1.
template <typename T> struct atomic_mass_unit_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 751300667100000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// atomic_mass_unit_inverse_meter_relationship<double>::value(); \endcode
  static inline constexpr T value() {
    return static_cast<T>(751300667100000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1100000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_inverse_meter_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1100000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4641275432989696e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1100000.0) /
                    static_cast<T>(751300667100000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-joule relationship
/// (2006). \details atomic mass unit-joule relationship = (1.49241783e-10
/// ± 7.4e-18) J.
template <typename T> struct atomic_mass_unit_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.49241783e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_unit_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.49241783e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9583969390127165e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_joule_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-18) / static_cast<T>(1.49241783e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kelvin relationship
/// (2006). \details atomic mass unit-kelvin relationship = (10809527000000.0 ±
/// 19000000.0) K.
template <typename T> struct atomic_mass_unit_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 10809527000000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_unit_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10809527000000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 19000000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(19000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7577087323062332e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_kelvin_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(19000000.0) /
                    static_cast<T>(10809527000000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kilogram
/// relationship (2006). \details atomic mass unit-kilogram relationship =
/// (1.660538782e-27 ± 8.3e-35) kg.
template <typename T> struct atomic_mass_unit_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538782e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_mass_unit_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538782e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_mass_unit_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9983776891999135e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_mass_unit_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-35) / static_cast<T>(1.660538782e-27));
  }
};

/// \brief CODATA recommended value for the atomic unit of 1st
/// hyperpolarizability (2006). \details atomic unit of 1st hyperpolarizability
/// = (3.206361533e-53 ± 8.1e-61) C^3 m^3 J^-2.
template <typename T> struct atomic_unit_of_1st_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 3.206361533e-53 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_1st_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.206361533e-53); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-61 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_1st_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-61); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.52622791180423e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_1st_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-61) / static_cast<T>(3.206361533e-53));
  }
};

/// \brief CODATA recommended value for the atomic unit of 2nd
/// hyperpolarizability (2006). \details atomic unit of 2nd hyperpolarizability
/// = (6.23538095e-65 ± 3.1e-72) C^4 m^4 J^-3.
template <typename T> struct atomic_unit_of_2nd_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 6.23538095e-65 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_2nd_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.23538095e-65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-72 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-72); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.971628878585197e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-72) / static_cast<T>(6.23538095e-65));
  }
};

/// \brief CODATA recommended value for the atomic unit of action (2006).
/// \details atomic unit of action = (1.054571628e-34 ± 5.3e-42) J s.
template <typename T> struct atomic_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571628e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571628e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.025737331897952e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-42) / static_cast<T>(1.054571628e-34));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge (2006).
/// \details atomic unit of charge = (1.602176487e-19 ± 4e-27) C.
template <typename T> struct atomic_unit_of_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176487e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176487e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-27 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.496603858848167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-27) / static_cast<T>(1.602176487e-19));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge density
/// (2006). \details atomic unit of charge density = (1081202300000.0 ± 27000.0)
/// C m^-3.
template <typename T> struct atomic_unit_of_charge_density {
  /// \brief Returns the constant's value.
  /// \details value = 1081202300000.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_charge_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1081202300000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 27000.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_charge_density<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(27000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.497219992965239e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_charge_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(27000.0) / static_cast<T>(1081202300000.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of current (2006).
/// \details atomic unit of current = (0.00662361763 ± 1.7e-10) A.
template <typename T> struct atomic_unit_of_current {
  /// \brief Returns the constant's value.
  /// \details value = 0.00662361763 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00662361763); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-10 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.566573276060321e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-10) / static_cast<T>(0.00662361763));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric dipole mom.
/// (2006). \details atomic unit of electric dipole mom. = (8.47835281e-30
/// ± 2.1e-37) C m.
template <typename T> struct atomic_unit_of_electric_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 8.47835281e-30 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.47835281e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-37 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_electric_dipole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4768962168254002e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_electric_dipole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-37) / static_cast<T>(8.47835281e-30));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// (2006). \details atomic unit of electric field = (514220632000.0 ± 13000.0)
/// V m^-1.
template <typename T> struct atomic_unit_of_electric_field {
  /// \brief Returns the constant's value.
  /// \details value = 514220632000.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_field<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(514220632000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 13000.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_electric_field<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(13000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.528097705733441e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_electric_field<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(13000.0) / static_cast<T>(514220632000.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// gradient (2006). \details atomic unit of electric field gradient =
/// (9.71736166e+21 ± 240000000000000.0) V m^-2.
template <typename T> struct atomic_unit_of_electric_field_gradient {
  /// \brief Returns the constant's value.
  /// \details value = 9.71736166e+21 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_field_gradient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.71736166e+21); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 240000000000000.0 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_electric_field_gradient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(240000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4698061922293423e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_electric_field_gradient<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(240000000000000.0) /
                    static_cast<T>(9.71736166e+21));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric
/// polarizability (2006). \details atomic unit of electric polarizability =
/// (1.6487772536e-41 ± 3.4e-50) C^2 m^2 J^-1.
template <typename T> struct atomic_unit_of_electric_polarizability {
  /// \brief Returns the constant's value.
  /// \details value = 1.6487772536e-41 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_polarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6487772536e-41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-50 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_electric_polarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-50); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.0621342225435952e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_electric_polarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-50) / static_cast<T>(1.6487772536e-41));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric potential
/// (2006). \details atomic unit of electric potential = (27.21138386 ± 6.8e-07)
/// V.
template <typename T> struct atomic_unit_of_electric_potential {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138386 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_potential<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138386); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.8e-07 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_electric_potential<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4989541270614374e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_electric_potential<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.8e-07) / static_cast<T>(27.21138386));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric quadrupole
/// mom. (2006). \details atomic unit of electric quadrupole mom. =
/// (4.48655107e-40 ± 1.1e-47) C m^2.
template <typename T> struct atomic_unit_of_electric_quadrupole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.48655107e-40 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_electric_quadrupole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.48655107e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-47 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_electric_quadrupole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-47); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.451771935363259e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// atomic_unit_of_electric_quadrupole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-47) / static_cast<T>(4.48655107e-40));
  }
};

/// \brief CODATA recommended value for the atomic unit of energy (2006).
/// \details atomic unit of energy = (4.35974394e-18 ± 2.2e-25) J.
template <typename T> struct atomic_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974394e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974394e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.046167917834184e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-25) / static_cast<T>(4.35974394e-18));
  }
};

/// \brief CODATA recommended value for the atomic unit of force (2006).
/// \details atomic unit of force = (8.23872206e-08 ± 4.1e-15) N.
template <typename T> struct atomic_unit_of_force {
  /// \brief Returns the constant's value.
  /// \details value = 8.23872206e-08 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_force<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.23872206e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-15 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_force<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.976499959752254e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_force<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-15) / static_cast<T>(8.23872206e-08));
  }
};

/// \brief CODATA recommended value for the atomic unit of length (2006).
/// \details atomic unit of length = (5.2917720859e-11 ± 3.6e-20) m.
template <typename T> struct atomic_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917720859e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917720859e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.803014078388314e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-20) / static_cast<T>(5.2917720859e-11));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. dipole mom.
/// (2006). \details atomic unit of mag. dipole mom. = (1.85480183e-23
/// ± 4.6e-31) J T^-1.
template <typename T> struct atomic_unit_of_mag_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.85480183e-23 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_mag_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.85480183e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_mag_dipole_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4800493107126165e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_mag_dipole_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-31) / static_cast<T>(1.85480183e-23));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. flux density
/// (2006). \details atomic unit of mag. flux density = (235051.7382 ± 0.0059)
/// T.
template <typename T> struct atomic_unit_of_mag_flux_density {
  /// \brief Returns the constant's value.
  /// \details value = 235051.7382 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_mag_flux_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(235051.7382); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0059 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_mag_flux_density<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0059); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.510085671002283e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_mag_flux_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0059) / static_cast<T>(235051.7382));
  }
};

/// \brief CODATA recommended value for the atomic unit of magnetizability
/// (2006). \details atomic unit of magnetizability = (7.891036433e-29
/// ± 2.7e-37) J T^-2.
template <typename T> struct atomic_unit_of_magnetizability {
  /// \brief Returns the constant's value.
  /// \details value = 7.891036433e-29 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_magnetizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.891036433e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-37 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// atomic_unit_of_magnetizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.4216037689405507e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_magnetizability<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-37) / static_cast<T>(7.891036433e-29));
  }
};

/// \brief CODATA recommended value for the atomic unit of mass (2006).
/// \details atomic unit of mass = (9.10938215e-31 ± 4.5e-38) kg.
template <typename T> struct atomic_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938215e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938215e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9399618172786836e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-38) / static_cast<T>(9.10938215e-31));
  }
};

/// \brief CODATA recommended value for the atomic unit of momentum (2006).
/// \details atomic unit of momentum = (1.992851565e-24 ± 9.9e-32) kg m s^-1.
template <typename T> struct atomic_unit_of_momentum {
  /// \brief Returns the constant's value.
  /// \details value = 1.992851565e-24 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_momentum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.992851565e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.9e-32 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_momentum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.9e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9677558398585496e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_momentum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.9e-32) / static_cast<T>(1.992851565e-24));
  }
};

/// \brief CODATA recommended value for the atomic unit of permittivity (2006).
/// \details atomic unit of permittivity = (1.112650056e-10 ± 0.0) F m^-1.
template <typename T> struct atomic_unit_of_permittivity {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-10 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_permittivity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_permittivity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_permittivity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-10));
  }
};

/// \brief CODATA recommended value for the atomic unit of time (2006).
/// \details atomic unit of time = (2.418884326505e-17 ± 1.6e-12) 7 s.
template <typename T> struct atomic_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 2.418884326505e-17 7 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.418884326505e-17);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-12 7 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 66146.19733849818.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-12) /
                    static_cast<T>(2.418884326505e-17));
  }
};

/// \brief CODATA recommended value for the atomic unit of velocity (2006).
/// \details atomic unit of velocity = (2187691.2541 ± 0.0015) m s^-1.
template <typename T> struct atomic_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 2187691.2541 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = atomic_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2187691.2541); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0015 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = atomic_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0015); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.856543386498516e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = atomic_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0015) / static_cast<T>(2187691.2541));
  }
};

/// \brief CODATA recommended value for the Avogadro constant (2006).
/// \details Avogadro constant = (6.02214179e+23 ± 3e+16) mol^-1.
template <typename T> struct Avogadro_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.02214179e+23 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Avogadro_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.02214179e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e+16 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Avogadro_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e+16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9816163494881775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Avogadro_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e+16) / static_cast<T>(6.02214179e+23));
  }
};

/// \brief CODATA recommended value for the Bohr magneton (2006).
/// \details Bohr magneton = (9.27400915e-24 ± 2.3e-31) J T^-1.
template <typename T> struct Bohr_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 9.27400915e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.27400915e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Bohr_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4800493107126165e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Bohr_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-31) / static_cast<T>(9.27400915e-24));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in eV/T (2006).
/// \details Bohr magneton in eV/T = (5.7883817555e-05 ± 7.9e-14) eV T^-1.
template <typename T> struct Bohr_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 5.7883817555e-05 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.7883817555e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.9e-14 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Bohr_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.9e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.364802864374587e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Bohr_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.9e-14) / static_cast<T>(5.7883817555e-05));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in Hz/T (2006).
/// \details Bohr magneton in Hz/T = (13996246040.0 ± 350.0) Hz T^-1.
template <typename T> struct Bohr_magneton_in_Hz_T {
  /// \brief Returns the constant's value.
  /// \details value = 13996246040.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_magneton_in_Hz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13996246040.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 350.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Bohr_magneton_in_Hz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(350.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5006705297958595e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Bohr_magneton_in_Hz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(350.0) / static_cast<T>(13996246040.0));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in inverse meters per
/// tesla (2006). \details Bohr magneton in inverse meters per tesla =
/// (46.6864515 ± 1.2e-06) m^-1 T^-1.
template <typename T> struct Bohr_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 46.6864515 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_magneton_in_inverse_meters_per_tesla<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(46.6864515); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-06 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5703388487343056e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-06) / static_cast<T>(46.6864515));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in K/T (2006).
/// \details Bohr magneton in K/T = (0.6717131 ± 1.2e-06) K T^-1.
template <typename T> struct Bohr_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.6717131 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.6717131); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-06 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Bohr_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7864769944191949e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Bohr_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-06) / static_cast<T>(0.6717131));
  }
};

/// \brief CODATA recommended value for the Bohr radius (2006).
/// \details Bohr radius = (5.2917720859e-11 ± 3.6e-20) m.
template <typename T> struct Bohr_radius {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917720859e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Bohr_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917720859e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Bohr_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.803014078388314e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Bohr_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-20) / static_cast<T>(5.2917720859e-11));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant (2006).
/// \details Boltzmann constant = (1.3806504e-23 ± 2.4e-29) J K^-1.
template <typename T> struct Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.3806504e-23 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3806504e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-29 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7383111611744724e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-29) / static_cast<T>(1.3806504e-23));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in eV/K (2006).
/// \details Boltzmann constant in eV/K = (8.617343e-05 ± 1.5e-10) eV K^-1.
template <typename T> struct Boltzmann_constant_in_eV_K {
  /// \brief Returns the constant's value.
  /// \details value = 8.617343e-05 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Boltzmann_constant_in_eV_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.617343e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Boltzmann_constant_in_eV_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7406757512147304e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Boltzmann_constant_in_eV_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(8.617343e-05));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in Hz/K (2006).
/// \details Boltzmann constant in Hz/K = (20836644000.0 ± 36000.0) Hz K^-1.
template <typename T> struct Boltzmann_constant_in_Hz_K {
  /// \brief Returns the constant's value.
  /// \details value = 20836644000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Boltzmann_constant_in_Hz_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836644000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 36000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Boltzmann_constant_in_Hz_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(36000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7277254436942916e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Boltzmann_constant_in_Hz_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(36000.0) / static_cast<T>(20836644000.0));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in inverse meters
/// per kelvin (2006). \details Boltzmann constant in inverse meters per kelvin
/// = (69.50356 ± 0.00012) m^-1 K^-1.
template <typename T> struct Boltzmann_constant_in_inverse_meters_per_kelvin {
  /// \brief Returns the constant's value.
  /// \details value = 69.50356 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(69.50356); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00012 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00012); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7265302669388448e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00012) / static_cast<T>(69.50356));
  }
};

/// \brief CODATA recommended value for the characteristic impedance of vacuum
/// (2006). \details characteristic impedance of vacuum = (376.730313461 ± 0.0)
/// ohm.
template <typename T> struct characteristic_impedance_of_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 376.730313461 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = characteristic_impedance_of_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(376.730313461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// characteristic_impedance_of_vacuum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// characteristic_impedance_of_vacuum<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(376.730313461));
  }
};

/// \brief CODATA recommended value for the classical electron radius (2006).
/// \details classical electron radius = (2.8179402894e-15 ± 5.8e-24) m.
template <typename T> struct classical_electron_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.8179402894e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = classical_electron_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.8179402894e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.8e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = classical_electron_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.8e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.058240915117099e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = classical_electron_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.8e-24) / static_cast<T>(2.8179402894e-15));
  }
};

/// \brief CODATA recommended value for the Compton wavelength (2006).
/// \details Compton wavelength = (2.4263102175e-12 ± 3.3e-21) m.
template <typename T> struct Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.4263102175e-12 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.4263102175e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3600898913083854e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-21) / static_cast<T>(2.4263102175e-12));
  }
};

/// \brief CODATA recommended value for the Compton wavelength over 2 pi (2006).
/// \details Compton wavelength over 2 pi = (3.8615926459e-13 ± 5.3e-22) m.
template <typename T> struct Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926459e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926459e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Compton_wavelength_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3724907016350396e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-22) / static_cast<T>(3.8615926459e-13));
  }
};

/// \brief CODATA recommended value for the conductance quantum (2006).
/// \details conductance quantum = (7.7480917004e-05 ± 5.3e-14) S.
template <typename T> struct conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 7.7480917004e-05 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.7480917004e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-14 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = conductance_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.840394002727644e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-14) / static_cast<T>(7.7480917004e-05));
  }
};

/// \brief CODATA recommended value for the conventional value of Josephson
/// constant (2006). \details conventional value of Josephson constant =
/// (483597900000000.0 ± 0.0) Hz V^-1.
template <typename T> struct conventional_value_of_Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597900000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = conventional_value_of_Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597900000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// conventional_value_of_Josephson_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// conventional_value_of_Josephson_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(483597900000000.0));
  }
};

/// \brief CODATA recommended value for the conventional value of von Klitzing
/// constant (2006). \details conventional value of von Klitzing constant =
/// (25812.807 ± 0.0) ohm.
template <typename T> struct conventional_value_of_von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.807 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// conventional_value_of_von_Klitzing_constant<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(25812.807); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// conventional_value_of_von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// conventional_value_of_von_Klitzing_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(25812.807));
  }
};

/// \brief CODATA recommended value for the Cu x unit (2006).
/// \details Cu x unit = (1.00207699e-13 ± 2.8e-20) m.
template <typename T> struct Cu_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00207699e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Cu_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00207699e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Cu_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.7941964818491644e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Cu_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-20) / static_cast<T>(1.00207699e-13));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mag. mom. ratio
/// (2006). \details deuteron-electron mag. mom. ratio = (-0.0004664345537
/// ± 3.9e-12) .
template <typename T> struct deuteron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.0004664345537 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.0004664345537); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.361301642563108e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-12) / static_cast<T>(-0.0004664345537));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mass ratio (2006).
/// \details deuteron-electron mass ratio = (3670.4829654 ± 1.6e-06) .
template <typename T> struct deuteron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3670.4829654 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3670.4829654); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.359099374884678e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-06) / static_cast<T>(3670.4829654));
  }
};

/// \brief CODATA recommended value for the deuteron g factor (2006).
/// \details deuteron g factor = (0.8574382308 ± 7.2e-09) .
template <typename T> struct deuteron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.39710633532437e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-09) / static_cast<T>(0.8574382308));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. (2006).
/// \details deuteron mag. mom. = (4.33073465e-27 ± 1.1e-34) J T^-1.
template <typename T> struct deuteron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.33073465e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.33073465e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.53998475755147e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-34) / static_cast<T>(4.33073465e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to Bohr magneton
/// ratio (2006). \details deuteron mag. mom. to Bohr magneton ratio =
/// (0.0004669754556 ± 3.9e-12) .
template <typename T> struct deuteron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0004669754556 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0004669754556); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.351616671135381e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-12) / static_cast<T>(0.0004669754556));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to nuclear
/// magneton ratio (2006). \details deuteron mag. mom. to nuclear magneton ratio
/// = (0.8574382308 ± 7.2e-09) .
template <typename T> struct deuteron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.39710633532437e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-09) / static_cast<T>(0.8574382308));
  }
};

/// \brief CODATA recommended value for the deuteron mass (2006).
/// \details deuteron mass = (3.3435832e-27 ± 1.7e-34) kg.
template <typename T> struct deuteron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.3435832e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.3435832e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.0843657786054193e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-34) / static_cast<T>(3.3435832e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent
/// (2006). \details deuteron mass energy equivalent = (3.00506272e-10
/// ± 1.5e-17) J.
template <typename T> struct deuteron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 3.00506272e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.00506272e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9915763488623624e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-17) / static_cast<T>(3.00506272e-10));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent in
/// MeV (2006). \details deuteron mass energy equivalent in MeV = (1875.612793
/// ± 4.7e-05) MeV.
template <typename T> struct deuteron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1875.612793 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1875.612793); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5058476981714635e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-05) / static_cast<T>(1875.612793));
  }
};

/// \brief CODATA recommended value for the deuteron mass in u (2006).
/// \details deuteron mass in u = (2.013553212724 ± 7.8e-11) u.
template <typename T> struct deuteron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 2.013553212724 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.013553212724); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.8e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.8e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.873749127021037e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.8e-11) / static_cast<T>(2.013553212724));
  }
};

/// \brief CODATA recommended value for the deuteron molar mass (2006).
/// \details deuteron molar mass = (0.002013553212724 ± 7.8e-14) kg mol^-1.
template <typename T> struct deuteron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.002013553212724 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.002013553212724);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.8e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.8e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.873749127021037e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.8e-14) /
                    static_cast<T>(0.002013553212724));
  }
};

/// \brief CODATA recommended value for the deuteron-neutron mag. mom. ratio
/// (2006). \details deuteron-neutron mag. mom. ratio = (-0.44820652 ± 1.1e-07)
/// .
template <typename T> struct deuteron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.44820652 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.44820652); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// deuteron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4542257885940616e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-0.44820652));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mag. mom. ratio
/// (2006). \details deuteron-proton mag. mom. ratio = (0.307012207 ± 2.4e-09) .
template <typename T> struct deuteron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.307012207 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.307012207); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.817278744229216e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-09) / static_cast<T>(0.307012207));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mass ratio (2006).
/// \details deuteron-proton mass ratio = (1.99900750108 ± 2.2e-10) .
template <typename T> struct deuteron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.99900750108 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.99900750108); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1005461454303749e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-10) / static_cast<T>(1.99900750108));
  }
};

/// \brief CODATA recommended value for the deuteron rms charge radius (2006).
/// \details deuteron rms charge radius = (2.1402e-15 ± 2.8e-18) m.
template <typename T> struct deuteron_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.1402e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = deuteron_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1402e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = deuteron_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0013082889449584152.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = deuteron_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-18) / static_cast<T>(2.1402e-15));
  }
};

/// \brief CODATA recommended value for the electric constant (2006).
/// \details electric constant = (8.854187817e-12 ± 0.0) F m^-1.
template <typename T> struct electric_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.854187817e-12 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electric_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.854187817e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electric_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electric_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.854187817e-12));
  }
};

/// \brief CODATA recommended value for the electron charge to mass quotient
/// (2006). \details electron charge to mass quotient = (-175882015000.0 ±
/// 4400.0) C kg^-1.
template <typename T> struct electron_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = -175882015000.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-175882015000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4400.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4400.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5016770475366683e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4400.0) / static_cast<T>(-175882015000.0));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mag. mom. ratio
/// (2006). \details electron-deuteron mag. mom. ratio = (-2143.923498
/// ± 1.8e-05) .
template <typename T> struct electron_deuteron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2143.923498 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_deuteron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2143.923498); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_deuteron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.395821966964606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_deuteron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-05) / static_cast<T>(-2143.923498));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mass ratio (2006).
/// \details electron-deuteron mass ratio = (0.00027244371093 ± 1.2e-13) .
template <typename T> struct electron_deuteron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00027244371093 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_deuteron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00027244371093); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_deuteron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4045795584847264e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_deuteron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-13) / static_cast<T>(0.00027244371093));
  }
};

/// \brief CODATA recommended value for the electron g factor (2006).
/// \details electron g factor = (-2.0023193043622 ± 1.5e-12) .
template <typename T> struct electron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.0023193043622 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.0023193043622); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.491312682907965e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-12) / static_cast<T>(-2.0023193043622));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio (2006).
/// \details electron gyromag. ratio = (176085977000.0 ± 4400.0) s^-1 T^-1.
template <typename T> struct electron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 176085977000.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(176085977000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4400.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4400.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4987793320986598e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4400.0) / static_cast<T>(176085977000.0));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio over 2 pi
/// (2006). \details electron gyromag. ratio over 2 pi = (28024.95364 ± 0.0007)
/// MHz T^-1.
template <typename T> struct electron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 28024.95364 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(28024.95364); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0007 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0007); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4977739802605434e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0007) / static_cast<T>(28024.95364));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. (2006).
/// \details electron mag. mom. = (-9.28476377e-24 ± 2.3e-31) J T^-1.
template <typename T> struct electron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.28476377e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.28476377e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4771766487280267e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-31) / static_cast<T>(-9.28476377e-24));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. anomaly (2006).
/// \details electron mag. mom. anomaly = (0.00115965218111 ± 7.4e-13) .
template <typename T> struct electron_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00115965218111 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00115965218111); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.381223715646222e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-13) / static_cast<T>(0.00115965218111));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to Bohr magneton
/// ratio (2006). \details electron mag. mom. to Bohr magneton ratio =
/// (-1.00115965218111 ± 7.4e-13) .
template <typename T> struct electron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.00115965218111 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-1.00115965218111);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.391428513802451e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-13) /
                    static_cast<T>(-1.00115965218111));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to nuclear
/// magneton ratio (2006). \details electron mag. mom. to nuclear magneton ratio
/// = (-1838.28197092 ± 8e-07) .
template <typename T> struct electron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1838.28197092 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1838.28197092); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.351889496036487e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-07) / static_cast<T>(-1838.28197092));
  }
};

/// \brief CODATA recommended value for the electron mass (2006).
/// \details electron mass = (9.10938215e-31 ± 4.5e-38) kg.
template <typename T> struct electron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938215e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938215e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9399618172786836e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-38) / static_cast<T>(9.10938215e-31));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent
/// (2006). \details electron mass energy equivalent = (8.18710438e-14
/// ± 4.1e-21) J.
template <typename T> struct electron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710438e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710438e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.007875568333721e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-21) / static_cast<T>(8.18710438e-14));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent in
/// MeV (2006). \details electron mass energy equivalent in MeV = (0.51099891
/// ± 1.3e-08) MeV.
template <typename T> struct electron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099891 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099891); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.544036737769167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.51099891));
  }
};

/// \brief CODATA recommended value for the electron mass in u (2006).
/// \details electron mass in u = (0.00054857990943 ± 2.3e-13) u.
template <typename T> struct electron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054857990943 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054857990943); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-13 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.1926435154903983e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-13) / static_cast<T>(0.00054857990943));
  }
};

/// \brief CODATA recommended value for the electron molar mass (2006).
/// \details electron molar mass = (5.4857990943e-07 ± 2.3e-16) kg mol^-1.
template <typename T> struct electron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.4857990943e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.4857990943e-07); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-16 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.1926435154903994e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-16) / static_cast<T>(5.4857990943e-07));
  }
};

/// \brief CODATA recommended value for the electron-muon mag. mom. ratio
/// (2006). \details electron-muon mag. mom. ratio = (206.7669877 ± 5.2e-06) .
template <typename T> struct electron_muon_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7669877 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_muon_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7669877); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_muon_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5149082345508295e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_muon_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-06) / static_cast<T>(206.7669877));
  }
};

/// \brief CODATA recommended value for the electron-muon mass ratio (2006).
/// \details electron-muon mass ratio = (0.00483633171 ± 1.2e-10) .
template <typename T> struct electron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00483633171 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00483633171); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4812193868315126e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(0.00483633171));
  }
};

/// \brief CODATA recommended value for the electron-neutron mag. mom. ratio
/// (2006). \details electron-neutron mag. mom. ratio = (960.9205 ± 0.00023) .
template <typename T> struct electron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 960.9205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(960.9205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00023); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3935382791812643e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00023) / static_cast<T>(960.9205));
  }
};

/// \brief CODATA recommended value for the electron-neutron mass ratio (2006).
/// \details electron-neutron mass ratio = (0.00054386734459 ± 3.3e-13) .
template <typename T> struct electron_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054386734459 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054386734459); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.067656079788608e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-13) / static_cast<T>(0.00054386734459));
  }
};

/// \brief CODATA recommended value for the electron-proton mag. mom. ratio
/// (2006). \details electron-proton mag. mom. ratio = (-658.2106848 ± 5.4e-06)
/// .
template <typename T> struct electron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2106848 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2106848); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.204060074838821e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-06) / static_cast<T>(-658.2106848));
  }
};

/// \brief CODATA recommended value for the electron-proton mass ratio (2006).
/// \details electron-proton mass ratio = (0.00054461702177 ± 2.4e-13) .
template <typename T> struct electron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054461702177 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054461702177); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.406766413947223e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-13) / static_cast<T>(0.00054461702177));
  }
};

/// \brief CODATA recommended value for the electron-tau mass ratio (2006).
/// \details electron-tau mass ratio = (0.000287564 ± 4.7e-08) .
template <typename T> struct electron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000287564 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000287564); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016344187728644752.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-08) / static_cast<T>(0.000287564));
  }
};

/// \brief CODATA recommended value for the electron to alpha particle mass
/// ratio (2006). \details electron to alpha particle mass ratio =
/// (0.00013709335557 ± 5.8e-14) .
template <typename T> struct electron_to_alpha_particle_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00013709335557 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_to_alpha_particle_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00013709335557); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.8e-14 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_to_alpha_particle_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.8e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.2306937312060426e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_to_alpha_particle_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.8e-14) / static_cast<T>(0.00013709335557));
  }
};

/// \brief CODATA recommended value for the electron to shielded helion mag.
/// mom. ratio (2006). \details electron to shielded helion mag. mom. ratio =
/// (864.058257 ± 1e-05) .
template <typename T> struct electron_to_shielded_helion_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 864.058257 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_to_shielded_helion_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(864.058257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1573293720633932e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-05) / static_cast<T>(864.058257));
  }
};

/// \brief CODATA recommended value for the electron to shielded proton mag.
/// mom. ratio (2006). \details electron to shielded proton mag. mom. ratio =
/// (-658.2275971 ± 7.2e-06) .
template <typename T> struct electron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2275971 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2275971); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0938465709614045e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-06) / static_cast<T>(-658.2275971));
  }
};

/// \brief CODATA recommended value for the electron volt (2006).
/// \details electron volt = (1.602176487e-19 ± 4e-27) J.
template <typename T> struct electron_volt {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176487e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176487e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-27 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = electron_volt<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.496603858848167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_volt<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-27) / static_cast<T>(1.602176487e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-atomic mass unit
/// relationship (2006). \details electron volt-atomic mass unit relationship =
/// (1.073544188e-09 ± 2.7e-17) u.
template <typename T> struct electron_volt_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.073544188e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// electron_volt_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.073544188e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5150338758109882e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_volt_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-17) / static_cast<T>(1.073544188e-09));
  }
};

/// \brief CODATA recommended value for the electron volt-hartree relationship
/// (2006). \details electron volt-hartree relationship = (0.0367493254
/// ± 9.2e-10) E_h.
template <typename T> struct electron_volt_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.0367493254 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0367493254); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.2e-10 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.503447314981189e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_volt_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.2e-10) / static_cast<T>(0.0367493254));
  }
};

/// \brief CODATA recommended value for the electron volt-hertz relationship
/// (2006). \details electron volt-hertz relationship = (241798945400000.0 ±
/// 6000000.0) Hz.
template <typename T> struct electron_volt_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 241798945400000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798945400000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6000000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4814004006818136e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_volt_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6000000.0) /
                    static_cast<T>(241798945400000.0));
  }
};

/// \brief CODATA recommended value for the electron volt-inverse meter
/// relationship (2006). \details electron volt-inverse meter relationship =
/// (806554.465 ± 0.02) m^-1.
template <typename T> struct electron_volt_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 806554.465 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(806554.465); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.02 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.02); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.479683749565505e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_volt_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.02) / static_cast<T>(806554.465));
  }
};

/// \brief CODATA recommended value for the electron volt-joule relationship
/// (2006). \details electron volt-joule relationship = (1.602176487e-19 ±
/// 4e-27) J.
template <typename T> struct electron_volt_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176487e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176487e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-27 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.496603858848167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_volt_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-27) / static_cast<T>(1.602176487e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-kelvin relationship
/// (2006). \details electron volt-kelvin relationship = (11604.505 ± 0.02) K.
template <typename T> struct electron_volt_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 11604.505 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(11604.505); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.02 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.02); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7234686012027227e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = electron_volt_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.02) / static_cast<T>(11604.505));
  }
};

/// \brief CODATA recommended value for the electron volt-kilogram relationship
/// (2006). \details electron volt-kilogram relationship = (1.782661758e-36
/// ± 4.4e-44) kg.
template <typename T> struct electron_volt_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.782661758e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = electron_volt_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.782661758e-36); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-44 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// electron_volt_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-44); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.468219212228145e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// electron_volt_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-44) / static_cast<T>(1.782661758e-36));
  }
};

/// \brief CODATA recommended value for the elementary charge (2006).
/// \details elementary charge = (1.602176487e-19 ± 4e-27) C.
template <typename T> struct elementary_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176487e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = elementary_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176487e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-27 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = elementary_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.496603858848167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = elementary_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-27) / static_cast<T>(1.602176487e-19));
  }
};

/// \brief CODATA recommended value for the elementary charge over h (2006).
/// \details elementary charge over h = (241798945400000.0 ± 6000000.0) A J^-1.
template <typename T> struct elementary_charge_over_h {
  /// \brief Returns the constant's value.
  /// \details value = 241798945400000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = elementary_charge_over_h<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798945400000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6000000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = elementary_charge_over_h<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4814004006818136e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = elementary_charge_over_h<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6000000.0) /
                    static_cast<T>(241798945400000.0));
  }
};

/// \brief CODATA recommended value for the Faraday constant (2006).
/// \details Faraday constant = (96485.3399 ± 0.0024) C mol^-1.
template <typename T> struct Faraday_constant {
  /// \brief Returns the constant's value.
  /// \details value = 96485.3399 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Faraday_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.3399); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0024 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Faraday_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0024); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4874245170172215e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Faraday_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0024) / static_cast<T>(96485.3399));
  }
};

/// \brief CODATA recommended value for the Faraday constant for conventional
/// electric current (2006). \details Faraday constant for conventional electric
/// current = (96485.3401 ± 0.0048) C_90 mol^-1.
template <typename T>
struct Faraday_constant_for_conventional_electric_current {
  /// \brief Returns the constant's value.
  /// \details value = 96485.3401 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// Faraday_constant_for_conventional_electric_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.3401); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0048 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Faraday_constant_for_conventional_electric_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0048); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.974849023722309e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Faraday_constant_for_conventional_electric_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0048) / static_cast<T>(96485.3401));
  }
};

/// \brief CODATA recommended value for the Fermi coupling constant (2006).
/// \details Fermi coupling constant = (1.16637e-05 ± 1e-10) GeV^-2.
template <typename T> struct Fermi_coupling_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.16637e-05 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Fermi_coupling_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.16637e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-10 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Fermi_coupling_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.573608717645345e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Fermi_coupling_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-10) / static_cast<T>(1.16637e-05));
  }
};

/// \brief CODATA recommended value for the fine-structure constant (2006).
/// \details fine-structure constant = (0.0072973525376 ± 5e-12) .
template <typename T> struct fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0072973525376 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0072973525376); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = fine_structure_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.85179998394929e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-12) / static_cast<T>(0.0072973525376));
  }
};

/// \brief CODATA recommended value for the first radiation constant (2006).
/// \details first radiation constant = (3.74177118e-16 ± 1.9e-23) W m^2.
template <typename T> struct first_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.74177118e-16 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = first_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.74177118e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-23 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = first_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.077809167368701e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = first_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-23) / static_cast<T>(3.74177118e-16));
  }
};

/// \brief CODATA recommended value for the first radiation constant for
/// spectral radiance (2006). \details first radiation constant for spectral
/// radiance = (1.191042759e-16 ± 5.9e-24) W m^2 sr^-1.
template <typename T> struct first_radiation_constant_for_spectral_radiance {
  /// \brief Returns the constant's value.
  /// \details value = 1.191042759e-16 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// first_radiation_constant_for_spectral_radiance<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.191042759e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.9e-24 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// first_radiation_constant_for_spectral_radiance<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.9e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.953642474560395e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// first_radiation_constant_for_spectral_radiance<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.9e-24) / static_cast<T>(1.191042759e-16));
  }
};

/// \brief CODATA recommended value for the hartree-atomic mass unit
/// relationship (2006). \details hartree-atomic mass unit relationship =
/// (2.9212622986e-08 ± 4.2e-17) u.
template <typename T> struct hartree_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.9212622986e-08 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9212622986e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hartree_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4377346402658976e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// hartree_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-17) / static_cast<T>(2.9212622986e-08));
  }
};

/// \brief CODATA recommended value for the hartree-electron volt relationship
/// (2006). \details hartree-electron volt relationship = (27.21138386
/// ± 6.8e-07) eV.
template <typename T> struct hartree_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138386 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138386); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.8e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hartree_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4989541270614374e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// hartree_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.8e-07) / static_cast<T>(27.21138386));
  }
};

/// \brief CODATA recommended value for the Hartree energy (2006).
/// \details Hartree energy = (4.35974394e-18 ± 2.2e-25) J.
template <typename T> struct Hartree_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974394e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Hartree_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974394e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Hartree_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.046167917834184e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Hartree_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-25) / static_cast<T>(4.35974394e-18));
  }
};

/// \brief CODATA recommended value for the Hartree energy in eV (2006).
/// \details Hartree energy in eV = (27.21138386 ± 6.8e-07) eV.
template <typename T> struct Hartree_energy_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138386 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Hartree_energy_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138386); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.8e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Hartree_energy_in_eV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4989541270614374e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Hartree_energy_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.8e-07) / static_cast<T>(27.21138386));
  }
};

/// \brief CODATA recommended value for the hartree-hertz relationship (2006).
/// \details hartree-hertz relationship = (6579683920722000.0 ± 44000.0) Hz.
template <typename T> struct hartree_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6579683920722000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(6579683920722000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 44000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hartree_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(44000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.6872513224270205e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hartree_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(44000.0) /
                    static_cast<T>(6579683920722000.0));
  }
};

/// \brief CODATA recommended value for the hartree-inverse meter relationship
/// (2006). \details hartree-inverse meter relationship = (21947463.13705 ±
/// 0.00015) m^-1.
template <typename T> struct hartree_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 21947463.13705 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(21947463.13705); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00015 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hartree_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00015); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.834502879140581e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// hartree_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00015) / static_cast<T>(21947463.13705));
  }
};

/// \brief CODATA recommended value for the hartree-joule relationship (2006).
/// \details hartree-joule relationship = (4.35974394e-18 ± 2.2e-25) J.
template <typename T> struct hartree_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974394e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974394e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hartree_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.046167917834184e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hartree_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-25) / static_cast<T>(4.35974394e-18));
  }
};

/// \brief CODATA recommended value for the hartree-kelvin relationship (2006).
/// \details hartree-kelvin relationship = (315774.65 ± 0.55) K.
template <typename T> struct hartree_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 315774.65 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(315774.65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.55 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hartree_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.55); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7417484272407554e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hartree_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.55) / static_cast<T>(315774.65));
  }
};

/// \brief CODATA recommended value for the hartree-kilogram relationship
/// (2006). \details hartree-kilogram relationship = (4.85086934e-35 ± 2.4e-42)
/// kg.
template <typename T> struct hartree_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.85086934e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hartree_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.85086934e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hartree_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.947566779854763e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hartree_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-42) / static_cast<T>(4.85086934e-35));
  }
};

/// \brief CODATA recommended value for the helion-electron mass ratio (2006).
/// \details helion-electron mass ratio = (5495.8852765 ± 5.2e-06) .
template <typename T> struct helion_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5495.8852765 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5495.8852765); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.461623993926541e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-06) / static_cast<T>(5495.8852765));
  }
};

/// \brief CODATA recommended value for the helion mass (2006).
/// \details helion mass = (5.00641192e-27 ± 2.5e-34) kg.
template <typename T> struct helion_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.00641192e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.00641192e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9935962920126635e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-34) / static_cast<T>(5.00641192e-27));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent
/// (2006). \details helion mass energy equivalent = (4.49953864e-10 ± 2.2e-17)
/// J.
template <typename T> struct helion_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.49953864e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.49953864e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.8893901708998327e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-17) / static_cast<T>(4.49953864e-10));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent in MeV
/// (2006). \details helion mass energy equivalent in MeV = (2808.391383 ±
/// 7e-05) MeV.
template <typename T> struct helion_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.391383 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.391383); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// helion_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4925300805197632e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// helion_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7e-05) / static_cast<T>(2808.391383));
  }
};

/// \brief CODATA recommended value for the helion mass in u (2006).
/// \details helion mass in u = (3.0149322473 ± 2.6e-09) u.
template <typename T> struct helion_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.0149322473 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.0149322473); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.623742713715741e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-09) / static_cast<T>(3.0149322473));
  }
};

/// \brief CODATA recommended value for the helion molar mass (2006).
/// \details helion molar mass = (0.0030149322473 ± 2.6e-12) kg mol^-1.
template <typename T> struct helion_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0030149322473 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0030149322473); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.62374271371574e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-12) / static_cast<T>(0.0030149322473));
  }
};

/// \brief CODATA recommended value for the helion-proton mass ratio (2006).
/// \details helion-proton mass ratio = (2.9931526713 ± 2.6e-09) .
template <typename T> struct helion_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.9931526713 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = helion_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9931526713); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = helion_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.686493091148458e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = helion_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-09) / static_cast<T>(2.9931526713));
  }
};

/// \brief CODATA recommended value for the hertz-atomic mass unit relationship
/// (2006). \details hertz-atomic mass unit relationship = (4.4398216294e-24
/// ± 6.4e-33) u.
template <typename T> struct hertz_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.4398216294e-24 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4398216294e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.4e-33 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hertz_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.4e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4414993516000548e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// hertz_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.4e-33) / static_cast<T>(4.4398216294e-24));
  }
};

/// \brief CODATA recommended value for the hertz-electron volt relationship
/// (2006). \details hertz-electron volt relationship = (4.13566733e-15 ± 1e-22)
/// eV.
template <typename T> struct hertz_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.13566733e-15 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.13566733e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-22 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hertz_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4179894566132815e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-22) / static_cast<T>(4.13566733e-15));
  }
};

/// \brief CODATA recommended value for the hertz-hartree relationship (2006).
/// \details hertz-hartree relationship = (1.519829846006e-16 ± 1e-27) E_h.
template <typename T> struct hertz_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.519829846006e-16 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.519829846006e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-27 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hertz_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.579683920722611e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-27) / static_cast<T>(1.519829846006e-16));
  }
};

/// \brief CODATA recommended value for the hertz-inverse meter relationship
/// (2006). \details hertz-inverse meter relationship = (3.335640951e-09 ± 0.0)
/// m^-1.
template <typename T> struct hertz_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.335640951e-09 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.335640951e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// hertz_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.335640951e-09));
  }
};

/// \brief CODATA recommended value for the hertz-joule relationship (2006).
/// \details hertz-joule relationship = (6.62606896e-34 ± 3.3e-41) J.
template <typename T> struct hertz_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.62606896e-34 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62606896e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-41 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hertz_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-41); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9803284872543803e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-41) / static_cast<T>(6.62606896e-34));
  }
};

/// \brief CODATA recommended value for the hertz-kelvin relationship (2006).
/// \details hertz-kelvin relationship = (4.7992374e-11 ± 8.4e-17) K.
template <typename T> struct hertz_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.7992374e-11 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.7992374e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-17 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hertz_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7502780754292337e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-17) / static_cast<T>(4.7992374e-11));
  }
};

/// \brief CODATA recommended value for the hertz-kilogram relationship (2006).
/// \details hertz-kilogram relationship = (7.372496e-51 ± 3.7e-58) kg.
template <typename T> struct hertz_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.372496e-51 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = hertz_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.372496e-51); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e-58 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = hertz_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e-58); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.0186531128670675e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = hertz_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e-58) / static_cast<T>(7.372496e-51));
  }
};

/// \brief CODATA recommended value for the inverse fine-structure constant
/// (2006). \details inverse fine-structure constant = (137.035999679 ± 9.4e-08)
/// .
template <typename T> struct inverse_fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 137.035999679 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(137.035999679); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_fine_structure_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.859511385343289e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = inverse_fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.4e-08) / static_cast<T>(137.035999679));
  }
};

/// \brief CODATA recommended value for the inverse meter-atomic mass unit
/// relationship (2006). \details inverse meter-atomic mass unit relationship =
/// (1.3310250394e-15 ± 1.9e-24) u.
template <typename T> struct inverse_meter_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.3310250394e-15 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// inverse_meter_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.3310250394e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-24 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4274712674499969e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// inverse_meter_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-24) / static_cast<T>(1.3310250394e-15));
  }
};

/// \brief CODATA recommended value for the inverse meter-electron volt
/// relationship (2006). \details inverse meter-electron volt relationship =
/// (1.239841875e-06 ± 3.1e-14) eV.
template <typename T> struct inverse_meter_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.239841875e-06 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.239841875e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-14 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5003188410618897e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// inverse_meter_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-14) / static_cast<T>(1.239841875e-06));
  }
};

/// \brief CODATA recommended value for the inverse meter-hartree relationship
/// (2006). \details inverse meter-hartree relationship = (4.55633525276e-08 ±
/// 3e-19) E_h.
template <typename T> struct inverse_meter_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.55633525276e-08 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.55633525276e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-19 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.58423894111556e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// inverse_meter_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-19) / static_cast<T>(4.55633525276e-08));
  }
};

/// \brief CODATA recommended value for the inverse meter-hertz relationship
/// (2006). \details inverse meter-hertz relationship = (299792458.0 ± 0.0) Hz.
template <typename T> struct inverse_meter_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = inverse_meter_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the inverse meter-joule relationship
/// (2006). \details inverse meter-joule relationship = (1.986445501e-25
/// ± 9.9e-33) J.
template <typename T> struct inverse_meter_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.986445501e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.986445501e-25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.9e-33 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.9e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9837762954061525e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = inverse_meter_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.9e-33) / static_cast<T>(1.986445501e-25));
  }
};

/// \brief CODATA recommended value for the inverse meter-kelvin relationship
/// (2006). \details inverse meter-kelvin relationship = (0.014387752 ± 2.5e-08)
/// K.
template <typename T> struct inverse_meter_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.014387752 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.014387752); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7375890271113929e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = inverse_meter_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(0.014387752));
  }
};

/// \brief CODATA recommended value for the inverse meter-kilogram relationship
/// (2006). \details inverse meter-kilogram relationship = (2.2102187e-42
/// ± 1.1e-49) kg.
template <typename T> struct inverse_meter_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.2102187e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_meter_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.2102187e-42); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-49 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_meter_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-49); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.976883056866725e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// inverse_meter_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-49) / static_cast<T>(2.2102187e-42));
  }
};

/// \brief CODATA recommended value for the inverse of conductance quantum
/// (2006). \details inverse of conductance quantum = (12906.4037787 ± 8.8e-06)
/// ohm.
template <typename T> struct inverse_of_conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 12906.4037787 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = inverse_of_conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(12906.4037787); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-06 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// inverse_of_conductance_quantum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.818320696368592e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = inverse_of_conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-06) / static_cast<T>(12906.4037787));
  }
};

/// \brief CODATA recommended value for the Josephson constant (2006).
/// \details Josephson constant = (483597891000000.0 ± 12000000.0) Hz V^-1.
template <typename T> struct Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597891000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597891000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 12000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Josephson_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(12000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4814003996555892e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Josephson_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(12000000.0) /
                    static_cast<T>(483597891000000.0));
  }
};

/// \brief CODATA recommended value for the joule-atomic mass unit relationship
/// (2006). \details joule-atomic mass unit relationship = (6700536410.0 ±
/// 330.0) u.
template <typename T> struct joule_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6700536410.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6700536410.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 330.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// joule_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(330.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.924978834642285e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// joule_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(330.0) / static_cast<T>(6700536410.0));
  }
};

/// \brief CODATA recommended value for the joule-electron volt relationship
/// (2006). \details joule-electron volt relationship = (6.24150965e+18 ±
/// 160000000000.0) eV.
template <typename T> struct joule_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.24150965e+18 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.24150965e+18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 160000000000.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// joule_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(160000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.563482378017312e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(160000000000.0) /
                    static_cast<T>(6.24150965e+18));
  }
};

/// \brief CODATA recommended value for the joule-hartree relationship (2006).
/// \details joule-hartree relationship = (2.29371269e+17 ± 11000000000.0) E_h.
template <typename T> struct joule_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.29371269e+17 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.29371269e+17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 11000000000.0 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = joule_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(11000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.795718333842413e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(11000000000.0) /
                    static_cast<T>(2.29371269e+17));
  }
};

/// \brief CODATA recommended value for the joule-hertz relationship (2006).
/// \details joule-hertz relationship = (1.50919045e+33 ± 7.5e+25) Hz.
template <typename T> struct joule_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.50919045e+33 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.50919045e+33); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e+25 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = joule_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e+25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.969551722249502e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e+25) / static_cast<T>(1.50919045e+33));
  }
};

/// \brief CODATA recommended value for the joule-inverse meter relationship
/// (2006). \details joule-inverse meter relationship = (5.03411747e+24
/// ± 2.5e+17) m^-1.
template <typename T> struct joule_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.03411747e+24 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.03411747e+24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e+17 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// joule_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e+17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.966113752605777e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e+17) / static_cast<T>(5.03411747e+24));
  }
};

/// \brief CODATA recommended value for the joule-kelvin relationship (2006).
/// \details joule-kelvin relationship = (7.242963e+22 ± 1.3e+17) K.
template <typename T> struct joule_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.242963e+22 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.242963e+22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e+17 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = joule_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e+17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7948455625135735e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e+17) / static_cast<T>(7.242963e+22));
  }
};

/// \brief CODATA recommended value for the joule-kilogram relationship (2006).
/// \details joule-kilogram relationship = (1.112650056e-17 ± 0.0) kg.
template <typename T> struct joule_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-17 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = joule_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = joule_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = joule_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-17));
  }
};

/// \brief CODATA recommended value for the kelvin-atomic mass unit relationship
/// (2006). \details kelvin-atomic mass unit relationship = (9.251098e-14
/// ± 1.6e-19) u.
template <typename T> struct kelvin_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 9.251098e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.251098e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-19 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kelvin_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7295244305054383e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// kelvin_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-19) / static_cast<T>(9.251098e-14));
  }
};

/// \brief CODATA recommended value for the kelvin-electron volt relationship
/// (2006). \details kelvin-electron volt relationship = (8.617343e-05
/// ± 1.5e-10) eV.
template <typename T> struct kelvin_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.617343e-05 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.617343e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kelvin_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7406757512147304e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(8.617343e-05));
  }
};

/// \brief CODATA recommended value for the kelvin-hartree relationship (2006).
/// \details kelvin-hartree relationship = (3.1668153e-06 ± 5.5e-12) E_h.
template <typename T> struct kelvin_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.1668153e-06 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.1668153e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.5e-12 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kelvin_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7367605872057016e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.5e-12) / static_cast<T>(3.1668153e-06));
  }
};

/// \brief CODATA recommended value for the kelvin-hertz relationship (2006).
/// \details kelvin-hertz relationship = (20836644000.0 ± 36000.0) Hz.
template <typename T> struct kelvin_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 20836644000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836644000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 36000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kelvin_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(36000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7277254436942916e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(36000.0) / static_cast<T>(20836644000.0));
  }
};

/// \brief CODATA recommended value for the kelvin-inverse meter relationship
/// (2006). \details kelvin-inverse meter relationship = (69.50356 ± 0.00012)
/// m^-1.
template <typename T> struct kelvin_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 69.50356 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(69.50356); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00012 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kelvin_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00012); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7265302669388448e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00012) / static_cast<T>(69.50356));
  }
};

/// \brief CODATA recommended value for the kelvin-joule relationship (2006).
/// \details kelvin-joule relationship = (1.3806504e-23 ± 2.4e-29) J.
template <typename T> struct kelvin_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.3806504e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3806504e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-29 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kelvin_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7383111611744724e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-29) / static_cast<T>(1.3806504e-23));
  }
};

/// \brief CODATA recommended value for the kelvin-kilogram relationship (2006).
/// \details kelvin-kilogram relationship = (1.5361807e-40 ± 2.7e-46) kg.
template <typename T> struct kelvin_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.5361807e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kelvin_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.5361807e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-46 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kelvin_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-46); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7576057295863696e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kelvin_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-46) / static_cast<T>(1.5361807e-40));
  }
};

/// \brief CODATA recommended value for the kilogram-atomic mass unit
/// relationship (2006). \details kilogram-atomic mass unit relationship =
/// (6.02214179e+26 ± 3e+19) u.
template <typename T> struct kilogram_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.02214179e+26 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.02214179e+26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e+19 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kilogram_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9816163494881775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// kilogram_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e+19) / static_cast<T>(6.02214179e+26));
  }
};

/// \brief CODATA recommended value for the kilogram-electron volt relationship
/// (2006). \details kilogram-electron volt relationship = (5.60958912e+35
/// ± 1.4e+28) eV.
template <typename T> struct kilogram_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.60958912e+35 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.60958912e+35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e+28 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kilogram_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e+28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.495726460621772e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// kilogram_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e+28) / static_cast<T>(5.60958912e+35));
  }
};

/// \brief CODATA recommended value for the kilogram-hartree relationship
/// (2006). \details kilogram-hartree relationship = (2.06148616e+34 ± 1e+27)
/// E_h.
template <typename T> struct kilogram_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.06148616e+34 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.06148616e+34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e+27 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kilogram_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.85086933593578e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kilogram_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e+27) / static_cast<T>(2.06148616e+34));
  }
};

/// \brief CODATA recommended value for the kilogram-hertz relationship (2006).
/// \details kilogram-hertz relationship = (1.356392733e+50 ± 6.8e+42) Hz.
template <typename T> struct kilogram_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.356392733e+50 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.356392733e+50); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.8e+42 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kilogram_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.8e+42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.013297280766248e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kilogram_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.8e+42) / static_cast<T>(1.356392733e+50));
  }
};

/// \brief CODATA recommended value for the kilogram-inverse meter relationship
/// (2006). \details kilogram-inverse meter relationship = (4.52443915e+41
/// ± 2.3e+34) m^-1.
template <typename T> struct kilogram_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.52443915e+41 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.52443915e+41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e+34 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// kilogram_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e+34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.083503001692485e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// kilogram_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e+34) / static_cast<T>(4.52443915e+41));
  }
};

/// \brief CODATA recommended value for the kilogram-joule relationship (2006).
/// \details kilogram-joule relationship = (8.987551787e+16 ± 0.0) J.
template <typename T> struct kilogram_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.987551787e+16 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.987551787e+16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kilogram_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kilogram_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.987551787e+16));
  }
};

/// \brief CODATA recommended value for the kilogram-kelvin relationship (2006).
/// \details kilogram-kelvin relationship = (6.509651e+39 ± 1.1e+34) K.
template <typename T> struct kilogram_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.509651e+39 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = kilogram_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.509651e+39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e+34 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = kilogram_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e+34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.689798731145495e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = kilogram_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e+34) / static_cast<T>(6.509651e+39));
  }
};

/// \brief CODATA recommended value for the lattice parameter of silicon (2006).
/// \details lattice parameter of silicon = (5.43102064e-10 ± 1.4e-17) m.
template <typename T> struct lattice_parameter_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 5.43102064e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = lattice_parameter_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.43102064e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-17 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = lattice_parameter_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.577784348099992e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = lattice_parameter_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-17) / static_cast<T>(5.43102064e-10));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K,
/// 101.325 kPa) (2006). \details Loschmidt constant (273.15 K, 101.325 kPa) =
/// (2.6867774e+25 ± 4.7e+19) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.6867774e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Loschmidt_constant_27315_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.6867774e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e+19 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7493075533536944e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e+19) / static_cast<T>(2.6867774e+25));
  }
};

/// \brief CODATA recommended value for the mag. constant (2006).
/// \details mag. constant = (1.2566370614e-06 ± 0.0) N A^-2.
template <typename T> struct mag_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.2566370614e-06 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = mag_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.2566370614e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = mag_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = mag_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.2566370614e-06));
  }
};

/// \brief CODATA recommended value for the mag. flux quantum (2006).
/// \details mag. flux quantum = (2.067833667e-15 ± 5.2e-23) Wb.
template <typename T> struct mag_flux_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 2.067833667e-15 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = mag_flux_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.067833667e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-23 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = mag_flux_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5147090324455966e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = mag_flux_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-23) / static_cast<T>(2.067833667e-15));
  }
};

/// \brief CODATA recommended value for the molar gas constant (2006).
/// \details molar gas constant = (8.314472 ± 1.5e-05) J mol^-1 K^-1.
template <typename T> struct molar_gas_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.314472 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_gas_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.314472); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-05 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_gas_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.804083289955153e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_gas_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-05) / static_cast<T>(8.314472));
  }
};

/// \brief CODATA recommended value for the molar mass constant (2006).
/// \details molar mass constant = (0.001 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.001 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.001));
  }
};

/// \brief CODATA recommended value for the molar mass of carbon-12 (2006).
/// \details molar mass of carbon-12 = (0.012 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_of_carbon_12 {
  /// \brief Returns the constant's value.
  /// \details value = 0.012 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_mass_of_carbon_12<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.012); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_mass_of_carbon_12<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_mass_of_carbon_12<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.012));
  }
};

/// \brief CODATA recommended value for the molar Planck constant (2006).
/// \details molar Planck constant = (3.9903126821e-10 ± 5.7e-19) J s mol^-1.
template <typename T> struct molar_Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.9903126821e-10 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.9903126821e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.7e-19 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.7e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4284594852853071e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.7e-19) / static_cast<T>(3.9903126821e-10));
  }
};

/// \brief CODATA recommended value for the molar Planck constant times c
/// (2006). \details molar Planck constant times c = (0.11962656472 ± 1.7e-10) J
/// m mol^-1.
template <typename T> struct molar_Planck_constant_times_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.11962656472 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_Planck_constant_times_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.11962656472); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-10 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_Planck_constant_times_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.42108903986255e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_Planck_constant_times_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-10) / static_cast<T>(0.11962656472));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 100 kPa) (2006). \details molar volume of ideal gas (273.15 K, 100 kPa) =
/// (0.022710981 ± 4e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022710981 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_volume_of_ideal_gas_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.022710981); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7612625363915368e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-08) / static_cast<T>(0.022710981));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 101.325 kPa) (2006). \details molar volume of ideal gas (273.15 K, 101.325
/// kPa) = (0.022413996 ± 3.9e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022413996 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.022413996); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7399842491271972e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-08) / static_cast<T>(0.022413996));
  }
};

/// \brief CODATA recommended value for the molar volume of silicon (2006).
/// \details molar volume of silicon = (1.20588349e-05 ± 1.1e-12) m^3 mol^-1.
template <typename T> struct molar_volume_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 1.20588349e-05 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = molar_volume_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.20588349e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-12 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = molar_volume_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.121942618187766e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = molar_volume_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-12) / static_cast<T>(1.20588349e-05));
  }
};

/// \brief CODATA recommended value for the Mo x unit (2006).
/// \details Mo x unit = (1.00209955e-13 ± 5.3e-20) m.
template <typename T> struct Mo_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00209955e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Mo_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00209955e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Mo_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.288895699035091e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Mo_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-20) / static_cast<T>(1.00209955e-13));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength (2006).
/// \details muon Compton wavelength = (1.173444104e-14 ± 3e-22) m.
template <typename T> struct muon_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.173444104e-14 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.173444104e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5565768235348344e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-22) / static_cast<T>(1.173444104e-14));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength over 2 pi
/// (2006). \details muon Compton wavelength over 2 pi = (1.867594295e-15
/// ± 4.7e-23) m.
template <typename T> struct muon_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.867594295e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.867594295e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-23 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// muon_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.516606530970368e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-23) / static_cast<T>(1.867594295e-15));
  }
};

/// \brief CODATA recommended value for the muon-electron mass ratio (2006).
/// \details muon-electron mass ratio = (206.7682823 ± 5.2e-06) .
template <typename T> struct muon_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7682823 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7682823); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5148924884210833e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-06) / static_cast<T>(206.7682823));
  }
};

/// \brief CODATA recommended value for the muon g factor (2006).
/// \details muon g factor = (-2.0023318414 ± 1.2e-09) .
template <typename T> struct muon_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.0023318414 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.0023318414); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.993012622528033e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-09) / static_cast<T>(-2.0023318414));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. (2006).
/// \details muon mag. mom. = (-4.49044786e-26 ± 1.6e-33) J T^-1.
template <typename T> struct muon_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -4.49044786e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.49044786e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.56311898029699e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-33) / static_cast<T>(-4.49044786e-26));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. anomaly (2006).
/// \details muon mag. mom. anomaly = (0.00116592069 ± 6e-10) .
template <typename T> struct muon_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00116592069 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00116592069); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.146147633764008e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-10) / static_cast<T>(0.00116592069));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to Bohr magneton
/// ratio (2006). \details muon mag. mom. to Bohr magneton ratio =
/// (-0.00484197049 ± 1.2e-10) .
template <typename T> struct muon_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00484197049 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00484197049); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4783298503746147e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(-0.00484197049));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to nuclear magneton
/// ratio (2006). \details muon mag. mom. to nuclear magneton ratio =
/// (-8.89059705 ± 2.3e-07) .
template <typename T> struct muon_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -8.89059705 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-8.89059705); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5870028605109258e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-07) / static_cast<T>(-8.89059705));
  }
};

/// \brief CODATA recommended value for the muon mass (2006).
/// \details muon mass = (1.8835313e-28 ± 1.1e-35) kg.
template <typename T> struct muon_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.8835313e-28 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.8835313e-28); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.840094082853839e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-35) / static_cast<T>(1.8835313e-28));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent (2006).
/// \details muon mass energy equivalent = (1.69283351e-11 ± 9.5e-19) J.
template <typename T> struct muon_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.69283351e-11 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.69283351e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.5e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.5e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.611892689907822e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.5e-19) / static_cast<T>(1.69283351e-11));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent in MeV
/// (2006). \details muon mass energy equivalent in MeV = (105.6583668
/// ± 3.8e-06) MeV.
template <typename T> struct muon_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 105.6583668 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(105.6583668); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// muon_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.596497007371876e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// muon_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-06) / static_cast<T>(105.6583668));
  }
};

/// \brief CODATA recommended value for the muon mass in u (2006).
/// \details muon mass in u = (0.1134289256 ± 2.9e-09) u.
template <typename T> struct muon_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.1134289256 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1134289256); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.556667079988634e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-09) / static_cast<T>(0.1134289256));
  }
};

/// \brief CODATA recommended value for the muon molar mass (2006).
/// \details muon molar mass = (0.0001134289256 ± 2.9e-12) kg mol^-1.
template <typename T> struct muon_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001134289256 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0001134289256); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.556667079988634e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-12) / static_cast<T>(0.0001134289256));
  }
};

/// \brief CODATA recommended value for the muon-neutron mass ratio (2006).
/// \details muon-neutron mass ratio = (0.1124545167 ± 2.9e-09) .
template <typename T> struct muon_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1124545167 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1124545167); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5788203845439673e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-09) / static_cast<T>(0.1124545167));
  }
};

/// \brief CODATA recommended value for the muon-proton mag. mom. ratio (2006).
/// \details muon-proton mag. mom. ratio = (-3.183345137 ± 8.5e-08) .
template <typename T> struct muon_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -3.183345137 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.183345137); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6701471672689694e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e-08) / static_cast<T>(-3.183345137));
  }
};

/// \brief CODATA recommended value for the muon-proton mass ratio (2006).
/// \details muon-proton mass ratio = (0.1126095261 ± 2.9e-09) .
template <typename T> struct muon_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1126095261 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1126095261); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5752705836136184e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-09) / static_cast<T>(0.1126095261));
  }
};

/// \brief CODATA recommended value for the muon-tau mass ratio (2006).
/// \details muon-tau mass ratio = (0.0594592 ± 9.7e-06) .
template <typename T> struct muon_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0594592 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = muon_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0594592); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = muon_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016313707550723858.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = muon_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-06) / static_cast<T>(0.0594592));
  }
};

/// \brief CODATA recommended value for the natural unit of action (2006).
/// \details natural unit of action = (1.054571628e-34 ± 5.3e-42) J s.
template <typename T> struct natural_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571628e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571628e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.025737331897952e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-42) / static_cast<T>(1.054571628e-34));
  }
};

/// \brief CODATA recommended value for the natural unit of action in eV s
/// (2006). \details natural unit of action in eV s = (6.58211899e-16 ± 1.6e-23)
/// eV s.
template <typename T> struct natural_unit_of_action_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.58211899e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_action_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.58211899e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// natural_unit_of_action_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4308281306230225e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_action_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-23) / static_cast<T>(6.58211899e-16));
  }
};

/// \brief CODATA recommended value for the natural unit of energy (2006).
/// \details natural unit of energy = (8.18710438e-14 ± 4.1e-21) J.
template <typename T> struct natural_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710438e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710438e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.007875568333721e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-21) / static_cast<T>(8.18710438e-14));
  }
};

/// \brief CODATA recommended value for the natural unit of energy in MeV
/// (2006). \details natural unit of energy in MeV = (0.51099891 ± 1.3e-08) MeV.
template <typename T> struct natural_unit_of_energy_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099891 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_energy_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099891); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_energy_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.544036737769167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_energy_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.51099891));
  }
};

/// \brief CODATA recommended value for the natural unit of length (2006).
/// \details natural unit of length = (3.8615926459e-13 ± 5.3e-22) m.
template <typename T> struct natural_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 3.8615926459e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.8615926459e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3724907016350396e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-22) / static_cast<T>(3.8615926459e-13));
  }
};

/// \brief CODATA recommended value for the natural unit of mass (2006).
/// \details natural unit of mass = (9.10938215e-31 ± 4.5e-38) kg.
template <typename T> struct natural_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938215e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938215e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9399618172786836e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-38) / static_cast<T>(9.10938215e-31));
  }
};

/// \brief CODATA recommended value for the natural unit of momentum (2006).
/// \details natural unit of momentum = (2.73092406e-22 ± 1.4e-29) kg m s^-1.
template <typename T> struct natural_unit_of_momentum {
  /// \brief Returns the constant's value.
  /// \details value = 2.73092406e-22 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_momentum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.73092406e-22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-29 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_momentum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.126469902645334e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_momentum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-29) / static_cast<T>(2.73092406e-22));
  }
};

/// \brief CODATA recommended value for the natural unit of momentum in MeV/c
/// (2006). \details natural unit of momentum in MeV/c = (0.51099891 ± 1.3e-08)
/// MeV/c.
template <typename T> struct natural_unit_of_momentum_in_MeV_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.51099891 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_momentum_in_MeV_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.51099891); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// natural_unit_of_momentum_in_MeV_c<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.544036737769167e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_momentum_in_MeV_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.51099891));
  }
};

/// \brief CODATA recommended value for the natural unit of time (2006).
/// \details natural unit of time = (1.288088657e-21 ± 1.8e-30) s.
template <typename T> struct natural_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 1.288088657e-21 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.288088657e-21); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-30 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-30); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3974193392807744e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-30) / static_cast<T>(1.288088657e-21));
  }
};

/// \brief CODATA recommended value for the natural unit of velocity (2006).
/// \details natural unit of velocity = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct natural_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = natural_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = natural_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = natural_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength (2006).
/// \details neutron Compton wavelength = (1.3195908951e-15 ± 2e-24) m.
template <typename T> struct neutron_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.3195908951e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3195908951e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5156212485449421e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-24) / static_cast<T>(1.3195908951e-15));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength over 2 pi
/// (2006). \details neutron Compton wavelength over 2 pi = (2.1001941382e-16
/// ± 3.1e-25) m.
template <typename T> struct neutron_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.1001941382e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1001941382e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4760540197759513e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// neutron_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-25) / static_cast<T>(2.1001941382e-16));
  }
};

/// \brief CODATA recommended value for the neutron-electron mag. mom. ratio
/// (2006). \details neutron-electron mag. mom. ratio = (0.00104066882
/// ± 2.5e-10) .
template <typename T> struct neutron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00104066882 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00104066882); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4023012431563005e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(0.00104066882));
  }
};

/// \brief CODATA recommended value for the neutron-electron mass ratio (2006).
/// \details neutron-electron mass ratio = (1838.6836605 ± 1.1e-06) .
template <typename T> struct neutron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1838.6836605 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1838.6836605); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.982540790626665e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-06) / static_cast<T>(1838.6836605));
  }
};

/// \brief CODATA recommended value for the neutron g factor (2006).
/// \details neutron g factor = (-3.82608545 ± 9e-07) .
template <typename T> struct neutron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -3.82608545 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.82608545); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3522736534804782e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(-3.82608545));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio (2006).
/// \details neutron gyromag. ratio = (183247185.0 ± 43.0) s^-1 T^-1.
template <typename T> struct neutron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 183247185.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(183247185.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 43.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(43.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3465571926793854e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(43.0) / static_cast<T>(183247185.0));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio over 2 pi
/// (2006). \details neutron gyromag. ratio over 2 pi = (29.1646954 ± 6.9e-06)
/// MHz T^-1.
template <typename T> struct neutron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 29.1646954 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(29.1646954); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.9e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3658741863630092e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.9e-06) / static_cast<T>(29.1646954));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. (2006).
/// \details neutron mag. mom. = (-9.6623641e-27 ± 2.3e-33) J T^-1.
template <typename T> struct neutron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.6623641e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.6623641e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3803698310230307e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-33) / static_cast<T>(-9.6623641e-27));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to Bohr magneton
/// ratio (2006). \details neutron mag. mom. to Bohr magneton ratio =
/// (-0.00104187563 ± 2.5e-10) .
template <typename T> struct neutron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00104187563 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00104187563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.399518645042115e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(-0.00104187563));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to nuclear
/// magneton ratio (2006). \details neutron mag. mom. to nuclear magneton ratio
/// = (-1.91304273 ± 4.5e-07) .
template <typename T> struct neutron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.91304273 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.91304273); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.352273647332488e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-07) / static_cast<T>(-1.91304273));
  }
};

/// \brief CODATA recommended value for the neutron mass (2006).
/// \details neutron mass = (1.674927211e-27 ± 8.4e-35) kg.
template <typename T> struct neutron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.674927211e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.674927211e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.015143311800909e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-35) / static_cast<T>(1.674927211e-27));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent
/// (2006). \details neutron mass energy equivalent = (1.505349505e-10
/// ± 7.5e-18) J.
template <typename T> struct neutron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.505349505e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.505349505e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9822316844618754e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-18) / static_cast<T>(1.505349505e-10));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent in
/// MeV (2006). \details neutron mass energy equivalent in MeV = (939.565346
/// ± 2.3e-05) MeV.
template <typename T> struct neutron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 939.565346 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(939.565346); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.447940433086173e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// neutron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-05) / static_cast<T>(939.565346));
  }
};

/// \brief CODATA recommended value for the neutron mass in u (2006).
/// \details neutron mass in u = (1.00866491597 ± 4.3e-10) u.
template <typename T> struct neutron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.00866491597 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00866491597); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.2630609352213174e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-10) / static_cast<T>(1.00866491597));
  }
};

/// \brief CODATA recommended value for the neutron molar mass (2006).
/// \details neutron molar mass = (0.00100866491597 ± 4.3e-13) kg mol^-1.
template <typename T> struct neutron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00100866491597 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00100866491597); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.2630609352213174e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-13) / static_cast<T>(0.00100866491597));
  }
};

/// \brief CODATA recommended value for the neutron-muon mass ratio (2006).
/// \details neutron-muon mass ratio = (8.89248409 ± 2.3e-07) .
template <typename T> struct neutron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.89248409 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.89248409); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5864538825393613e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-07) / static_cast<T>(8.89248409));
  }
};

/// \brief CODATA recommended value for the neutron-proton mag. mom. ratio
/// (2006). \details neutron-proton mag. mom. ratio = (-0.68497934 ± 1.6e-07) .
template <typename T> struct neutron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68497934 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68497934); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.335836873561763e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68497934));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass ratio (2006).
/// \details neutron-proton mass ratio = (1.00137841918 ± 4.6e-10) .
template <typename T> struct neutron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.00137841918 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00137841918); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.593667999922355e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-10) / static_cast<T>(1.00137841918));
  }
};

/// \brief CODATA recommended value for the neutron-tau mass ratio (2006).
/// \details neutron-tau mass ratio = (0.52874 ± 8.6e-05) .
template <typename T> struct neutron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.52874 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.52874); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.6e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = neutron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.6e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0001626508302757499.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = neutron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.6e-05) / static_cast<T>(0.52874));
  }
};

/// \brief CODATA recommended value for the neutron to shielded proton mag. mom.
/// ratio (2006). \details neutron to shielded proton mag. mom. ratio =
/// (-0.68499694 ± 1.6e-07) .
template <typename T> struct neutron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68499694 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = neutron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68499694); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3357768576309262e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68499694));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// (2006). \details Newtonian constant of gravitation = (6.67428e-11 ± 6.7e-15)
/// m^3 kg^-1 s^-2.
template <typename T> struct Newtonian_constant_of_gravitation {
  /// \brief Returns the constant's value.
  /// \details value = 6.67428e-11 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Newtonian_constant_of_gravitation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.67428e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.7e-15 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.7e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00010038535991897254.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Newtonian_constant_of_gravitation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.7e-15) / static_cast<T>(6.67428e-11));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// over h-bar c (2006). \details Newtonian constant of gravitation over h-bar c
/// = (6.70881e-39 ± 6.7e-43) (GeV/c^2)^-2.
template <typename T> struct Newtonian_constant_of_gravitation_over_h_bar_c {
  /// \brief Returns the constant's value.
  /// \details value = 6.70881e-39 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(6.70881e-39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.7e-43 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.7e-43); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.986868013850444e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.7e-43) / static_cast<T>(6.70881e-39));
  }
};

/// \brief CODATA recommended value for the nuclear magneton (2006).
/// \details nuclear magneton = (5.05078324e-27 ± 1.3e-34) J T^-1.
template <typename T> struct nuclear_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 5.05078324e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = nuclear_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.05078324e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = nuclear_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5738582279765386e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = nuclear_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-34) / static_cast<T>(5.05078324e-27));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in eV/T (2006).
/// \details nuclear magneton in eV/T = (3.1524512326e-08 ± 4.5e-17) eV T^-1.
template <typename T> struct nuclear_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 3.1524512326e-08 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = nuclear_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.1524512326e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-17 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = nuclear_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4274606228527133e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = nuclear_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-17) / static_cast<T>(3.1524512326e-08));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in inverse meters
/// per tesla (2006). \details nuclear magneton in inverse meters per tesla =
/// (0.02542623616 ± 6.4e-10) m^-1 T^-1.
template <typename T> struct nuclear_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 0.02542623616 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.02542623616); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.4e-10 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.4e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.517085092628983e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.4e-10) / static_cast<T>(0.02542623616));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in K/T (2006).
/// \details nuclear magneton in K/T = (0.00036582637 ± 6.4e-10) K T^-1.
template <typename T> struct nuclear_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036582637 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = nuclear_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036582637); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.4e-10 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = nuclear_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.4e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7494638235073102e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = nuclear_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.4e-10) / static_cast<T>(0.00036582637));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in MHz/T (2006).
/// \details nuclear magneton in MHz/T = (7.62259384 ± 1.9e-07) MHz T^-1.
template <typename T> struct nuclear_magneton_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 7.62259384 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = nuclear_magneton_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.62259384); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = nuclear_magneton_in_MHz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.492589845243545e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = nuclear_magneton_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-07) / static_cast<T>(7.62259384));
  }
};

/// \brief CODATA recommended value for the Planck constant (2006).
/// \details Planck constant = (6.62606896e-34 ± 3.3e-41) J s.
template <typename T> struct Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.62606896e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62606896e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-41 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-41); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9803284872543803e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-41) / static_cast<T>(6.62606896e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant in eV s (2006).
/// \details Planck constant in eV s = (4.13566733e-15 ± 1e-22) eV s.
template <typename T> struct Planck_constant_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 4.13566733e-15 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_constant_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.13566733e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-22 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_constant_in_eV_s<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4179894566132815e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_constant_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-22) / static_cast<T>(4.13566733e-15));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi (2006).
/// \details Planck constant over 2 pi = (1.054571628e-34 ± 5.3e-42) J s.
template <typename T> struct Planck_constant_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571628e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_constant_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571628e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_constant_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.025737331897952e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_constant_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-42) / static_cast<T>(1.054571628e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi in eV s
/// (2006). \details Planck constant over 2 pi in eV s = (6.58211899e-16
/// ± 1.6e-23) eV s.
template <typename T> struct Planck_constant_over_2_pi_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.58211899e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_constant_over_2_pi_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.58211899e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4308281306230225e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_constant_over_2_pi_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-23) / static_cast<T>(6.58211899e-16));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi times c in
/// MeV fm (2006). \details Planck constant over 2 pi times c in MeV fm =
/// (197.3269631 ± 4.9e-06) MeV fm.
template <typename T> struct Planck_constant_over_2_pi_times_c_in_MeV_fm {
  /// \brief Returns the constant's value.
  /// \details value = 197.3269631 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(197.3269631); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.9e-06 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4831882693683435e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.9e-06) / static_cast<T>(197.3269631));
  }
};

/// \brief CODATA recommended value for the Planck length (2006).
/// \details Planck length = (1.616252e-35 ± 8.1e-40) m.
template <typename T> struct Planck_length {
  /// \brief Returns the constant's value.
  /// \details value = 1.616252e-35 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.616252e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-40 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.011594726564917e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-40) / static_cast<T>(1.616252e-35));
  }
};

/// \brief CODATA recommended value for the Planck mass (2006).
/// \details Planck mass = (2.17644e-08 ± 1.1e-12) kg.
template <typename T> struct Planck_mass {
  /// \brief Returns the constant's value.
  /// \details value = 2.17644e-08 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.17644e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-12 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.054125085001194e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-12) / static_cast<T>(2.17644e-08));
  }
};

/// \brief CODATA recommended value for the Planck mass energy equivalent in GeV
/// (2006). \details Planck mass energy equivalent in GeV = (1.220892e+19 ±
/// 610000000000000.0) GeV.
template <typename T> struct Planck_mass_energy_equivalent_in_GeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.220892e+19 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_mass_energy_equivalent_in_GeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.220892e+19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 610000000000000.0 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Planck_mass_energy_equivalent_in_GeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(610000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.996346933225871e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Planck_mass_energy_equivalent_in_GeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(610000000000000.0) /
                    static_cast<T>(1.220892e+19));
  }
};

/// \brief CODATA recommended value for the Planck temperature (2006).
/// \details Planck temperature = (1.416785e+32 ± 7.1e+27) K.
template <typename T> struct Planck_temperature {
  /// \brief Returns the constant's value.
  /// \details value = 1.416785e+32 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_temperature<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.416785e+32); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e+27 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_temperature<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.011346111089544e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_temperature<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e+27) / static_cast<T>(1.416785e+32));
  }
};

/// \brief CODATA recommended value for the Planck time (2006).
/// \details Planck time = (5.39124e-44 ± 2.7e-48) s.
template <typename T> struct Planck_time {
  /// \brief Returns the constant's value.
  /// \details value = 5.39124e-44 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Planck_time<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.39124e-44); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-48 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Planck_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-48); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.008124290515726e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Planck_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-48) / static_cast<T>(5.39124e-44));
  }
};

/// \brief CODATA recommended value for the proton charge to mass quotient
/// (2006). \details proton charge to mass quotient = (95788339.2 ± 2.4) C
/// kg^-1.
template <typename T> struct proton_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = 95788339.2 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(95788339.2); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5055241797114277e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4) / static_cast<T>(95788339.2));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength (2006).
/// \details proton Compton wavelength = (1.3214098446e-15 ± 1.9e-24) m.
template <typename T> struct proton_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.3214098446e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3214098446e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.437858214667035e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-24) / static_cast<T>(1.3214098446e-15));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength over 2 pi
/// (2006). \details proton Compton wavelength over 2 pi = (2.1030890861e-16 ±
/// 3e-25) m.
template <typename T> struct proton_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.1030890861e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1030890861e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.426473096088975e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// proton_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-25) / static_cast<T>(2.1030890861e-16));
  }
};

/// \brief CODATA recommended value for the proton-electron mass ratio (2006).
/// \details proton-electron mass ratio = (1836.15267247 ± 8e-07) .
template <typename T> struct proton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1836.15267247 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1836.15267247); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.356936174179006e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-07) / static_cast<T>(1836.15267247));
  }
};

/// \brief CODATA recommended value for the proton g factor (2006).
/// \details proton g factor = (5.585694713 ± 4.6e-08) .
template <typename T> struct proton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.585694713 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.585694713); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.23532297476638e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-08) / static_cast<T>(5.585694713));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio (2006).
/// \details proton gyromag. ratio = (267522209.9 ± 7.0) s^-1 T^-1.
template <typename T> struct proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267522209.9 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267522209.9); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6166051792920688e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.0) / static_cast<T>(267522209.9));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio over 2 pi
/// (2006). \details proton gyromag. ratio over 2 pi = (42.5774821 ± 1.1e-06)
/// MHz T^-1.
template <typename T> struct proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.5774821 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.5774821); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5835252479619976e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-06) / static_cast<T>(42.5774821));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. (2006).
/// \details proton mag. mom. = (1.410606662e-26 ± 3.7e-34) J T^-1.
template <typename T> struct proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.410606662e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.410606662e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6229849182436374e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e-34) / static_cast<T>(1.410606662e-26));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to Bohr magneton
/// ratio (2006). \details proton mag. mom. to Bohr magneton ratio =
/// (0.001521032209 ± 1.2e-11) .
template <typename T> struct proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001521032209 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001521032209); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.889379284012255e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-11) / static_cast<T>(0.001521032209));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to nuclear magneton
/// ratio (2006). \details proton mag. mom. to nuclear magneton ratio =
/// (2.792847356 ± 2.3e-08) .
template <typename T> struct proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792847356 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792847356); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.23532297624074e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-08) / static_cast<T>(2.792847356));
  }
};

/// \brief CODATA recommended value for the proton mag. shielding correction
/// (2006). \details proton mag. shielding correction = (2.5694e-05 ± 1.4e-08) .
template <typename T> struct proton_mag_shielding_correction {
  /// \brief Returns the constant's value.
  /// \details value = 2.5694e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mag_shielding_correction<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.5694e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_mag_shielding_correction<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0005448742897174437.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_mag_shielding_correction<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-08) / static_cast<T>(2.5694e-05));
  }
};

/// \brief CODATA recommended value for the proton mass (2006).
/// \details proton mass = (1.672621637e-27 ± 8.3e-35) kg.
template <typename T> struct proton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.672621637e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.672621637e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.962269897982911e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-35) / static_cast<T>(1.672621637e-27));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent
/// (2006). \details proton mass energy equivalent = (1.503277359e-10 ± 7.5e-18)
/// J.
template <typename T> struct proton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.503277359e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.503277359e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.989099287033166e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-18) / static_cast<T>(1.503277359e-10));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent in MeV
/// (2006). \details proton mass energy equivalent in MeV = (938.272013
/// ± 2.3e-05) MeV.
template <typename T> struct proton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 938.272013 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(938.272013); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// proton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4513147233775584e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// proton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-05) / static_cast<T>(938.272013));
  }
};

/// \brief CODATA recommended value for the proton mass in u (2006).
/// \details proton mass in u = (1.00727646677 ± 1e-10) u.
template <typename T> struct proton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.00727646677 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00727646677); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.927760977149271e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-10) / static_cast<T>(1.00727646677));
  }
};

/// \brief CODATA recommended value for the proton molar mass (2006).
/// \details proton molar mass = (0.00100727646677 ± 1e-13) kg mol^-1.
template <typename T> struct proton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00100727646677 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00100727646677); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.927760977149272e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-13) / static_cast<T>(0.00100727646677));
  }
};

/// \brief CODATA recommended value for the proton-muon mass ratio (2006).
/// \details proton-muon mass ratio = (8.88024339 ± 2.3e-07) .
template <typename T> struct proton_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.88024339 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.88024339); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5900191008165598e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-07) / static_cast<T>(8.88024339));
  }
};

/// \brief CODATA recommended value for the proton-neutron mag. mom. ratio
/// (2006). \details proton-neutron mag. mom. ratio = (-1.45989806 ± 3.4e-07) .
template <typename T> struct proton_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.45989806 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.45989806); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_neutron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3289297336281134e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(-1.45989806));
  }
};

/// \brief CODATA recommended value for the proton-neutron mass ratio (2006).
/// \details proton-neutron mass ratio = (0.99862347824 ± 4.6e-10) .
template <typename T> struct proton_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.99862347824 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.99862347824); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.6063407282464056e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-10) / static_cast<T>(0.99862347824));
  }
};

/// \brief CODATA recommended value for the proton rms charge radius (2006).
/// \details proton rms charge radius = (8.768e-16 ± 6.9e-18) m.
template <typename T> struct proton_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 8.768e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.768e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.9e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.007869525547445256.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.9e-18) / static_cast<T>(8.768e-16));
  }
};

/// \brief CODATA recommended value for the proton-tau mass ratio (2006).
/// \details proton-tau mass ratio = (0.528012 ± 8.6e-05) .
template <typename T> struct proton_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.528012 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = proton_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.528012); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.6e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = proton_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.6e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016287508617228395.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = proton_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.6e-05) / static_cast<T>(0.528012));
  }
};

/// \brief CODATA recommended value for the quantum of circulation (2006).
/// \details quantum of circulation = (0.00036369475199 ± 5e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036369475199 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = quantum_of_circulation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036369475199); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = quantum_of_circulation<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3747792544824726e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = quantum_of_circulation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-13) / static_cast<T>(0.00036369475199));
  }
};

/// \brief CODATA recommended value for the quantum of circulation times 2
/// (2006). \details quantum of circulation times 2 = (0.000727389504 ± 1e-12)
/// m^2 s^-1.
template <typename T> struct quantum_of_circulation_times_2 {
  /// \brief Returns the constant's value.
  /// \details value = 0.000727389504 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = quantum_of_circulation_times_2<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000727389504); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-12 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// quantum_of_circulation_times_2<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.3747792544446723e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = quantum_of_circulation_times_2<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-12) / static_cast<T>(0.000727389504));
  }
};

/// \brief CODATA recommended value for the Rydberg constant (2006).
/// \details Rydberg constant = (10973731.568527 ± 7.3e-05) m^-1.
template <typename T> struct Rydberg_constant {
  /// \brief Returns the constant's value.
  /// \details value = 10973731.568527 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Rydberg_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10973731.568527); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Rydberg_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.652249469028954e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Rydberg_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-05) / static_cast<T>(10973731.568527));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times c in Hz
/// (2006). \details Rydberg constant times c in Hz = (3289841960361000.0 ±
/// 22000.0) Hz.
template <typename T> struct Rydberg_constant_times_c_in_Hz {
  /// \brief Returns the constant's value.
  /// \details value = 3289841960361000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Rydberg_constant_times_c_in_Hz<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3289841960361000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 22000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Rydberg_constant_times_c_in_Hz<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(22000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.6872513224270205e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Rydberg_constant_times_c_in_Hz<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(22000.0) /
                    static_cast<T>(3289841960361000.0));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in eV
/// (2006). \details Rydberg constant times hc in eV = (13.60569193 ± 3.4e-07)
/// eV.
template <typename T> struct Rydberg_constant_times_hc_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 13.60569193 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Rydberg_constant_times_hc_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13.60569193); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_eV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4989541270614374e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Rydberg_constant_times_hc_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(13.60569193));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in J
/// (2006). \details Rydberg constant times hc in J = (2.17987197e-18 ± 1.1e-25)
/// J.
template <typename T> struct Rydberg_constant_times_hc_in_J {
  /// \brief Returns the constant's value.
  /// \details value = 2.17987197e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Rydberg_constant_times_hc_in_J<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.17987197e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_J<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.046167917834184e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Rydberg_constant_times_hc_in_J<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-25) / static_cast<T>(2.17987197e-18));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K, 100
/// kPa) (2006). \details Sackur-Tetrode constant (1 K, 100 kPa) = (-1.1517047
/// ± 4.4e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1517047 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Sackur_Tetrode_constant_1_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1517047); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.820423759666866e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-06) / static_cast<T>(-1.1517047));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K,
/// 101.325 kPa) (2006). \details Sackur-Tetrode constant (1 K, 101.325 kPa) =
/// (-1.1648677 ± 4.4e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1648677 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Sackur_Tetrode_constant_1_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1648677); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.7772529876139583e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-06) / static_cast<T>(-1.1648677));
  }
};

/// \brief CODATA recommended value for the second radiation constant (2006).
/// \details second radiation constant = (0.014387752 ± 2.5e-08) m K.
template <typename T> struct second_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.014387752 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = second_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.014387752); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = second_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7375890271113929e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = second_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(0.014387752));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio
/// (2006). \details shielded helion gyromag. ratio = (203789473.0 ± 5.6) s^-1
/// T^-1.
template <typename T> struct shielded_helion_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 203789473.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_helion_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(203789473.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.6 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = shielded_helion_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.6); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.747933893523538e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = shielded_helion_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.6) / static_cast<T>(203789473.0));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio over
/// 2 pi (2006). \details shielded helion gyromag. ratio over 2 pi =
/// (32.43410198 ± 9e-07) MHz T^-1.
template <typename T> struct shielded_helion_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 32.43410198 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_helion_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(32.43410198); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.7748571566894973e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(32.43410198));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. (2006).
/// \details shielded helion mag. mom. = (-1.074552982e-26 ± 3e-34) J T^-1.
template <typename T> struct shielded_helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.074552982e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074552982e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = shielded_helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.791858614934261e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = shielded_helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-34) / static_cast<T>(-1.074552982e-26));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to Bohr
/// magneton ratio (2006). \details shielded helion mag. mom. to Bohr magneton
/// ratio = (-0.001158671471 ± 1.4e-11) .
template <typename T> struct shielded_helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158671471 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158671471); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082803754473384e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158671471));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to nuclear
/// magneton ratio (2006). \details shielded helion mag. mom. to nuclear
/// magneton ratio = (-2.127497718 ± 2.5e-08) .
template <typename T> struct shielded_helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127497718 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127497718); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175089392034779e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127497718));
  }
};

/// \brief CODATA recommended value for the shielded helion to proton mag. mom.
/// ratio (2006). \details shielded helion to proton mag. mom. ratio =
/// (-0.761766558 ± 1.1e-08) .
template <typename T> struct shielded_helion_to_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.761766558 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_helion_to_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.761766558); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4440119331150789e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(-0.761766558));
  }
};

/// \brief CODATA recommended value for the shielded helion to shielded proton
/// mag. mom. ratio (2006). \details shielded helion to shielded proton mag.
/// mom. ratio = (-0.7617861313 ± 3.3e-09) .
template <typename T> struct shielded_helion_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617861313 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617861313); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3319244922042606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-09) / static_cast<T>(-0.7617861313));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio
/// (2006). \details shielded proton gyromag. ratio = (267515336.2 ± 7.3) s^-1
/// T^-1.
template <typename T> struct shielded_proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267515336.2 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267515336.2); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = shielded_proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.72881551528783e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = shielded_proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3) / static_cast<T>(267515336.2));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio over
/// 2 pi (2006). \details shielded proton gyromag. ratio over 2 pi = (42.5763881
/// ± 1.2e-06) MHz T^-1.
template <typename T> struct shielded_proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.5763881 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.5763881); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.818463598136921e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-06) / static_cast<T>(42.5763881));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. (2006).
/// \details shielded proton mag. mom. = (1.410570419e-26 ± 3.8e-34) J T^-1.
template <typename T> struct shielded_proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.410570419e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = shielded_proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.410570419e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = shielded_proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.693945618605802e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = shielded_proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-34) / static_cast<T>(1.410570419e-26));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to Bohr
/// magneton ratio (2006). \details shielded proton mag. mom. to Bohr magneton
/// ratio = (0.001520993128 ± 1.7e-11) .
template <typename T> struct shielded_proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001520993128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.001520993128); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.117690782886956e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-11) / static_cast<T>(0.001520993128));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to nuclear
/// magneton ratio (2006). \details shielded proton mag. mom. to nuclear
/// magneton ratio = (2.792775598 ± 3e-08) .
template <typename T> struct shielded_proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792775598 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792775598); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0742001620711668e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-08) / static_cast<T>(2.792775598));
  }
};

/// \brief CODATA recommended value for the speed of light in vacuum (2006).
/// \details speed of light in vacuum = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct speed_of_light_in_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = speed_of_light_in_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = speed_of_light_in_vacuum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = speed_of_light_in_vacuum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the standard acceleration of gravity
/// (2006). \details standard acceleration of gravity = (9.80665 ± 0.0) m s^-2.
template <typename T> struct standard_acceleration_of_gravity {
  /// \brief Returns the constant's value.
  /// \details value = 9.80665 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = standard_acceleration_of_gravity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.80665); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// standard_acceleration_of_gravity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = standard_acceleration_of_gravity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(9.80665));
  }
};

/// \brief CODATA recommended value for the standard atmosphere (2006).
/// \details standard atmosphere = (101325.0 ± 0.0) Pa.
template <typename T> struct standard_atmosphere {
  /// \brief Returns the constant's value.
  /// \details value = 101325.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = standard_atmosphere<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(101325.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = standard_atmosphere<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = standard_atmosphere<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(101325.0));
  }
};

/// \brief CODATA recommended value for the Stefan-Boltzmann constant (2006).
/// \details Stefan-Boltzmann constant = (5.6704e-08 ± 4e-13) W m^-2 K^-4.
template <typename T> struct Stefan_Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 5.6704e-08 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Stefan_Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.6704e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-13 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Stefan_Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.0541760722347626e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Stefan_Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-13) / static_cast<T>(5.6704e-08));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength (2006).
/// \details tau Compton wavelength = (6.9772e-16 ± 1.1e-19) m.
template <typename T> struct tau_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 6.9772e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.9772e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-19 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0001576563664507252.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-19) / static_cast<T>(6.9772e-16));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength over 2 pi
/// (2006). \details tau Compton wavelength over 2 pi = (1.11046e-16 ± 1.8e-20)
/// m.
template <typename T> struct tau_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.11046e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.11046e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// tau_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016209498766277036.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-20) / static_cast<T>(1.11046e-16));
  }
};

/// \brief CODATA recommended value for the tau-electron mass ratio (2006).
/// \details tau-electron mass ratio = (3477.48 ± 0.57) .
template <typename T> struct tau_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3477.48 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3477.48); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.57 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.57); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0001639117981986956.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.57) / static_cast<T>(3477.48));
  }
};

/// \brief CODATA recommended value for the tau mass (2006).
/// \details tau mass = (3.16777e-27 ± 5.2e-31) kg.
template <typename T> struct tau_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.16777e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.16777e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0001641533318391171.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-31) / static_cast<T>(3.16777e-27));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent (2006).
/// \details tau mass energy equivalent = (2.84705e-10 ± 4.6e-14) J.
template <typename T> struct tau_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.84705e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.84705e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016157074866967564.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-14) / static_cast<T>(2.84705e-10));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent in MeV
/// (2006). \details tau mass energy equivalent in MeV = (1776.99 ± 0.29) MeV.
template <typename T> struct tau_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1776.99 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1776.99); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.29 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// tau_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016319731681101188.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.29) / static_cast<T>(1776.99));
  }
};

/// \brief CODATA recommended value for the tau mass in u (2006).
/// \details tau mass in u = (1.90768 ± 0.00031) u.
template <typename T> struct tau_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.90768 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.90768); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00031 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00031); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0001625010483938606.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00031) / static_cast<T>(1.90768));
  }
};

/// \brief CODATA recommended value for the tau molar mass (2006).
/// \details tau molar mass = (0.00190768 ± 3.1e-07) kg mol^-1.
template <typename T> struct tau_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00190768 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00190768); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016250104839386062.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-07) / static_cast<T>(0.00190768));
  }
};

/// \brief CODATA recommended value for the tau-muon mass ratio (2006).
/// \details tau-muon mass ratio = (16.8183 ± 0.0027) .
template <typename T> struct tau_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 16.8183 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(16.8183); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0027 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0027); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016053941242575052.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0027) / static_cast<T>(16.8183));
  }
};

/// \brief CODATA recommended value for the tau-neutron mass ratio (2006).
/// \details tau-neutron mass ratio = (1.89129 ± 0.00031) .
template <typename T> struct tau_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89129 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89129); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00031 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00031); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00016390928942679336.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00031) / static_cast<T>(1.89129));
  }
};

/// \brief CODATA recommended value for the tau-proton mass ratio (2006).
/// \details tau-proton mass ratio = (1.8939 ± 0.00031) .
template <typename T> struct tau_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.8939 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = tau_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.8939); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00031 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = tau_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00031); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.000163683404614816.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = tau_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00031) / static_cast<T>(1.8939));
  }
};

/// \brief CODATA recommended value for the Thomson cross section (2006).
/// \details Thomson cross section = (6.652458558e-29 ± 2.7e-37) m^2.
template <typename T> struct Thomson_cross_section {
  /// \brief Returns the constant's value.
  /// \details value = 6.652458558e-29 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Thomson_cross_section<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.652458558e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-37 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = Thomson_cross_section<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.0586498607392e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = Thomson_cross_section<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-37) / static_cast<T>(6.652458558e-29));
  }
};

/// \brief CODATA recommended value for the triton-electron mag. mom. ratio
/// (2006). \details triton-electron mag. mom. ratio = (-0.001620514423
/// ± 2.1e-11) .
template <typename T> struct triton_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001620514423 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001620514423); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_electron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2958847944792404e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-11) / static_cast<T>(-0.001620514423));
  }
};

/// \brief CODATA recommended value for the triton-electron mass ratio (2006).
/// \details triton-electron mass ratio = (5496.9215269 ± 5.1e-06) .
template <typename T> struct triton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5496.9215269 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5496.9215269); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.277920332394041e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-06) / static_cast<T>(5496.9215269));
  }
};

/// \brief CODATA recommended value for the triton g factor (2006).
/// \details triton g factor = (5.957924896 ± 7.6e-08) .
template <typename T> struct triton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.957924896 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.957924896); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.275611917347674e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-08) / static_cast<T>(5.957924896));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. (2006).
/// \details triton mag. mom. = (1.504609361e-26 ± 4.2e-34) J T^-1.
template <typename T> struct triton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.504609361e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.504609361e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.791422218195278e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-34) / static_cast<T>(1.504609361e-26));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to Bohr magneton
/// ratio (2006). \details triton mag. mom. to Bohr magneton ratio =
/// (0.001622393657 ± 2.1e-11) .
template <typename T> struct triton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001622393657 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001622393657); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2943837587994219e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-11) / static_cast<T>(0.001622393657));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to nuclear magneton
/// ratio (2006). \details triton mag. mom. to nuclear magneton ratio =
/// (2.978962448 ± 3.8e-08) .
template <typename T> struct triton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.978962448 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.978962448); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.275611917347674e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-08) / static_cast<T>(2.978962448));
  }
};

/// \brief CODATA recommended value for the triton mass (2006).
/// \details triton mass = (5.00735588e-27 ± 2.5e-34) kg.
template <typename T> struct triton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.00735588e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.00735588e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.992654925896739e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-34) / static_cast<T>(5.00735588e-27));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent
/// (2006). \details triton mass energy equivalent = (4.50038703e-10 ± 2.2e-17)
/// J.
template <typename T> struct triton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.50038703e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.50038703e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.88846844801257e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-17) / static_cast<T>(4.50038703e-10));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent in MeV
/// (2006). \details triton mass energy equivalent in MeV = (2808.920906 ±
/// 7e-05) MeV.
template <typename T> struct triton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.920906 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.920906); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// triton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.492060201854612e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// triton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7e-05) / static_cast<T>(2808.920906));
  }
};

/// \brief CODATA recommended value for the triton mass in u (2006).
/// \details triton mass in u = (3.0155007134 ± 2.5e-09) u.
template <typename T> struct triton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.0155007134 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.0155007134); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.290497126698508e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(3.0155007134));
  }
};

/// \brief CODATA recommended value for the triton molar mass (2006).
/// \details triton molar mass = (0.0030155007134 ± 2.5e-12) kg mol^-1.
template <typename T> struct triton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0030155007134 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0030155007134); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.290497126698507e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-12) / static_cast<T>(0.0030155007134));
  }
};

/// \brief CODATA recommended value for the triton-neutron mag. mom. ratio
/// (2006). \details triton-neutron mag. mom. ratio = (-1.55718553 ± 3.7e-07) .
template <typename T> struct triton_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.55718553 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.55718553); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.7e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_neutron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.376081673453516e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.7e-07) / static_cast<T>(-1.55718553));
  }
};

/// \brief CODATA recommended value for the triton-proton mag. mom. ratio
/// (2006). \details triton-proton mag. mom. ratio = (1.066639908 ± 1e-08) .
template <typename T> struct triton_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.066639908 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.066639908); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.375235189493772e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-08) / static_cast<T>(1.066639908));
  }
};

/// \brief CODATA recommended value for the triton-proton mass ratio (2006).
/// \details triton-proton mass ratio = (2.9937170309 ± 2.5e-09) .
template <typename T> struct triton_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.9937170309 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = triton_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9937170309); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = triton_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.350822653563974e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = triton_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(2.9937170309));
  }
};

/// \brief CODATA recommended value for the unified atomic mass unit (2006).
/// \details unified atomic mass unit = (1.660538782e-27 ± 8.3e-35) kg.
template <typename T> struct unified_atomic_mass_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538782e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = unified_atomic_mass_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538782e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = unified_atomic_mass_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.9983776891999135e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = unified_atomic_mass_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-35) / static_cast<T>(1.660538782e-27));
  }
};

/// \brief CODATA recommended value for the von Klitzing constant (2006).
/// \details von Klitzing constant = (25812.807557 ± 1.8e-05) ohm.
template <typename T> struct von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.807557 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = von_Klitzing_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(25812.807557); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-05 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.973282530485028e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = von_Klitzing_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-05) / static_cast<T>(25812.807557));
  }
};

/// \brief CODATA recommended value for the weak mixing angle (2006).
/// \details weak mixing angle = (0.22255 ± 0.00056) .
template <typename T> struct weak_mixing_angle {
  /// \brief Returns the constant's value.
  /// \details value = 0.22255 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = weak_mixing_angle<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.22255); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00056 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty = weak_mixing_angle<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00056); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.002516288474500112.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision = weak_mixing_angle<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00056) / static_cast<T>(0.22255));
  }
};

/// \brief CODATA recommended value for the Wien frequency displacement law
/// constant (2006). \details Wien frequency displacement law constant =
/// (58789330000.0 ± 100000.0) Hz K^-1.
template <typename T> struct Wien_frequency_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 58789330000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Wien_frequency_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(58789330000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 100000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Wien_frequency_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(100000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7009889379586398e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Wien_frequency_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(100000.0) / static_cast<T>(58789330000.0));
  }
};

/// \brief CODATA recommended value for the Wien wavelength displacement law
/// constant (2006). \details Wien wavelength displacement law constant =
/// (0.0028977685 ± 5.1e-09) m K.
template <typename T> struct Wien_wavelength_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0028977685 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double value = Wien_wavelength_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0028977685); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-09 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double uncertainty =
  /// Wien_wavelength_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.7599749600425294e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2006;
  /// double precision =
  /// Wien_wavelength_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-09) / static_cast<T>(0.0028977685));
  }
};

} // namespace codata_2006

} // namespace constants

} // namespace triumf

#endif // TRIUMF_CONSTANTS_CODATA_2006_HPP
