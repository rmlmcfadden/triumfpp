#ifndef TRIUMF_CONSTANTS_CODATA_2010_HPP
#define TRIUMF_CONSTANTS_CODATA_2010_HPP

#include <cmath>
#include <type_traits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace constants {

// Committee on Data (CODATA) of the International Science Council (ISC)
// recommended values of fundamental physical constants: 2010
// https://physics.nist.gov/cuu/Constants/
// https://physics.nist.gov/cuu/Constants/Table/allascii.txt
namespace codata_2010 {

/// \brief CODATA recommended value for the {220} lattice spacing of silicon
/// (2010). \details {220} lattice spacing of silicon = (1.920155714e-10
/// ± 3.2e-18) m.
template <typename T> struct lattice_spacing_of_silicon_220 {
  /// \brief Returns the constant's value.
  /// \details value = 1.920155714e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = lattice_spacing_of_silicon_220<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.920155714e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// lattice_spacing_of_silicon_220<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.666531509225298e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = lattice_spacing_of_silicon_220<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-18) / static_cast<T>(1.920155714e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle-electron mass ratio
/// (2010). \details alpha particle-electron mass ratio = (7294.2995361
/// ± 2.9e-06) .
template <typename T> struct alpha_particle_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 7294.2995361 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7294.2995361); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// alpha_particle_electron_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.9757073117818876e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// alpha_particle_electron_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-06) / static_cast<T>(7294.2995361));
  }
};

/// \brief CODATA recommended value for the alpha particle mass (2010).
/// \details alpha particle mass = (6.64465675e-27 ± 2.9e-34) kg.
template <typename T> struct alpha_particle_mass {
  /// \brief Returns the constant's value.
  /// \details value = 6.64465675e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.64465675e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = alpha_particle_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.364409041896709e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = alpha_particle_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-34) / static_cast<T>(6.64465675e-27));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent (2010). \details alpha particle mass energy equivalent =
/// (5.97191967e-10 ± 2.6e-17) J.
template <typename T> struct alpha_particle_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 5.97191967e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.97191967e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.35370893058245e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-17) / static_cast<T>(5.97191967e-10));
  }
};

/// \brief CODATA recommended value for the alpha particle mass energy
/// equivalent in MeV (2010). \details alpha particle mass energy equivalent in
/// MeV = (3727.37924 ± 8.2e-05) MeV.
template <typename T> struct alpha_particle_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 3727.37924 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(3727.37924); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.2e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.2e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1999371333087104e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// alpha_particle_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.2e-05) / static_cast<T>(3727.37924));
  }
};

/// \brief CODATA recommended value for the alpha particle mass in u (2010).
/// \details alpha particle mass in u = (4.001506179125 ± 6.2e-11) u.
template <typename T> struct alpha_particle_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 4.001506179125 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.001506179125); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = alpha_particle_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5494165752745983e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = alpha_particle_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-11) / static_cast<T>(4.001506179125));
  }
};

/// \brief CODATA recommended value for the alpha particle molar mass (2010).
/// \details alpha particle molar mass = (0.004001506179125 ± 6.2e-14) kg
/// mol^-1.
template <typename T> struct alpha_particle_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.004001506179125 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.004001506179125);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = alpha_particle_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.5494165752745983e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = alpha_particle_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-14) /
                    static_cast<T>(0.004001506179125));
  }
};

/// \brief CODATA recommended value for the alpha particle-proton mass ratio
/// (2010). \details alpha particle-proton mass ratio = (3.97259968933
/// ± 3.6e-10) .
template <typename T> struct alpha_particle_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3.97259968933 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = alpha_particle_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.97259968933); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// alpha_particle_proton_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.062075923907549e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = alpha_particle_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-10) / static_cast<T>(3.97259968933));
  }
};

/// \brief CODATA recommended value for the Angstrom star (2010).
/// \details Angstrom star = (1.00001495e-10 ± 9e-17) m.
template <typename T> struct Angstrom_star {
  /// \brief Returns the constant's value.
  /// \details value = 1.00001495e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Angstrom_star<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00001495e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-17 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Angstrom_star<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.999865452011492e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Angstrom_star<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-17) / static_cast<T>(1.00001495e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant (2010).
/// \details atomic mass constant = (1.660538921e-27 ± 7.3e-35) kg.
template <typename T> struct atomic_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538921e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538921e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3961631417852204e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-35) / static_cast<T>(1.660538921e-27));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent (2010). \details atomic mass constant energy equivalent =
/// (1.492417954e-10 ± 6.6e-18) J.
template <typename T> struct atomic_mass_constant_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.492417954e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_constant_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.492417954e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.422353659248461e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-18) / static_cast<T>(1.492417954e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass constant energy
/// equivalent in MeV (2010). \details atomic mass constant energy equivalent in
/// MeV = (931.494061 ± 2.1e-05) MeV.
template <typename T> struct atomic_mass_constant_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 931.494061 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931.494061); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.254442715121079e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_constant_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-05) / static_cast<T>(931.494061));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-electron volt
/// relationship (2010). \details atomic mass unit-electron volt relationship =
/// (931494061.0 ± 21.0) eV.
template <typename T> struct atomic_mass_unit_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 931494061.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// atomic_mass_unit_electron_volt_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(931494061.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 21.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_electron_volt_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(21.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.254442715121079e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(21.0) / static_cast<T>(931494061.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hartree
/// relationship (2010). \details atomic mass unit-hartree relationship =
/// (34231776.845 ± 0.024) E_h.
template <typename T> struct atomic_mass_unit_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 34231776.845 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_unit_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(34231776.845); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.024 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.024); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.011029578940924e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.024) / static_cast<T>(34231776.845));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-hertz relationship
/// (2010). \details atomic mass unit-hertz relationship = (2.2523427168e+23 ±
/// 160000000000000.0) Hz.
template <typename T> struct atomic_mass_unit_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.2523427168e+23 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_unit_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.2523427168e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 160000000000000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(160000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.103714670355268e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_hertz_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(160000000000000.0) /
                    static_cast<T>(2.2523427168e+23));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-inverse meter
/// relationship (2010). \details atomic mass unit-inverse meter relationship =
/// (751300660420000.0 ± 530000.0) m^-1.
template <typename T> struct atomic_mass_unit_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 751300660420000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// atomic_mass_unit_inverse_meter_relationship<double>::value(); \endcode
  static inline constexpr T value() {
    return static_cast<T>(751300660420000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 530000.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_inverse_meter_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(530000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.054432771345014e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(530000.0) /
                    static_cast<T>(751300660420000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-joule relationship
/// (2010). \details atomic mass unit-joule relationship = (1.492417954e-10
/// ± 6.6e-18) J.
template <typename T> struct atomic_mass_unit_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.492417954e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_unit_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.492417954e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.422353659248461e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_joule_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-18) / static_cast<T>(1.492417954e-10));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kelvin relationship
/// (2010). \details atomic mass unit-kelvin relationship = (10809540800000.0 ±
/// 9800000.0) K.
template <typename T> struct atomic_mass_unit_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 10809540800000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_unit_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10809540800000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9800000.0 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9800000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.066065045057234e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_kelvin_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9800000.0) /
                    static_cast<T>(10809540800000.0));
  }
};

/// \brief CODATA recommended value for the atomic mass unit-kilogram
/// relationship (2010). \details atomic mass unit-kilogram relationship =
/// (1.660538921e-27 ± 7.3e-35) kg.
template <typename T> struct atomic_mass_unit_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538921e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_mass_unit_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538921e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_mass_unit_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3961631417852204e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_mass_unit_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-35) / static_cast<T>(1.660538921e-27));
  }
};

/// \brief CODATA recommended value for the atomic unit of 1st
/// hyperpolarizability (2010). \details atomic unit of 1st hyperpolarizability
/// = (3.206361449e-53 ± 7.1e-61) C^3 m^3 J^-2.
template <typename T> struct atomic_unit_of_1st_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 3.206361449e-53 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_1st_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.206361449e-53); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.1e-61 C^3 m^3 J^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_1st_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.1e-61); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2143479807039058e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_1st_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.1e-61) / static_cast<T>(3.206361449e-53));
  }
};

/// \brief CODATA recommended value for the atomic unit of 2nd
/// hyperpolarizability (2010). \details atomic unit of 2nd hyperpolarizability
/// = (6.23538054e-65 ± 2.8e-72) C^4 m^4 J^-3.
template <typename T> struct atomic_unit_of_2nd_hyperpolarizability {
  /// \brief Returns the constant's value.
  /// \details value = 6.23538054e-65 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_2nd_hyperpolarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.23538054e-65); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-72 C^4 m^4 J^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-72); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.490503798505936e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_2nd_hyperpolarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-72) / static_cast<T>(6.23538054e-65));
  }
};

/// \brief CODATA recommended value for the atomic unit of action (2010).
/// \details atomic unit of action = (1.054571726e-34 ± 4.7e-42) J s.
template <typename T> struct atomic_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571726e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571726e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.456785521670624e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-42) / static_cast<T>(1.054571726e-34));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge (2010).
/// \details atomic unit of charge = (1.602176565e-19 ± 3.5e-27) C.
template <typename T> struct atomic_unit_of_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176565e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176565e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-27 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1845282701410628e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-27) / static_cast<T>(1.602176565e-19));
  }
};

/// \brief CODATA recommended value for the atomic unit of charge density
/// (2010). \details atomic unit of charge density = (1081202338000.0 ± 24000.0)
/// C m^-3.
template <typename T> struct atomic_unit_of_charge_density {
  /// \brief Returns the constant's value.
  /// \details value = 1081202338000.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_charge_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1081202338000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 24000.0 C m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_charge_density<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(24000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.219751026842489e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_charge_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(24000.0) / static_cast<T>(1081202338000.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of current (2010).
/// \details atomic unit of current = (0.00662361795 ± 1.5e-10) A.
template <typename T> struct atomic_unit_of_current {
  /// \brief Returns the constant's value.
  /// \details value = 0.00662361795 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00662361795); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-10 A.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2646233694683432e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-10) / static_cast<T>(0.00662361795));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric dipole mom.
/// (2010). \details atomic unit of electric dipole mom. = (8.47835326e-30
/// ± 1.9e-37) C m.
template <typename T> struct atomic_unit_of_electric_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 8.47835326e-30 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.47835326e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-37 C m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_electric_dipole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2410012200883453e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_electric_dipole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-37) / static_cast<T>(8.47835326e-30));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// (2010). \details atomic unit of electric field = (514220652000.0 ± 11000.0)
/// V m^-1.
template <typename T> struct atomic_unit_of_electric_field {
  /// \brief Returns the constant's value.
  /// \details value = 514220652000.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_field<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(514220652000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 11000.0 V m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_electric_field<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(11000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1391595139589998e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_electric_field<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(11000.0) / static_cast<T>(514220652000.0));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric field
/// gradient (2010). \details atomic unit of electric field gradient =
/// (9.717362e+21 ± 210000000000000.0) V m^-2.
template <typename T> struct atomic_unit_of_electric_field_gradient {
  /// \brief Returns the constant's value.
  /// \details value = 9.717362e+21 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_field_gradient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.717362e+21); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 210000000000000.0 V m^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_electric_field_gradient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(210000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.161080342586805e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_electric_field_gradient<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(210000000000000.0) /
                    static_cast<T>(9.717362e+21));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric
/// polarizability (2010). \details atomic unit of electric polarizability =
/// (1.6487772754e-41 ± 1.6e-50) C^2 m^2 J^-1.
template <typename T> struct atomic_unit_of_electric_polarizability {
  /// \brief Returns the constant's value.
  /// \details value = 1.6487772754e-41 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_polarizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.6487772754e-41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-50 C^2 m^2 J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_electric_polarizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-50); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.704160918956343e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_electric_polarizability<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-50) / static_cast<T>(1.6487772754e-41));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric potential
/// (2010). \details atomic unit of electric potential = (27.21138505 ± 6e-07)
/// V.
template <typename T> struct atomic_unit_of_electric_potential {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138505 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_potential<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138505); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-07 V.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_electric_potential<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.204959427451121e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_electric_potential<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-07) / static_cast<T>(27.21138505));
  }
};

/// \brief CODATA recommended value for the atomic unit of electric quadrupole
/// mom. (2010). \details atomic unit of electric quadrupole mom. =
/// (4.486551331e-40 ± 9.9e-48) C m^2.
template <typename T> struct atomic_unit_of_electric_quadrupole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.486551331e-40 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_electric_quadrupole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.486551331e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.9e-48 C m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_electric_quadrupole_mom<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.9e-48); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2065946134608037e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// atomic_unit_of_electric_quadrupole_mom<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.9e-48) / static_cast<T>(4.486551331e-40));
  }
};

/// \brief CODATA recommended value for the atomic unit of energy (2010).
/// \details atomic unit of energy = (4.35974434e-18 ± 1.9e-25) J.
template <typename T> struct atomic_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974434e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974434e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.35805371101187e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-25) / static_cast<T>(4.35974434e-18));
  }
};

/// \brief CODATA recommended value for the atomic unit of force (2010).
/// \details atomic unit of force = (8.23872278e-08 ± 3.6e-15) N.
template <typename T> struct atomic_unit_of_force {
  /// \brief Returns the constant's value.
  /// \details value = 8.23872278e-08 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_force<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.23872278e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-15 N.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_force<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.369609338888327e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_force<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-15) / static_cast<T>(8.23872278e-08));
  }
};

/// \brief CODATA recommended value for the atomic unit of length (2010).
/// \details atomic unit of length = (5.2917721092e-11 ± 1.7e-20) m.
template <typename T> struct atomic_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917721092e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917721092e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.212534411760605e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-20) / static_cast<T>(5.2917721092e-11));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. dipole mom.
/// (2010). \details atomic unit of mag. dipole mom. = (1.854801936e-23
/// ± 4.1e-31) J T^-1.
template <typename T> struct atomic_unit_of_mag_dipole_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.854801936e-23 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_mag_dipole_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.854801936e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_mag_dipole_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2104786071346865e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_mag_dipole_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-31) / static_cast<T>(1.854801936e-23));
  }
};

/// \brief CODATA recommended value for the atomic unit of mag. flux density
/// (2010). \details atomic unit of mag. flux density = (235051.7464 ± 0.0052)
/// T.
template <typename T> struct atomic_unit_of_mag_flux_density {
  /// \brief Returns the constant's value.
  /// \details value = 235051.7464 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_mag_flux_density<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(235051.7464); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0052 T.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_mag_flux_density<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0052); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.21227881929917e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_mag_flux_density<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0052) / static_cast<T>(235051.7464));
  }
};

/// \brief CODATA recommended value for the atomic unit of magnetizability
/// (2010). \details atomic unit of magnetizability = (7.891036607e-29
/// ± 1.3e-37) J T^-2.
template <typename T> struct atomic_unit_of_magnetizability {
  /// \brief Returns the constant's value.
  /// \details value = 7.891036607e-29 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_magnetizability<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.891036607e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-37 J T^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// atomic_unit_of_magnetizability<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.6474388153855386e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_magnetizability<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-37) / static_cast<T>(7.891036607e-29));
  }
};

/// \brief CODATA recommended value for the atomic unit of mass (2010).
/// \details atomic unit of mass = (9.10938291e-31 ± 4e-38) kg.
template <typename T> struct atomic_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938291e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938291e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3910768045648e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-38) / static_cast<T>(9.10938291e-31));
  }
};

/// \brief CODATA recommended value for the atomic unit of mom.um (2010).
/// \details atomic unit of mom.um = (1.99285174e-24 ± 8.8e-32) kg m s^-1.
template <typename T> struct atomic_unit_of_momum {
  /// \brief Returns the constant's value.
  /// \details value = 1.99285174e-24 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_momum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.99285174e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-32 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_momum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-32); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4157825809962164e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_momum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-32) / static_cast<T>(1.99285174e-24));
  }
};

/// \brief CODATA recommended value for the atomic unit of permittivity (2010).
/// \details atomic unit of permittivity = (1.112650056e-10 ± 0.0) F m^-1.
template <typename T> struct atomic_unit_of_permittivity {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-10 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_permittivity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_permittivity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_permittivity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-10));
  }
};

/// \brief CODATA recommended value for the atomic unit of time (2010).
/// \details atomic unit of time = (2.418884326502e-17 ± 1.2e-28) s.
template <typename T> struct atomic_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 2.418884326502e-17 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(2.418884326502e-17);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-28 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.960964800393517e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-28) /
                    static_cast<T>(2.418884326502e-17));
  }
};

/// \brief CODATA recommended value for the atomic unit of velocity (2010).
/// \details atomic unit of velocity = (2187691.26379 ± 0.00071) m s^-1.
template <typename T> struct atomic_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 2187691.26379 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = atomic_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2187691.26379); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00071 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = atomic_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00071); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.245430521900891e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = atomic_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00071) / static_cast<T>(2187691.26379));
  }
};

/// \brief CODATA recommended value for the Avogadro constant (2010).
/// \details Avogadro constant = (6.02214129e+23 ± 2.7e+16) mol^-1.
template <typename T> struct Avogadro_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.02214129e+23 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Avogadro_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.02214129e+23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e+16 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Avogadro_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e+16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.483455086786913e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Avogadro_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e+16) / static_cast<T>(6.02214129e+23));
  }
};

/// \brief CODATA recommended value for the Bohr magneton (2010).
/// \details Bohr magneton = (9.27400968e-24 ± 2e-31) J T^-1.
template <typename T> struct Bohr_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 9.27400968e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.27400968e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Bohr_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.156564494765548e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Bohr_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-31) / static_cast<T>(9.27400968e-24));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in eV/T (2010).
/// \details Bohr magneton in eV/T = (5.7883818066e-05 ± 3.8e-14) eV T^-1.
template <typename T> struct Bohr_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 5.7883818066e-05 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.7883818066e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-14 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Bohr_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.564874479543114e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Bohr_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-14) / static_cast<T>(5.7883818066e-05));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in Hz/T (2010).
/// \details Bohr magneton in Hz/T = (13996245550.0 ± 310.0) Hz T^-1.
template <typename T> struct Bohr_magneton_in_Hz_T {
  /// \brief Returns the constant's value.
  /// \details value = 13996245550.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_magneton_in_Hz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13996245550.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 310.0 Hz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Bohr_magneton_in_Hz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(310.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2148796896464854e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Bohr_magneton_in_Hz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(310.0) / static_cast<T>(13996245550.0));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in inverse meters per
/// tesla (2010). \details Bohr magneton in inverse meters per tesla =
/// (46.6864498 ± 1e-06) m^-1 T^-1.
template <typename T> struct Bohr_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 46.6864498 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_magneton_in_inverse_meters_per_tesla<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(46.6864498); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-06 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.141949118607001e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Bohr_magneton_in_inverse_meters_per_tesla<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-06) / static_cast<T>(46.6864498));
  }
};

/// \brief CODATA recommended value for the Bohr magneton in K/T (2010).
/// \details Bohr magneton in K/T = (0.67171388 ± 6.1e-07) K T^-1.
template <typename T> struct Bohr_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.67171388 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.67171388); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.1e-07 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Bohr_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.081247509728398e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Bohr_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.1e-07) / static_cast<T>(0.67171388));
  }
};

/// \brief CODATA recommended value for the Bohr radius (2010).
/// \details Bohr radius = (5.2917721092e-11 ± 1.7e-20) m.
template <typename T> struct Bohr_radius {
  /// \brief Returns the constant's value.
  /// \details value = 5.2917721092e-11 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Bohr_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.2917721092e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Bohr_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.212534411760605e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Bohr_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-20) / static_cast<T>(5.2917721092e-11));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant (2010).
/// \details Boltzmann constant = (1.3806488e-23 ± 1.3e-29) J K^-1.
template <typename T> struct Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.3806488e-23 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3806488e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-29 J K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.415863034828263e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-29) / static_cast<T>(1.3806488e-23));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in eV/K (2010).
/// \details Boltzmann constant in eV/K = (8.6173324e-05 ± 7.8e-11) eV K^-1.
template <typename T> struct Boltzmann_constant_in_eV_K {
  /// \brief Returns the constant's value.
  /// \details value = 8.6173324e-05 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Boltzmann_constant_in_eV_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.6173324e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.8e-11 eV K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Boltzmann_constant_in_eV_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.8e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.051525040394172e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Boltzmann_constant_in_eV_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.8e-11) / static_cast<T>(8.6173324e-05));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in Hz/K (2010).
/// \details Boltzmann constant in Hz/K = (20836618000.0 ± 19000.0) Hz K^-1.
template <typename T> struct Boltzmann_constant_in_Hz_K {
  /// \brief Returns the constant's value.
  /// \details value = 20836618000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Boltzmann_constant_in_Hz_K<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836618000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 19000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Boltzmann_constant_in_Hz_K<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(19000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.118562330988647e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Boltzmann_constant_in_Hz_K<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(19000.0) / static_cast<T>(20836618000.0));
  }
};

/// \brief CODATA recommended value for the Boltzmann constant in inverse meters
/// per kelvin (2010). \details Boltzmann constant in inverse meters per kelvin
/// = (69.503476 ± 6.3e-05) m^-1 K^-1.
template <typename T> struct Boltzmann_constant_in_inverse_meters_per_kelvin {
  /// \brief Returns the constant's value.
  /// \details value = 69.503476 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(69.503476); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-05 m^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.064294856274526e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Boltzmann_constant_in_inverse_meters_per_kelvin<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-05) / static_cast<T>(69.503476));
  }
};

/// \brief CODATA recommended value for the characteristic impedance of vacuum
/// (2010). \details characteristic impedance of vacuum = (376.730313461 ± 0.0)
/// ohm.
template <typename T> struct characteristic_impedance_of_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 376.730313461 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = characteristic_impedance_of_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(376.730313461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// characteristic_impedance_of_vacuum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// characteristic_impedance_of_vacuum<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(376.730313461));
  }
};

/// \brief CODATA recommended value for the classical electron radius (2010).
/// \details classical electron radius = (2.8179403267e-15 ± 2.7e-24) m.
template <typename T> struct classical_electron_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.8179403267e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = classical_electron_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.8179403267e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = classical_electron_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.581466202167183e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = classical_electron_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-24) / static_cast<T>(2.8179403267e-15));
  }
};

/// \brief CODATA recommended value for the Compton wavelength (2010).
/// \details Compton wavelength = (2.4263102389e-12 ± 1.6e-21) m.
template <typename T> struct Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 2.4263102389e-12 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.4263102389e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-21 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.594375172423874e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-21) / static_cast<T>(2.4263102389e-12));
  }
};

/// \brief CODATA recommended value for the Compton wavelength over 2 pi (2010).
/// \details Compton wavelength over 2 pi = (3.86159268e-13 ± 2.5e-22) m.
template <typename T> struct Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 3.86159268e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.86159268e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Compton_wavelength_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.474012686392392e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-22) / static_cast<T>(3.86159268e-13));
  }
};

/// \brief CODATA recommended value for the conductance quantum (2010).
/// \details conductance quantum = (7.7480917346e-05 ± 2.5e-14) S.
template <typename T> struct conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 7.7480917346e-05 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.7480917346e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-14 S.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = conductance_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.226600930440667e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-14) / static_cast<T>(7.7480917346e-05));
  }
};

/// \brief CODATA recommended value for the conventional value of Josephson
/// constant (2010). \details conventional value of Josephson constant =
/// (483597900000000.0 ± 0.0) Hz V^-1.
template <typename T> struct conventional_value_of_Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597900000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = conventional_value_of_Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597900000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// conventional_value_of_Josephson_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// conventional_value_of_Josephson_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(483597900000000.0));
  }
};

/// \brief CODATA recommended value for the conventional value of von Klitzing
/// constant (2010). \details conventional value of von Klitzing constant =
/// (25812.807 ± 0.0) ohm.
template <typename T> struct conventional_value_of_von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.807 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// conventional_value_of_von_Klitzing_constant<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(25812.807); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// conventional_value_of_von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// conventional_value_of_von_Klitzing_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(25812.807));
  }
};

/// \brief CODATA recommended value for the Cu x unit (2010).
/// \details Cu x unit = (1.00207697e-13 ± 2.8e-20) m.
template <typename T> struct Cu_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00207697e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Cu_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00207697e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Cu_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.794196537617265e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Cu_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-20) / static_cast<T>(1.00207697e-13));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mag. mom. ratio
/// (2010). \details deuteron-electron mag. mom. ratio = (-0.0004664345537
/// ± 3.9e-12) .
template <typename T> struct deuteron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.0004664345537 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.0004664345537); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.361301642563108e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-12) / static_cast<T>(-0.0004664345537));
  }
};

/// \brief CODATA recommended value for the deuteron-electron mass ratio (2010).
/// \details deuteron-electron mass ratio = (3670.4829652 ± 1.5e-06) .
template <typename T> struct deuteron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3670.4829652 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3670.4829652); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.086655664177063e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-06) / static_cast<T>(3670.4829652));
  }
};

/// \brief CODATA recommended value for the deuteron g factor (2010).
/// \details deuteron g factor = (0.8574382308 ± 7.2e-09) .
template <typename T> struct deuteron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.39710633532437e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-09) / static_cast<T>(0.8574382308));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. (2010).
/// \details deuteron mag. mom. = (4.33073489e-27 ± 1e-34) J T^-1.
template <typename T> struct deuteron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 4.33073489e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.33073489e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.309076924355441e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-34) / static_cast<T>(4.33073489e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to Bohr magneton
/// ratio (2010). \details deuteron mag. mom. to Bohr magneton ratio =
/// (0.0004669754556 ± 3.9e-12) .
template <typename T> struct deuteron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0004669754556 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0004669754556); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.351616671135381e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// deuteron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-12) / static_cast<T>(0.0004669754556));
  }
};

/// \brief CODATA recommended value for the deuteron mag. mom. to nuclear
/// magneton ratio (2010). \details deuteron mag. mom. to nuclear magneton ratio
/// = (0.8574382308 ± 7.2e-09) .
template <typename T> struct deuteron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.8574382308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.8574382308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.39710633532437e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// deuteron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-09) / static_cast<T>(0.8574382308));
  }
};

/// \brief CODATA recommended value for the deuteron mass (2010).
/// \details deuteron mass = (3.34358348e-27 ± 1.5e-34) kg.
template <typename T> struct deuteron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.34358348e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.34358348e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4862047230835106e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-34) / static_cast<T>(3.34358348e-27));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent
/// (2010). \details deuteron mass energy equivalent = (3.00506297e-10
/// ± 1.3e-17) J.
template <typename T> struct deuteron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 3.00506297e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.00506297e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3260324757853575e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-17) / static_cast<T>(3.00506297e-10));
  }
};

/// \brief CODATA recommended value for the deuteron mass energy equivalent in
/// MeV (2010). \details deuteron mass energy equivalent in MeV = (1875.612859
/// ± 4.1e-05) MeV.
template <typename T> struct deuteron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1875.612859 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1875.612859); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.1e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.185952170420687e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// deuteron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.1e-05) / static_cast<T>(1875.612859));
  }
};

/// \brief CODATA recommended value for the deuteron mass in u (2010).
/// \details deuteron mass in u = (2.013553212712 ± 7.7e-11) u.
template <typename T> struct deuteron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 2.013553212712 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.013553212712); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.7e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.8240856766974044e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.7e-11) / static_cast<T>(2.013553212712));
  }
};

/// \brief CODATA recommended value for the deuteron molar mass (2010).
/// \details deuteron molar mass = (0.002013553212712 ± 7.7e-14) kg mol^-1.
template <typename T> struct deuteron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.002013553212712 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.002013553212712);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.7e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.7e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.824085676697404e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.7e-14) /
                    static_cast<T>(0.002013553212712));
  }
};

/// \brief CODATA recommended value for the deuteron-neutron mag. mom. ratio
/// (2010). \details deuteron-neutron mag. mom. ratio = (-0.44820652 ± 1.1e-07)
/// .
template <typename T> struct deuteron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.44820652 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.44820652); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// deuteron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4542257885940616e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-07) / static_cast<T>(-0.44820652));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mag. mom. ratio
/// (2010). \details deuteron-proton mag. mom. ratio = (0.307012207 ± 2.4e-09) .
template <typename T> struct deuteron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.307012207 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.307012207); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.817278744229216e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-09) / static_cast<T>(0.307012207));
  }
};

/// \brief CODATA recommended value for the deuteron-proton mass ratio (2010).
/// \details deuteron-proton mass ratio = (1.99900750097 ± 1.8e-10) .
template <typename T> struct deuteron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.99900750097 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.99900750097); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.004468463107651e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-10) / static_cast<T>(1.99900750097));
  }
};

/// \brief CODATA recommended value for the deuteron rms charge radius (2010).
/// \details deuteron rms charge radius = (2.1424e-15 ± 2.1e-18) m.
template <typename T> struct deuteron_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 2.1424e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = deuteron_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1424e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = deuteron_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0009802091112770725.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = deuteron_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-18) / static_cast<T>(2.1424e-15));
  }
};

/// \brief CODATA recommended value for the electric constant (2010).
/// \details electric constant = (8.854187817e-12 ± 0.0) F m^-1.
template <typename T> struct electric_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.854187817e-12 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electric_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.854187817e-12); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 F m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electric_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electric_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.854187817e-12));
  }
};

/// \brief CODATA recommended value for the electron charge to mass quotient
/// (2010). \details electron charge to mass quotient = (-175882008800.0 ±
/// 3900.0) C kg^-1.
template <typename T> struct electron_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = -175882008800.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-175882008800.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3900.0 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3900.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2173956430272474e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3900.0) / static_cast<T>(-175882008800.0));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mag. mom. ratio
/// (2010). \details electron-deuteron mag. mom. ratio = (-2143.923498
/// ± 1.8e-05) .
template <typename T> struct electron_deuteron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2143.923498 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_deuteron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2143.923498); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_deuteron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.395821966964606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_deuteron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.8e-05) / static_cast<T>(-2143.923498));
  }
};

/// \brief CODATA recommended value for the electron-deuteron mass ratio (2010).
/// \details electron-deuteron mass ratio = (0.00027244371095 ± 1.1e-13) .
template <typename T> struct electron_deuteron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00027244371095 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_deuteron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00027244371095); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_deuteron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.037531261647939e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_deuteron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-13) / static_cast<T>(0.00027244371095));
  }
};

/// \brief CODATA recommended value for the electron g factor (2010).
/// \details electron g factor = (-2.00231930436153 ± 5.3e-13) .
template <typename T> struct electron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.00231930436153 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-2.00231930436153);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6469304812950326e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-13) /
                    static_cast<T>(-2.00231930436153));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio (2010).
/// \details electron gyromag. ratio = (176085970800.0 ± 3900.0) s^-1 T^-1.
template <typename T> struct electron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 176085970800.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(176085970800.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3900.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3900.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2148272132534932e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3900.0) / static_cast<T>(176085970800.0));
  }
};

/// \brief CODATA recommended value for the electron gyromag. ratio over 2 pi
/// (2010). \details electron gyromag. ratio over 2 pi = (28024.95266 ± 0.00062)
/// MHz T^-1.
template <typename T> struct electron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 28024.95266 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(28024.95266); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00062 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00062); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2123141741642465e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00062) / static_cast<T>(28024.95266));
  }
};

/// \brief CODATA recommended value for the electron-helion mass ratio (2010).
/// \details electron-helion mass ratio = (0.00018195430761 ± 1.7e-13) .
template <typename T> struct electron_helion_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00018195430761 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_helion_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00018195430761); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_helion_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.343004968279025e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_helion_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-13) / static_cast<T>(0.00018195430761));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. (2010).
/// \details electron mag. mom. = (-9.2847643e-24 ± 2.1e-31) J T^-1.
template <typename T> struct electron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.2847643e-24 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.2847643e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-31 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.261769854513162e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-31) / static_cast<T>(-9.2847643e-24));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. anomaly (2010).
/// \details electron mag. mom. anomaly = (0.00115965218076 ± 2.7e-13) .
template <typename T> struct electron_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00115965218076 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00115965218076); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3282843293844402e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-13) / static_cast<T>(0.00115965218076));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to Bohr magneton
/// ratio (2010). \details electron mag. mom. to Bohr magneton ratio =
/// (-1.00115965218076 ± 2.7e-13) .
template <typename T> struct electron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.00115965218076 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(-1.00115965218076);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.696872565847783e-13.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-13) /
                    static_cast<T>(-1.00115965218076));
  }
};

/// \brief CODATA recommended value for the electron mag. mom. to nuclear
/// magneton ratio (2010). \details electron mag. mom. to nuclear magneton ratio
/// = (-1838.2819709 ± 7.5e-07) .
template <typename T> struct electron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1838.2819709 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-1838.2819709); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.0798964025785955e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-07) / static_cast<T>(-1838.2819709));
  }
};

/// \brief CODATA recommended value for the electron mass (2010).
/// \details electron mass = (9.10938291e-31 ± 4e-38) kg.
template <typename T> struct electron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938291e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938291e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3910768045648e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-38) / static_cast<T>(9.10938291e-31));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent
/// (2010). \details electron mass energy equivalent = (8.18710506e-14
/// ± 3.6e-21) J.
template <typename T> struct electron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710506e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710506e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.397158670393317e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-21) / static_cast<T>(8.18710506e-14));
  }
};

/// \brief CODATA recommended value for the electron mass energy equivalent in
/// MeV (2010). \details electron mass energy equivalent in MeV = (0.510998928
/// ± 1.1e-08) MeV.
template <typename T> struct electron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.510998928 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.510998928); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1526463945928275e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(0.510998928));
  }
};

/// \brief CODATA recommended value for the electron mass in u (2010).
/// \details electron mass in u = (0.00054857990946 ± 2.2e-13) u.
template <typename T> struct electron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054857990946 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054857990946); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-13 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.0103546667715037e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-13) / static_cast<T>(0.00054857990946));
  }
};

/// \brief CODATA recommended value for the electron molar mass (2010).
/// \details electron molar mass = (5.4857990946e-07 ± 2.2e-16) kg mol^-1.
template <typename T> struct electron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.4857990946e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.4857990946e-07); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-16 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.010354666771504e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-16) / static_cast<T>(5.4857990946e-07));
  }
};

/// \brief CODATA recommended value for the electron-muon mag. mom. ratio
/// (2010). \details electron-muon mag. mom. ratio = (206.7669896 ± 5.2e-06) .
template <typename T> struct electron_muon_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7669896 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_muon_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7669896); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_muon_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.514908211441117e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_muon_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-06) / static_cast<T>(206.7669896));
  }
};

/// \brief CODATA recommended value for the electron-muon mass ratio (2010).
/// \details electron-muon mass ratio = (0.00483633166 ± 1.2e-10) .
template <typename T> struct electron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00483633166 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00483633166); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4812194124833863e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(0.00483633166));
  }
};

/// \brief CODATA recommended value for the electron-neutron mag. mom. ratio
/// (2010). \details electron-neutron mag. mom. ratio = (960.9205 ± 0.00023) .
template <typename T> struct electron_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 960.9205 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(960.9205); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00023 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_neutron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00023); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3935382791812643e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00023) / static_cast<T>(960.9205));
  }
};

/// \brief CODATA recommended value for the electron-neutron mass ratio (2010).
/// \details electron-neutron mass ratio = (0.00054386734461 ± 3.2e-13) .
template <typename T> struct electron_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054386734461 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054386734461); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.88378771351804e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-13) / static_cast<T>(0.00054386734461));
  }
};

/// \brief CODATA recommended value for the electron-proton mag. mom. ratio
/// (2010). \details electron-proton mag. mom. ratio = (-658.2106848 ± 5.4e-06)
/// .
template <typename T> struct electron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2106848 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2106848); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.204060074838821e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-06) / static_cast<T>(-658.2106848));
  }
};

/// \brief CODATA recommended value for the electron-proton mass ratio (2010).
/// \details electron-proton mass ratio = (0.00054461702178 ± 2.2e-13) .
template <typename T> struct electron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00054461702178 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00054461702178); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.03953587937745e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-13) / static_cast<T>(0.00054461702178));
  }
};

/// \brief CODATA recommended value for the electron-tau mass ratio (2010).
/// \details electron-tau mass ratio = (0.000287592 ± 2.6e-08) .
template <typename T> struct electron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000287592 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.000287592); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.04058527358202e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-08) / static_cast<T>(0.000287592));
  }
};

/// \brief CODATA recommended value for the electron to alpha particle mass
/// ratio (2010). \details electron to alpha particle mass ratio =
/// (0.000137093355578 ± 5.5e-14) .
template <typename T> struct electron_to_alpha_particle_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.000137093355578 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_to_alpha_particle_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.000137093355578);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.5e-14 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_to_alpha_particle_mass_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.5e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.011864744875068e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_to_alpha_particle_mass_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.5e-14) /
                    static_cast<T>(0.000137093355578));
  }
};

/// \brief CODATA recommended value for the electron to shielded helion mag.
/// mom. ratio (2010). \details electron to shielded helion mag. mom. ratio =
/// (864.058257 ± 1e-05) .
template <typename T> struct electron_to_shielded_helion_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 864.058257 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_to_shielded_helion_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(864.058257); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1573293720633932e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_to_shielded_helion_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-05) / static_cast<T>(864.058257));
  }
};

/// \brief CODATA recommended value for the electron to shielded proton mag.
/// mom. ratio (2010). \details electron to shielded proton mag. mom. ratio =
/// (-658.2275971 ± 7.2e-06) .
template <typename T> struct electron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -658.2275971 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-658.2275971); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0938465709614045e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.2e-06) / static_cast<T>(-658.2275971));
  }
};

/// \brief CODATA recommended value for the electron-triton mass ratio (2010).
/// \details electron-triton mass ratio = (0.00018192000653 ± 1.7e-13) .
template <typename T> struct electron_triton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00018192000653 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_triton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00018192000653); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_triton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.344766595089458e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_triton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-13) / static_cast<T>(0.00018192000653));
  }
};

/// \brief CODATA recommended value for the electron volt (2010).
/// \details electron volt = (1.602176565e-19 ± 3.5e-27) J.
template <typename T> struct electron_volt {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176565e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176565e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-27 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = electron_volt<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1845282701410628e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_volt<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-27) / static_cast<T>(1.602176565e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-atomic mass unit
/// relationship (2010). \details electron volt-atomic mass unit relationship =
/// (1.07354415e-09 ± 2.4e-17) u.
template <typename T> struct electron_volt_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.07354415e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// electron_volt_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.07354415e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2355857465200658e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_volt_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-17) / static_cast<T>(1.07354415e-09));
  }
};

/// \brief CODATA recommended value for the electron volt-hartree relationship
/// (2010). \details electron volt-hartree relationship = (0.03674932379
/// ± 8.1e-10) E_h.
template <typename T> struct electron_volt_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.03674932379 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.03674932379); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-10 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2041221891011017e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_volt_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-10) / static_cast<T>(0.03674932379));
  }
};

/// \brief CODATA recommended value for the electron volt-hertz relationship
/// (2010). \details electron volt-hertz relationship = (241798934800000.0 ±
/// 5300000.0) Hz.
template <typename T> struct electron_volt_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 241798934800000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798934800000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5300000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5300000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.191903783357775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_volt_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5300000.0) /
                    static_cast<T>(241798934800000.0));
  }
};

/// \brief CODATA recommended value for the electron volt-inverse meter
/// relationship (2010). \details electron volt-inverse meter relationship =
/// (806554.429 ± 0.018) m^-1.
template <typename T> struct electron_volt_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 806554.429 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(806554.429); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.018 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.018); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2317154742200292e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_volt_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.018) / static_cast<T>(806554.429));
  }
};

/// \brief CODATA recommended value for the electron volt-joule relationship
/// (2010). \details electron volt-joule relationship = (1.602176565e-19
/// ± 3.5e-27) J.
template <typename T> struct electron_volt_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176565e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176565e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-27 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1845282701410628e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_volt_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-27) / static_cast<T>(1.602176565e-19));
  }
};

/// \brief CODATA recommended value for the electron volt-kelvin relationship
/// (2010). \details electron volt-kelvin relationship = (11604.519 ± 0.011) K.
template <typename T> struct electron_volt_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 11604.519 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(11604.519); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.011 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.011); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.479065870804295e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = electron_volt_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.011) / static_cast<T>(11604.519));
  }
};

/// \brief CODATA recommended value for the electron volt-kilogram relationship
/// (2010). \details electron volt-kilogram relationship = (1.782661845e-36
/// ± 3.9e-44) kg.
template <typename T> struct electron_volt_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.782661845e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = electron_volt_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.782661845e-36); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.9e-44 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// electron_volt_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.9e-44); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.18773964952394e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// electron_volt_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.9e-44) / static_cast<T>(1.782661845e-36));
  }
};

/// \brief CODATA recommended value for the elementary charge (2010).
/// \details elementary charge = (1.602176565e-19 ± 3.5e-27) C.
template <typename T> struct elementary_charge {
  /// \brief Returns the constant's value.
  /// \details value = 1.602176565e-19 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = elementary_charge<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.602176565e-19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-27 C.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = elementary_charge<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1845282701410628e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = elementary_charge<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-27) / static_cast<T>(1.602176565e-19));
  }
};

/// \brief CODATA recommended value for the elementary charge over h (2010).
/// \details elementary charge over h = (241798934800000.0 ± 5300000.0) A J^-1.
template <typename T> struct elementary_charge_over_h {
  /// \brief Returns the constant's value.
  /// \details value = 241798934800000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = elementary_charge_over_h<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(241798934800000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5300000.0 A J^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = elementary_charge_over_h<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5300000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.191903783357775e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = elementary_charge_over_h<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5300000.0) /
                    static_cast<T>(241798934800000.0));
  }
};

/// \brief CODATA recommended value for the Faraday constant (2010).
/// \details Faraday constant = (96485.3365 ± 0.0021) C mol^-1.
template <typename T> struct Faraday_constant {
  /// \brief Returns the constant's value.
  /// \details value = 96485.3365 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Faraday_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.3365); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0021 C mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Faraday_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0021); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1764965290865723e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Faraday_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0021) / static_cast<T>(96485.3365));
  }
};

/// \brief CODATA recommended value for the Faraday constant for conventional
/// electric current (2010). \details Faraday constant for conventional electric
/// current = (96485.3321 ± 0.0043) C_90 mol^-1.
template <typename T>
struct Faraday_constant_for_conventional_electric_current {
  /// \brief Returns the constant's value.
  /// \details value = 96485.3321 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// Faraday_constant_for_conventional_electric_current<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(96485.3321); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0043 C_90 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Faraday_constant_for_conventional_electric_current<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0043); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.456635953269419e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Faraday_constant_for_conventional_electric_current<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0043) / static_cast<T>(96485.3321));
  }
};

/// \brief CODATA recommended value for the Fermi coupling constant (2010).
/// \details Fermi coupling constant = (1.166364e-05 ± 5e-11) GeV^-2.
template <typename T> struct Fermi_coupling_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.166364e-05 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Fermi_coupling_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.166364e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-11 GeV^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Fermi_coupling_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.2868264109660445e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Fermi_coupling_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-11) / static_cast<T>(1.166364e-05));
  }
};

/// \brief CODATA recommended value for the fine-structure constant (2010).
/// \details fine-structure constant = (0.0072973525698 ± 2.4e-12) .
template <typename T> struct fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0072973525698 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0072973525698); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-12 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = fine_structure_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.288863977783353e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-12) / static_cast<T>(0.0072973525698));
  }
};

/// \brief CODATA recommended value for the first radiation constant (2010).
/// \details first radiation constant = (3.74177153e-16 ± 1.7e-23) W m^2.
template <typename T> struct first_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.74177153e-16 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = first_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.74177153e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-23 W m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = first_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.5433025142505166e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = first_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-23) / static_cast<T>(3.74177153e-16));
  }
};

/// \brief CODATA recommended value for the first radiation constant for
/// spectral radiance (2010). \details first radiation constant for spectral
/// radiance = (1.191042869e-16 ± 5.3e-24) W m^2 sr^-1.
template <typename T> struct first_radiation_constant_for_spectral_radiance {
  /// \brief Returns the constant's value.
  /// \details value = 1.191042869e-16 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// first_radiation_constant_for_spectral_radiance<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.191042869e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-24 W m^2 sr^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// first_radiation_constant_for_spectral_radiance<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.449881811936695e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// first_radiation_constant_for_spectral_radiance<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-24) / static_cast<T>(1.191042869e-16));
  }
};

/// \brief CODATA recommended value for the hartree-atomic mass unit
/// relationship (2010). \details hartree-atomic mass unit relationship =
/// (2.9212623246e-08 ± 2.1e-17) u.
template <typename T> struct hartree_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.9212623246e-08 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9212623246e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-17 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hartree_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.188673137348413e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// hartree_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-17) / static_cast<T>(2.9212623246e-08));
  }
};

/// \brief CODATA recommended value for the hartree-electron volt relationship
/// (2010). \details hartree-electron volt relationship = (27.21138505 ± 6e-07)
/// eV.
template <typename T> struct hartree_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138505 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138505); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hartree_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.204959427451121e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// hartree_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-07) / static_cast<T>(27.21138505));
  }
};

/// \brief CODATA recommended value for the Hartree energy (2010).
/// \details Hartree energy = (4.35974434e-18 ± 1.9e-25) J.
template <typename T> struct Hartree_energy {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974434e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Hartree_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974434e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Hartree_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.35805371101187e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Hartree_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-25) / static_cast<T>(4.35974434e-18));
  }
};

/// \brief CODATA recommended value for the Hartree energy in eV (2010).
/// \details Hartree energy in eV = (27.21138505 ± 6e-07) eV.
template <typename T> struct Hartree_energy_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 27.21138505 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Hartree_energy_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(27.21138505); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Hartree_energy_in_eV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.204959427451121e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Hartree_energy_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e-07) / static_cast<T>(27.21138505));
  }
};

/// \brief CODATA recommended value for the hartree-hertz relationship (2010).
/// \details hartree-hertz relationship = (6579683920729000.0 ± 33000.0) Hz.
template <typename T> struct hartree_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6579683920729000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(6579683920729000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 33000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hartree_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(33000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.01543849181493e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hartree_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(33000.0) /
                    static_cast<T>(6579683920729000.0));
  }
};

/// \brief CODATA recommended value for the hartree-inverse meter relationship
/// (2010). \details hartree-inverse meter relationship = (21947463.13708 ±
/// 0.00011) m^-1.
template <typename T> struct hartree_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 21947463.13708 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(21947463.13708); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00011 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hartree_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00011); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.011968778029576e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// hartree_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00011) / static_cast<T>(21947463.13708));
  }
};

/// \brief CODATA recommended value for the hartree-joule relationship (2010).
/// \details hartree-joule relationship = (4.35974434e-18 ± 1.9e-25) J.
template <typename T> struct hartree_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.35974434e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.35974434e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.9e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hartree_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.9e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.35805371101187e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hartree_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.9e-25) / static_cast<T>(4.35974434e-18));
  }
};

/// \brief CODATA recommended value for the hartree-kelvin relationship (2010).
/// \details hartree-kelvin relationship = (315775.04 ± 0.29) K.
template <typename T> struct hartree_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 315775.04 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(315775.04); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.29 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hartree_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.183753092074662e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hartree_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.29) / static_cast<T>(315775.04));
  }
};

/// \brief CODATA recommended value for the hartree-kilogram relationship
/// (2010). \details hartree-kilogram relationship = (4.85086979e-35 ± 2.1e-42)
/// kg.
template <typename T> struct hartree_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.85086979e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hartree_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.85086979e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hartree_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.329120530773926e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hartree_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-42) / static_cast<T>(4.85086979e-35));
  }
};

/// \brief CODATA recommended value for the helion-electron mass ratio (2010).
/// \details helion-electron mass ratio = (5495.8852754 ± 5e-06) .
template <typename T> struct helion_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5495.8852754 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5495.8852754); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.097715380596426e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-06) / static_cast<T>(5495.8852754));
  }
};

/// \brief CODATA recommended value for the helion g factor (2010).
/// \details helion g factor = (-4.255250613 ± 5e-08) .
template <typename T> struct helion_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -4.255250613 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.255250613); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1750189247901765e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-08) / static_cast<T>(-4.255250613));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. (2010).
/// \details helion mag. mom. = (-1.074617486e-26 ± 2.7e-34) J T^-1.
template <typename T> struct helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.074617486e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074617486e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5125219300591206e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-34) / static_cast<T>(-1.074617486e-26));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to Bohr magneton
/// ratio (2010). \details helion mag. mom. to Bohr magneton ratio =
/// (-0.001158740958 ± 1.4e-11) .
template <typename T> struct helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158740958 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158740958); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082079176837038e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// helion_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158740958));
  }
};

/// \brief CODATA recommended value for the helion mag. mom. to nuclear magneton
/// ratio (2010). \details helion mag. mom. to nuclear magneton ratio =
/// (-2.127625306 ± 2.5e-08) .
template <typename T> struct helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127625306 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127625306); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.1750189250663104e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// helion_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127625306));
  }
};

/// \brief CODATA recommended value for the helion mass (2010).
/// \details helion mass = (5.00641234e-27 ± 2.2e-34) kg.
template <typename T> struct helion_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.00641234e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.00641234e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.394364368317293e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-34) / static_cast<T>(5.00641234e-27));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent
/// (2010). \details helion mass energy equivalent = (4.49953902e-10 ± 2e-17) J.
template <typename T> struct helion_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.49953902e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.49953902e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4448997799779056e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-17) / static_cast<T>(4.49953902e-10));
  }
};

/// \brief CODATA recommended value for the helion mass energy equivalent in MeV
/// (2010). \details helion mass energy equivalent in MeV = (2808.391482
/// ± 6.2e-05) MeV.
template <typename T> struct helion_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.391482 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.391482); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// helion_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.207669422065282e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// helion_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-05) / static_cast<T>(2808.391482));
  }
};

/// \brief CODATA recommended value for the helion mass in u (2010).
/// \details helion mass in u = (3.0149322468 ± 2.5e-09) u.
template <typename T> struct helion_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.0149322468 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.0149322468); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.292060303024916e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(3.0149322468));
  }
};

/// \brief CODATA recommended value for the helion molar mass (2010).
/// \details helion molar mass = (0.0030149322468 ± 2.5e-12) kg mol^-1.
template <typename T> struct helion_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0030149322468 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0030149322468); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.292060303024916e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-12) / static_cast<T>(0.0030149322468));
  }
};

/// \brief CODATA recommended value for the helion-proton mass ratio (2010).
/// \details helion-proton mass ratio = (2.9931526707 ± 2.5e-09) .
template <typename T> struct helion_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.9931526707 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = helion_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9931526707); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = helion_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.352397204701665e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = helion_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(2.9931526707));
  }
};

/// \brief CODATA recommended value for the hertz-atomic mass unit relationship
/// (2010). \details hertz-atomic mass unit relationship = (4.4398216689e-24
/// ± 3.1e-33) u.
template <typename T> struct hertz_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.4398216689e-24 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.4398216689e-24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.1e-33 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hertz_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.1e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.982262422193297e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// hertz_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.1e-33) / static_cast<T>(4.4398216689e-24));
  }
};

/// \brief CODATA recommended value for the hertz-electron volt relationship
/// (2010). \details hertz-electron volt relationship = (4.135667516e-15
/// ± 9.1e-23) eV.
template <typename T> struct hertz_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667516e-15 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667516e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-23 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hertz_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2003703065573027e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-23) / static_cast<T>(4.135667516e-15));
  }
};

/// \brief CODATA recommended value for the hertz-hartree relationship (2010).
/// \details hertz-hartree relationship = (1.5198298460045e-16 ± 7.6e-28) E_h.
template <typename T> struct hertz_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.5198298460045e-16 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.5198298460045e-16);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-28 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hertz_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.00055977975412e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-28) /
                    static_cast<T>(1.5198298460045e-16));
  }
};

/// \brief CODATA recommended value for the hertz-inverse meter relationship
/// (2010). \details hertz-inverse meter relationship = (3.335640951e-09 ± 0.0)
/// m^-1.
template <typename T> struct hertz_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.335640951e-09 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.335640951e-09); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// hertz_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(3.335640951e-09));
  }
};

/// \brief CODATA recommended value for the hertz-joule relationship (2010).
/// \details hertz-joule relationship = (6.62606957e-34 ± 2.9e-41) J.
template <typename T> struct hertz_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.62606957e-34 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62606957e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-41 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hertz_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-41); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3766519040638443e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-41) / static_cast<T>(6.62606957e-34));
  }
};

/// \brief CODATA recommended value for the hertz-kelvin relationship (2010).
/// \details hertz-kelvin relationship = (4.7992434e-11 ± 4.4e-17) K.
template <typename T> struct hertz_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.7992434e-11 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.7992434e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-17 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hertz_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.168111790287611e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-17) / static_cast<T>(4.7992434e-11));
  }
};

/// \brief CODATA recommended value for the hertz-kilogram relationship (2010).
/// \details hertz-kilogram relationship = (7.37249668e-51 ± 3.3e-58) kg.
template <typename T> struct hertz_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.37249668e-51 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = hertz_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.37249668e-51); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-58 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = hertz_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-58); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4760956067327796e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = hertz_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-58) / static_cast<T>(7.37249668e-51));
  }
};

/// \brief CODATA recommended value for the inverse fine-structure constant
/// (2010). \details inverse fine-structure constant = (137.035999074 ± 4.4e-08)
/// .
template <typename T> struct inverse_fine_structure_constant {
  /// \brief Returns the constant's value.
  /// \details value = 137.035999074 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_fine_structure_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(137.035999074); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_fine_structure_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.210835130719178e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = inverse_fine_structure_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-08) / static_cast<T>(137.035999074));
  }
};

/// \brief CODATA recommended value for the inverse meter-atomic mass unit
/// relationship (2010). \details inverse meter-atomic mass unit relationship =
/// (1.3310250512e-15 ± 9.4e-25) u.
template <typename T> struct inverse_meter_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.3310250512e-15 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// inverse_meter_atomic_mass_unit_relationship<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(1.3310250512e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.4e-25 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_atomic_mass_unit_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.4e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.062226207932997e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// inverse_meter_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.4e-25) / static_cast<T>(1.3310250512e-15));
  }
};

/// \brief CODATA recommended value for the inverse meter-electron volt
/// relationship (2010). \details inverse meter-electron volt relationship =
/// (1.23984193e-06 ± 2.7e-14) eV.
template <typename T> struct inverse_meter_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.23984193e-06 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.23984193e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-14 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1776969585147033e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// inverse_meter_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-14) / static_cast<T>(1.23984193e-06));
  }
};

/// \brief CODATA recommended value for the inverse meter-hartree relationship
/// (2010). \details inverse meter-hartree relationship = (4.556335252755e-08
/// ± 2.3e-19) E_h.
template <typename T> struct inverse_meter_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.556335252755e-08 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(4.556335252755e-08);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-19 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_hartree_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.047916521527468e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// inverse_meter_hartree_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-19) /
                    static_cast<T>(4.556335252755e-08));
  }
};

/// \brief CODATA recommended value for the inverse meter-hertz relationship
/// (2010). \details inverse meter-hertz relationship = (299792458.0 ± 0.0) Hz.
template <typename T> struct inverse_meter_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_hertz_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = inverse_meter_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the inverse meter-joule relationship
/// (2010). \details inverse meter-joule relationship = (1.986445684e-25
/// ± 8.8e-33) J.
template <typename T> struct inverse_meter_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.986445684e-25 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.986445684e-25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.8e-33 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_joule_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.8e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4300229655813734e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = inverse_meter_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.8e-33) / static_cast<T>(1.986445684e-25));
  }
};

/// \brief CODATA recommended value for the inverse meter-kelvin relationship
/// (2010). \details inverse meter-kelvin relationship = (0.01438777 ± 1.3e-08)
/// K.
template <typename T> struct inverse_meter_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 0.01438777 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.01438777); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_kelvin_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.035451637050079e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = inverse_meter_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.01438777));
  }
};

/// \brief CODATA recommended value for the inverse meter-kilogram relationship
/// (2010). \details inverse meter-kilogram relationship = (2.210218902e-42
/// ± 9.8e-50) kg.
template <typename T> struct inverse_meter_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.210218902e-42 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_meter_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.210218902e-42); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.8e-50 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_meter_kilogram_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.8e-50); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4339499545190296e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// inverse_meter_kilogram_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.8e-50) / static_cast<T>(2.210218902e-42));
  }
};

/// \brief CODATA recommended value for the inverse of conductance quantum
/// (2010). \details inverse of conductance quantum = (12906.4037217 ± 4.2e-06)
/// ohm.
template <typename T> struct inverse_of_conductance_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 12906.4037217 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = inverse_of_conductance_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(12906.4037217); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-06 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// inverse_of_conductance_quantum<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.2541985285478005e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = inverse_of_conductance_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-06) / static_cast<T>(12906.4037217));
  }
};

/// \brief CODATA recommended value for the Josephson constant (2010).
/// \details Josephson constant = (483597870000000.0 ± 11000000.0) Hz V^-1.
template <typename T> struct Josephson_constant {
  /// \brief Returns the constant's value.
  /// \details value = 483597870000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Josephson_constant<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(483597870000000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 11000000.0 Hz V^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Josephson_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(11000000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2746171317917507e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Josephson_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(11000000.0) /
                    static_cast<T>(483597870000000.0));
  }
};

/// \brief CODATA recommended value for the joule-atomic mass unit relationship
/// (2010). \details joule-atomic mass unit relationship = (6700535850.0 ±
/// 300.0) u.
template <typename T> struct joule_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6700535850.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6700535850.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 300.0 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// joule_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(300.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.477253860226716e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// joule_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(300.0) / static_cast<T>(6700535850.0));
  }
};

/// \brief CODATA recommended value for the joule-electron volt relationship
/// (2010). \details joule-electron volt relationship = (6.24150934e+18 ±
/// 140000000000.0) eV.
template <typename T> struct joule_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.24150934e+18 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.24150934e+18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 140000000000.0 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// joule_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(140000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2430471921716293e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(140000000000.0) /
                    static_cast<T>(6.24150934e+18));
  }
};

/// \brief CODATA recommended value for the joule-hartree relationship (2010).
/// \details joule-hartree relationship = (2.29371248e+17 ± 10000000000.0) E_h.
template <typename T> struct joule_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.29371248e+17 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.29371248e+17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 10000000000.0 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = joule_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(10000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3597443390114876e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(10000000000.0) /
                    static_cast<T>(2.29371248e+17));
  }
};

/// \brief CODATA recommended value for the joule-hertz relationship (2010).
/// \details joule-hertz relationship = (1.509190311e+33 ± 6.7e+25) Hz.
template <typename T> struct joule_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.509190311e+33 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.509190311e+33); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.7e+25 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = joule_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.7e+25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.439466614094901e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.7e+25) / static_cast<T>(1.509190311e+33));
  }
};

/// \brief CODATA recommended value for the joule-inverse meter relationship
/// (2010). \details joule-inverse meter relationship = (5.03411701e+24
/// ± 2.2e+17) m^-1.
template <typename T> struct joule_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.03411701e+24 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.03411701e+24); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e+17 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// joule_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e+17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.370180501624852e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e+17) / static_cast<T>(5.03411701e+24));
  }
};

/// \brief CODATA recommended value for the joule-kelvin relationship (2010).
/// \details joule-kelvin relationship = (7.2429716e+22 ± 6.6e+16) K.
template <typename T> struct joule_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 7.2429716e+22 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.2429716e+22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e+16 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = joule_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e+16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.112282036284665e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e+16) / static_cast<T>(7.2429716e+22));
  }
};

/// \brief CODATA recommended value for the joule-kilogram relationship (2010).
/// \details joule-kilogram relationship = (1.112650056e-17 ± 0.0) kg.
template <typename T> struct joule_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.112650056e-17 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = joule_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.112650056e-17); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = joule_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = joule_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.112650056e-17));
  }
};

/// \brief CODATA recommended value for the kelvin-atomic mass unit relationship
/// (2010). \details kelvin-atomic mass unit relationship = (9.2510868e-14
/// ± 8.4e-20) u.
template <typename T> struct kelvin_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 9.2510868e-14 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.2510868e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-20 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kelvin_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.080014253028088e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// kelvin_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-20) / static_cast<T>(9.2510868e-14));
  }
};

/// \brief CODATA recommended value for the kelvin-electron volt relationship
/// (2010). \details kelvin-electron volt relationship = (8.6173324e-05
/// ± 7.8e-11) eV.
template <typename T> struct kelvin_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.6173324e-05 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.6173324e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.8e-11 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kelvin_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.8e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.051525040394172e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_electron_volt_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.8e-11) / static_cast<T>(8.6173324e-05));
  }
};

/// \brief CODATA recommended value for the kelvin-hartree relationship (2010).
/// \details kelvin-hartree relationship = (3.1668114e-06 ± 2.9e-12) E_h.
template <typename T> struct kelvin_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 3.1668114e-06 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.1668114e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-12 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kelvin_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.157476191982888e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-12) / static_cast<T>(3.1668114e-06));
  }
};

/// \brief CODATA recommended value for the kelvin-hertz relationship (2010).
/// \details kelvin-hertz relationship = (20836618000.0 ± 19000.0) Hz.
template <typename T> struct kelvin_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 20836618000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(20836618000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 19000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kelvin_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(19000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.118562330988647e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(19000.0) / static_cast<T>(20836618000.0));
  }
};

/// \brief CODATA recommended value for the kelvin-inverse meter relationship
/// (2010). \details kelvin-inverse meter relationship = (69.503476 ± 6.3e-05)
/// m^-1.
template <typename T> struct kelvin_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 69.503476 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(69.503476); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kelvin_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.064294856274526e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_inverse_meter_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-05) / static_cast<T>(69.503476));
  }
};

/// \brief CODATA recommended value for the kelvin-joule relationship (2010).
/// \details kelvin-joule relationship = (1.3806488e-23 ± 1.3e-29) J.
template <typename T> struct kelvin_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.3806488e-23 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3806488e-23); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-29 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kelvin_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.415863034828263e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-29) / static_cast<T>(1.3806488e-23));
  }
};

/// \brief CODATA recommended value for the kelvin-kilogram relationship (2010).
/// \details kelvin-kilogram relationship = (1.536179e-40 ± 1.4e-46) kg.
template <typename T> struct kelvin_kilogram_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.536179e-40 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kelvin_kilogram_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.536179e-40); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-46 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kelvin_kilogram_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-46); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.1135212758409e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kelvin_kilogram_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-46) / static_cast<T>(1.536179e-40));
  }
};

/// \brief CODATA recommended value for the kilogram-atomic mass unit
/// relationship (2010). \details kilogram-atomic mass unit relationship =
/// (6.02214129e+26 ± 2.7e+19) u.
template <typename T> struct kilogram_atomic_mass_unit_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.02214129e+26 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_atomic_mass_unit_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.02214129e+26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e+19 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kilogram_atomic_mass_unit_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4834550867869124e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// kilogram_atomic_mass_unit_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e+19) / static_cast<T>(6.02214129e+26));
  }
};

/// \brief CODATA recommended value for the kilogram-electron volt relationship
/// (2010). \details kilogram-electron volt relationship = (5.60958885e+35
/// ± 1.2e+28) eV.
template <typename T> struct kilogram_electron_volt_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 5.60958885e+35 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_electron_volt_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.60958885e+35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e+28 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kilogram_electron_volt_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e+28); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.139194212067788e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// kilogram_electron_volt_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e+28) / static_cast<T>(5.60958885e+35));
  }
};

/// \brief CODATA recommended value for the kilogram-hartree relationship
/// (2010). \details kilogram-hartree relationship = (2.061485968e+34 ± 9.1e+26)
/// E_h.
template <typename T> struct kilogram_hartree_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 2.061485968e+34 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_hartree_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.061485968e+34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e+26 E_h.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kilogram_hartree_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e+26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4142915068340646e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kilogram_hartree_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e+26) / static_cast<T>(2.061485968e+34));
  }
};

/// \brief CODATA recommended value for the kilogram-hertz relationship (2010).
/// \details kilogram-hertz relationship = (1.356392608e+50 ± 6e+42) Hz.
template <typename T> struct kilogram_hertz_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 1.356392608e+50 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_hertz_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.356392608e+50); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6e+42 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kilogram_hertz_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6e+42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.423498008328869e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kilogram_hertz_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6e+42) / static_cast<T>(1.356392608e+50));
  }
};

/// \brief CODATA recommended value for the kilogram-inverse meter relationship
/// (2010). \details kilogram-inverse meter relationship = (4.52443873e+41 ±
/// 2e+34) m^-1.
template <typename T> struct kilogram_inverse_meter_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 4.52443873e+41 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_inverse_meter_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.52443873e+41); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e+34 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// kilogram_inverse_meter_relationship<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e+34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.420437803121714e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// kilogram_inverse_meter_relationship<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e+34) / static_cast<T>(4.52443873e+41));
  }
};

/// \brief CODATA recommended value for the kilogram-joule relationship (2010).
/// \details kilogram-joule relationship = (8.987551787e+16 ± 0.0) J.
template <typename T> struct kilogram_joule_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 8.987551787e+16 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_joule_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.987551787e+16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kilogram_joule_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kilogram_joule_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(8.987551787e+16));
  }
};

/// \brief CODATA recommended value for the kilogram-kelvin relationship (2010).
/// \details kilogram-kelvin relationship = (6.5096582e+39 ± 5.9e+33) K.
template <typename T> struct kilogram_kelvin_relationship {
  /// \brief Returns the constant's value.
  /// \details value = 6.5096582e+39 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = kilogram_kelvin_relationship<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.5096582e+39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.9e+33 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = kilogram_kelvin_relationship<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.9e+33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.063455896962454e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = kilogram_kelvin_relationship<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.9e+33) / static_cast<T>(6.5096582e+39));
  }
};

/// \brief CODATA recommended value for the lattice parameter of silicon (2010).
/// \details lattice parameter of silicon = (5.431020504e-10 ± 8.9e-18) m.
template <typename T> struct lattice_parameter_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 5.431020504e-10 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = lattice_parameter_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.431020504e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.9e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = lattice_parameter_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.9e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.6387343766139464e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = lattice_parameter_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.9e-18) / static_cast<T>(5.431020504e-10));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K, 100
/// kPa) (2010). \details Loschmidt constant (273.15 K, 100 kPa) =
/// (2.6516462e+25 ± 2.4e+19) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.6516462e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Loschmidt_constant_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.6516462e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e+19 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.050981235731977e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Loschmidt_constant_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e+19) / static_cast<T>(2.6516462e+25));
  }
};

/// \brief CODATA recommended value for the Loschmidt constant (273.15 K,
/// 101.325 kPa) (2010). \details Loschmidt constant (273.15 K, 101.325 kPa) =
/// (2.6867805e+25 ± 2.4e+19) m^-3.
template <typename T> struct Loschmidt_constant_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 2.6867805e+25 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Loschmidt_constant_27315_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.6867805e+25); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e+19 m^-3.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e+19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.932624008548521e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Loschmidt_constant_27315_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e+19) / static_cast<T>(2.6867805e+25));
  }
};

/// \brief CODATA recommended value for the mag. constant (2010).
/// \details mag. constant = (1.2566370614e-06 ± 0.0) N A^-2.
template <typename T> struct mag_constant {
  /// \brief Returns the constant's value.
  /// \details value = 1.2566370614e-06 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = mag_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.2566370614e-06); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 N A^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = mag_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = mag_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(1.2566370614e-06));
  }
};

/// \brief CODATA recommended value for the mag. flux quantum (2010).
/// \details mag. flux quantum = (2.067833758e-15 ± 4.6e-23) Wb.
template <typename T> struct mag_flux_quantum {
  /// \brief Returns the constant's value.
  /// \details value = 2.067833758e-15 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = mag_flux_quantum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.067833758e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-23 Wb.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = mag_flux_quantum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2245502000359545e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = mag_flux_quantum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-23) / static_cast<T>(2.067833758e-15));
  }
};

/// \brief CODATA recommended value for the molar gas constant (2010).
/// \details molar gas constant = (8.3144621 ± 7.5e-06) J mol^-1 K^-1.
template <typename T> struct molar_gas_constant {
  /// \brief Returns the constant's value.
  /// \details value = 8.3144621 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_gas_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.3144621); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-06 J mol^-1 K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_gas_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.02042719035306e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_gas_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-06) / static_cast<T>(8.3144621));
  }
};

/// \brief CODATA recommended value for the molar mass constant (2010).
/// \details molar mass constant = (0.001 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.001 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_mass_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_mass_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_mass_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.001));
  }
};

/// \brief CODATA recommended value for the molar mass of carbon-12 (2010).
/// \details molar mass of carbon-12 = (0.012 ± 0.0) kg mol^-1.
template <typename T> struct molar_mass_of_carbon_12 {
  /// \brief Returns the constant's value.
  /// \details value = 0.012 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_mass_of_carbon_12<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.012); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_mass_of_carbon_12<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_mass_of_carbon_12<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(0.012));
  }
};

/// \brief CODATA recommended value for the molar Planck constant (2010).
/// \details molar Planck constant = (3.9903127176e-10 ± 2.8e-19) J s mol^-1.
template <typename T> struct molar_Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 3.9903127176e-10 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.9903127176e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-19 J s mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.016993900378011e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-19) / static_cast<T>(3.9903127176e-10));
  }
};

/// \brief CODATA recommended value for the molar Planck constant times c
/// (2010). \details molar Planck constant times c = (0.119626565779 ± 8.4e-11)
/// J m mol^-1.
template <typename T> struct molar_Planck_constant_times_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.119626565779 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_Planck_constant_times_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.119626565779); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-11 J m mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_Planck_constant_times_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.021851664218374e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_Planck_constant_times_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-11) / static_cast<T>(0.119626565779));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 100 kPa) (2010). \details molar volume of ideal gas (273.15 K, 100 kPa) =
/// (0.022710953 ± 2.1e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022710953 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_volume_of_ideal_gas_27315_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.022710953); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.246639716087652e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-08) / static_cast<T>(0.022710953));
  }
};

/// \brief CODATA recommended value for the molar volume of ideal gas (273.15 K,
/// 101.325 kPa) (2010). \details molar volume of ideal gas (273.15 K, 101.325
/// kPa) = (0.022413968 ± 2e-08) m^3 mol^-1.
template <typename T> struct molar_volume_of_ideal_gas_27315_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = 0.022413968 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.022413968); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-08 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.923007296164606e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// molar_volume_of_ideal_gas_27315_K_101325_kPa<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-08) / static_cast<T>(0.022413968));
  }
};

/// \brief CODATA recommended value for the molar volume of silicon (2010).
/// \details molar volume of silicon = (1.205883301e-05 ± 8e-13) m^3 mol^-1.
template <typename T> struct molar_volume_of_silicon {
  /// \brief Returns the constant's value.
  /// \details value = 1.205883301e-05 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = molar_volume_of_silicon<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.205883301e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-13 m^3 mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = molar_volume_of_silicon<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.634141125734024e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = molar_volume_of_silicon<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-13) / static_cast<T>(1.205883301e-05));
  }
};

/// \brief CODATA recommended value for the Mo x unit (2010).
/// \details Mo x unit = (1.00209952e-13 ± 5.3e-20) m.
template <typename T> struct Mo_x_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.00209952e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Mo_x_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00209952e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Mo_x_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.288895857369535e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Mo_x_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.3e-20) / static_cast<T>(1.00209952e-13));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength (2010).
/// \details muon Compton wavelength = (1.173444103e-14 ± 3e-22) m.
template <typename T> struct muon_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.173444103e-14 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.173444103e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5565768257135295e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-22) / static_cast<T>(1.173444103e-14));
  }
};

/// \brief CODATA recommended value for the muon Compton wavelength over 2 pi
/// (2010). \details muon Compton wavelength over 2 pi = (1.867594294e-15
/// ± 4.7e-23) m.
template <typename T> struct muon_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.867594294e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.867594294e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-23 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// muon_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5166065323178803e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-23) / static_cast<T>(1.867594294e-15));
  }
};

/// \brief CODATA recommended value for the muon-electron mass ratio (2010).
/// \details muon-electron mass ratio = (206.7682843 ± 5.2e-06) .
template <typename T> struct muon_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 206.7682843 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(206.7682843); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.2e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.2e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5148924640953747e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.2e-06) / static_cast<T>(206.7682843));
  }
};

/// \brief CODATA recommended value for the muon g factor (2010).
/// \details muon g factor = (-2.0023318418 ± 1.3e-09) .
template <typename T> struct muon_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -2.0023318418 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.0023318418); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.492430339775063e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-09) / static_cast<T>(-2.0023318418));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. (2010).
/// \details muon mag. mom. = (-4.49044807e-26 ± 1.5e-33) J T^-1.
template <typename T> struct muon_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -4.49044807e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-4.49044807e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.3404238878103766e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-33) / static_cast<T>(-4.49044807e-26));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. anomaly (2010).
/// \details muon mag. mom. anomaly = (0.00116592091 ± 6.3e-10) .
template <typename T> struct muon_mag_mom_anomaly {
  /// \brief Returns the constant's value.
  /// \details value = 0.00116592091 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mag_mom_anomaly<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00116592091); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_mag_mom_anomaly<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.403453995863236e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_mag_mom_anomaly<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-10) / static_cast<T>(0.00116592091));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to Bohr magneton
/// ratio (2010). \details muon mag. mom. to Bohr magneton ratio =
/// (-0.00484197044 ± 1.2e-10) .
template <typename T> struct muon_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00484197044 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00484197044); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.478329875966777e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// muon_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-10) / static_cast<T>(-0.00484197044));
  }
};

/// \brief CODATA recommended value for the muon mag. mom. to nuclear magneton
/// ratio (2010). \details muon mag. mom. to nuclear magneton ratio =
/// (-8.89059697 ± 2.2e-07) .
template <typename T> struct muon_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -8.89059697 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-8.89059697); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.474524497537762e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// muon_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-07) / static_cast<T>(-8.89059697));
  }
};

/// \brief CODATA recommended value for the muon mass (2010).
/// \details muon mass = (1.883531475e-28 ± 9.6e-36) kg.
template <typename T> struct muon_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.883531475e-28 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.883531475e-28); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.6e-36 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.6e-36); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.096808907852204e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.6e-36) / static_cast<T>(1.883531475e-28));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent (2010).
/// \details muon mass energy equivalent = (1.692833667e-11 ± 8.6e-19) J.
template <typename T> struct muon_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.692833667e-11 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.692833667e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.6e-19 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.6e-19); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.080239227071091e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.6e-19) / static_cast<T>(1.692833667e-11));
  }
};

/// \brief CODATA recommended value for the muon mass energy equivalent in MeV
/// (2010). \details muon mass energy equivalent in MeV = (105.6583715
/// ± 3.5e-06) MeV.
template <typename T> struct muon_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 105.6583715 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(105.6583715); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-06 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// muon_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.312562885752976e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// muon_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-06) / static_cast<T>(105.6583715));
  }
};

/// \brief CODATA recommended value for the muon mass in u (2010).
/// \details muon mass in u = (0.1134289267 ± 2.9e-09) u.
template <typename T> struct muon_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.1134289267 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1134289267); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5566670551948368e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-09) / static_cast<T>(0.1134289267));
  }
};

/// \brief CODATA recommended value for the muon molar mass (2010).
/// \details muon molar mass = (0.0001134289267 ± 2.9e-12) kg mol^-1.
template <typename T> struct muon_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0001134289267 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0001134289267); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5566670551948368e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-12) / static_cast<T>(0.0001134289267));
  }
};

/// \brief CODATA recommended value for the muon-neutron mass ratio (2010).
/// \details muon-neutron mass ratio = (0.1124545177 ± 2.8e-09) .
template <typename T> struct muon_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1124545177 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1124545177); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.489895521556267e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-09) / static_cast<T>(0.1124545177));
  }
};

/// \brief CODATA recommended value for the muon-proton mag. mom. ratio (2010).
/// \details muon-proton mag. mom. ratio = (-3.183345107 ± 8.4e-08) .
template <typename T> struct muon_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -3.183345107 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.183345107); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.6387336960510075e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-08) / static_cast<T>(-3.183345107));
  }
};

/// \brief CODATA recommended value for the muon-proton mass ratio (2010).
/// \details muon-proton mass ratio = (0.1126095272 ± 2.8e-09) .
template <typename T> struct muon_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.1126095272 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.1126095272); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.8e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.8e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.486468125407421e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.8e-09) / static_cast<T>(0.1126095272));
  }
};

/// \brief CODATA recommended value for the muon-tau mass ratio (2010).
/// \details muon-tau mass ratio = (0.0594649 ± 5.4e-06) .
template <typename T> struct muon_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.0594649 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = muon_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0594649); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.4e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = muon_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.080987271482841e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = muon_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.4e-06) / static_cast<T>(0.0594649));
  }
};

/// \brief CODATA recommended value for the natural unit of action (2010).
/// \details natural unit of action = (1.054571726e-34 ± 4.7e-42) J s.
template <typename T> struct natural_unit_of_action {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571726e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_action<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571726e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_action<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.456785521670624e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_action<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-42) / static_cast<T>(1.054571726e-34));
  }
};

/// \brief CODATA recommended value for the natural unit of action in eV s
/// (2010). \details natural unit of action in eV s = (6.58211928e-16 ± 1.5e-23)
/// eV s.
template <typename T> struct natural_unit_of_action_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.58211928e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_action_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.58211928e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// natural_unit_of_action_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.27890127205352e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_action_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-23) / static_cast<T>(6.58211928e-16));
  }
};

/// \brief CODATA recommended value for the natural unit of energy (2010).
/// \details natural unit of energy = (8.18710506e-14 ± 3.6e-21) J.
template <typename T> struct natural_unit_of_energy {
  /// \brief Returns the constant's value.
  /// \details value = 8.18710506e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_energy<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.18710506e-14); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.6e-21 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_energy<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.6e-21); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.397158670393317e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_energy<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.6e-21) / static_cast<T>(8.18710506e-14));
  }
};

/// \brief CODATA recommended value for the natural unit of energy in MeV
/// (2010). \details natural unit of energy in MeV = (0.510998928 ± 1.1e-08)
/// MeV.
template <typename T> struct natural_unit_of_energy_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 0.510998928 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_energy_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.510998928); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_energy_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1526463945928275e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_energy_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(0.510998928));
  }
};

/// \brief CODATA recommended value for the natural unit of length (2010).
/// \details natural unit of length = (3.86159268e-13 ± 2.5e-22) m.
template <typename T> struct natural_unit_of_length {
  /// \brief Returns the constant's value.
  /// \details value = 3.86159268e-13 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.86159268e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-22 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-22); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.474012686392392e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-22) / static_cast<T>(3.86159268e-13));
  }
};

/// \brief CODATA recommended value for the natural unit of mass (2010).
/// \details natural unit of mass = (9.10938291e-31 ± 4e-38) kg.
template <typename T> struct natural_unit_of_mass {
  /// \brief Returns the constant's value.
  /// \details value = 9.10938291e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.10938291e-31); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4e-38 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4e-38); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3910768045648e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4e-38) / static_cast<T>(9.10938291e-31));
  }
};

/// \brief CODATA recommended value for the natural unit of mom.um (2010).
/// \details natural unit of mom.um = (2.73092429e-22 ± 1.2e-29) kg m s^-1.
template <typename T> struct natural_unit_of_momum {
  /// \brief Returns the constant's value.
  /// \details value = 2.73092429e-22 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_momum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.73092429e-22); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-29 kg m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_momum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-29); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.394116689335243e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_momum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-29) / static_cast<T>(2.73092429e-22));
  }
};

/// \brief CODATA recommended value for the natural unit of mom.um in MeV/c
/// (2010). \details natural unit of mom.um in MeV/c = (0.510998928 ± 1.1e-08)
/// MeV/c.
template <typename T> struct natural_unit_of_momum_in_MeV_c {
  /// \brief Returns the constant's value.
  /// \details value = 0.510998928 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_momum_in_MeV_c<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.510998928); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 MeV/c.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// natural_unit_of_momum_in_MeV_c<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1526463945928275e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_momum_in_MeV_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(0.510998928));
  }
};

/// \brief CODATA recommended value for the natural unit of time (2010).
/// \details natural unit of time = (1.28808866833e-21 ± 8.3e-31) s.
template <typename T> struct natural_unit_of_time {
  /// \brief Returns the constant's value.
  /// \details value = 1.28808866833e-21 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_time<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.28808866833e-21);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.3e-31 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.3e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.443655785560869e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.3e-31) /
                    static_cast<T>(1.28808866833e-21));
  }
};

/// \brief CODATA recommended value for the natural unit of velocity (2010).
/// \details natural unit of velocity = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct natural_unit_of_velocity {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = natural_unit_of_velocity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = natural_unit_of_velocity<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = natural_unit_of_velocity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength (2010).
/// \details neutron Compton wavelength = (1.3195909068e-15 ± 1.1e-24) m.
template <typename T> struct neutron_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.3195909068e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.3195909068e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-24 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-24); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.335916793087741e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-24) / static_cast<T>(1.3195909068e-15));
  }
};

/// \brief CODATA recommended value for the neutron Compton wavelength over 2 pi
/// (2010). \details neutron Compton wavelength over 2 pi = (2.1001941568e-16
/// ± 1.7e-25) m.
template <typename T> struct neutron_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.1001941568e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1001941568e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.094489714180696e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-25) / static_cast<T>(2.1001941568e-16));
  }
};

/// \brief CODATA recommended value for the neutron-electron mag. mom. ratio
/// (2010). \details neutron-electron mag. mom. ratio = (0.00104066882
/// ± 2.5e-10) .
template <typename T> struct neutron_electron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00104066882 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_electron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00104066882); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_electron_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4023012431563005e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_electron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(0.00104066882));
  }
};

/// \brief CODATA recommended value for the neutron-electron mass ratio (2010).
/// \details neutron-electron mass ratio = (1838.6836605 ± 1.1e-06) .
template <typename T> struct neutron_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1838.6836605 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1838.6836605); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.982540790626665e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-06) / static_cast<T>(1838.6836605));
  }
};

/// \brief CODATA recommended value for the neutron g factor (2010).
/// \details neutron g factor = (-3.82608545 ± 9e-07) .
template <typename T> struct neutron_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = -3.82608545 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-3.82608545); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3522736534804782e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-07) / static_cast<T>(-3.82608545));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio (2010).
/// \details neutron gyromag. ratio = (183247179.0 ± 43.0) s^-1 T^-1.
template <typename T> struct neutron_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 183247179.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(183247179.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 43.0 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(43.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.346557269511909e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(43.0) / static_cast<T>(183247179.0));
  }
};

/// \brief CODATA recommended value for the neutron gyromag. ratio over 2 pi
/// (2010). \details neutron gyromag. ratio over 2 pi = (29.1646943 ± 6.9e-06)
/// MHz T^-1.
template <typename T> struct neutron_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 29.1646943 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(29.1646943); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.9e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.9e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3658742755962986e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.9e-06) / static_cast<T>(29.1646943));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. (2010).
/// \details neutron mag. mom. = (-9.6623647e-27 ± 2.3e-33) J T^-1.
template <typename T> struct neutron_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -9.6623647e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-9.6623647e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-33 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-33); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3803696832101563e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-33) / static_cast<T>(-9.6623647e-27));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to Bohr magneton
/// ratio (2010). \details neutron mag. mom. to Bohr magneton ratio =
/// (-0.00104187563 ± 2.5e-10) .
template <typename T> struct neutron_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.00104187563 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.00104187563); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.399518645042115e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-10) / static_cast<T>(-0.00104187563));
  }
};

/// \brief CODATA recommended value for the neutron mag. mom. to nuclear
/// magneton ratio (2010). \details neutron mag. mom. to nuclear magneton ratio
/// = (-1.91304272 ± 4.5e-07) .
template <typename T> struct neutron_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.91304272 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.91304272); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3522736596284686e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-07) / static_cast<T>(-1.91304272));
  }
};

/// \brief CODATA recommended value for the neutron mass (2010).
/// \details neutron mass = (1.674927351e-27 ± 7.4e-35) kg.
template <typename T> struct neutron_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.674927351e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.674927351e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.418102072058169e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-35) / static_cast<T>(1.674927351e-27));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent
/// (2010). \details neutron mass energy equivalent = (1.505349631e-10
/// ± 6.6e-18) J.
template <typename T> struct neutron_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.505349631e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.505349631e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.384363515348681e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-18) / static_cast<T>(1.505349631e-10));
  }
};

/// \brief CODATA recommended value for the neutron mass energy equivalent in
/// MeV (2010). \details neutron mass energy equivalent in MeV = (939.565379
/// ± 2.1e-05) MeV.
template <typename T> struct neutron_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 939.565379 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(939.565379); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.235075969098687e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-05) / static_cast<T>(939.565379));
  }
};

/// \brief CODATA recommended value for the neutron mass in u (2010).
/// \details neutron mass in u = (1.008664916 ± 4.3e-10) u.
template <typename T> struct neutron_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.008664916 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.008664916); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-10 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.263060935094524e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-10) / static_cast<T>(1.008664916));
  }
};

/// \brief CODATA recommended value for the neutron molar mass (2010).
/// \details neutron molar mass = (0.001008664916 ± 4.3e-13) kg mol^-1.
template <typename T> struct neutron_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.001008664916 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001008664916); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.3e-13 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.3e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.263060935094524e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.3e-13) / static_cast<T>(0.001008664916));
  }
};

/// \brief CODATA recommended value for the neutron-muon mass ratio (2010).
/// \details neutron-muon mass ratio = (8.892484 ± 2.2e-07) .
template <typename T> struct neutron_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.892484 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.892484); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4739993909463318e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-07) / static_cast<T>(8.892484));
  }
};

/// \brief CODATA recommended value for the neutron-proton mag. mom. ratio
/// (2010). \details neutron-proton mag. mom. ratio = (-0.68497934 ± 1.6e-07) .
template <typename T> struct neutron_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68497934 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68497934); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.335836873561763e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68497934));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// (2010). \details neutron-proton mass difference = (2.30557392e-30 ± 7.6e-37)
/// .
template <typename T> struct neutron_proton_mass_difference {
  /// \brief Returns the constant's value.
  /// \details value = 2.30557392e-30 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_proton_mass_difference<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.30557392e-30); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-37 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_proton_mass_difference<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.296359285674085e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_proton_mass_difference<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-37) / static_cast<T>(2.30557392e-30));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent (2010). \details neutron-proton mass difference energy
/// equivalent = (2.0721465e-13 ± 6.8e-20) .
template <typename T> struct neutron_proton_mass_difference_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.0721465e-13 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.0721465e-13); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.8e-20 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.8e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.281621256026058e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.8e-20) / static_cast<T>(2.0721465e-13));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference
/// energy equivalent in MeV (2010). \details neutron-proton mass difference
/// energy equivalent in MeV = (1.29333217 ± 4.2e-07) .
template <typename T>
struct neutron_proton_mass_difference_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.29333217 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.29333217); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.2474256014214817e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_proton_mass_difference_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.2e-07) / static_cast<T>(1.29333217));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass difference in u
/// (2010). \details neutron-proton mass difference in u = (0.00138844919
/// ± 4.5e-10) .
template <typename T> struct neutron_proton_mass_difference_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 0.00138844919 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_proton_mass_difference_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00138844919); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_proton_mass_difference_in_u<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.241026054399585e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_proton_mass_difference_in_u<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-10) / static_cast<T>(0.00138844919));
  }
};

/// \brief CODATA recommended value for the neutron-proton mass ratio (2010).
/// \details neutron-proton mass ratio = (1.00137841917 ± 4.5e-10) .
template <typename T> struct neutron_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.00137841917 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.00137841917); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4938056521428324e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-10) / static_cast<T>(1.00137841917));
  }
};

/// \brief CODATA recommended value for the neutron-tau mass ratio (2010).
/// \details neutron-tau mass ratio = (0.52879 ± 4.8e-05) .
template <typename T> struct neutron_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.52879 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.52879); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = neutron_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.077327483500067e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = neutron_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-05) / static_cast<T>(0.52879));
  }
};

/// \brief CODATA recommended value for the neutron to shielded proton mag. mom.
/// ratio (2010). \details neutron to shielded proton mag. mom. ratio =
/// (-0.68499694 ± 1.6e-07) .
template <typename T> struct neutron_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.68499694 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = neutron_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.68499694); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.6e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.6e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3357768576309262e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// neutron_to_shielded_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.6e-07) / static_cast<T>(-0.68499694));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// (2010). \details Newtonian constant of gravitation = (6.67384e-11 ± 8e-15)
/// m^3 kg^-1 s^-2.
template <typename T> struct Newtonian_constant_of_gravitation {
  /// \brief Returns the constant's value.
  /// \details value = 6.67384e-11 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Newtonian_constant_of_gravitation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.67384e-11); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-15 m^3 kg^-1 s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-15); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00011987101878378866.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Newtonian_constant_of_gravitation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-15) / static_cast<T>(6.67384e-11));
  }
};

/// \brief CODATA recommended value for the Newtonian constant of gravitation
/// over h-bar c (2010). \details Newtonian constant of gravitation over h-bar c
/// = (6.70837e-39 ± 8e-43) (GeV/c^2)^-2.
template <typename T> struct Newtonian_constant_of_gravitation_over_h_bar_c {
  /// \brief Returns the constant's value.
  /// \details value = 6.70837e-39 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(6.70837e-39); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8e-43 (GeV/c^2)^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8e-43); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.00011925400656195173.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Newtonian_constant_of_gravitation_over_h_bar_c<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8e-43) / static_cast<T>(6.70837e-39));
  }
};

/// \brief CODATA recommended value for the nuclear magneton (2010).
/// \details nuclear magneton = (5.05078353e-27 ± 1.1e-34) J T^-1.
template <typename T> struct nuclear_magneton {
  /// \brief Returns the constant's value.
  /// \details value = 5.05078353e-27 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = nuclear_magneton<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.05078353e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = nuclear_magneton<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.177879914010094e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = nuclear_magneton<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-34) / static_cast<T>(5.05078353e-27));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in eV/T (2010).
/// \details nuclear magneton in eV/T = (3.1524512605e-08 ± 2.2e-17) eV T^-1.
template <typename T> struct nuclear_magneton_in_eV_T {
  /// \brief Returns the constant's value.
  /// \details value = 3.1524512605e-08 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = nuclear_magneton_in_eV_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.1524512605e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-17 eV T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = nuclear_magneton_in_eV_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.978696316627794e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = nuclear_magneton_in_eV_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-17) / static_cast<T>(3.1524512605e-08));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in inverse meters
/// per tesla (2010). \details nuclear magneton in inverse meters per tesla =
/// (0.02542623527 ± 5.6e-10) m^-1 T^-1.
template <typename T> struct nuclear_magneton_in_inverse_meters_per_tesla {
  /// \brief Returns the constant's value.
  /// \details value = 0.02542623527 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.02542623527); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.6e-10 m^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.6e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2024495331431738e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// nuclear_magneton_in_inverse_meters_per_tesla<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.6e-10) / static_cast<T>(0.02542623527));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in K/T (2010).
/// \details nuclear magneton in K/T = (0.00036582682 ± 3.3e-10) K T^-1.
template <typename T> struct nuclear_magneton_in_K_T {
  /// \brief Returns the constant's value.
  /// \details value = 0.00036582682 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = nuclear_magneton_in_K_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00036582682); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-10 K T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = nuclear_magneton_in_K_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.02066174371797e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = nuclear_magneton_in_K_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-10) / static_cast<T>(0.00036582682));
  }
};

/// \brief CODATA recommended value for the nuclear magneton in MHz/T (2010).
/// \details nuclear magneton in MHz/T = (7.62259357 ± 1.7e-07) MHz T^-1.
template <typename T> struct nuclear_magneton_in_MHz_T {
  /// \brief Returns the constant's value.
  /// \details value = 7.62259357 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = nuclear_magneton_in_MHz_T<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(7.62259357); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = nuclear_magneton_in_MHz_T<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.230212045793227e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = nuclear_magneton_in_MHz_T<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(7.62259357));
  }
};

/// \brief CODATA recommended value for the Planck constant (2010).
/// \details Planck constant = (6.62606957e-34 ± 2.9e-41) J s.
template <typename T> struct Planck_constant {
  /// \brief Returns the constant's value.
  /// \details value = 6.62606957e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.62606957e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-41 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-41); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3766519040638443e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-41) / static_cast<T>(6.62606957e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant in eV s (2010).
/// \details Planck constant in eV s = (4.135667516e-15 ± 9.1e-23) eV s.
template <typename T> struct Planck_constant_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 4.135667516e-15 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_constant_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.135667516e-15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.1e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_constant_in_eV_s<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.1e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2003703065573027e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_constant_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.1e-23) / static_cast<T>(4.135667516e-15));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi (2010).
/// \details Planck constant over 2 pi = (1.054571726e-34 ± 4.7e-42) J s.
template <typename T> struct Planck_constant_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.054571726e-34 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_constant_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.054571726e-34); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-42 J s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_constant_over_2_pi<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-42); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.456785521670624e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_constant_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-42) / static_cast<T>(1.054571726e-34));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi in eV s
/// (2010). \details Planck constant over 2 pi in eV s = (6.58211928e-16
/// ± 1.5e-23) eV s.
template <typename T> struct Planck_constant_over_2_pi_in_eV_s {
  /// \brief Returns the constant's value.
  /// \details value = 6.58211928e-16 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_constant_over_2_pi_in_eV_s<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.58211928e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-23 eV s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_in_eV_s<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-23); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.27890127205352e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_constant_over_2_pi_in_eV_s<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-23) / static_cast<T>(6.58211928e-16));
  }
};

/// \brief CODATA recommended value for the Planck constant over 2 pi times c in
/// MeV fm (2010). \details Planck constant over 2 pi times c in MeV fm =
/// (197.3269718 ± 4.4e-06) MeV fm.
template <typename T> struct Planck_constant_over_2_pi_times_c_in_MeV_fm {
  /// \brief Returns the constant's value.
  /// \details value = 197.3269718 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(197.3269718); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.4e-06 MeV fm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2298016129592276e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Planck_constant_over_2_pi_times_c_in_MeV_fm<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.4e-06) / static_cast<T>(197.3269718));
  }
};

/// \brief CODATA recommended value for the Planck length (2010).
/// \details Planck length = (1.616199e-35 ± 9.7e-40) m.
template <typename T> struct Planck_length {
  /// \brief Returns the constant's value.
  /// \details value = 1.616199e-35 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_length<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.616199e-35); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.7e-40 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_length<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.7e-40); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.001736172340164e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_length<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.7e-40) / static_cast<T>(1.616199e-35));
  }
};

/// \brief CODATA recommended value for the Planck mass (2010).
/// \details Planck mass = (2.17651e-08 ± 1.3e-12) kg.
template <typename T> struct Planck_mass {
  /// \brief Returns the constant's value.
  /// \details value = 2.17651e-08 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.17651e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-12 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.972864815691175e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-12) / static_cast<T>(2.17651e-08));
  }
};

/// \brief CODATA recommended value for the Planck mass energy equivalent in GeV
/// (2010). \details Planck mass energy equivalent in GeV = (1.220932e+19 ±
/// 730000000000000.0) GeV.
template <typename T> struct Planck_mass_energy_equivalent_in_GeV {
  /// \brief Returns the constant's value.
  /// \details value = 1.220932e+19 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_mass_energy_equivalent_in_GeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.220932e+19); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 730000000000000.0 GeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Planck_mass_energy_equivalent_in_GeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() {
    return static_cast<T>(730000000000000.0);
  }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.979038963676929e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Planck_mass_energy_equivalent_in_GeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(730000000000000.0) /
                    static_cast<T>(1.220932e+19));
  }
};

/// \brief CODATA recommended value for the Planck temperature (2010).
/// \details Planck temperature = (1.416833e+32 ± 8.5e+27) K.
template <typename T> struct Planck_temperature {
  /// \brief Returns the constant's value.
  /// \details value = 1.416833e+32 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_temperature<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.416833e+32); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.5e+27 K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_temperature<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.5e+27); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.9992956121151894e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_temperature<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.5e+27) / static_cast<T>(1.416833e+32));
  }
};

/// \brief CODATA recommended value for the Planck time (2010).
/// \details Planck time = (5.39106e-44 ± 3.2e-48) s.
template <typename T> struct Planck_time {
  /// \brief Returns the constant's value.
  /// \details value = 5.39106e-44 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Planck_time<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.39106e-44); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.2e-48 s.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Planck_time<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.2e-48); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.935752894606997e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Planck_time<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.2e-48) / static_cast<T>(5.39106e-44));
  }
};

/// \brief CODATA recommended value for the proton charge to mass quotient
/// (2010). \details proton charge to mass quotient = (95788335.8 ± 2.1) C
/// kg^-1.
template <typename T> struct proton_charge_to_mass_quotient {
  /// \brief Returns the constant's value.
  /// \details value = 95788335.8 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_charge_to_mass_quotient<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(95788335.8); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1 C kg^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_charge_to_mass_quotient<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.1923337350642228e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_charge_to_mass_quotient<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1) / static_cast<T>(95788335.8));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength (2010).
/// \details proton Compton wavelength = (1.32140985623e-15 ± 9.4e-25) m.
template <typename T> struct proton_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 1.32140985623e-15 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(1.32140985623e-15);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.4e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.4e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.113614262586421e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.4e-25) /
                    static_cast<T>(1.32140985623e-15));
  }
};

/// \brief CODATA recommended value for the proton Compton wavelength over 2 pi
/// (2010). \details proton Compton wavelength over 2 pi = (2.1030891047e-16
/// ± 1.5e-25) m.
template <typename T> struct proton_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 2.1030891047e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.1030891047e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.5e-25 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.5e-25); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.132365417365285e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// proton_Compton_wavelength_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.5e-25) / static_cast<T>(2.1030891047e-16));
  }
};

/// \brief CODATA recommended value for the proton-electron mass ratio (2010).
/// \details proton-electron mass ratio = (1836.15267245 ± 7.5e-07) .
template <typename T> struct proton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1836.15267245 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1836.15267245); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.5e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.5e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.08462766333731e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.5e-07) / static_cast<T>(1836.15267245));
  }
};

/// \brief CODATA recommended value for the proton g factor (2010).
/// \details proton g factor = (5.585694713 ± 4.6e-08) .
template <typename T> struct proton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.585694713 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.585694713); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.23532297476638e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.6e-08) / static_cast<T>(5.585694713));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio (2010).
/// \details proton gyromag. ratio = (267522200.5 ± 6.3) s^-1 T^-1.
template <typename T> struct proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267522200.5 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267522200.5); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3549447441091903e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3) / static_cast<T>(267522200.5));
  }
};

/// \brief CODATA recommended value for the proton gyromag. ratio over 2 pi
/// (2010). \details proton gyromag. ratio over 2 pi = (42.5774806 ± 1e-06) MHz
/// T^-1.
template <typename T> struct proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.5774806 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.5774806); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3486593990721e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_gyromag_ratio_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-06) / static_cast<T>(42.5774806));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. (2010).
/// \details proton mag. mom. = (1.410606743e-26 ± 3.3e-34) J T^-1.
template <typename T> struct proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.410606743e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.410606743e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3394188468018686e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-34) / static_cast<T>(1.410606743e-26));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to Bohr magneton
/// ratio (2010). \details proton mag. mom. to Bohr magneton ratio =
/// (0.00152103221 ± 1.2e-11) .
template <typename T> struct proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.00152103221 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00152103221); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.2e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.2e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 7.889379278825398e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// proton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.2e-11) / static_cast<T>(0.00152103221));
  }
};

/// \brief CODATA recommended value for the proton mag. mom. to nuclear magneton
/// ratio (2010). \details proton mag. mom. to nuclear magneton ratio =
/// (2.792847356 ± 2.3e-08) .
template <typename T> struct proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792847356 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792847356); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.23532297624074e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// proton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-08) / static_cast<T>(2.792847356));
  }
};

/// \brief CODATA recommended value for the proton mag. shielding correction
/// (2010). \details proton mag. shielding correction = (2.5694e-05 ± 1.4e-08) .
template <typename T> struct proton_mag_shielding_correction {
  /// \brief Returns the constant's value.
  /// \details value = 2.5694e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mag_shielding_correction<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.5694e-05); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_mag_shielding_correction<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0005448742897174437.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_mag_shielding_correction<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-08) / static_cast<T>(2.5694e-05));
  }
};

/// \brief CODATA recommended value for the proton mass (2010).
/// \details proton mass = (1.672621777e-27 ± 7.4e-35) kg.
template <typename T> struct proton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 1.672621777e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.672621777e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.4e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.4e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.4241920688564605e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.4e-35) / static_cast<T>(1.672621777e-27));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent
/// (2010). \details proton mass energy equivalent = (1.503277484e-10 ± 6.6e-18)
/// J.
template <typename T> struct proton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 1.503277484e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.503277484e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.390407007519578e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6e-18) / static_cast<T>(1.503277484e-10));
  }
};

/// \brief CODATA recommended value for the proton mass energy equivalent in MeV
/// (2010). \details proton mass energy equivalent in MeV = (938.272046
/// ± 2.1e-05) MeV.
template <typename T> struct proton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 938.272046 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(938.272046); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// proton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.238156842626429e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// proton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-05) / static_cast<T>(938.272046));
  }
};

/// \brief CODATA recommended value for the proton mass in u (2010).
/// \details proton mass in u = (1.007276466812 ± 9e-11) u.
template <typename T> struct proton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.007276466812 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.007276466812); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-11 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.934984879061786e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-11) / static_cast<T>(1.007276466812));
  }
};

/// \brief CODATA recommended value for the proton molar mass (2010).
/// \details proton molar mass = (0.001007276466812 ± 9e-14) kg mol^-1.
template <typename T> struct proton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.001007276466812 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(0.001007276466812);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9e-14 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.934984879061786e-11.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9e-14) / static_cast<T>(0.001007276466812));
  }
};

/// \brief CODATA recommended value for the proton-muon mass ratio (2010).
/// \details proton-muon mass ratio = (8.88024331 ± 2.2e-07) .
template <typename T> struct proton_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 8.88024331 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.88024331); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4774095970124948e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-07) / static_cast<T>(8.88024331));
  }
};

/// \brief CODATA recommended value for the proton-neutron mag. mom. ratio
/// (2010). \details proton-neutron mag. mom. ratio = (-1.45989806 ± 3.4e-07) .
template <typename T> struct proton_neutron_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -1.45989806 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_neutron_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.45989806); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.4e-07 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_neutron_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.4e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3289297336281134e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_neutron_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.4e-07) / static_cast<T>(-1.45989806));
  }
};

/// \brief CODATA recommended value for the proton-neutron mass ratio (2010).
/// \details proton-neutron mass ratio = (0.99862347826 ± 4.5e-10) .
template <typename T> struct proton_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.99862347826 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.99862347826); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.5e-10 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.5e-10); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.506202886237757e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.5e-10) / static_cast<T>(0.99862347826));
  }
};

/// \brief CODATA recommended value for the proton rms charge radius (2010).
/// \details proton rms charge radius = (8.775e-16 ± 5.1e-18) m.
template <typename T> struct proton_rms_charge_radius {
  /// \brief Returns the constant's value.
  /// \details value = 8.775e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_rms_charge_radius<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(8.775e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1e-18 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_rms_charge_radius<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1e-18); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.005811965811965812.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_rms_charge_radius<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1e-18) / static_cast<T>(8.775e-16));
  }
};

/// \brief CODATA recommended value for the proton-tau mass ratio (2010).
/// \details proton-tau mass ratio = (0.528063 ± 4.8e-05) .
template <typename T> struct proton_tau_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.528063 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = proton_tau_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.528063); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.8e-05 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = proton_tau_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.8e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.089824509575563e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = proton_tau_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.8e-05) / static_cast<T>(0.528063));
  }
};

/// \brief CODATA recommended value for the quantum of circulation (2010).
/// \details quantum of circulation = (0.0003636947552 ± 2.4e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation {
  /// \brief Returns the constant's value.
  /// \details value = 0.0003636947552 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = quantum_of_circulation<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0003636947552); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.4e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = quantum_of_circulation<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.4e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.598940363273074e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = quantum_of_circulation<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.4e-13) / static_cast<T>(0.0003636947552));
  }
};

/// \brief CODATA recommended value for the quantum of circulation times 2
/// (2010). \details quantum of circulation times 2 = (0.0007273895104
/// ± 4.7e-13) m^2 s^-1.
template <typename T> struct quantum_of_circulation_times_2 {
  /// \brief Returns the constant's value.
  /// \details value = 0.0007273895104 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = quantum_of_circulation_times_2<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0007273895104); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 4.7e-13 m^2 s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// quantum_of_circulation_times_2<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(4.7e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 6.461462439038219e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = quantum_of_circulation_times_2<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(4.7e-13) / static_cast<T>(0.0007273895104));
  }
};

/// \brief CODATA recommended value for the Rydberg constant (2010).
/// \details Rydberg constant = (10973731.568539 ± 5.5e-05) m^-1.
template <typename T> struct Rydberg_constant {
  /// \brief Returns the constant's value.
  /// \details value = 10973731.568539 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Rydberg_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(10973731.568539); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.5e-05 m^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Rydberg_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.5e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.011968778030033e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Rydberg_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.5e-05) / static_cast<T>(10973731.568539));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times c in Hz
/// (2010). \details Rydberg constant times c in Hz = (3289841960364000.0 ±
/// 17000.0) Hz.
template <typename T> struct Rydberg_constant_times_c_in_Hz {
  /// \brief Returns the constant's value.
  /// \details value = 3289841960364000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Rydberg_constant_times_c_in_Hz<double>::value();
  /// \endcode
  static inline constexpr T value() {
    return static_cast<T>(3289841960364000.0);
  }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 17000.0 Hz.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Rydberg_constant_times_c_in_Hz<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(17000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 5.167421476416167e-12.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Rydberg_constant_times_c_in_Hz<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(17000.0) /
                    static_cast<T>(3289841960364000.0));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in eV
/// (2010). \details Rydberg constant times hc in eV = (13.60569253 ± 3e-07) eV.
template <typename T> struct Rydberg_constant_times_hc_in_eV {
  /// \brief Returns the constant's value.
  /// \details value = 13.60569253 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Rydberg_constant_times_hc_in_eV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(13.60569253); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-07 eV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_eV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2049594266408133e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Rydberg_constant_times_hc_in_eV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-07) / static_cast<T>(13.60569253));
  }
};

/// \brief CODATA recommended value for the Rydberg constant times hc in J
/// (2010). \details Rydberg constant times hc in J = (2.179872171e-18
/// ± 9.6e-26) J.
template <typename T> struct Rydberg_constant_times_hc_in_J {
  /// \brief Returns the constant's value.
  /// \details value = 2.179872171e-18 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Rydberg_constant_times_hc_in_J<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.179872171e-18); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 9.6e-26 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Rydberg_constant_times_hc_in_J<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(9.6e-26); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.403927958581201e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Rydberg_constant_times_hc_in_J<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(9.6e-26) / static_cast<T>(2.179872171e-18));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K, 100
/// kPa) (2010). \details Sackur-Tetrode constant (1 K, 100 kPa) = (-1.1517078
/// ± 2.3e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_100_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1517078 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Sackur_Tetrode_constant_1_K_100_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1517078); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9970343172113622e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_100_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-06) / static_cast<T>(-1.1517078));
  }
};

/// \brief CODATA recommended value for the Sackur-Tetrode constant (1 K,
/// 101.325 kPa) (2010). \details Sackur-Tetrode constant (1 K, 101.325 kPa) =
/// (-1.1648708 ± 2.3e-06) .
template <typename T> struct Sackur_Tetrode_constant_1_K_101325_kPa {
  /// \brief Returns the constant's value.
  /// \details value = -1.1648708 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Sackur_Tetrode_constant_1_K_101325_kPa<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.1648708); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.3e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.3e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9744678980707558e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Sackur_Tetrode_constant_1_K_101325_kPa<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.3e-06) / static_cast<T>(-1.1648708));
  }
};

/// \brief CODATA recommended value for the second radiation constant (2010).
/// \details second radiation constant = (0.01438777 ± 1.3e-08) m K.
template <typename T> struct second_radiation_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.01438777 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = second_radiation_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.01438777); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-08 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = second_radiation_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.035451637050079e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = second_radiation_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-08) / static_cast<T>(0.01438777));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio
/// (2010). \details shielded helion gyromag. ratio = (203789465.9 ± 5.1) s^-1
/// T^-1.
template <typename T> struct shielded_helion_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 203789465.9 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_helion_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(203789465.9); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5.1 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = shielded_helion_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5.1); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5025827402200376e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = shielded_helion_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5.1) / static_cast<T>(203789465.9));
  }
};

/// \brief CODATA recommended value for the shielded helion gyromag. ratio over
/// 2 pi (2010). \details shielded helion gyromag. ratio over 2 pi =
/// (32.43410084 ± 8.1e-07) MHz T^-1.
template <typename T> struct shielded_helion_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 32.43410084 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_helion_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(32.43410084); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.1e-07 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.1e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4973715287986382e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_helion_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.1e-07) / static_cast<T>(32.43410084));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. (2010).
/// \details shielded helion mag. mom. = (-1.074553044e-26 ± 2.7e-34) J T^-1.
template <typename T> struct shielded_helion_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = -1.074553044e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_helion_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-1.074553044e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.7e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = shielded_helion_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.7e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5126726084636173e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = shielded_helion_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.7e-34) / static_cast<T>(-1.074553044e-26));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to Bohr
/// magneton ratio (2010). \details shielded helion mag. mom. to Bohr magneton
/// ratio = (-0.001158671471 ± 1.4e-11) .
template <typename T> struct shielded_helion_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.001158671471 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(-0.001158671471); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.4e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.4e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2082803754473384e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_helion_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.4e-11) / static_cast<T>(-0.001158671471));
  }
};

/// \brief CODATA recommended value for the shielded helion mag. mom. to nuclear
/// magneton ratio (2010). \details shielded helion mag. mom. to nuclear
/// magneton ratio = (-2.127497718 ± 2.5e-08) .
template <typename T> struct shielded_helion_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -2.127497718 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-2.127497718); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.175089392034779e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_helion_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-08) / static_cast<T>(-2.127497718));
  }
};

/// \brief CODATA recommended value for the shielded helion to proton mag. mom.
/// ratio (2010). \details shielded helion to proton mag. mom. ratio =
/// (-0.761766558 ± 1.1e-08) .
template <typename T> struct shielded_helion_to_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.761766558 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_helion_to_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.761766558); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.1e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.1e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.4440119331150789e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_helion_to_proton_mag_mom_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.1e-08) / static_cast<T>(-0.761766558));
  }
};

/// \brief CODATA recommended value for the shielded helion to shielded proton
/// mag. mom. ratio (2010). \details shielded helion to shielded proton mag.
/// mom. ratio = (-0.7617861313 ± 3.3e-09) .
template <typename T> struct shielded_helion_to_shielded_proton_mag_mom_ratio {
  /// \brief Returns the constant's value.
  /// \details value = -0.7617861313 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(-0.7617861313); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.3e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.3e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3319244922042606e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_helion_to_shielded_proton_mag_mom_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.3e-09) / static_cast<T>(-0.7617861313));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio
/// (2010). \details shielded proton gyromag. ratio = (267515326.8 ± 6.6) s^-1
/// T^-1.
template <typename T> struct shielded_proton_gyromag_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 267515326.8 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_proton_gyromag_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(267515326.8); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.6 s^-1 T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = shielded_proton_gyromag_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.6); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4671483607869302e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = shielded_proton_gyromag_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.6) / static_cast<T>(267515326.8));
  }
};

/// \brief CODATA recommended value for the shielded proton gyromag. ratio over
/// 2 pi (2010). \details shielded proton gyromag. ratio over 2 pi = (42.5763866
/// ± 1e-06) MHz T^-1.
template <typename T> struct shielded_proton_gyromag_ratio_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 42.5763866 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_proton_gyromag_ratio_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(42.5763866); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-06 MHz T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.3487197478613648e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_proton_gyromag_ratio_over_2_pi<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-06) / static_cast<T>(42.5763866));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. (2010).
/// \details shielded proton mag. mom. = (1.410570499e-26 ± 3.5e-34) J T^-1.
template <typename T> struct shielded_proton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.410570499e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = shielded_proton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.410570499e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.5e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = shielded_proton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.5e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.4812655606233545e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = shielded_proton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.5e-34) / static_cast<T>(1.410570499e-26));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to Bohr
/// magneton ratio (2010). \details shielded proton mag. mom. to Bohr magneton
/// ratio = (0.001520993128 ± 1.7e-11) .
template <typename T> struct shielded_proton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001520993128 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::value(); \endcode
  static inline constexpr T value() { return static_cast<T>(0.001520993128); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.117690782886956e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_proton_mag_mom_to_Bohr_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-11) / static_cast<T>(0.001520993128));
  }
};

/// \brief CODATA recommended value for the shielded proton mag. mom. to nuclear
/// magneton ratio (2010). \details shielded proton mag. mom. to nuclear
/// magneton ratio = (2.792775598 ± 3e-08) .
template <typename T> struct shielded_proton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.792775598 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.792775598); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.0742001620711668e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// shielded_proton_mag_mom_to_nuclear_magneton_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3e-08) / static_cast<T>(2.792775598));
  }
};

/// \brief CODATA recommended value for the speed of light in vacuum (2010).
/// \details speed of light in vacuum = (299792458.0 ± 0.0) m s^-1.
template <typename T> struct speed_of_light_in_vacuum {
  /// \brief Returns the constant's value.
  /// \details value = 299792458.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = speed_of_light_in_vacuum<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(299792458.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = speed_of_light_in_vacuum<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = speed_of_light_in_vacuum<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(299792458.0));
  }
};

/// \brief CODATA recommended value for the standard acceleration of gravity
/// (2010). \details standard acceleration of gravity = (9.80665 ± 0.0) m s^-2.
template <typename T> struct standard_acceleration_of_gravity {
  /// \brief Returns the constant's value.
  /// \details value = 9.80665 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = standard_acceleration_of_gravity<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(9.80665); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 m s^-2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// standard_acceleration_of_gravity<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = standard_acceleration_of_gravity<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(9.80665));
  }
};

/// \brief CODATA recommended value for the standard atmosphere (2010).
/// \details standard atmosphere = (101325.0 ± 0.0) Pa.
template <typename T> struct standard_atmosphere {
  /// \brief Returns the constant's value.
  /// \details value = 101325.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = standard_atmosphere<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(101325.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = standard_atmosphere<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = standard_atmosphere<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(101325.0));
  }
};

/// \brief CODATA recommended value for the standard-state pressure (2010).
/// \details standard-state pressure = (100000.0 ± 0.0) Pa.
template <typename T> struct standard_state_pressure {
  /// \brief Returns the constant's value.
  /// \details value = 100000.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = standard_state_pressure<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(100000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0 Pa.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = standard_state_pressure<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.0.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = standard_state_pressure<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0) / static_cast<T>(100000.0));
  }
};

/// \brief CODATA recommended value for the Stefan-Boltzmann constant (2010).
/// \details Stefan-Boltzmann constant = (5.670373e-08 ± 2.1e-13) W m^-2 K^-4.
template <typename T> struct Stefan_Boltzmann_constant {
  /// \brief Returns the constant's value.
  /// \details value = 5.670373e-08 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Stefan_Boltzmann_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.670373e-08); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-13 W m^-2 K^-4.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Stefan_Boltzmann_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-13); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.7034600722033627e-06.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Stefan_Boltzmann_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-13) / static_cast<T>(5.670373e-08));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength (2010).
/// \details tau Compton wavelength = (6.97787e-16 ± 6.3e-20) m.
template <typename T> struct tau_Compton_wavelength {
  /// \brief Returns the constant's value.
  /// \details value = 6.97787e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_Compton_wavelength<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.97787e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.3e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_Compton_wavelength<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.3e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.02854309409605e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_Compton_wavelength<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.3e-20) / static_cast<T>(6.97787e-16));
  }
};

/// \brief CODATA recommended value for the tau Compton wavelength over 2 pi
/// (2010). \details tau Compton wavelength over 2 pi = (1.11056e-16 ± 1e-20) m.
template <typename T> struct tau_Compton_wavelength_over_2_pi {
  /// \brief Returns the constant's value.
  /// \details value = 1.11056e-16 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_Compton_wavelength_over_2_pi<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.11056e-16); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1e-20 m.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// tau_Compton_wavelength_over_2_pi<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1e-20); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.00446621524276e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_Compton_wavelength_over_2_pi<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1e-20) / static_cast<T>(1.11056e-16));
  }
};

/// \brief CODATA recommended value for the tau-electron mass ratio (2010).
/// \details tau-electron mass ratio = (3477.15 ± 0.31) .
template <typename T> struct tau_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 3477.15 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3477.15); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.31 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.915347339056411e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.31) / static_cast<T>(3477.15));
  }
};

/// \brief CODATA recommended value for the tau mass (2010).
/// \details tau mass = (3.16747e-27 ± 2.9e-31) kg.
template <typename T> struct tau_mass {
  /// \brief Returns the constant's value.
  /// \details value = 3.16747e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.16747e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.9e-31 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.9e-31); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.155572112758763e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.9e-31) / static_cast<T>(3.16747e-27));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent (2010).
/// \details tau mass energy equivalent = (2.84678e-10 ± 2.6e-14) J.
template <typename T> struct tau_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 2.84678e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.84678e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-14 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-14); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.133125847448697e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-14) / static_cast<T>(2.84678e-10));
  }
};

/// \brief CODATA recommended value for the tau mass energy equivalent in MeV
/// (2010). \details tau mass energy equivalent in MeV = (1776.82 ± 0.16) MeV.
template <typename T> struct tau_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 1776.82 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1776.82); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.16 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// tau_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.16); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.00485136367218e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_mass_energy_equivalent_in_MeV<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.16) / static_cast<T>(1776.82));
  }
};

/// \brief CODATA recommended value for the tau mass in u (2010).
/// \details tau mass in u = (1.90749 ± 0.00017) u.
template <typename T> struct tau_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 1.90749 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.90749); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.912235450775627e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.90749));
  }
};

/// \brief CODATA recommended value for the tau molar mass (2010).
/// \details tau molar mass = (0.00190749 ± 1.7e-07) kg mol^-1.
template <typename T> struct tau_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.00190749 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.00190749); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.7e-07 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.7e-07); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.912235450775626e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.7e-07) / static_cast<T>(0.00190749));
  }
};

/// \brief CODATA recommended value for the tau-muon mass ratio (2010).
/// \details tau-muon mass ratio = (16.8167 ± 0.0015) .
template <typename T> struct tau_muon_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 16.8167 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_muon_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(16.8167); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0015 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_muon_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0015); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.919704817235248e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_muon_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0015) / static_cast<T>(16.8167));
  }
};

/// \brief CODATA recommended value for the tau-neutron mass ratio (2010).
/// \details tau-neutron mass ratio = (1.89111 ± 0.00017) .
template <typename T> struct tau_neutron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89111 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_neutron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89111); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_neutron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.989429488501463e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_neutron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.89111));
  }
};

/// \brief CODATA recommended value for the tau-proton mass ratio (2010).
/// \details tau-proton mass ratio = (1.89372 ± 0.00017) .
template <typename T> struct tau_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 1.89372 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = tau_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.89372); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.00017 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = tau_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.00017); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.977039900302051e-05.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = tau_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.00017) / static_cast<T>(1.89372));
  }
};

/// \brief CODATA recommended value for the Thomson cross section (2010).
/// \details Thomson cross section = (6.652458734e-29 ± 1.3e-37) m^2.
template <typename T> struct Thomson_cross_section {
  /// \brief Returns the constant's value.
  /// \details value = 6.652458734e-29 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Thomson_cross_section<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(6.652458734e-29); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 1.3e-37 m^2.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = Thomson_cross_section<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(1.3e-37); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.9541646960631865e-09.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = Thomson_cross_section<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(1.3e-37) / static_cast<T>(6.652458734e-29));
  }
};

/// \brief CODATA recommended value for the triton-electron mass ratio (2010).
/// \details triton-electron mass ratio = (5496.9215267 ± 5e-06) .
template <typename T> struct triton_electron_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 5496.9215267 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_electron_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5496.9215267); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 5e-06 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_electron_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(5e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.09600032620746e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_electron_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(5e-06) / static_cast<T>(5496.9215267));
  }
};

/// \brief CODATA recommended value for the triton g factor (2010).
/// \details triton g factor = (5.957924896 ± 7.6e-08) .
template <typename T> struct triton_g_factor {
  /// \brief Returns the constant's value.
  /// \details value = 5.957924896 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_g_factor<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.957924896); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.6e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_g_factor<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.6e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.275611917347674e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_g_factor<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.6e-08) / static_cast<T>(5.957924896));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. (2010).
/// \details triton mag. mom. = (1.504609447e-26 ± 3.8e-34) J T^-1.
template <typename T> struct triton_mag_mom {
  /// \brief Returns the constant's value.
  /// \details value = 1.504609447e-26 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mag_mom<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.504609447e-26); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-34 J T^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_mag_mom<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.5255723387731726e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_mag_mom<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-34) / static_cast<T>(1.504609447e-26));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to Bohr magneton
/// ratio (2010). \details triton mag. mom. to Bohr magneton ratio =
/// (0.001622393657 ± 2.1e-11) .
template <typename T> struct triton_mag_mom_to_Bohr_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 0.001622393657 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mag_mom_to_Bohr_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.001622393657); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.1e-11 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.1e-11); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.2943837587994219e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// triton_mag_mom_to_Bohr_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.1e-11) / static_cast<T>(0.001622393657));
  }
};

/// \brief CODATA recommended value for the triton mag. mom. to nuclear magneton
/// ratio (2010). \details triton mag. mom. to nuclear magneton ratio =
/// (2.978962448 ± 3.8e-08) .
template <typename T> struct triton_mag_mom_to_nuclear_magneton_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.978962448 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mag_mom_to_nuclear_magneton_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.978962448); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 3.8e-08 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(3.8e-08); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 1.275611917347674e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// triton_mag_mom_to_nuclear_magneton_ratio<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(3.8e-08) / static_cast<T>(2.978962448));
  }
};

/// \brief CODATA recommended value for the triton mass (2010).
/// \details triton mass = (5.0073563e-27 ± 2.2e-34) kg.
template <typename T> struct triton_mass {
  /// \brief Returns the constant's value.
  /// \details value = 5.0073563e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(5.0073563e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.2e-34 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.2e-34); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.393535966274259e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.2e-34) / static_cast<T>(5.0073563e-27));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent
/// (2010). \details triton mass energy equivalent = (4.50038741e-10 ± 2e-17) J.
template <typename T> struct triton_mass_energy_equivalent {
  /// \brief Returns the constant's value.
  /// \details value = 4.50038741e-10 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mass_energy_equivalent<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(4.50038741e-10); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2e-17 J.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_mass_energy_equivalent<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2e-17); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.444061850221913e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_mass_energy_equivalent<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2e-17) / static_cast<T>(4.50038741e-10));
  }
};

/// \brief CODATA recommended value for the triton mass energy equivalent in MeV
/// (2010). \details triton mass energy equivalent in MeV = (2808.921005
/// ± 6.2e-05) MeV.
template <typename T> struct triton_mass_energy_equivalent_in_MeV {
  /// \brief Returns the constant's value.
  /// \details value = 2808.921005 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mass_energy_equivalent_in_MeV<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2808.921005); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 6.2e-05 MeV.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// triton_mass_energy_equivalent_in_MeV<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(6.2e-05); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 2.2072532438483438e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// triton_mass_energy_equivalent_in_MeV<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(6.2e-05) / static_cast<T>(2808.921005));
  }
};

/// \brief CODATA recommended value for the triton mass in u (2010).
/// \details triton mass in u = (3.0155007134 ± 2.5e-09) u.
template <typename T> struct triton_mass_in_u {
  /// \brief Returns the constant's value.
  /// \details value = 3.0155007134 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_mass_in_u<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(3.0155007134); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 u.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_mass_in_u<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.290497126698508e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_mass_in_u<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(3.0155007134));
  }
};

/// \brief CODATA recommended value for the triton molar mass (2010).
/// \details triton molar mass = (0.0030155007134 ± 2.5e-12) kg mol^-1.
template <typename T> struct triton_molar_mass {
  /// \brief Returns the constant's value.
  /// \details value = 0.0030155007134 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_molar_mass<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0030155007134); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-12 kg mol^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_molar_mass<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-12); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.290497126698507e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_molar_mass<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-12) / static_cast<T>(0.0030155007134));
  }
};

/// \brief CODATA recommended value for the triton-proton mass ratio (2010).
/// \details triton-proton mass ratio = (2.9937170308 ± 2.5e-09) .
template <typename T> struct triton_proton_mass_ratio {
  /// \brief Returns the constant's value.
  /// \details value = 2.9937170308 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = triton_proton_mass_ratio<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(2.9937170308); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.5e-09 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = triton_proton_mass_ratio<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.5e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.350822653842919e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = triton_proton_mass_ratio<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.5e-09) / static_cast<T>(2.9937170308));
  }
};

/// \brief CODATA recommended value for the unified atomic mass unit (2010).
/// \details unified atomic mass unit = (1.660538921e-27 ± 7.3e-35) kg.
template <typename T> struct unified_atomic_mass_unit {
  /// \brief Returns the constant's value.
  /// \details value = 1.660538921e-27 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = unified_atomic_mass_unit<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(1.660538921e-27); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 7.3e-35 kg.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = unified_atomic_mass_unit<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(7.3e-35); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 4.3961631417852204e-08.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = unified_atomic_mass_unit<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(7.3e-35) / static_cast<T>(1.660538921e-27));
  }
};

/// \brief CODATA recommended value for the von Klitzing constant (2010).
/// \details von Klitzing constant = (25812.8074434 ± 8.4e-06) ohm.
template <typename T> struct von_Klitzing_constant {
  /// \brief Returns the constant's value.
  /// \details value = 25812.8074434 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = von_Klitzing_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(25812.8074434); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 8.4e-06 ohm.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = von_Klitzing_constant<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(8.4e-06); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 3.2541985285478005e-10.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = von_Klitzing_constant<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(8.4e-06) / static_cast<T>(25812.8074434));
  }
};

/// \brief CODATA recommended value for the weak mixing angle (2010).
/// \details weak mixing angle = (0.2223 ± 0.0021) .
template <typename T> struct weak_mixing_angle {
  /// \brief Returns the constant's value.
  /// \details value = 0.2223 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = weak_mixing_angle<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.2223); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 0.0021 .
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty = weak_mixing_angle<double>::uncertainty();
  /// \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(0.0021); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 0.009446693657219972.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision = weak_mixing_angle<double>::precision();
  /// \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(0.0021) / static_cast<T>(0.2223));
  }
};

/// \brief CODATA recommended value for the Wien frequency displacement law
/// constant (2010). \details Wien frequency displacement law constant =
/// (58789254000.0 ± 53000.0) Hz K^-1.
template <typename T> struct Wien_frequency_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 58789254000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Wien_frequency_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(58789254000.0); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 53000.0 Hz K^-1.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Wien_frequency_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(53000.0); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 9.0152530256635e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Wien_frequency_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(53000.0) / static_cast<T>(58789254000.0));
  }
};

/// \brief CODATA recommended value for the Wien wavelength displacement law
/// constant (2010). \details Wien wavelength displacement law constant =
/// (0.0028977721 ± 2.6e-09) m K.
template <typename T> struct Wien_wavelength_displacement_law_constant {
  /// \brief Returns the constant's value.
  /// \details value = 0.0028977721 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double value = Wien_wavelength_displacement_law_constant<double>::value();
  /// \endcode
  static inline constexpr T value() { return static_cast<T>(0.0028977721); }
  /// \brief Returns the constant's uncertainty.
  /// \details uncertainty = 2.6e-09 m K.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double uncertainty =
  /// Wien_wavelength_displacement_law_constant<double>::uncertainty(); \endcode
  static inline constexpr T uncertainty() { return static_cast<T>(2.6e-09); }
  /// \brief Returns the constant's precision (i.e., the relative uncertainty).
  /// \details precision = 8.972410218181065e-07.
  /// \code{.cpp}
  /// // example use
  /// using namespace triumf::constants::codata_2010;
  /// double precision =
  /// Wien_wavelength_displacement_law_constant<double>::precision(); \endcode
  static inline constexpr T precision() {
    return std::abs(static_cast<T>(2.6e-09) / static_cast<T>(0.0028977721));
  }
};

} // namespace codata_2010

} // namespace constants

} // namespace triumf

#endif // TRIUMF_CONSTANTS_CODATA_2010_HPP
