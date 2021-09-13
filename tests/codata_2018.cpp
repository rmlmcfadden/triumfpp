#define BOOST_TEST_MODULE CODATA_2018
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/constants/codata_2018.hpp>

// alpha particle-electron mass ratio
// (7294.29954142 ± 2.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_electron_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
                 T>::value() == static_cast<T>(7294.29954142));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::alpha_particle_electron_mass_ratio<
          T>::precision()));
}

// alpha particle mass
// (6.6446573357e-27 ± 2e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_mass<T>::value() ==
             static_cast<T>(6.6446573357e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_mass<T>::uncertainty() ==
      static_cast<T>(2e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::alpha_particle_mass<T>::precision()));
}

// alpha particle mass energy equivalent
// (5.9719201914e-10 ± 1.8e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::value() == static_cast<T>(5.9719201914e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::uncertainty() == static_cast<T>(1.8e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::alpha_particle_mass_energy_equivalent<
          T>::precision()));
}

// alpha particle mass energy equivalent in MeV
// (3727.3794066 ± 1.1e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 alpha_particle_mass_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(3727.3794066));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(1.1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
}

// alpha particle mass in u
// (4.001506179127 ± 6.3e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_mass_in_u<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_mass_in_u<T>::value() ==
      static_cast<T>(4.001506179127));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::alpha_particle_mass_in_u<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_mass_in_u<
                 T>::uncertainty() == static_cast<T>(6.3e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::alpha_particle_mass_in_u<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::alpha_particle_mass_in_u<
                    T>::precision()));
}

// alpha particle molar mass
// (0.0040015061777 ± 1.2e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_molar_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_molar_mass<T>::value() ==
      static_cast<T>(0.0040015061777));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::alpha_particle_molar_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_molar_mass<
                 T>::uncertainty() == static_cast<T>(1.2e-12));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::alpha_particle_molar_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::alpha_particle_molar_mass<
                    T>::precision()));
}

// alpha particle-proton mass ratio
// (3.97259969009 ± 2.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
                 T>::value() == static_cast<T>(3.97259969009));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::alpha_particle_proton_mass_ratio<
          T>::precision()));
}

// alpha particle relative atomic mass
// (4.001506179127 ± 6.3e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_relative_atomic_mass, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::value() == static_cast<T>(4.001506179127));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::uncertainty() == static_cast<T>(6.3e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::alpha_particle_relative_atomic_mass<
          T>::precision()));
}

// Angstrom star
// (1.00001495e-10 ± 9e-17) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Angstrom_star, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Angstrom_star<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Angstrom_star<T>::value() ==
             static_cast<T>(1.00001495e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Angstrom_star<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Angstrom_star<T>::uncertainty() ==
             static_cast<T>(9e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Angstrom_star<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Angstrom_star<T>::precision()));
}

// atomic mass constant
// (1.6605390666e-27 ± 5e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_mass_constant<T>::value() ==
             static_cast<T>(1.6605390666e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_constant<T>::uncertainty() ==
      static_cast<T>(5e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_constant<T>::precision()));
}

// atomic mass constant energy equivalent
// (1.4924180856e-10 ± 4.5e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::value() == static_cast<T>(1.4924180856e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::uncertainty() == static_cast<T>(4.5e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_constant_energy_equivalent<
          T>::precision()));
}

// atomic mass constant energy equivalent in MeV
// (931.49410242 ± 2.8e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 atomic_mass_constant_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(931.49410242));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(2.8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
}

// atomic mass unit-electron volt relationship
// (931494102.42 ± 0.28) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_electron_volt_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 atomic_mass_unit_electron_volt_relationship<T>::value() ==
             static_cast<T>(931494102.42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty() ==
      static_cast<T>(0.28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
}

// atomic mass unit-hartree relationship
// (34231776.874 ± 0.01) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::value() == static_cast<T>(34231776.874));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::uncertainty() == static_cast<T>(0.01));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_unit_hartree_relationship<
          T>::precision()));
}

// atomic mass unit-hertz relationship
// (2.25234271871e+23 ± 68000000000000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hertz_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::value() == static_cast<T>(2.25234271871e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::uncertainty() == static_cast<T>(68000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_unit_hertz_relationship<
          T>::precision()));
}

// atomic mass unit-inverse meter relationship
// (751300661040000.0 ± 230000.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_inverse_meter_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 atomic_mass_unit_inverse_meter_relationship<T>::value() ==
             static_cast<T>(751300661040000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty() ==
      static_cast<T>(230000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
}

// atomic mass unit-joule relationship
// (1.4924180856e-10 ± 4.5e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_joule_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::value() == static_cast<T>(1.4924180856e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::uncertainty() == static_cast<T>(4.5e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_unit_joule_relationship<
          T>::precision()));
}

// atomic mass unit-kelvin relationship
// (10809540191600.0 ± 3300.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::value() == static_cast<T>(10809540191600.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty() == static_cast<T>(3300.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
}

// atomic mass unit-kilogram relationship
// (1.6605390666e-27 ± 5e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::value() == static_cast<T>(1.6605390666e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(5e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
}

// atomic unit of 1st hyperpolarizability
// (3.2063613061e-53 ± 1.5e-62) C^3 m^3 J^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_1st_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::value() == static_cast<T>(3.2063613061e-53));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(1.5e-62));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
}

// atomic unit of 2nd hyperpolarizability
// (6.2353799905e-65 ± 3.8e-74) C^4 m^4 J^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_2nd_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::value() == static_cast<T>(6.2353799905e-65));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(3.8e-74));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
}

// atomic unit of action
// (1.054571817e-34 ± 0.0) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::value() ==
      static_cast<T>(1.054571817e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_action<T>::precision()));
}

// atomic unit of charge
// (1.602176634e-19 ± 0.0) C
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::value() ==
      static_cast<T>(1.602176634e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_charge<T>::precision()));
}

// atomic unit of charge density
// (1081202384570.0 ± 490.0) C m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_charge_density<
                 T>::value() == static_cast<T>(1081202384570.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_charge_density<
                 T>::uncertainty() == static_cast<T>(490.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_charge_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_charge_density<
          T>::precision()));
}

// atomic unit of current
// (0.00662361823751 ± 1.3e-14) A
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_current<T>::value() ==
      static_cast<T>(0.00662361823751));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::atomic_unit_of_current<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_current<
                 T>::uncertainty() == static_cast<T>(1.3e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_current<T>::precision()));
}

// atomic unit of electric dipole mom.
// (8.4783536255e-30 ± 1.3e-39) C m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_dipole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
                 T>::value() == static_cast<T>(8.4783536255e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
                 T>::uncertainty() == static_cast<T>(1.3e-39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
}

// atomic unit of electric field
// (514220674763.0 ± 78.0) V m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_field<
                 T>::value() == static_cast<T>(514220674763.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_field<
                 T>::uncertainty() == static_cast<T>(78.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_field<
          T>::precision()));
}

// atomic unit of electric field gradient
// (9.7173624292e+21 ± 2900000000000.0) V m^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field_gradient, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::value() == static_cast<T>(9.7173624292e+21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::uncertainty() == static_cast<T>(2900000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_field_gradient<
          T>::precision()));
}

// atomic unit of electric polarizability
// (1.64877727436e-41 ± 5e-51) C^2 m^2 J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_polarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::value() == static_cast<T>(1.64877727436e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::uncertainty() == static_cast<T>(5e-51));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_polarizability<
          T>::precision()));
}

// atomic unit of electric potential
// (27.211386245988 ± 5.3e-11) V
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_potential, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_potential<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_potential<
                 T>::value() == static_cast<T>(27.211386245988));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_potential<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_electric_potential<
                 T>::uncertainty() == static_cast<T>(5.3e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_potential<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_potential<
          T>::precision()));
}

// atomic unit of electric quadrupole mom.
// (4.4865515246e-40 ± 1.4e-49) C m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_quadrupole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::value() == static_cast<T>(4.4865515246e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty() == static_cast<T>(1.4e-49));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
}

// atomic unit of energy
// (4.3597447222071e-18 ± 8.5e-30) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::value() ==
      static_cast<T>(4.3597447222071e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::uncertainty() ==
      static_cast<T>(8.5e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_energy<T>::precision()));
}

// atomic unit of force
// (8.2387234983e-08 ± 1.2e-17) N
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_force, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_force<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_force<T>::value() ==
             static_cast<T>(8.2387234983e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_force<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_force<T>::uncertainty() ==
      static_cast<T>(1.2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_force<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_force<T>::precision()));
}

// atomic unit of length
// (5.29177210903e-11 ± 8e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::value() ==
      static_cast<T>(5.29177210903e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::uncertainty() ==
      static_cast<T>(8e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_length<T>::precision()));
}

// atomic unit of mag. dipole mom.
// (1.85480201566e-23 ± 5.6e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_dipole_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
                 T>::value() == static_cast<T>(1.85480201566e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
                 T>::uncertainty() == static_cast<T>(5.6e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
}

// atomic unit of mag. flux density
// (235051.756758 ± 7.1e-05) T
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_flux_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
                 T>::value() == static_cast<T>(235051.756758));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
                 T>::uncertainty() == static_cast<T>(7.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_mag_flux_density<
          T>::precision()));
}

// atomic unit of magnetizability
// (7.8910366008e-29 ± 4.8e-38) J T^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magnetizability, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_magnetizability<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_magnetizability<
                 T>::value() == static_cast<T>(7.8910366008e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_magnetizability<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_magnetizability<
                 T>::uncertainty() == static_cast<T>(4.8e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_magnetizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_magnetizability<
          T>::precision()));
}

// atomic unit of mass
// (9.1093837015e-31 ± 2.8e-40) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_mass<T>::value() ==
             static_cast<T>(9.1093837015e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(2.8e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_mass<T>::precision()));
}

// atomic unit of momentum
// (1.9928519141e-24 ± 3e-34) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_momentum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_momentum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_momentum<T>::value() ==
      static_cast<T>(1.9928519141e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::atomic_unit_of_momentum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_momentum<
                 T>::uncertainty() == static_cast<T>(3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_momentum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_momentum<T>::precision()));
}

// atomic unit of permittivity
// (1.11265005545e-10 ± 1.7e-20) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_permittivity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_permittivity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_permittivity<T>::value() ==
      static_cast<T>(1.11265005545e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::atomic_unit_of_permittivity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_permittivity<
                 T>::uncertainty() == static_cast<T>(1.7e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::atomic_unit_of_permittivity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::atomic_unit_of_permittivity<
                    T>::precision()));
}

// atomic unit of time
// (2.4188843265857e-17 ± 4.7e-29) s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_time<T>::value() ==
             static_cast<T>(2.4188843265857e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_time<T>::uncertainty() ==
      static_cast<T>(4.7e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_time<T>::precision()));
}

// atomic unit of velocity
// (2187691.26364 ± 0.00033) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::atomic_unit_of_velocity<T>::value() ==
      static_cast<T>(2187691.26364));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::atomic_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::atomic_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.00033));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::atomic_unit_of_velocity<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::atomic_unit_of_velocity<T>::precision()));
}

// Avogadro constant
// (6.02214076e+23 ± 0.0) mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Avogadro_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Avogadro_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Avogadro_constant<T>::value() ==
             static_cast<T>(6.02214076e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Avogadro_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Avogadro_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Avogadro_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Avogadro_constant<T>::precision()));
}

// Bohr magneton
// (9.2740100783e-24 ± 2.8e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Bohr_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Bohr_magneton<T>::value() ==
             static_cast<T>(9.2740100783e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Bohr_magneton<T>::uncertainty() ==
             static_cast<T>(2.8e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_magneton<T>::precision()));
}

// Bohr magneton in eV/T
// (5.788381806e-05 ± 1.7e-14) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::value() ==
      static_cast<T>(5.788381806e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::uncertainty() ==
      static_cast<T>(1.7e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_magneton_in_eV_T<T>::precision()));
}

// Bohr magneton in Hz/T
// (13996244936.1 ± 4.2) Hz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_Hz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::value() ==
      static_cast<T>(13996244936.1));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::uncertainty() ==
      static_cast<T>(4.2));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_magneton_in_Hz_T<T>::precision()));
}

// Bohr magneton in inverse meter per tesla
// (46.686447783 ± 1.4e-08) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_inverse_meter_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::value() == static_cast<T>(46.686447783));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::uncertainty() == static_cast<T>(1.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_magneton_in_inverse_meter_per_tesla<
          T>::precision()));
}

// Bohr magneton in K/T
// (0.67171381563 ± 2e-10) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::value() ==
             static_cast<T>(0.67171381563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::uncertainty() ==
      static_cast<T>(2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_magneton_in_K_T<T>::precision()));
}

// Bohr radius
// (5.29177210903e-11 ± 8e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_radius, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Bohr_radius<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Bohr_radius<T>::value() ==
             static_cast<T>(5.29177210903e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_radius<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Bohr_radius<T>::uncertainty() ==
             static_cast<T>(8e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Bohr_radius<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Bohr_radius<T>::precision()));
}

// Boltzmann constant
// (1.380649e-23 ± 0.0) J K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Boltzmann_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Boltzmann_constant<T>::value() ==
             static_cast<T>(1.380649e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Boltzmann_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Boltzmann_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Boltzmann_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Boltzmann_constant<T>::precision()));
}

// Boltzmann constant in eV/K
// (8.617333262e-05 ± 0.0) eV K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_eV_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value() ==
      static_cast<T>(8.617333262e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<
                    T>::precision()));
}

// Boltzmann constant in Hz/K
// (20836619120.0 ± 0.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_Hz_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<T>::value() ==
      static_cast<T>(20836619120.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
}

// Boltzmann constant in inverse meter per kelvin
// (69.50348004 ± 0.0) m^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_inverse_meter_per_kelvin, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Boltzmann_constant_in_inverse_meter_per_kelvin<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 Boltzmann_constant_in_inverse_meter_per_kelvin<T>::value() ==
             static_cast<T>(69.50348004));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Boltzmann_constant_in_inverse_meter_per_kelvin<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          Boltzmann_constant_in_inverse_meter_per_kelvin<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Boltzmann_constant_in_inverse_meter_per_kelvin<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          Boltzmann_constant_in_inverse_meter_per_kelvin<T>::precision()));
}

// classical electron radius
// (2.8179403262e-15 ± 1.3e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(classical_electron_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::classical_electron_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::classical_electron_radius<T>::value() ==
      static_cast<T>(2.8179403262e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::classical_electron_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::classical_electron_radius<
                 T>::uncertainty() == static_cast<T>(1.3e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::classical_electron_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::classical_electron_radius<
                    T>::precision()));
}

// Compton wavelength
// (2.42631023867e-12 ± 7.3e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Compton_wavelength<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Compton_wavelength<T>::value() ==
             static_cast<T>(2.42631023867e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Compton_wavelength<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Compton_wavelength<T>::uncertainty() ==
      static_cast<T>(7.3e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Compton_wavelength<T>::precision()));
}

// conductance quantum
// (7.748091729e-05 ± 0.0) S
BOOST_AUTO_TEST_CASE_TEMPLATE(conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conductance_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conductance_quantum<T>::value() ==
             static_cast<T>(7.748091729e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conductance_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::conductance_quantum<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conductance_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conductance_quantum<T>::precision()));
}

// conventional value of ampere-90
// (1.00000008887 ± 0.0) A
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_ampere_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ampere_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_ampere_90<
                 T>::value() == static_cast<T>(1.00000008887));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ampere_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_ampere_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ampere_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_ampere_90<
          T>::precision()));
}

// conventional value of coulomb-90
// (1.00000008887 ± 0.0) C
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_coulomb_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_coulomb_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_coulomb_90<
                 T>::value() == static_cast<T>(1.00000008887));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_coulomb_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_coulomb_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_coulomb_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_coulomb_90<
          T>::precision()));
}

// conventional value of farad-90
// (0.9999999822 ± 0.0) F
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_farad_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_farad_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_farad_90<
                 T>::value() == static_cast<T>(0.9999999822));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_farad_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_farad_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_farad_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_farad_90<
          T>::precision()));
}

// conventional value of henry-90
// (1.00000001779 ± 0.0) H
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_henry_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_henry_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_henry_90<
                 T>::value() == static_cast<T>(1.00000001779));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_henry_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_henry_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_henry_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_henry_90<
          T>::precision()));
}

// conventional value of Josephson constant
// (483597900000000.0 ± 0.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_Josephson_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::value() == static_cast<T>(483597900000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_Josephson_constant<
          T>::precision()));
}

// conventional value of ohm-90
// (1.00000001779 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_ohm_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ohm_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_ohm_90<
                 T>::value() == static_cast<T>(1.00000001779));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ohm_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_ohm_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_ohm_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_ohm_90<
          T>::precision()));
}

// conventional value of volt-90
// (1.00000010666 ± 0.0) V
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_volt_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_volt_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_volt_90<
                 T>::value() == static_cast<T>(1.00000010666));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_volt_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_volt_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_volt_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_volt_90<
          T>::precision()));
}

// conventional value of von Klitzing constant
// (25812.807 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_von_Klitzing_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          conventional_value_of_von_Klitzing_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 conventional_value_of_von_Klitzing_constant<T>::value() ==
             static_cast<T>(25812.807));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
}

// conventional value of watt-90
// (1.00000019553 ± 0.0) W
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_watt_90, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_watt_90<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_watt_90<
                 T>::value() == static_cast<T>(1.00000019553));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_watt_90<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::conventional_value_of_watt_90<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::conventional_value_of_watt_90<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::conventional_value_of_watt_90<
          T>::precision()));
}

// Cu x unit
// (1.00207697e-13 ± 2.8e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Cu_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Cu_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Cu_x_unit<T>::value() ==
             static_cast<T>(1.00207697e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Cu_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Cu_x_unit<T>::uncertainty() ==
             static_cast<T>(2.8e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Cu_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Cu_x_unit<T>::precision()));
}

// deuteron-electron mag. mom. ratio
// (-0.0004664345551 ± 1.2e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.0004664345551));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.2e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_electron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-electron mass ratio
// (3670.48296788 ± 1.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_electron_mass_ratio<
                 T>::value() == static_cast<T>(3670.48296788));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_electron_mass_ratio<
          T>::precision()));
}

// deuteron g factor
// (0.8574382338 ± 2.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_g_factor<T>::value() ==
             static_cast<T>(0.8574382338));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_g_factor<T>::uncertainty() ==
      static_cast<T>(2.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_g_factor<T>::precision()));
}

// deuteron mag. mom.
// (4.330735094e-27 ± 1.1e-35) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mag_mom<T>::value() ==
             static_cast<T>(4.330735094e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mag_mom<T>::uncertainty() ==
      static_cast<T>(1.1e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mag_mom<T>::precision()));
}

// deuteron mag. mom. to Bohr magneton ratio
// (0.000466975457 ± 1.2e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.000466975457));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.2e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// deuteron mag. mom. to nuclear magneton ratio
// (0.8574382338 ± 2.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(0.8574382338));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(2.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// deuteron mass
// (3.3435837724e-27 ± 1e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::deuteron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mass<T>::value() ==
             static_cast<T>(3.3435837724e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mass<T>::uncertainty() ==
             static_cast<T>(1e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mass<T>::precision()));
}

// deuteron mass energy equivalent
// (3.00506323102e-10 ± 9.1e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(3.00506323102e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(9.1e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent<
          T>::precision()));
}

// deuteron mass energy equivalent in MeV
// (1875.61294257 ± 5.7e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(1875.61294257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(5.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// deuteron mass in u
// (2.013553212745 ± 4e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_mass_in_u<T>::value() ==
             static_cast<T>(2.013553212745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_mass_in_u<T>::precision()));
}

// deuteron molar mass
// (0.00201355321205 ± 6.1e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_molar_mass<T>::value() ==
             static_cast<T>(0.00201355321205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_molar_mass<T>::uncertainty() ==
      static_cast<T>(6.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_molar_mass<T>::precision()));
}

// deuteron-neutron mag. mom. ratio
// (-0.44820653 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.44820653));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mag. mom. ratio
// (0.30701220939 ± 7.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.30701220939));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(7.9e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_proton_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mass ratio
// (1.99900750139 ± 1.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.99900750139));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::deuteron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::deuteron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::deuteron_proton_mass_ratio<
                    T>::precision()));
}

// deuteron relative atomic mass
// (2.013553212745 ± 4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_relative_atomic_mass<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_relative_atomic_mass<
                 T>::value() == static_cast<T>(2.013553212745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_relative_atomic_mass<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_relative_atomic_mass<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::deuteron_relative_atomic_mass<
          T>::precision()));
}

// deuteron rms charge radius
// (2.12799e-15 ± 7.4e-19) m
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::deuteron_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::deuteron_rms_charge_radius<T>::value() ==
      static_cast<T>(2.12799e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::deuteron_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::deuteron_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(7.4e-19));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::deuteron_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::deuteron_rms_charge_radius<
                    T>::precision()));
}

// electron charge to mass quotient
// (-175882001076.0 ± 53.0) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(-175882001076.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(53.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_charge_to_mass_quotient<
          T>::precision()));
}

// electron-deuteron mag. mom. ratio
// (-2143.9234915 ± 5.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-2143.9234915));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(5.6e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_deuteron_mag_mom_ratio<
          T>::precision()));
}

// electron-deuteron mass ratio
// (0.0002724437107462 ± 9.6e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_deuteron_mass_ratio<
                 T>::value() == static_cast<T>(0.0002724437107462));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_deuteron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(9.6e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_deuteron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_deuteron_mass_ratio<
          T>::precision()));
}

// electron g factor
// (-2.00231930436256 ± 3.5e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_g_factor<T>::value() ==
             static_cast<T>(-2.00231930436256));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_g_factor<T>::uncertainty() ==
      static_cast<T>(3.5e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_g_factor<T>::precision()));
}

// electron gyromag. ratio
// (176085963023.0 ± 53.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_gyromag_ratio<T>::value() ==
      static_cast<T>(176085963023.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_gyromag_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(53.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_gyromag_ratio<T>::precision()));
}

// electron gyromag. ratio in MHz/T
// (28024.9514242 ± 8.5e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
                 T>::value() == static_cast<T>(28024.9514242));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(8.5e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_gyromag_ratio_in_MHz_T<
          T>::precision()));
}

// electron-helion mass ratio
// (0.0001819543074573 ± 7.9e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_helion_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_helion_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_helion_mass_ratio<T>::value() ==
      static_cast<T>(0.0001819543074573));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_helion_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_helion_mass_ratio<
                 T>::uncertainty() == static_cast<T>(7.9e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_helion_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_helion_mass_ratio<
                    T>::precision()));
}

// electron mag. mom.
// (-9.2847647043e-24 ± 2.8e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mag_mom<T>::value() ==
             static_cast<T>(-9.2847647043e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.8e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mag_mom<T>::precision()));
}

// electron mag. mom. anomaly
// (0.00115965218128 ± 1.8e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom_anomaly<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mag_mom_anomaly<T>::value() ==
      static_cast<T>(0.00115965218128));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_mag_mom_anomaly<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mag_mom_anomaly<
                 T>::uncertainty() == static_cast<T>(1.8e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_mag_mom_anomaly<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_mag_mom_anomaly<
                    T>::precision()));
}

// electron mag. mom. to Bohr magneton ratio
// (-1.00115965218128 ± 1.8e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-1.00115965218128));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.8e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// electron mag. mom. to nuclear magneton ratio
// (-1838.28197188 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1838.28197188));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// electron mass
// (9.1093837015e-31 ± 2.8e-40) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mass<T>::value() ==
             static_cast<T>(9.1093837015e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mass<T>::uncertainty() ==
             static_cast<T>(2.8e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mass<T>::precision()));
}

// electron mass energy equivalent
// (8.1871057769e-14 ± 2.5e-23) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(8.1871057769e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mass_energy_equivalent<
          T>::precision()));
}

// electron mass energy equivalent in MeV
// (0.51099895 ± 1.5e-10) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(0.51099895));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// electron mass in u
// (0.000548579909065 ± 1.6e-14) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_mass_in_u<T>::value() ==
             static_cast<T>(0.000548579909065));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1.6e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_mass_in_u<T>::precision()));
}

// electron molar mass
// (5.4857990888e-07 ± 1.7e-16) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_molar_mass<T>::value() ==
             static_cast<T>(5.4857990888e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_molar_mass<T>::uncertainty() ==
      static_cast<T>(1.7e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_molar_mass<T>::precision()));
}

// electron-muon mag. mom. ratio
// (206.7669883 ± 4.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_muon_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_muon_mag_mom_ratio<T>::value() ==
      static_cast<T>(206.7669883));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_muon_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_muon_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_muon_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_muon_mag_mom_ratio<
                    T>::precision()));
}

// electron-muon mass ratio
// (0.00483633169 ± 1.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_muon_mass_ratio<T>::value() ==
      static_cast<T>(0.00483633169));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_muon_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_muon_mass_ratio<
                    T>::precision()));
}

// electron-neutron mag. mom. ratio
// (960.9205 ± 0.00023)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(960.9205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(0.00023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_neutron_mag_mom_ratio<
          T>::precision()));
}

// electron-neutron mass ratio
// (0.00054386734424 ± 2.6e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.00054386734424));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_neutron_mass_ratio<
                    T>::precision()));
}

// electron-proton mag. mom. ratio
// (-658.21068789 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-658.21068789));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-proton mass ratio
// (0.000544617021487 ± 3.3e-14)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.000544617021487));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.3e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_proton_mass_ratio<
                    T>::precision()));
}

// electron relative atomic mass
// (0.000548579909065 ± 1.6e-14)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_relative_atomic_mass<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_relative_atomic_mass<
                 T>::value() == static_cast<T>(0.000548579909065));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_relative_atomic_mass<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(1.6e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_relative_atomic_mass<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_relative_atomic_mass<
          T>::precision()));
}

// electron-tau mass ratio
// (0.000287585 ± 1.9e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.000287585));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.9e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_tau_mass_ratio<T>::precision()));
}

// electron to alpha particle mass ratio
// (0.0001370933554787 ± 4.5e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_alpha_particle_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::value() == static_cast<T>(0.0001370933554787));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
}

// electron to shielded helion mag. mom. ratio
// (864.058257 ± 1e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_helion_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::value() == static_cast<T>(864.058257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
}

// electron to shielded proton mag. mom. ratio
// (-658.2275971 ± 7.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-658.2275971));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(7.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-triton mass ratio
// (0.0001819200062251 ± 9e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_triton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_triton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_triton_mass_ratio<T>::value() ==
      static_cast<T>(0.0001819200062251));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_triton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_triton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(9e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_triton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::electron_triton_mass_ratio<
                    T>::precision()));
}

// electron volt
// (1.602176634e-19 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::electron_volt<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt<T>::value() ==
             static_cast<T>(1.602176634e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt<T>::uncertainty() ==
             static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt<T>::precision()));
}

// electron volt-atomic mass unit relationship
// (1.07354410233e-09 ± 3.2e-19) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_volt_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 electron_volt_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.07354410233e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(3.2e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
}

// electron volt-hartree relationship
// (0.036749322175655 ± 7.1e-14) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_hartree_relationship<
                 T>::value() == static_cast<T>(0.036749322175655));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(7.1e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_hartree_relationship<
          T>::precision()));
}

// electron volt-hertz relationship
// (241798924200000.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_hertz_relationship<
                 T>::value() == static_cast<T>(241798924200000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_hertz_relationship<
          T>::precision()));
}

// electron volt-inverse meter relationship
// (806554.3937 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::value() == static_cast<T>(806554.3937));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_inverse_meter_relationship<
          T>::precision()));
}

// electron volt-joule relationship
// (1.602176634e-19 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_joule_relationship<
                 T>::value() == static_cast<T>(1.602176634e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_joule_relationship<
          T>::precision()));
}

// electron volt-kelvin relationship
// (11604.51812 ± 0.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_kelvin_relationship<
                 T>::value() == static_cast<T>(11604.51812));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::electron_volt_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_kelvin_relationship<
          T>::precision()));
}

// electron volt-kilogram relationship
// (1.782661921e-36 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::value() == static_cast<T>(1.782661921e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::electron_volt_kilogram_relationship<
          T>::precision()));
}

// elementary charge
// (1.602176634e-19 ± 0.0) C
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::elementary_charge<T>::value() ==
             static_cast<T>(1.602176634e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::elementary_charge<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::elementary_charge<T>::precision()));
}

// elementary charge over h-bar
// (1519267447000000.0 ± 0.0) A J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge_over_h_bar, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge_over_h_bar<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::elementary_charge_over_h_bar<
                 T>::value() == static_cast<T>(1519267447000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge_over_h_bar<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::elementary_charge_over_h_bar<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::elementary_charge_over_h_bar<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::elementary_charge_over_h_bar<
          T>::precision()));
}

// Faraday constant
// (96485.33212 ± 0.0) C mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Faraday_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Faraday_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Faraday_constant<T>::value() ==
             static_cast<T>(96485.33212));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Faraday_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Faraday_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Faraday_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Faraday_constant<T>::precision()));
}

// Fermi coupling constant
// (1.1663787e-05 ± 6e-12) GeV^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Fermi_coupling_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Fermi_coupling_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Fermi_coupling_constant<T>::value() ==
      static_cast<T>(1.1663787e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Fermi_coupling_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Fermi_coupling_constant<
                 T>::uncertainty() == static_cast<T>(6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Fermi_coupling_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Fermi_coupling_constant<T>::precision()));
}

// fine-structure constant
// (0.0072973525693 ± 1.1e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::fine_structure_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::fine_structure_constant<T>::value() ==
      static_cast<T>(0.0072973525693));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::fine_structure_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(1.1e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::fine_structure_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::fine_structure_constant<T>::precision()));
}

// first radiation constant
// (3.741771852e-16 ± 0.0) W m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::first_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::first_radiation_constant<T>::value() ==
      static_cast<T>(3.741771852e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::first_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::first_radiation_constant<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::first_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::first_radiation_constant<
                    T>::precision()));
}

// first radiation constant for spectral radiance
// (1.191042972e-16 ± 0.0) W m^2 sr^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant_for_spectral_radiance, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          first_radiation_constant_for_spectral_radiance<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 first_radiation_constant_for_spectral_radiance<T>::value() ==
             static_cast<T>(1.191042972e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
}

// hartree-atomic mass unit relationship
// (2.92126232205e-08 ± 8.8e-18) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(2.92126232205e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(8.8e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hartree_atomic_mass_unit_relationship<
          T>::precision()));
}

// hartree-electron volt relationship
// (27.211386245988 ± 5.3e-11) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_electron_volt_relationship<
                 T>::value() == static_cast<T>(27.211386245988));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(5.3e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hartree_electron_volt_relationship<
          T>::precision()));
}

// Hartree energy
// (4.3597447222071e-18 ± 8.5e-30) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Hartree_energy<T>::value() ==
             static_cast<T>(4.3597447222071e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Hartree_energy<T>::uncertainty() ==
             static_cast<T>(8.5e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Hartree_energy<T>::precision()));
}

// Hartree energy in eV
// (27.211386245988 ± 5.3e-11) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy_in_eV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Hartree_energy_in_eV<T>::value() ==
             static_cast<T>(27.211386245988));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy_in_eV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Hartree_energy_in_eV<T>::uncertainty() ==
      static_cast<T>(5.3e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Hartree_energy_in_eV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Hartree_energy_in_eV<T>::precision()));
}

// hartree-hertz relationship
// (6579683920502000.0 ± 13000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hartree_hertz_relationship<T>::value() ==
      static_cast<T>(6579683920502000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(13000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hartree_hertz_relationship<
                    T>::precision()));
}

// hartree-inverse meter relationship
// (21947463.13632 ± 4.3e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_inverse_meter_relationship<
                 T>::value() == static_cast<T>(21947463.13632));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(4.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hartree_inverse_meter_relationship<
          T>::precision()));
}

// hartree-joule relationship
// (4.3597447222071e-18 ± 8.5e-30) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hartree_joule_relationship<T>::value() ==
      static_cast<T>(4.3597447222071e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_joule_relationship<
                 T>::uncertainty() == static_cast<T>(8.5e-30));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hartree_joule_relationship<
                    T>::precision()));
}

// hartree-kelvin relationship
// (315775.02480407 ± 6.1e-07) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hartree_kelvin_relationship<T>::value() ==
      static_cast<T>(315775.02480407));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(6.1e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hartree_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hartree_kelvin_relationship<
                    T>::precision()));
}

// hartree-kilogram relationship
// (4.8508702095432e-35 ± 9.4e-47) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_kilogram_relationship<
                 T>::value() == static_cast<T>(4.8508702095432e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hartree_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(9.4e-47));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hartree_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hartree_kilogram_relationship<
          T>::precision()));
}

// helion-electron mass ratio
// (5495.88528007 ± 2.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_electron_mass_ratio<T>::value() ==
      static_cast<T>(5495.88528007));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::helion_electron_mass_ratio<
                    T>::precision()));
}

// helion g factor
// (-4.255250615 ± 5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_g_factor<T>::value() ==
             static_cast<T>(-4.255250615));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_g_factor<T>::uncertainty() ==
      static_cast<T>(5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_g_factor<T>::precision()));
}

// helion mag. mom.
// (-1.074617532e-26 ± 1.3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mag_mom<T>::value() ==
             static_cast<T>(-1.074617532e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mag_mom<T>::uncertainty() ==
             static_cast<T>(1.3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mag_mom<T>::precision()));
}

// helion mag. mom. to Bohr magneton ratio
// (-0.001158740958 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.001158740958));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// helion mag. mom. to nuclear magneton ratio
// (-2.127625307 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-2.127625307));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// helion mass
// (5.0064127796e-27 ± 1.5e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mass<T>::value() ==
             static_cast<T>(5.0064127796e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mass<T>::uncertainty() ==
             static_cast<T>(1.5e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mass<T>::precision()));
}

// helion mass energy equivalent
// (4.4995394125e-10 ± 1.4e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.4995394125e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.4e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mass_energy_equivalent<
          T>::precision()));
}

// helion mass energy equivalent in MeV
// (2808.39160743 ± 8.5e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.39160743));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(8.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// helion mass in u
// (3.014932247175 ± 9.7e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_mass_in_u<T>::value() ==
             static_cast<T>(3.014932247175));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_mass_in_u<T>::uncertainty() ==
      static_cast<T>(9.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_mass_in_u<T>::precision()));
}

// helion molar mass
// (0.00301493224613 ± 9.1e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::helion_molar_mass<T>::value() ==
             static_cast<T>(0.00301493224613));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_molar_mass<T>::uncertainty() ==
      static_cast<T>(9.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_molar_mass<T>::precision()));
}

// helion-proton mass ratio
// (2.99315267167 ± 1.3e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.99315267167));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.3e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::helion_proton_mass_ratio<
                    T>::precision()));
}

// helion relative atomic mass
// (3.014932247175 ± 9.7e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_relative_atomic_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_relative_atomic_mass<T>::value() ==
      static_cast<T>(3.014932247175));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_relative_atomic_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(9.7e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_relative_atomic_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::helion_relative_atomic_mass<
                    T>::precision()));
}

// helion shielding shift
// (5.996743e-05 ± 1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_shielding_shift, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_shielding_shift<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::helion_shielding_shift<T>::value() ==
      static_cast<T>(5.996743e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::helion_shielding_shift<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::helion_shielding_shift<
                 T>::uncertainty() == static_cast<T>(1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::helion_shielding_shift<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::helion_shielding_shift<T>::precision()));
}

// hertz-atomic mass unit relationship
// (4.4398216652e-24 ± 1.3e-33) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(4.4398216652e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(1.3e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hertz_atomic_mass_unit_relationship<
          T>::precision()));
}

// hertz-electron volt relationship
// (4.135667696e-15 ± 0.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_electron_volt_relationship<
                 T>::value() == static_cast<T>(4.135667696e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hertz_electron_volt_relationship<
          T>::precision()));
}

// hertz-hartree relationship
// (1.519829846057e-16 ± 2.9e-28) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_hartree_relationship<T>::value() ==
      static_cast<T>(1.519829846057e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.9e-28));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hertz_hartree_relationship<
                    T>::precision()));
}

// hertz-inverse meter relationship
// (3.335640951e-09 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_inverse_meter_relationship<
                 T>::value() == static_cast<T>(3.335640951e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hertz_inverse_meter_relationship<
          T>::precision()));
}

// hertz-joule relationship
// (6.62607015e-34 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_joule_relationship<T>::value() ==
      static_cast<T>(6.62607015e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hertz_joule_relationship<
                    T>::precision()));
}

// hertz-kelvin relationship
// (4.799243073e-11 ± 0.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_kelvin_relationship<T>::value() ==
      static_cast<T>(4.799243073e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hertz_kelvin_relationship<
                    T>::precision()));
}

// hertz-kilogram relationship
// (7.372497323e-51 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hertz_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hertz_kilogram_relationship<T>::value() ==
      static_cast<T>(7.372497323e-51));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::hertz_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::hertz_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::hertz_kilogram_relationship<
                    T>::precision()));
}

// hyperfine transition frequency of Cs-133
// (9192631770.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(hyperfine_transition_frequency_of_Cs_133, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::value() == static_cast<T>(9192631770.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::hyperfine_transition_frequency_of_Cs_133<
          T>::precision()));
}

// inverse fine-structure constant
// (137.035999084 ± 2.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_fine_structure_constant<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_fine_structure_constant<
                 T>::value() == static_cast<T>(137.035999084));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_fine_structure_constant<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(2.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_fine_structure_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_fine_structure_constant<
          T>::precision()));
}

// inverse meter-atomic mass unit relationship
// (1.3310250501e-15 ± 4e-25) u
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          inverse_meter_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 inverse_meter_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.3310250501e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(4e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
}

// inverse meter-electron volt relationship
// (1.239841984e-06 ± 0.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::value() == static_cast<T>(1.239841984e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_electron_volt_relationship<
          T>::precision()));
}

// inverse meter-hartree relationship
// (4.556335252912e-08 ± 8.8e-20) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_hartree_relationship<
                 T>::value() == static_cast<T>(4.556335252912e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(8.8e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_hartree_relationship<
          T>::precision()));
}

// inverse meter-hertz relationship
// (299792458.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_hertz_relationship<
                 T>::value() == static_cast<T>(299792458.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_hertz_relationship<
          T>::precision()));
}

// inverse meter-joule relationship
// (1.986445857e-25 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_joule_relationship<
                 T>::value() == static_cast<T>(1.986445857e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_joule_relationship<
          T>::precision()));
}

// inverse meter-kelvin relationship
// (0.01438776877 ± 0.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
                 T>::value() == static_cast<T>(0.01438776877));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_kelvin_relationship<
          T>::precision()));
}

// inverse meter-kilogram relationship
// (2.210219094e-42 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::value() == static_cast<T>(2.210219094e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_meter_kilogram_relationship<
          T>::precision()));
}

// inverse of conductance quantum
// (12906.40372 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_of_conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_of_conductance_quantum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_of_conductance_quantum<
                 T>::value() == static_cast<T>(12906.40372));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_of_conductance_quantum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::inverse_of_conductance_quantum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::inverse_of_conductance_quantum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::inverse_of_conductance_quantum<
          T>::precision()));
}

// Josephson constant
// (483597848400000.0 ± 0.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Josephson_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Josephson_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Josephson_constant<T>::value() ==
             static_cast<T>(483597848400000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Josephson_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Josephson_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Josephson_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Josephson_constant<T>::precision()));
}

// joule-atomic mass unit relationship
// (6700535256.5 ± 2.0) u
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6700535256.5));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(2.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::joule_atomic_mass_unit_relationship<
          T>::precision()));
}

// joule-electron volt relationship
// (6.241509074e+18 ± 0.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::joule_electron_volt_relationship<
                 T>::value() == static_cast<T>(6.241509074e+18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::joule_electron_volt_relationship<
          T>::precision()));
}

// joule-hartree relationship
// (2.2937122783963e+17 ± 450000.0) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_hartree_relationship<T>::value() ==
      static_cast<T>(2.2937122783963e+17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(450000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::joule_hartree_relationship<
                    T>::precision()));
}

// joule-hertz relationship
// (1.509190179e+33 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_hertz_relationship<T>::value() ==
      static_cast<T>(1.509190179e+33));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::joule_hertz_relationship<
                    T>::precision()));
}

// joule-inverse meter relationship
// (5.034116567e+24 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::joule_inverse_meter_relationship<
                 T>::value() == static_cast<T>(5.034116567e+24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::joule_inverse_meter_relationship<
          T>::precision()));
}

// joule-kelvin relationship
// (7.242970516e+22 ± 0.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_kelvin_relationship<T>::value() ==
      static_cast<T>(7.242970516e+22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::joule_kelvin_relationship<
                    T>::precision()));
}

// joule-kilogram relationship
// (1.112650056e-17 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::joule_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::joule_kilogram_relationship<T>::value() ==
      static_cast<T>(1.112650056e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::joule_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::joule_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::joule_kilogram_relationship<
                    T>::precision()));
}

// kelvin-atomic mass unit relationship
// (9.2510873014e-14 ± 2.8e-23) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(9.2510873014e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(2.8e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
}

// kelvin-electron volt relationship
// (8.617333262e-05 ± 0.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_electron_volt_relationship<
                 T>::value() == static_cast<T>(8.617333262e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kelvin_electron_volt_relationship<
          T>::precision()));
}

// kelvin-hartree relationship
// (3.1668115634556e-06 ± 6.1e-18) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kelvin_hartree_relationship<T>::value() ==
      static_cast<T>(3.1668115634556e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(6.1e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::kelvin_hartree_relationship<
                    T>::precision()));
}

// kelvin-hertz relationship
// (20836619120.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kelvin_hertz_relationship<T>::value() ==
      static_cast<T>(20836619120.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::kelvin_hertz_relationship<
                    T>::precision()));
}

// kelvin-inverse meter relationship
// (69.50348004 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
                 T>::value() == static_cast<T>(69.50348004));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kelvin_inverse_meter_relationship<
          T>::precision()));
}

// kelvin-joule relationship
// (1.380649e-23 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kelvin_joule_relationship<T>::value() ==
      static_cast<T>(1.380649e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kelvin_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::kelvin_joule_relationship<
                    T>::precision()));
}

// kelvin-kilogram relationship
// (1.536179187e-40 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_kilogram_relationship<
                 T>::value() == static_cast<T>(1.536179187e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kelvin_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kelvin_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kelvin_kilogram_relationship<
          T>::precision()));
}

// kilogram-atomic mass unit relationship
// (6.0221407621e+26 ± 1.8e+17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6.0221407621e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(1.8e+17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
}

// kilogram-electron volt relationship
// (5.609588603e+35 ± 0.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::value() == static_cast<T>(5.609588603e+35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kilogram_electron_volt_relationship<
          T>::precision()));
}

// kilogram-hartree relationship
// (2.0614857887409e+34 ± 4e+22) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_hartree_relationship<
                 T>::value() == static_cast<T>(2.0614857887409e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(4e+22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kilogram_hartree_relationship<
          T>::precision()));
}

// kilogram-hertz relationship
// (1.356392489e+50 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_hertz_relationship<T>::value() ==
      static_cast<T>(1.356392489e+50));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kilogram_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kilogram_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::kilogram_hertz_relationship<
                    T>::precision()));
}

// kilogram-inverse meter relationship
// (4.524438335e+41 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::value() == static_cast<T>(4.524438335e+41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kilogram_inverse_meter_relationship<
          T>::precision()));
}

// kilogram-joule relationship
// (8.987551787e+16 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::kilogram_joule_relationship<T>::value() ==
      static_cast<T>(8.987551787e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kilogram_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::kilogram_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::kilogram_joule_relationship<
                    T>::precision()));
}

// kilogram-kelvin relationship
// (6.50965726e+39 ± 0.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_kelvin_relationship<
                 T>::value() == static_cast<T>(6.50965726e+39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::kilogram_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::kilogram_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::kilogram_kelvin_relationship<
          T>::precision()));
}

// lattice parameter of silicon
// (5.431020511e-10 ± 8.9e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_parameter_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_parameter_of_silicon<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::lattice_parameter_of_silicon<
                 T>::value() == static_cast<T>(5.431020511e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_parameter_of_silicon<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::lattice_parameter_of_silicon<
                 T>::uncertainty() == static_cast<T>(8.9e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_parameter_of_silicon<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::lattice_parameter_of_silicon<
          T>::precision()));
}

// lattice spacing of ideal Si (220)
// (1.920155716e-10 ± 3.2e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_spacing_of_ideal_Si_220, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
                 T>::value() == static_cast<T>(1.920155716e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
                 T>::uncertainty() == static_cast<T>(3.2e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::lattice_spacing_of_ideal_Si_220<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 100 kPa)
// (2.651645804e+25 ± 0.0) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
                 T>::value() == static_cast<T>(2.651645804e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 101.325 kPa)
// (2.686780111e+25 ± 0.0) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::value() == static_cast<T>(2.686780111e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
}

// luminous efficacy
// (683.0 ± 0.0) lm W^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(luminous_efficacy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::luminous_efficacy<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::luminous_efficacy<T>::value() ==
             static_cast<T>(683.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::luminous_efficacy<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::luminous_efficacy<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::luminous_efficacy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::luminous_efficacy<T>::precision()));
}

// mag. flux quantum
// (2.067833848e-15 ± 0.0) Wb
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_flux_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::mag_flux_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::mag_flux_quantum<T>::value() ==
             static_cast<T>(2.067833848e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::mag_flux_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::mag_flux_quantum<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::mag_flux_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::mag_flux_quantum<T>::precision()));
}

// molar gas constant
// (8.314462618 ± 0.0) J mol^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_gas_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_gas_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::molar_gas_constant<T>::value() ==
             static_cast<T>(8.314462618));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_gas_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_gas_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_gas_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_gas_constant<T>::precision()));
}

// molar mass constant
// (0.00099999999965 ± 3e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::molar_mass_constant<T>::value() ==
             static_cast<T>(0.00099999999965));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_mass_constant<T>::uncertainty() ==
      static_cast<T>(3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_mass_constant<T>::precision()));
}

// molar mass of carbon-12
// (0.0119999999958 ± 3.6e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_of_carbon_12, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_mass_of_carbon_12<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_mass_of_carbon_12<T>::value() ==
      static_cast<T>(0.0119999999958));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::molar_mass_of_carbon_12<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::molar_mass_of_carbon_12<
                 T>::uncertainty() == static_cast<T>(3.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_mass_of_carbon_12<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_mass_of_carbon_12<T>::precision()));
}

// molar Planck constant
// (3.990312712e-10 ± 0.0) J Hz^-1 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_Planck_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_Planck_constant<T>::value() ==
      static_cast<T>(3.990312712e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_Planck_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_Planck_constant<T>::precision()));
}

// molar volume of ideal gas (273.15 K, 100 kPa)
// (0.02271095464 ± 0.0) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value() == static_cast<T>(0.02271095464));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 101.325 kPa)
// (0.02241396954 ± 0.0) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value() ==
             static_cast<T>(0.02241396954));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
}

// molar volume of silicon
// (1.205883199e-05 ± 6e-13) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_volume_of_silicon<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::molar_volume_of_silicon<T>::value() ==
      static_cast<T>(1.205883199e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::molar_volume_of_silicon<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::molar_volume_of_silicon<
                 T>::uncertainty() == static_cast<T>(6e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::molar_volume_of_silicon<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::molar_volume_of_silicon<T>::precision()));
}

// Mo x unit
// (1.00209952e-13 ± 5.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Mo_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Mo_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Mo_x_unit<T>::value() ==
             static_cast<T>(1.00209952e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Mo_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Mo_x_unit<T>::uncertainty() ==
             static_cast<T>(5.3e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Mo_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Mo_x_unit<T>::precision()));
}

// muon Compton wavelength
// (1.17344411e-14 ± 2.6e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_Compton_wavelength<T>::value() ==
      static_cast<T>(1.17344411e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(2.6e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_Compton_wavelength<T>::precision()));
}

// muon-electron mass ratio
// (206.768283 ± 4.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_electron_mass_ratio<T>::value() ==
      static_cast<T>(206.768283));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::muon_electron_mass_ratio<
                    T>::precision()));
}

// muon g factor
// (-2.0023318418 ± 1.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_g_factor, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_g_factor<T>::value() ==
             static_cast<T>(-2.0023318418));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_g_factor<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_g_factor<T>::uncertainty() ==
             static_cast<T>(1.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_g_factor<T>::precision()));
}

// muon mag. mom.
// (-4.4904483e-26 ± 1e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mag_mom<T>::value() ==
             static_cast<T>(-4.4904483e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mag_mom<T>::uncertainty() ==
             static_cast<T>(1e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mag_mom<T>::precision()));
}

// muon mag. mom. anomaly
// (0.00116592089 ± 6.3e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::value() ==
             static_cast<T>(0.00116592089));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::uncertainty() ==
      static_cast<T>(6.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mag_mom_anomaly<T>::precision()));
}

// muon mag. mom. to Bohr magneton ratio
// (-0.00484197047 ± 1.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00484197047));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// muon mag. mom. to nuclear magneton ratio
// (-8.89059703 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-8.89059703));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// muon mass
// (1.883531627e-28 ± 4.2e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass<T>::value() ==
             static_cast<T>(1.883531627e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass<T>::uncertainty() ==
             static_cast<T>(4.2e-36));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::muon_mass<T>::precision()));
}

// muon mass energy equivalent
// (1.692833804e-11 ± 3.8e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_mass_energy_equivalent<T>::value() ==
      static_cast<T>(1.692833804e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(3.8e-19));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::muon_mass_energy_equivalent<
                    T>::precision()));
}

// muon mass energy equivalent in MeV
// (105.6583755 ± 2.3e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(105.6583755));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(2.3e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// muon mass in u
// (0.1134289259 ± 2.5e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass_in_u<T>::value() ==
             static_cast<T>(0.1134289259));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_mass_in_u<T>::uncertainty() ==
             static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_mass_in_u<T>::precision()));
}

// muon molar mass
// (0.0001134289259 ± 2.5e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_molar_mass<T>::value() ==
             static_cast<T>(0.0001134289259));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_molar_mass<T>::precision()));
}

// muon-neutron mass ratio
// (0.112454517 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.112454517));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_neutron_mass_ratio<T>::precision()));
}

// muon-proton mag. mom. ratio
// (-3.183345142 ± 7.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_proton_mag_mom_ratio<T>::value() ==
      static_cast<T>(-3.183345142));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_proton_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(7.1e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_proton_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::muon_proton_mag_mom_ratio<
                    T>::precision()));
}

// muon-proton mass ratio
// (0.1126095264 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.1126095264));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::muon_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::muon_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_proton_mass_ratio<T>::precision()));
}

// muon-tau mass ratio
// (0.0594635 ± 4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_tau_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::muon_tau_mass_ratio<T>::value() ==
             static_cast<T>(0.0594635));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::muon_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::muon_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::muon_tau_mass_ratio<T>::precision()));
}

// natural unit of action
// (1.054571817e-34 ± 0.0) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_action<T>::value() ==
      static_cast<T>(1.054571817e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_action<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_action<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_action<T>::precision()));
}

// natural unit of action in eV s
// (6.582119569e-16 ± 0.0) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
                 T>::value() == static_cast<T>(6.582119569e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_action_in_eV_s<
          T>::precision()));
}

// natural unit of energy
// (8.1871057769e-14 ± 2.5e-23) J
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_energy<T>::value() ==
      static_cast<T>(8.1871057769e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_energy<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_energy<
                 T>::uncertainty() == static_cast<T>(2.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_energy<T>::precision()));
}

// natural unit of energy in MeV
// (0.51099895 ± 1.5e-10) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
                 T>::value() == static_cast<T>(0.51099895));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_energy_in_MeV<
          T>::precision()));
}

// natural unit of length
// (3.8615926796e-13 ± 1.2e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_length<T>::value() ==
      static_cast<T>(3.8615926796e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_length<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_length<
                 T>::uncertainty() == static_cast<T>(1.2e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_length<T>::precision()));
}

// natural unit of mass
// (9.1093837015e-31 ± 2.8e-40) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_mass<T>::value() ==
             static_cast<T>(9.1093837015e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(2.8e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_mass<T>::precision()));
}

// natural unit of momentum
// (2.73092453075e-22 ± 8.2e-32) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momentum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_momentum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_momentum<T>::value() ==
      static_cast<T>(2.73092453075e-22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_momentum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_momentum<
                 T>::uncertainty() == static_cast<T>(8.2e-32));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_momentum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::natural_unit_of_momentum<
                    T>::precision()));
}

// natural unit of momentum in MeV/c
// (0.51099895 ± 1.5e-10) MeV/c
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momentum_in_MeV_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
                 T>::value() == static_cast<T>(0.51099895));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_momentum_in_MeV_c<
          T>::precision()));
}

// natural unit of time
// (1.28808866819e-21 ± 3.9e-31) s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_time<T>::value() ==
             static_cast<T>(1.28808866819e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_time<T>::uncertainty() ==
      static_cast<T>(3.9e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::natural_unit_of_time<T>::precision()));
}

// natural unit of velocity
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::natural_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::natural_unit_of_velocity<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::natural_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::natural_unit_of_velocity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::natural_unit_of_velocity<
                    T>::precision()));
}

// neutron Compton wavelength
// (1.31959090581e-15 ± 7.5e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_Compton_wavelength<T>::value() ==
      static_cast<T>(1.31959090581e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(7.5e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::neutron_Compton_wavelength<
                    T>::precision()));
}

// neutron-electron mag. mom. ratio
// (0.00104066882 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.00104066882));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_electron_mag_mom_ratio<
          T>::precision()));
}

// neutron-electron mass ratio
// (1838.68366173 ± 8.9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_electron_mass_ratio<T>::value() ==
      static_cast<T>(1838.68366173));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(8.9e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::neutron_electron_mass_ratio<
                    T>::precision()));
}

// neutron g factor
// (-3.82608545 ± 9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_g_factor<T>::value() ==
             static_cast<T>(-3.82608545));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_g_factor<T>::uncertainty() ==
      static_cast<T>(9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_g_factor<T>::precision()));
}

// neutron gyromag. ratio
// (183247171.0 ± 43.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::value() ==
      static_cast<T>(183247171.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(43.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_gyromag_ratio<T>::precision()));
}

// neutron gyromag. ratio in MHz/T
// (29.1646931 ± 6.9e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
                 T>::value() == static_cast<T>(29.1646931));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(6.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_gyromag_ratio_in_MHz_T<
          T>::precision()));
}

// neutron mag. mom.
// (-9.6623651e-27 ± 2.3e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mag_mom<T>::value() ==
             static_cast<T>(-9.6623651e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.3e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mag_mom<T>::precision()));
}

// neutron mag. mom. to Bohr magneton ratio
// (-0.00104187563 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00104187563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// neutron mag. mom. to nuclear magneton ratio
// (-1.91304273 ± 4.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-1.91304273));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// neutron mass
// (1.67492749804e-27 ± 9.5e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mass<T>::value() ==
             static_cast<T>(1.67492749804e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mass<T>::uncertainty() ==
             static_cast<T>(9.5e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mass<T>::precision()));
}

// neutron mass energy equivalent
// (1.50534976287e-10 ± 8.6e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.50534976287e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(8.6e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent<
          T>::precision()));
}

// neutron mass energy equivalent in MeV
// (939.56542052 ± 5.4e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(939.56542052));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(5.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// neutron mass in u
// (1.00866491595 ± 4.9e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_mass_in_u<T>::value() ==
             static_cast<T>(1.00866491595));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4.9e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_mass_in_u<T>::precision()));
}

// neutron molar mass
// (0.0010086649156 ± 5.7e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_molar_mass<T>::value() ==
             static_cast<T>(0.0010086649156));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_molar_mass<T>::uncertainty() ==
      static_cast<T>(5.7e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_molar_mass<T>::precision()));
}

// neutron-muon mass ratio
// (8.89248406 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.89248406));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_muon_mass_ratio<T>::precision()));
}

// neutron-proton mag. mom. ratio
// (-0.68497934 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.68497934));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_proton_mag_mom_ratio<
          T>::precision()));
}

// neutron-proton mass difference
// (2.30557435e-30 ± 8.2e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_proton_mass_difference<
                 T>::value() == static_cast<T>(2.30557435e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_proton_mass_difference<
                 T>::uncertainty() == static_cast<T>(8.2e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_proton_mass_difference<
          T>::precision()));
}

// neutron-proton mass difference energy equivalent
// (2.07214689e-13 ± 7.4e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_energy_equivalent,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 neutron_proton_mass_difference_energy_equivalent<T>::value() ==
             static_cast<T>(2.07214689e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty() ==
      static_cast<T>(7.4e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
}

// neutron-proton mass difference energy equivalent in MeV
// (1.29333236 ± 4.6e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(
    neutron_proton_mass_difference_energy_equivalent_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value() ==
      static_cast<T>(1.29333236));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::
                 neutron_proton_mass_difference_energy_equivalent_in_MeV<
                     T>::uncertainty() == static_cast<T>(4.6e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
}

// neutron-proton mass difference in u
// (0.00138844933 ± 4.9e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_in_u, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::value() == static_cast<T>(0.00138844933));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::uncertainty() == static_cast<T>(4.9e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_proton_mass_difference_in_u<
          T>::precision()));
}

// neutron-proton mass ratio
// (1.00137841931 ± 4.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.00137841931));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.9e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::neutron_proton_mass_ratio<
                    T>::precision()));
}

// neutron relative atomic mass
// (1.00866491595 ± 4.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_relative_atomic_mass<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_relative_atomic_mass<
                 T>::value() == static_cast<T>(1.00866491595));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_relative_atomic_mass<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(4.9e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_relative_atomic_mass<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_relative_atomic_mass<
          T>::precision()));
}

// neutron-tau mass ratio
// (0.528779 ± 3.6e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.528779));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::neutron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::neutron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.6e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_tau_mass_ratio<T>::precision()));
}

// neutron to shielded proton mag. mom. ratio
// (-0.68499694 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.68499694));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// Newtonian constant of gravitation
// (6.6743e-11 ± 1.5e-15) m^3 kg^-1 s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
                 T>::value() == static_cast<T>(6.6743e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
                 T>::uncertainty() == static_cast<T>(1.5e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Newtonian_constant_of_gravitation<
          T>::precision()));
}

// Newtonian constant of gravitation over h-bar c
// (6.70883e-39 ± 1.5e-43) (GeV/c^2)^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation_over_h_bar_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 Newtonian_constant_of_gravitation_over_h_bar_c<T>::value() ==
             static_cast<T>(6.70883e-39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty() ==
      static_cast<T>(1.5e-43));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
}

// nuclear magneton
// (5.0507837461e-27 ± 1.5e-36) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::nuclear_magneton<T>::value() ==
             static_cast<T>(5.0507837461e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::nuclear_magneton<T>::uncertainty() ==
      static_cast<T>(1.5e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::nuclear_magneton<T>::precision()));
}

// nuclear magneton in eV/T
// (3.15245125844e-08 ± 9.6e-18) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::nuclear_magneton_in_eV_T<T>::value() ==
      static_cast<T>(3.15245125844e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::nuclear_magneton_in_eV_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::nuclear_magneton_in_eV_T<
                 T>::uncertainty() == static_cast<T>(9.6e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::nuclear_magneton_in_eV_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::nuclear_magneton_in_eV_T<
                    T>::precision()));
}

// nuclear magneton in inverse meter per tesla
// (0.0254262341353 ± 7.8e-12) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_inverse_meter_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          nuclear_magneton_in_inverse_meter_per_tesla<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 nuclear_magneton_in_inverse_meter_per_tesla<T>::value() ==
             static_cast<T>(0.0254262341353));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          nuclear_magneton_in_inverse_meter_per_tesla<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          nuclear_magneton_in_inverse_meter_per_tesla<T>::uncertainty() ==
      static_cast<T>(7.8e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          nuclear_magneton_in_inverse_meter_per_tesla<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          nuclear_magneton_in_inverse_meter_per_tesla<T>::precision()));
}

// nuclear magneton in K/T
// (0.00036582677756 ± 1.1e-13) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton_in_K_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::nuclear_magneton_in_K_T<T>::value() ==
      static_cast<T>(0.00036582677756));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::nuclear_magneton_in_K_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::nuclear_magneton_in_K_T<
                 T>::uncertainty() == static_cast<T>(1.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::nuclear_magneton_in_K_T<T>::precision()));
}

// nuclear magneton in MHz/T
// (7.6225932291 ± 2.3e-09) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<T>::value() ==
      static_cast<T>(7.6225932291));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(2.3e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<
                    T>::precision()));
}

// Planck constant
// (6.62607015e-34 ± 0.0) J Hz^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_constant<T>::value() ==
             static_cast<T>(6.62607015e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Planck_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_constant<T>::precision()));
}

// Planck constant in eV/Hz
// (4.135667696e-15 ± 0.0) eV Hz^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_in_eV_Hz, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_constant_in_eV_Hz<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Planck_constant_in_eV_Hz<T>::value() ==
      static_cast<T>(4.135667696e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Planck_constant_in_eV_Hz<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_constant_in_eV_Hz<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Planck_constant_in_eV_Hz<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Planck_constant_in_eV_Hz<
                    T>::precision()));
}

// Planck length
// (1.616255e-35 ± 1.8e-40) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_length, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Planck_length<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_length<T>::value() ==
             static_cast<T>(1.616255e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_length<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_length<T>::uncertainty() ==
             static_cast<T>(1.8e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_length<T>::precision()));
}

// Planck mass
// (2.176434e-08 ± 2.4e-13) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Planck_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_mass<T>::value() ==
             static_cast<T>(2.176434e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_mass<T>::uncertainty() ==
             static_cast<T>(2.4e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_mass<T>::precision()));
}

// Planck mass energy equivalent in GeV
// (1.22089e+19 ± 140000000000000.0) GeV
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass_energy_equivalent_in_GeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::value() == static_cast<T>(1.22089e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty() == static_cast<T>(140000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
}

// Planck temperature
// (1.416784e+32 ± 1.6e+27) K
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_temperature, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_temperature<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_temperature<T>::value() ==
             static_cast<T>(1.416784e+32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_temperature<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Planck_temperature<T>::uncertainty() ==
      static_cast<T>(1.6e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_temperature<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_temperature<T>::precision()));
}

// Planck time
// (5.391247e-44 ± 6e-49) s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_time, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Planck_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_time<T>::value() ==
             static_cast<T>(5.391247e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_time<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Planck_time<T>::uncertainty() ==
             static_cast<T>(6e-49));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Planck_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Planck_time<T>::precision()));
}

// proton charge to mass quotient
// (95788331.56 ± 0.029) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(95788331.56));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(0.029));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_charge_to_mass_quotient<
          T>::precision()));
}

// proton Compton wavelength
// (1.32140985539e-15 ± 4e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_Compton_wavelength<T>::value() ==
      static_cast<T>(1.32140985539e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(4e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::proton_Compton_wavelength<
                    T>::precision()));
}

// proton-electron mass ratio
// (1836.15267343 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_electron_mass_ratio<T>::value() ==
      static_cast<T>(1836.15267343));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::proton_electron_mass_ratio<
                    T>::precision()));
}

// proton g factor
// (5.5856946893 ± 1.6e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_g_factor<T>::value() ==
             static_cast<T>(5.5856946893));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_g_factor<T>::uncertainty() ==
      static_cast<T>(1.6e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_g_factor<T>::precision()));
}

// proton gyromag. ratio
// (267522187.44 ± 0.11) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_gyromag_ratio<T>::value() ==
             static_cast<T>(267522187.44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(0.11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_gyromag_ratio<T>::precision()));
}

// proton gyromag. ratio in MHz/T
// (42.577478518 ± 1.8e-08) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
                 T>::value() == static_cast<T>(42.577478518));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(1.8e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_gyromag_ratio_in_MHz_T<
          T>::precision()));
}

// proton mag. mom.
// (1.41060679736e-26 ± 6e-36) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mag_mom<T>::value() ==
             static_cast<T>(1.41060679736e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mag_mom<T>::uncertainty() ==
             static_cast<T>(6e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mag_mom<T>::precision()));
}

// proton mag. mom. to Bohr magneton ratio
// (0.0015210322023 ± 4.6e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0015210322023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.6e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// proton mag. mom. to nuclear magneton ratio
// (2.79284734463 ± 8.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.79284734463));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(8.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// proton mag. shielding correction
// (2.5689e-05 ± 1.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_shielding_correction, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_shielding_correction<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mag_shielding_correction<
                 T>::value() == static_cast<T>(2.5689e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_shielding_correction<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mag_shielding_correction<
                 T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mag_shielding_correction<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mag_shielding_correction<
          T>::precision()));
}

// proton mass
// (1.67262192369e-27 ± 5.1e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mass<T>::value() ==
             static_cast<T>(1.67262192369e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mass<T>::uncertainty() ==
             static_cast<T>(5.1e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mass<T>::precision()));
}

// proton mass energy equivalent
// (1.50327761598e-10 ± 4.6e-20) J
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.50327761598e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(4.6e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mass_energy_equivalent<
          T>::precision()));
}

// proton mass energy equivalent in MeV
// (938.27208816 ± 2.9e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(938.27208816));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(2.9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// proton mass in u
// (1.007276466621 ± 5.3e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_mass_in_u<T>::value() ==
             static_cast<T>(1.007276466621));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(5.3e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_mass_in_u<T>::precision()));
}

// proton molar mass
// (0.00100727646627 ± 3.1e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_molar_mass<T>::value() ==
             static_cast<T>(0.00100727646627));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_molar_mass<T>::uncertainty() ==
      static_cast<T>(3.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_molar_mass<T>::precision()));
}

// proton-muon mass ratio
// (8.88024337 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.88024337));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_muon_mass_ratio<T>::precision()));
}

// proton-neutron mag. mom. ratio
// (-1.45989805 ± 3.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-1.45989805));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_neutron_mag_mom_ratio<
          T>::precision()));
}

// proton-neutron mass ratio
// (0.99862347812 ± 4.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.99862347812));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.9e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::proton_neutron_mass_ratio<
                    T>::precision()));
}

// proton relative atomic mass
// (1.007276466621 ± 5.3e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_relative_atomic_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_relative_atomic_mass<T>::value() ==
      static_cast<T>(1.007276466621));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_relative_atomic_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(5.3e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_relative_atomic_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::proton_relative_atomic_mass<
                    T>::precision()));
}

// proton rms charge radius
// (8.414e-16 ± 1.9e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_rms_charge_radius<T>::value() ==
      static_cast<T>(8.414e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::proton_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(1.9e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::proton_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::proton_rms_charge_radius<
                    T>::precision()));
}

// proton-tau mass ratio
// (0.528051 ± 3.6e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.528051));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(3.6e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::proton_tau_mass_ratio<T>::precision()));
}

// quantum of circulation
// (0.00036369475516 ± 1.1e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::quantum_of_circulation<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::quantum_of_circulation<T>::value() ==
      static_cast<T>(0.00036369475516));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::quantum_of_circulation<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::quantum_of_circulation<
                 T>::uncertainty() == static_cast<T>(1.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::quantum_of_circulation<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::quantum_of_circulation<T>::precision()));
}

// quantum of circulation times 2
// (0.00072738951032 ± 2.2e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation_times_2, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::quantum_of_circulation_times_2<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::quantum_of_circulation_times_2<
                 T>::value() == static_cast<T>(0.00072738951032));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::quantum_of_circulation_times_2<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::quantum_of_circulation_times_2<
                 T>::uncertainty() == static_cast<T>(2.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::quantum_of_circulation_times_2<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::quantum_of_circulation_times_2<
          T>::precision()));
}

// reduced Compton wavelength
// (3.8615926796e-13 ± 1.2e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::reduced_Compton_wavelength<T>::value() ==
      static_cast<T>(3.8615926796e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::reduced_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(1.2e-22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::reduced_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::reduced_Compton_wavelength<
                    T>::precision()));
}

// reduced muon Compton wavelength
// (1.867594306e-15 ± 4.2e-23) m
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_muon_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
                 T>::value() == static_cast<T>(1.867594306e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(4.2e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_muon_Compton_wavelength<
          T>::precision()));
}

// reduced neutron Compton wavelength
// (2.1001941552e-16 ± 1.2e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_neutron_Compton_wavelength, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
                 T>::value() == static_cast<T>(2.1001941552e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(1.2e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_neutron_Compton_wavelength<
          T>::precision()));
}

// reduced Planck constant
// (1.054571817e-34 ± 0.0) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::reduced_Planck_constant<T>::value() ==
      static_cast<T>(1.054571817e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::reduced_Planck_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_Planck_constant<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_Planck_constant<T>::precision()));
}

// reduced Planck constant in eV s
// (6.582119569e-16 ± 0.0) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_Planck_constant_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
                 T>::value() == static_cast<T>(6.582119569e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_Planck_constant_in_eV_s<
          T>::precision()));
}

// reduced Planck constant times c in MeV fm
// (197.3269804 ± 0.0) MeV fm
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_Planck_constant_times_c_in_MeV_fm, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::value() == static_cast<T>(197.3269804));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_Planck_constant_times_c_in_MeV_fm<
          T>::precision()));
}

// reduced proton Compton wavelength
// (2.10308910336e-16 ± 6.4e-26) m
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_proton_Compton_wavelength, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
                 T>::value() == static_cast<T>(2.10308910336e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(6.4e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_proton_Compton_wavelength<
          T>::precision()));
}

// reduced tau Compton wavelength
// (1.110538e-16 ± 7.5e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(reduced_tau_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
                 T>::value() == static_cast<T>(1.110538e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(7.5e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::reduced_tau_Compton_wavelength<
          T>::precision()));
}

// Rydberg constant
// (10973731.56816 ± 2.1e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant<T>::value() ==
             static_cast<T>(10973731.56816));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Rydberg_constant<T>::uncertainty() ==
      static_cast<T>(2.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Rydberg_constant<T>::precision()));
}

// Rydberg constant times c in Hz
// (3289841960250800.0 ± 6400.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_c_in_Hz, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
                 T>::value() == static_cast<T>(3289841960250800.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
                 T>::uncertainty() == static_cast<T>(6400.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
}

// Rydberg constant times hc in eV
// (13.605693122994 ± 2.6e-11) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
                 T>::value() == static_cast<T>(13.605693122994));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
                 T>::uncertainty() == static_cast<T>(2.6e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
}

// Rydberg constant times hc in J
// (2.1798723611035e-18 ± 4.2e-30) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_J, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
                 T>::value() == static_cast<T>(2.1798723611035e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
                 T>::uncertainty() == static_cast<T>(4.2e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Rydberg_constant_times_hc_in_J<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 100 kPa)
// (-1.15170753706 ± 4.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value() == static_cast<T>(-1.15170753706));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty() == static_cast<T>(4.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 101.325 kPa)
// (-1.16487052358 ± 4.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value() == static_cast<T>(-1.16487052358));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(4.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
}

// second radiation constant
// (0.01438776877 ± 0.0) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(second_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::second_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::second_radiation_constant<T>::value() ==
      static_cast<T>(0.01438776877));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::second_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::second_radiation_constant<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::second_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::second_radiation_constant<
                    T>::precision()));
}

// shielded helion gyromag. ratio
// (203789456.9 ± 2.4) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
                 T>::value() == static_cast<T>(203789456.9));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(2.4));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio<
          T>::precision()));
}

// shielded helion gyromag. ratio in MHz/T
// (32.43409942 ± 3.8e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio_in_MHz_T, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::value() == static_cast<T>(32.43409942));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::uncertainty() == static_cast<T>(3.8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_helion_gyromag_ratio_in_MHz_T<
          T>::precision()));
}

// shielded helion mag. mom.
// (-1.07455309e-26 ± 1.3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_helion_mag_mom<T>::value() ==
      static_cast<T>(-1.07455309e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::shielded_helion_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_helion_mag_mom<
                 T>::uncertainty() == static_cast<T>(1.3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_helion_mag_mom<T>::precision()));
}

// shielded helion mag. mom. to Bohr magneton ratio
// (-0.001158671471 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-0.001158671471));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded helion mag. mom. to nuclear magneton ratio
// (-2.127497719 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(-2.127497719));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// shielded helion to proton mag. mom. ratio
// (-0.7617665618 ± 8.9e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.7617665618));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(8.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
}

// shielded helion to shielded proton mag. mom. ratio
// (-0.7617861313 ± 3.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_shielded_proton_mag_mom_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value() ==
             static_cast<T>(-0.7617861313));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty() ==
      static_cast<T>(3.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
}

// shielded proton gyromag. ratio
// (267515315.1 ± 2.9) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
                 T>::value() == static_cast<T>(267515315.1));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(2.9));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio<
          T>::precision()));
}

// shielded proton gyromag. ratio in MHz/T
// (42.57638474 ± 4.6e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio_in_MHz_T, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::value() == static_cast<T>(42.57638474));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::uncertainty() == static_cast<T>(4.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_proton_gyromag_ratio_in_MHz_T<
          T>::precision()));
}

// shielded proton mag. mom.
// (1.41057056e-26 ± 1.5e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielded_proton_mag_mom<T>::value() ==
      static_cast<T>(1.41057056e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::shielded_proton_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::shielded_proton_mag_mom<
                 T>::uncertainty() == static_cast<T>(1.5e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielded_proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielded_proton_mag_mom<T>::precision()));
}

// shielded proton mag. mom. to Bohr magneton ratio
// (0.001520993128 ± 1.7e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::
                 shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(0.001520993128));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded proton mag. mom. to nuclear magneton ratio
// (2.792775599 ± 3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(2.792775599));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// shielding difference of d and p in HD
// (2.02e-08 ± 2e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielding_difference_of_d_and_p_in_HD, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::value() == static_cast<T>(2.02e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::uncertainty() == static_cast<T>(2e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielding_difference_of_d_and_p_in_HD<
          T>::precision()));
}

// shielding difference of t and p in HT
// (2.414e-08 ± 2e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielding_difference_of_t_and_p_in_HT, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::value() == static_cast<T>(2.414e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::uncertainty() == static_cast<T>(2e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::shielding_difference_of_t_and_p_in_HT<
          T>::precision()));
}

// speed of light in vacuum
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(speed_of_light_in_vacuum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::speed_of_light_in_vacuum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::speed_of_light_in_vacuum<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::speed_of_light_in_vacuum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::speed_of_light_in_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::speed_of_light_in_vacuum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::speed_of_light_in_vacuum<
                    T>::precision()));
}

// standard acceleration of gravity
// (9.80665 ± 0.0) m s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_acceleration_of_gravity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_acceleration_of_gravity<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::standard_acceleration_of_gravity<
                 T>::value() == static_cast<T>(9.80665));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_acceleration_of_gravity<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::standard_acceleration_of_gravity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_acceleration_of_gravity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::standard_acceleration_of_gravity<
          T>::precision()));
}

// standard atmosphere
// (101325.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_atmosphere, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_atmosphere<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::standard_atmosphere<T>::value() ==
             static_cast<T>(101325.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_atmosphere<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::standard_atmosphere<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_atmosphere<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::standard_atmosphere<T>::precision()));
}

// standard-state pressure
// (100000.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_state_pressure, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_state_pressure<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::standard_state_pressure<T>::value() ==
      static_cast<T>(100000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::standard_state_pressure<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::standard_state_pressure<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::standard_state_pressure<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::standard_state_pressure<T>::precision()));
}

// Stefan-Boltzmann constant
// (5.670374419e-08 ± 0.0) W m^-2 K^-4
BOOST_AUTO_TEST_CASE_TEMPLATE(Stefan_Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Stefan_Boltzmann_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Stefan_Boltzmann_constant<T>::value() ==
      static_cast<T>(5.670374419e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Stefan_Boltzmann_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::Stefan_Boltzmann_constant<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::Stefan_Boltzmann_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::Stefan_Boltzmann_constant<
                    T>::precision()));
}

// tau Compton wavelength
// (6.97771e-16 ± 4.7e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_Compton_wavelength<T>::value() ==
      static_cast<T>(6.97771e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(4.7e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_Compton_wavelength<T>::precision()));
}

// tau-electron mass ratio
// (3477.23 ± 0.23)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_electron_mass_ratio<T>::value() ==
      static_cast<T>(3477.23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_electron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_electron_mass_ratio<T>::precision()));
}

// tau energy equivalent
// (1776.86 ± 0.12) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::value() ==
      static_cast<T>(1776.86));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::uncertainty() ==
      static_cast<T>(0.12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_energy_equivalent<T>::precision()));
}

// tau mass
// (3.16754e-27 ± 2.1e-31) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::tau_mass<T>::value() ==
             static_cast<T>(3.16754e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_mass<T>::uncertainty() ==
             static_cast<T>(2.1e-31));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::tau_mass<T>::precision()));
}

// tau mass energy equivalent
// (2.84684e-10 ± 1.9e-14) J
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_mass_energy_equivalent<T>::value() ==
      static_cast<T>(2.84684e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.9e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::tau_mass_energy_equivalent<
                    T>::precision()));
}

// tau mass in u
// (1.90754 ± 0.00013) u
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_in_u, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::tau_mass_in_u<T>::value() ==
             static_cast<T>(1.90754));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_mass_in_u<T>::uncertainty() ==
             static_cast<T>(0.00013));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_mass_in_u<T>::precision()));
}

// tau molar mass
// (0.00190754 ± 1.3e-07) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::tau_molar_mass<T>::value() ==
             static_cast<T>(0.00190754));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_molar_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_molar_mass<T>::uncertainty() ==
             static_cast<T>(1.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_molar_mass<T>::precision()));
}

// tau-muon mass ratio
// (16.817 ± 0.0011)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_muon_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::tau_muon_mass_ratio<T>::value() ==
             static_cast<T>(16.817));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_muon_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_muon_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.0011));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_muon_mass_ratio<T>::precision()));
}

// tau-neutron mass ratio
// (1.89115 ± 0.00013)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_neutron_mass_ratio<T>::value() ==
      static_cast<T>(1.89115));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::tau_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::tau_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.00013));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_neutron_mass_ratio<T>::precision()));
}

// tau-proton mass ratio
// (1.89376 ± 0.00013)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.89376));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.00013));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::tau_proton_mass_ratio<T>::precision()));
}

// Thomson cross section
// (6.6524587321e-29 ± 6e-38) m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(Thomson_cross_section, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Thomson_cross_section<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Thomson_cross_section<T>::value() ==
      static_cast<T>(6.6524587321e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Thomson_cross_section<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Thomson_cross_section<T>::uncertainty() ==
      static_cast<T>(6e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Thomson_cross_section<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Thomson_cross_section<T>::precision()));
}

// triton-electron mass ratio
// (5496.92153573 ± 2.7e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_electron_mass_ratio<T>::value() ==
      static_cast<T>(5496.92153573));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.7e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::triton_electron_mass_ratio<
                    T>::precision()));
}

// triton g factor
// (5.957924931 ± 1.2e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_g_factor<T>::value() ==
             static_cast<T>(5.957924931));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_g_factor<T>::uncertainty() ==
      static_cast<T>(1.2e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_g_factor<T>::precision()));
}

// triton mag. mom.
// (1.5046095202e-26 ± 3e-35) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mag_mom<T>::value() ==
             static_cast<T>(1.5046095202e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mag_mom<T>::uncertainty() ==
             static_cast<T>(3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mag_mom<T>::precision()));
}

// triton mag. mom. to Bohr magneton ratio
// (0.0016223936651 ± 3.2e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0016223936651));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(3.2e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// triton mag. mom. to nuclear magneton ratio
// (2.9789624656 ± 5.9e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.9789624656));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(5.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// triton mass
// (5.0073567446e-27 ± 1.5e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mass<T>::value() ==
             static_cast<T>(5.0073567446e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mass<T>::uncertainty() ==
             static_cast<T>(1.5e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mass<T>::precision()));
}

// triton mass energy equivalent
// (4.500387806e-10 ± 1.4e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.500387806e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.4e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mass_energy_equivalent<
          T>::precision()));
}

// triton mass energy equivalent in MeV
// (2808.92113298 ± 8.5e-07) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.92113298));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(8.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// triton mass in u
// (3.01550071621 ± 1.2e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_mass_in_u<T>::value() ==
             static_cast<T>(3.01550071621));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_mass_in_u<T>::precision()));
}

// triton molar mass
// (0.00301550071517 ± 9.2e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_molar_mass<T>::value() ==
             static_cast<T>(0.00301550071517));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_molar_mass<T>::uncertainty() ==
      static_cast<T>(9.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_molar_mass<T>::precision()));
}

// triton-proton mass ratio
// (2.99371703414 ± 1.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.99371703414));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::triton_proton_mass_ratio<
                    T>::precision()));
}

// triton relative atomic mass
// (3.01550071621 ± 1.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_relative_atomic_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_relative_atomic_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::triton_relative_atomic_mass<T>::value() ==
      static_cast<T>(3.01550071621));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_relative_atomic_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_relative_atomic_mass<
                 T>::uncertainty() == static_cast<T>(1.2e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::triton_relative_atomic_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::triton_relative_atomic_mass<
                    T>::precision()));
}

// triton to proton mag. mom. ratio
// (1.0666399191 ± 2.1e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_to_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(1.0666399191));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::triton_to_proton_mag_mom_ratio<
          T>::precision()));
}

// unified atomic mass unit
// (1.6605390666e-27 ± 5e-37) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(unified_atomic_mass_unit, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::unified_atomic_mass_unit<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::unified_atomic_mass_unit<T>::value() ==
      static_cast<T>(1.6605390666e-27));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::unified_atomic_mass_unit<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::unified_atomic_mass_unit<
                 T>::uncertainty() == static_cast<T>(5e-37));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::unified_atomic_mass_unit<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2018::unified_atomic_mass_unit<
                    T>::precision()));
}

// vacuum electric permittivity
// (8.8541878128e-12 ± 1.3e-21) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(vacuum_electric_permittivity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::vacuum_electric_permittivity<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::vacuum_electric_permittivity<
                 T>::value() == static_cast<T>(8.8541878128e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::vacuum_electric_permittivity<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::vacuum_electric_permittivity<
                 T>::uncertainty() == static_cast<T>(1.3e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::vacuum_electric_permittivity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::vacuum_electric_permittivity<
          T>::precision()));
}

// vacuum mag. permeability
// (1.25663706212e-06 ± 1.9e-16) N A^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(vacuum_mag_permeability, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::vacuum_mag_permeability<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::vacuum_mag_permeability<T>::value() ==
      static_cast<T>(1.25663706212e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2018::vacuum_mag_permeability<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2018::vacuum_mag_permeability<
                 T>::uncertainty() == static_cast<T>(1.9e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::vacuum_mag_permeability<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::vacuum_mag_permeability<T>::precision()));
}

// von Klitzing constant
// (25812.80745 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(von_Klitzing_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::value() ==
      static_cast<T>(25812.80745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::von_Klitzing_constant<T>::precision()));
}

// weak mixing angle
// (0.2229 ± 0.0003)
BOOST_AUTO_TEST_CASE_TEMPLATE(weak_mixing_angle, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::weak_mixing_angle<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::weak_mixing_angle<T>::value() ==
             static_cast<T>(0.2229));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::weak_mixing_angle<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::weak_mixing_angle<T>::uncertainty() ==
      static_cast<T>(0.0003));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::weak_mixing_angle<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::weak_mixing_angle<T>::precision()));
}

// Wien frequency displacement law constant
// (58789257570.0 ± 0.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_frequency_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::value() == static_cast<T>(58789257570.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Wien_frequency_displacement_law_constant<
          T>::precision()));
}

// Wien wavelength displacement law constant
// (0.002897771955 ± 0.0) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_wavelength_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::value() == static_cast<T>(0.002897771955));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::Wien_wavelength_displacement_law_constant<
          T>::precision()));
}

// W to Z mass ratio
// (0.88153 ± 0.00017)
BOOST_AUTO_TEST_CASE_TEMPLATE(W_to_Z_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::value() ==
             static_cast<T>(0.88153));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2018::W_to_Z_mass_ratio<T>::precision()));
}
