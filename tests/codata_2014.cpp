#define BOOST_TEST_MODULE CODATA_2014
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/constants/codata_2014.hpp>

// {220} lattice spacing of silicon
// (1.920155714e-10 ± 3.2e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_spacing_of_silicon_220, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
                 T>::value() == static_cast<T>(1.920155714e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
                 T>::uncertainty() == static_cast<T>(3.2e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::lattice_spacing_of_silicon_220<
          T>::precision()));
}

// alpha particle-electron mass ratio
// (7294.29954136 ± 2.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_electron_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
                 T>::value() == static_cast<T>(7294.29954136));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::alpha_particle_electron_mass_ratio<
          T>::precision()));
}

// alpha particle mass
// (6.64465723e-27 ± 8.2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_mass<T>::value() ==
             static_cast<T>(6.64465723e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::alpha_particle_mass<T>::uncertainty() ==
      static_cast<T>(8.2e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::alpha_particle_mass<T>::precision()));
}

// alpha particle mass energy equivalent
// (5.971920097e-10 ± 7.3e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::value() == static_cast<T>(5.971920097e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::uncertainty() == static_cast<T>(7.3e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::alpha_particle_mass_energy_equivalent<
          T>::precision()));
}

// alpha particle mass energy equivalent in MeV
// (3727.379378 ± 2.3e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 alpha_particle_mass_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(3727.379378));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(2.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
}

// alpha particle mass in u
// (4.001506179127 ± 6.3e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_mass_in_u<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::alpha_particle_mass_in_u<T>::value() ==
      static_cast<T>(4.001506179127));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::alpha_particle_mass_in_u<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_mass_in_u<
                 T>::uncertainty() == static_cast<T>(6.3e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::alpha_particle_mass_in_u<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::alpha_particle_mass_in_u<
                    T>::precision()));
}

// alpha particle molar mass
// (0.004001506179127 ± 6.3e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_molar_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::alpha_particle_molar_mass<T>::value() ==
      static_cast<T>(0.004001506179127));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::alpha_particle_molar_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_molar_mass<
                 T>::uncertainty() == static_cast<T>(6.3e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::alpha_particle_molar_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::alpha_particle_molar_mass<
                    T>::precision()));
}

// alpha particle-proton mass ratio
// (3.97259968907 ± 3.6e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
                 T>::value() == static_cast<T>(3.97259968907));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.6e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::alpha_particle_proton_mass_ratio<
          T>::precision()));
}

// Angstrom star
// (1.00001495e-10 ± 9e-17) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Angstrom_star, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Angstrom_star<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Angstrom_star<T>::value() ==
             static_cast<T>(1.00001495e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Angstrom_star<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Angstrom_star<T>::uncertainty() ==
             static_cast<T>(9e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Angstrom_star<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Angstrom_star<T>::precision()));
}

// atomic mass constant
// (1.66053904e-27 ± 2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_mass_constant<T>::value() ==
             static_cast<T>(1.66053904e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_constant<T>::uncertainty() ==
      static_cast<T>(2e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_constant<T>::precision()));
}

// atomic mass constant energy equivalent
// (1.492418062e-10 ± 1.8e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::value() == static_cast<T>(1.492418062e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::uncertainty() == static_cast<T>(1.8e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_constant_energy_equivalent<
          T>::precision()));
}

// atomic mass constant energy equivalent in MeV
// (931.4940954 ± 5.7e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 atomic_mass_constant_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(931.4940954));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(5.7e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
}

// atomic mass unit-electron volt relationship
// (931494095.4 ± 5.7) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_electron_volt_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 atomic_mass_unit_electron_volt_relationship<T>::value() ==
             static_cast<T>(931494095.4));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty() ==
      static_cast<T>(5.7));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
}

// atomic mass unit-hartree relationship
// (34231776.902 ± 0.016) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::value() == static_cast<T>(34231776.902));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::uncertainty() == static_cast<T>(0.016));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_unit_hartree_relationship<
          T>::precision()));
}

// atomic mass unit-hertz relationship
// (2.2523427206e+23 ± 100000000000000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hertz_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::value() == static_cast<T>(2.2523427206e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::uncertainty() == static_cast<T>(100000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_unit_hertz_relationship<
          T>::precision()));
}

// atomic mass unit-inverse meter relationship
// (751300661660000.0 ± 340000.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_inverse_meter_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 atomic_mass_unit_inverse_meter_relationship<T>::value() ==
             static_cast<T>(751300661660000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty() ==
      static_cast<T>(340000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
}

// atomic mass unit-joule relationship
// (1.492418062e-10 ± 1.8e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_joule_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::value() == static_cast<T>(1.492418062e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::uncertainty() == static_cast<T>(1.8e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_unit_joule_relationship<
          T>::precision()));
}

// atomic mass unit-kelvin relationship
// (10809543800000.0 ± 6200000.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::value() == static_cast<T>(10809543800000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty() == static_cast<T>(6200000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
}

// atomic mass unit-kilogram relationship
// (1.66053904e-27 ± 2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::value() == static_cast<T>(1.66053904e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(2e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
}

// atomic unit of 1st hyperpolarizability
// (3.206361329e-53 ± 2e-61) C^3 m^3 J^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_1st_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::value() == static_cast<T>(3.206361329e-53));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(2e-61));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
}

// atomic unit of 2nd hyperpolarizability
// (6.235380085e-65 ± 7.7e-73) C^4 m^4 J^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_2nd_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::value() == static_cast<T>(6.235380085e-65));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(7.7e-73));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
}

// atomic unit of action
// (1.0545718e-34 ± 1.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::value() ==
      static_cast<T>(1.0545718e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::uncertainty() ==
      static_cast<T>(1.3e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_action<T>::precision()));
}

// atomic unit of charge
// (1.6021766208e-19 ± 9.8e-28) C
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::value() ==
      static_cast<T>(1.6021766208e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::uncertainty() ==
      static_cast<T>(9.8e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_charge<T>::precision()));
}

// atomic unit of charge density
// (1081202377000.0 ± 6700.0) C m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_charge_density<
                 T>::value() == static_cast<T>(1081202377000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_charge_density<
                 T>::uncertainty() == static_cast<T>(6700.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_charge_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_charge_density<
          T>::precision()));
}

// atomic unit of current
// (0.006623618183 ± 4.1e-11) A
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_current<T>::value() ==
      static_cast<T>(0.006623618183));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::atomic_unit_of_current<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_current<
                 T>::uncertainty() == static_cast<T>(4.1e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_current<T>::precision()));
}

// atomic unit of electric dipole mom.
// (8.478353552e-30 ± 5.2e-38) C m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_dipole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
                 T>::value() == static_cast<T>(8.478353552e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
                 T>::uncertainty() == static_cast<T>(5.2e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
}

// atomic unit of electric field
// (514220670700.0 ± 3200.0) V m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_field<
                 T>::value() == static_cast<T>(514220670700.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_field<
                 T>::uncertainty() == static_cast<T>(3200.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_field<
          T>::precision()));
}

// atomic unit of electric field gradient
// (9.717362356e+21 ± 60000000000000.0) V m^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field_gradient, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::value() == static_cast<T>(9.717362356e+21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::uncertainty() == static_cast<T>(60000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_field_gradient<
          T>::precision()));
}

// atomic unit of electric polarizability
// (1.6487772731e-41 ± 1.1e-50) C^2 m^2 J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_polarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::value() == static_cast<T>(1.6487772731e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::uncertainty() == static_cast<T>(1.1e-50));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_polarizability<
          T>::precision()));
}

// atomic unit of electric potential
// (27.21138602 ± 1.7e-07) V
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_potential, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_potential<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_potential<
                 T>::value() == static_cast<T>(27.21138602));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_potential<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_electric_potential<
                 T>::uncertainty() == static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_potential<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_potential<
          T>::precision()));
}

// atomic unit of electric quadrupole mom.
// (4.486551484e-40 ± 2.8e-48) C m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_quadrupole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::value() == static_cast<T>(4.486551484e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty() == static_cast<T>(2.8e-48));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
}

// atomic unit of energy
// (4.35974465e-18 ± 5.4e-26) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::value() ==
      static_cast<T>(4.35974465e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::uncertainty() ==
      static_cast<T>(5.4e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_energy<T>::precision()));
}

// atomic unit of force
// (8.23872336e-08 ± 1e-15) N
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_force, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_force<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_force<T>::value() ==
             static_cast<T>(8.23872336e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_force<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_force<T>::uncertainty() ==
      static_cast<T>(1e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_force<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_force<T>::precision()));
}

// atomic unit of length
// (5.2917721067e-11 ± 1.2e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::value() ==
      static_cast<T>(5.2917721067e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::uncertainty() ==
      static_cast<T>(1.2e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_length<T>::precision()));
}

// atomic unit of mag. dipole mom.
// (1.854801999e-23 ± 1.1e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_dipole_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
                 T>::value() == static_cast<T>(1.854801999e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
                 T>::uncertainty() == static_cast<T>(1.1e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
}

// atomic unit of mag. flux density
// (235051.755 ± 0.0014) T
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_flux_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
                 T>::value() == static_cast<T>(235051.755));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
                 T>::uncertainty() == static_cast<T>(0.0014));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_mag_flux_density<
          T>::precision()));
}

// atomic unit of magnetizability
// (7.8910365886e-29 ± 9e-38) J T^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magnetizability, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_magnetizability<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_magnetizability<
                 T>::value() == static_cast<T>(7.8910365886e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_magnetizability<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_magnetizability<
                 T>::uncertainty() == static_cast<T>(9e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_magnetizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_magnetizability<
          T>::precision()));
}

// atomic unit of mass
// (9.10938356e-31 ± 1.1e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938356e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(1.1e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_mass<T>::precision()));
}

// atomic unit of mom.um
// (1.992851882e-24 ± 2.4e-32) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_momum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_momum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_momum<T>::value() ==
             static_cast<T>(1.992851882e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_momum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_momum<T>::uncertainty() ==
      static_cast<T>(2.4e-32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_momum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_momum<T>::precision()));
}

// atomic unit of permittivity
// (1.112650056e-10 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_permittivity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_permittivity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_permittivity<T>::value() ==
      static_cast<T>(1.112650056e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::atomic_unit_of_permittivity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_permittivity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::atomic_unit_of_permittivity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::atomic_unit_of_permittivity<
                    T>::precision()));
}

// atomic unit of time
// (2.418884326509e-17 ± 1.4e-28) s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_time<T>::value() ==
             static_cast<T>(2.418884326509e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_time<T>::uncertainty() ==
      static_cast<T>(1.4e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_time<T>::precision()));
}

// atomic unit of velocity
// (2187691.26277 ± 0.0005) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::atomic_unit_of_velocity<T>::value() ==
      static_cast<T>(2187691.26277));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::atomic_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::atomic_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0005));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::atomic_unit_of_velocity<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::atomic_unit_of_velocity<T>::precision()));
}

// Avogadro constant
// (6.022140857e+23 ± 7400000000000000.0) mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Avogadro_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Avogadro_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Avogadro_constant<T>::value() ==
             static_cast<T>(6.022140857e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Avogadro_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Avogadro_constant<T>::uncertainty() ==
      static_cast<T>(7400000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Avogadro_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Avogadro_constant<T>::precision()));
}

// Bohr magneton
// (9.274009994e-24 ± 5.7e-32) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Bohr_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Bohr_magneton<T>::value() ==
             static_cast<T>(9.274009994e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Bohr_magneton<T>::uncertainty() ==
             static_cast<T>(5.7e-32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_magneton<T>::precision()));
}

// Bohr magneton in eV/T
// (5.7883818012e-05 ± 2.6e-14) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::value() ==
      static_cast<T>(5.7883818012e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::uncertainty() ==
      static_cast<T>(2.6e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_magneton_in_eV_T<T>::precision()));
}

// Bohr magneton in Hz/T
// (13996245042.0 ± 86.0) Hz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_Hz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::value() ==
      static_cast<T>(13996245042.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::uncertainty() ==
      static_cast<T>(86.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_magneton_in_Hz_T<T>::precision()));
}

// Bohr magneton in inverse meters per tesla
// (46.68644814 ± 2.9e-07) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value() == static_cast<T>(46.68644814));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty() == static_cast<T>(2.9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
}

// Bohr magneton in K/T
// (0.67171405 ± 3.9e-07) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::value() ==
             static_cast<T>(0.67171405));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::uncertainty() ==
      static_cast<T>(3.9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_magneton_in_K_T<T>::precision()));
}

// Bohr radius
// (5.2917721067e-11 ± 1.2e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_radius, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Bohr_radius<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Bohr_radius<T>::value() ==
             static_cast<T>(5.2917721067e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_radius<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Bohr_radius<T>::uncertainty() ==
             static_cast<T>(1.2e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Bohr_radius<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Bohr_radius<T>::precision()));
}

// Boltzmann constant
// (1.38064852e-23 ± 7.9e-30) J K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Boltzmann_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Boltzmann_constant<T>::value() ==
             static_cast<T>(1.38064852e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Boltzmann_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Boltzmann_constant<T>::uncertainty() ==
      static_cast<T>(7.9e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Boltzmann_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Boltzmann_constant<T>::precision()));
}

// Boltzmann constant in eV/K
// (8.6173303e-05 ± 5e-11) eV K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_eV_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<T>::value() ==
      static_cast<T>(8.6173303e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<
                 T>::uncertainty() == static_cast<T>(5e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Boltzmann_constant_in_eV_K<
                    T>::precision()));
}

// Boltzmann constant in Hz/K
// (20836612000.0 ± 12000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_Hz_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<T>::value() ==
      static_cast<T>(20836612000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<
                 T>::uncertainty() == static_cast<T>(12000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
}

// Boltzmann constant in inverse meters per kelvin
// (69.503457 ± 4e-05) m^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_inverse_meters_per_kelvin,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value() ==
             static_cast<T>(69.503457));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty() ==
      static_cast<T>(4e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
}

// characteristic impedance of vacuum
// (376.730313461 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(characteristic_impedance_of_vacuum, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
                 T>::value() == static_cast<T>(376.730313461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::characteristic_impedance_of_vacuum<
          T>::precision()));
}

// classical electron radius
// (2.8179403227e-15 ± 1.9e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(classical_electron_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::classical_electron_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::classical_electron_radius<T>::value() ==
      static_cast<T>(2.8179403227e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::classical_electron_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::classical_electron_radius<
                 T>::uncertainty() == static_cast<T>(1.9e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::classical_electron_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::classical_electron_radius<
                    T>::precision()));
}

// Compton wavelength
// (2.4263102367e-12 ± 1.1e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Compton_wavelength<T>::value() ==
             static_cast<T>(2.4263102367e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Compton_wavelength<T>::uncertainty() ==
      static_cast<T>(1.1e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Compton_wavelength<T>::precision()));
}

// Compton wavelength over 2 pi
// (3.8615926764e-13 ± 1.8e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(3.8615926764e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1.8e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Compton_wavelength_over_2_pi<
          T>::precision()));
}

// conductance quantum
// (7.748091731e-05 ± 1.8e-14) S
BOOST_AUTO_TEST_CASE_TEMPLATE(conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conductance_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::conductance_quantum<T>::value() ==
             static_cast<T>(7.748091731e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conductance_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::conductance_quantum<T>::uncertainty() ==
      static_cast<T>(1.8e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conductance_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::conductance_quantum<T>::precision()));
}

// conventional value of Josephson constant
// (483597900000000.0 ± 0.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_Josephson_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::value() == static_cast<T>(483597900000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::conventional_value_of_Josephson_constant<
          T>::precision()));
}

// conventional value of von Klitzing constant
// (25812.807 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_von_Klitzing_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          conventional_value_of_von_Klitzing_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 conventional_value_of_von_Klitzing_constant<T>::value() ==
             static_cast<T>(25812.807));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
}

// Cu x unit
// (1.00207697e-13 ± 2.8e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Cu_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Cu_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Cu_x_unit<T>::value() ==
             static_cast<T>(1.00207697e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Cu_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Cu_x_unit<T>::uncertainty() ==
             static_cast<T>(2.8e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Cu_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Cu_x_unit<T>::precision()));
}

// deuteron-electron mag. mom. ratio
// (-0.0004664345535 ± 2.6e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.0004664345535));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_electron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-electron mass ratio
// (3670.48296785 ± 1.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_electron_mass_ratio<
                 T>::value() == static_cast<T>(3670.48296785));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_electron_mass_ratio<
          T>::precision()));
}

// deuteron g factor
// (0.8574382311 ± 4.8e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_g_factor<T>::value() ==
             static_cast<T>(0.8574382311));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_g_factor<T>::uncertainty() ==
      static_cast<T>(4.8e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_g_factor<T>::precision()));
}

// deuteron mag. mom.
// (4.33073504e-27 ± 3.6e-35) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mag_mom<T>::value() ==
             static_cast<T>(4.33073504e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mag_mom<T>::uncertainty() ==
      static_cast<T>(3.6e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mag_mom<T>::precision()));
}

// deuteron mag. mom. to Bohr magneton ratio
// (0.0004669754554 ± 2.6e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0004669754554));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// deuteron mag. mom. to nuclear magneton ratio
// (0.8574382311 ± 4.8e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(0.8574382311));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(4.8e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// deuteron mass
// (3.343583719e-27 ± 4.1e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::deuteron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mass<T>::value() ==
             static_cast<T>(3.343583719e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mass<T>::uncertainty() ==
             static_cast<T>(4.1e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mass<T>::precision()));
}

// deuteron mass energy equivalent
// (3.005063183e-10 ± 3.7e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(3.005063183e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(3.7e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent<
          T>::precision()));
}

// deuteron mass energy equivalent in MeV
// (1875.612928 ± 1.2e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(1875.612928));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.2e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// deuteron mass in u
// (2.013553212745 ± 4e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_mass_in_u<T>::value() ==
             static_cast<T>(2.013553212745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_mass_in_u<T>::precision()));
}

// deuteron molar mass
// (0.002013553212745 ± 4e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_molar_mass<T>::value() ==
             static_cast<T>(0.002013553212745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_molar_mass<T>::uncertainty() ==
      static_cast<T>(4e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_molar_mass<T>::precision()));
}

// deuteron-neutron mag. mom. ratio
// (-0.44820652 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.44820652));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mag. mom. ratio
// (0.3070122077 ± 1.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.3070122077));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::deuteron_proton_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mass ratio
// (1.99900750087 ± 1.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.99900750087));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::deuteron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.9e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::deuteron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::deuteron_proton_mass_ratio<
                    T>::precision()));
}

// deuteron rms charge radius
// (2.1413e-15 ± 2.5e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::deuteron_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::deuteron_rms_charge_radius<T>::value() ==
      static_cast<T>(2.1413e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::deuteron_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::deuteron_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(2.5e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::deuteron_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::deuteron_rms_charge_radius<
                    T>::precision()));
}

// electric constant
// (8.854187817e-12 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electric_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electric_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electric_constant<T>::value() ==
             static_cast<T>(8.854187817e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electric_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electric_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electric_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electric_constant<T>::precision()));
}

// electron charge to mass quotient
// (-175882002400.0 ± 1100.0) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(-175882002400.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(1100.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_charge_to_mass_quotient<
          T>::precision()));
}

// electron-deuteron mag. mom. ratio
// (-2143.923499 ± 1.2e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-2143.923499));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.2e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_deuteron_mag_mom_ratio<
          T>::precision()));
}

// electron-deuteron mass ratio
// (0.0002724437107484 ± 9.6e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_deuteron_mass_ratio<
                 T>::value() == static_cast<T>(0.0002724437107484));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_deuteron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(9.6e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_deuteron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_deuteron_mass_ratio<
          T>::precision()));
}

// electron g factor
// (-2.00231930436182 ± 5.2e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_g_factor<T>::value() ==
             static_cast<T>(-2.00231930436182));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_g_factor<T>::uncertainty() ==
      static_cast<T>(5.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_g_factor<T>::precision()));
}

// electron gyromag. ratio
// (176085964400.0 ± 1100.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_gyromag_ratio<T>::value() ==
      static_cast<T>(176085964400.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_gyromag_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(1100.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_gyromag_ratio<T>::precision()));
}

// electron gyromag. ratio over 2 pi
// (28024.95164 ± 0.00017) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(28024.95164));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// electron-helion mass ratio
// (0.0001819543074854 ± 8.8e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_helion_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_helion_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_helion_mass_ratio<T>::value() ==
      static_cast<T>(0.0001819543074854));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_helion_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_helion_mass_ratio<
                 T>::uncertainty() == static_cast<T>(8.8e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_helion_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_helion_mass_ratio<
                    T>::precision()));
}

// electron mag. mom.
// (-9.28476462e-24 ± 5.7e-32) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mag_mom<T>::value() ==
             static_cast<T>(-9.28476462e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mag_mom<T>::uncertainty() ==
      static_cast<T>(5.7e-32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mag_mom<T>::precision()));
}

// electron mag. mom. anomaly
// (0.00115965218091 ± 2.6e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom_anomaly<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mag_mom_anomaly<T>::value() ==
      static_cast<T>(0.00115965218091));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_mag_mom_anomaly<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mag_mom_anomaly<
                 T>::uncertainty() == static_cast<T>(2.6e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_mag_mom_anomaly<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_mag_mom_anomaly<
                    T>::precision()));
}

// electron mag. mom. to Bohr magneton ratio
// (-1.00115965218091 ± 2.6e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-1.00115965218091));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.6e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// electron mag. mom. to nuclear magneton ratio
// (-1838.28197234 ± 1.7e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1838.28197234));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// electron mass
// (9.10938356e-31 ± 1.1e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mass<T>::value() ==
             static_cast<T>(9.10938356e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mass<T>::uncertainty() ==
             static_cast<T>(1.1e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mass<T>::precision()));
}

// electron mass energy equivalent
// (8.18710565e-14 ± 1e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(8.18710565e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mass_energy_equivalent<
          T>::precision()));
}

// electron mass energy equivalent in MeV
// (0.5109989461 ± 3.1e-09) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(0.5109989461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(3.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// electron mass in u
// (0.00054857990907 ± 1.6e-14) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_mass_in_u<T>::value() ==
             static_cast<T>(0.00054857990907));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1.6e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_mass_in_u<T>::precision()));
}

// electron molar mass
// (5.4857990907e-07 ± 1.6e-17) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_molar_mass<T>::value() ==
             static_cast<T>(5.4857990907e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_molar_mass<T>::uncertainty() ==
      static_cast<T>(1.6e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_molar_mass<T>::precision()));
}

// electron-muon mag. mom. ratio
// (206.766988 ± 4.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_muon_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_muon_mag_mom_ratio<T>::value() ==
      static_cast<T>(206.766988));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_muon_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_muon_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_muon_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_muon_mag_mom_ratio<
                    T>::precision()));
}

// electron-muon mass ratio
// (0.0048363317 ± 1.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_muon_mass_ratio<T>::value() ==
      static_cast<T>(0.0048363317));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_muon_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_muon_mass_ratio<
                    T>::precision()));
}

// electron-neutron mag. mom. ratio
// (960.9205 ± 0.00023)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(960.9205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(0.00023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_neutron_mag_mom_ratio<
          T>::precision()));
}

// electron-neutron mass ratio
// (0.00054386734428 ± 2.7e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.00054386734428));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.7e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_neutron_mass_ratio<
                    T>::precision()));
}

// electron-proton mag. mom. ratio
// (-658.2106866 ± 2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-658.2106866));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-proton mass ratio
// (0.000544617021352 ± 5.2e-14)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.000544617021352));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_proton_mass_ratio<
                    T>::precision()));
}

// electron-tau mass ratio
// (0.000287592 ± 2.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.000287592));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_tau_mass_ratio<T>::precision()));
}

// electron to alpha particle mass ratio
// (0.0001370933554798 ± 4.5e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_alpha_particle_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::value() == static_cast<T>(0.0001370933554798));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
}

// electron to shielded helion mag. mom. ratio
// (864.058257 ± 1e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_helion_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::value() == static_cast<T>(864.058257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
}

// electron to shielded proton mag. mom. ratio
// (-658.2275971 ± 7.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-658.2275971));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(7.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-triton mass ratio
// (0.0001819200062203 ± 8.4e-15)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_triton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_triton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_triton_mass_ratio<T>::value() ==
      static_cast<T>(0.0001819200062203));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_triton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_triton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(8.4e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_triton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::electron_triton_mass_ratio<
                    T>::precision()));
}

// electron volt
// (1.6021766208e-19 ± 9.8e-28) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::electron_volt<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt<T>::value() ==
             static_cast<T>(1.6021766208e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt<T>::uncertainty() ==
             static_cast<T>(9.8e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt<T>::precision()));
}

// electron volt-atomic mass unit relationship
// (1.0735441105e-09 ± 6.6e-18) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_volt_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 electron_volt_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.0735441105e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(6.6e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
}

// electron volt-hartree relationship
// (0.03674932248 ± 2.3e-10) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_hartree_relationship<
                 T>::value() == static_cast<T>(0.03674932248));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_hartree_relationship<
          T>::precision()));
}

// electron volt-hertz relationship
// (241798926200000.0 ± 1500000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_hertz_relationship<
                 T>::value() == static_cast<T>(241798926200000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(1500000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_hertz_relationship<
          T>::precision()));
}

// electron volt-inverse meter relationship
// (806554.4005 ± 0.005) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::value() == static_cast<T>(806554.4005));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(0.005));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_inverse_meter_relationship<
          T>::precision()));
}

// electron volt-joule relationship
// (1.6021766208e-19 ± 9.8e-28) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_joule_relationship<
                 T>::value() == static_cast<T>(1.6021766208e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_joule_relationship<
                 T>::uncertainty() == static_cast<T>(9.8e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_joule_relationship<
          T>::precision()));
}

// electron volt-kelvin relationship
// (11604.5221 ± 0.0067) K
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_kelvin_relationship<
                 T>::value() == static_cast<T>(11604.5221));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::electron_volt_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.0067));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_kelvin_relationship<
          T>::precision()));
}

// electron volt-kilogram relationship
// (1.782661907e-36 ± 1.1e-44) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::value() == static_cast<T>(1.782661907e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(1.1e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::electron_volt_kilogram_relationship<
          T>::precision()));
}

// elementary charge
// (1.6021766208e-19 ± 9.8e-28) C
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::elementary_charge<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::elementary_charge<T>::value() ==
             static_cast<T>(1.6021766208e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::elementary_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::elementary_charge<T>::uncertainty() ==
      static_cast<T>(9.8e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::elementary_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::elementary_charge<T>::precision()));
}

// elementary charge over h
// (241798926200000.0 ± 1500000.0) A J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge_over_h, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::elementary_charge_over_h<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::elementary_charge_over_h<T>::value() ==
      static_cast<T>(241798926200000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::elementary_charge_over_h<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::elementary_charge_over_h<
                 T>::uncertainty() == static_cast<T>(1500000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::elementary_charge_over_h<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::elementary_charge_over_h<
                    T>::precision()));
}

// Faraday constant
// (96485.33289 ± 0.00059) C mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Faraday_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Faraday_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Faraday_constant<T>::value() ==
             static_cast<T>(96485.33289));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Faraday_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Faraday_constant<T>::uncertainty() ==
      static_cast<T>(0.00059));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Faraday_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Faraday_constant<T>::precision()));
}

// Faraday constant for conventional electric current
// (96485.3251 ± 0.0012) C_90 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(
    Faraday_constant_for_conventional_electric_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Faraday_constant_for_conventional_electric_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          Faraday_constant_for_conventional_electric_current<T>::value() ==
      static_cast<T>(96485.3251));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::
                        Faraday_constant_for_conventional_electric_current<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::
                 Faraday_constant_for_conventional_electric_current<
                     T>::uncertainty() == static_cast<T>(0.0012));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
}

// Fermi coupling constant
// (1.1663787e-05 ± 6e-12) GeV^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Fermi_coupling_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Fermi_coupling_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Fermi_coupling_constant<T>::value() ==
      static_cast<T>(1.1663787e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Fermi_coupling_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Fermi_coupling_constant<
                 T>::uncertainty() == static_cast<T>(6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Fermi_coupling_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Fermi_coupling_constant<T>::precision()));
}

// fine-structure constant
// (0.0072973525664 ± 1.7e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::fine_structure_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::fine_structure_constant<T>::value() ==
      static_cast<T>(0.0072973525664));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::fine_structure_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(1.7e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::fine_structure_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::fine_structure_constant<T>::precision()));
}

// first radiation constant
// (3.74177179e-16 ± 4.6e-24) W m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::first_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::first_radiation_constant<T>::value() ==
      static_cast<T>(3.74177179e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::first_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::first_radiation_constant<
                 T>::uncertainty() == static_cast<T>(4.6e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::first_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::first_radiation_constant<
                    T>::precision()));
}

// first radiation constant for spectral radiance
// (1.191042953e-16 ± 1.5e-24) W m^2 sr^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant_for_spectral_radiance, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          first_radiation_constant_for_spectral_radiance<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 first_radiation_constant_for_spectral_radiance<T>::value() ==
             static_cast<T>(1.191042953e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty() ==
      static_cast<T>(1.5e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
}

// hartree-atomic mass unit relationship
// (2.9212623197e-08 ± 1.3e-17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(2.9212623197e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(1.3e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hartree_atomic_mass_unit_relationship<
          T>::precision()));
}

// hartree-electron volt relationship
// (27.21138602 ± 1.7e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_electron_volt_relationship<
                 T>::value() == static_cast<T>(27.21138602));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hartree_electron_volt_relationship<
          T>::precision()));
}

// Hartree energy
// (4.35974465e-18 ± 5.4e-26) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Hartree_energy<T>::value() ==
             static_cast<T>(4.35974465e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Hartree_energy<T>::uncertainty() ==
             static_cast<T>(5.4e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Hartree_energy<T>::precision()));
}

// Hartree energy in eV
// (27.21138602 ± 1.7e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy_in_eV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Hartree_energy_in_eV<T>::value() ==
             static_cast<T>(27.21138602));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy_in_eV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Hartree_energy_in_eV<T>::uncertainty() ==
      static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Hartree_energy_in_eV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Hartree_energy_in_eV<T>::precision()));
}

// hartree-hertz relationship
// (6579683920711000.0 ± 39000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hartree_hertz_relationship<T>::value() ==
      static_cast<T>(6579683920711000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(39000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hartree_hertz_relationship<
                    T>::precision()));
}

// hartree-inverse meter relationship
// (21947463.13702 ± 0.00013) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_inverse_meter_relationship<
                 T>::value() == static_cast<T>(21947463.13702));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.00013));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hartree_inverse_meter_relationship<
          T>::precision()));
}

// hartree-joule relationship
// (4.35974465e-18 ± 5.4e-26) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hartree_joule_relationship<T>::value() ==
      static_cast<T>(4.35974465e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_joule_relationship<
                 T>::uncertainty() == static_cast<T>(5.4e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hartree_joule_relationship<
                    T>::precision()));
}

// hartree-kelvin relationship
// (315775.13 ± 0.18) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hartree_kelvin_relationship<T>::value() ==
      static_cast<T>(315775.13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hartree_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hartree_kelvin_relationship<
                    T>::precision()));
}

// hartree-kilogram relationship
// (4.850870129e-35 ± 6e-43) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_kilogram_relationship<
                 T>::value() == static_cast<T>(4.850870129e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hartree_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(6e-43));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hartree_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hartree_kilogram_relationship<
          T>::precision()));
}

// helion-electron mass ratio
// (5495.88527922 ± 2.7e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_electron_mass_ratio<T>::value() ==
      static_cast<T>(5495.88527922));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::helion_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::helion_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.7e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::helion_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::helion_electron_mass_ratio<
                    T>::precision()));
}

// helion g factor
// (-4.255250616 ± 5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_g_factor<T>::value() ==
             static_cast<T>(-4.255250616));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_g_factor<T>::uncertainty() ==
      static_cast<T>(5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_g_factor<T>::precision()));
}

// helion mag. mom.
// (-1.074617522e-26 ± 1.4e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mag_mom<T>::value() ==
             static_cast<T>(-1.074617522e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mag_mom<T>::uncertainty() ==
             static_cast<T>(1.4e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mag_mom<T>::precision()));
}

// helion mag. mom. to Bohr magneton ratio
// (-0.001158740958 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.001158740958));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// helion mag. mom. to nuclear magneton ratio
// (-2.127625308 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-2.127625308));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// helion mass
// (5.0064127e-27 ± 6.2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::helion_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mass<T>::value() ==
             static_cast<T>(5.0064127e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mass<T>::uncertainty() ==
             static_cast<T>(6.2e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mass<T>::precision()));
}

// helion mass energy equivalent
// (4.499539341e-10 ± 5.5e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.499539341e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(5.5e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mass_energy_equivalent<
          T>::precision()));
}

// helion mass energy equivalent in MeV
// (2808.391586 ± 1.7e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.391586));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.7e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// helion mass in u
// (3.01493224673 ± 1.2e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_mass_in_u<T>::value() ==
             static_cast<T>(3.01493224673));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_mass_in_u<T>::precision()));
}

// helion molar mass
// (0.00301493224673 ± 1.2e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::helion_molar_mass<T>::value() ==
             static_cast<T>(0.00301493224673));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_molar_mass<T>::uncertainty() ==
      static_cast<T>(1.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::helion_molar_mass<T>::precision()));
}

// helion-proton mass ratio
// (2.99315267046 ± 2.9e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::helion_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::helion_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.99315267046));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::helion_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::helion_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.9e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::helion_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::helion_proton_mass_ratio<
                    T>::precision()));
}

// hertz-atomic mass unit relationship
// (4.4398216616e-24 ± 2e-33) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(4.4398216616e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(2e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hertz_atomic_mass_unit_relationship<
          T>::precision()));
}

// hertz-electron volt relationship
// (4.135667662e-15 ± 2.5e-23) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_electron_volt_relationship<
                 T>::value() == static_cast<T>(4.135667662e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(2.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hertz_electron_volt_relationship<
          T>::precision()));
}

// hertz-hartree relationship
// (1.5198298460088e-16 ± 9e-28) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_hartree_relationship<T>::value() ==
      static_cast<T>(1.5198298460088e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(9e-28));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hertz_hartree_relationship<
                    T>::precision()));
}

// hertz-inverse meter relationship
// (3.335640951e-09 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_inverse_meter_relationship<
                 T>::value() == static_cast<T>(3.335640951e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::hertz_inverse_meter_relationship<
          T>::precision()));
}

// hertz-joule relationship
// (6.62607004e-34 ± 8.1e-42) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_joule_relationship<T>::value() ==
      static_cast<T>(6.62607004e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_joule_relationship<
                 T>::uncertainty() == static_cast<T>(8.1e-42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hertz_joule_relationship<
                    T>::precision()));
}

// hertz-kelvin relationship
// (4.7992447e-11 ± 2.8e-17) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_kelvin_relationship<T>::value() ==
      static_cast<T>(4.7992447e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(2.8e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hertz_kelvin_relationship<
                    T>::precision()));
}

// hertz-kilogram relationship
// (7.372497201e-51 ± 9.1e-59) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::hertz_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::hertz_kilogram_relationship<T>::value() ==
      static_cast<T>(7.372497201e-51));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::hertz_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(9.1e-59));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::hertz_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::hertz_kilogram_relationship<
                    T>::precision()));
}

// inverse fine-structure constant
// (137.035999139 ± 3.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_fine_structure_constant<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_fine_structure_constant<
                 T>::value() == static_cast<T>(137.035999139));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_fine_structure_constant<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(3.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_fine_structure_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_fine_structure_constant<
          T>::precision()));
}

// inverse meter-atomic mass unit relationship
// (1.331025049e-15 ± 6.1e-25) u
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          inverse_meter_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 inverse_meter_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.331025049e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(6.1e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
}

// inverse meter-electron volt relationship
// (1.2398419739e-06 ± 7.6e-15) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::value() == static_cast<T>(1.2398419739e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(7.6e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_electron_volt_relationship<
          T>::precision()));
}

// inverse meter-hartree relationship
// (4.556335252767e-08 ± 2.7e-19) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_hartree_relationship<
                 T>::value() == static_cast<T>(4.556335252767e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.7e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_hartree_relationship<
          T>::precision()));
}

// inverse meter-hertz relationship
// (299792458.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_hertz_relationship<
                 T>::value() == static_cast<T>(299792458.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_hertz_relationship<
          T>::precision()));
}

// inverse meter-joule relationship
// (1.986445824e-25 ± 2.4e-33) J
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_joule_relationship<
                 T>::value() == static_cast<T>(1.986445824e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_joule_relationship<
                 T>::uncertainty() == static_cast<T>(2.4e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_joule_relationship<
          T>::precision()));
}

// inverse meter-kelvin relationship
// (0.0143877736 ± 8.3e-09) K
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
                 T>::value() == static_cast<T>(0.0143877736));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(8.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_kelvin_relationship<
          T>::precision()));
}

// inverse meter-kilogram relationship
// (2.210219057e-42 ± 2.7e-50) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::value() == static_cast<T>(2.210219057e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(2.7e-50));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_meter_kilogram_relationship<
          T>::precision()));
}

// inverse of conductance quantum
// (12906.4037278 ± 2.9e-06) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_of_conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_of_conductance_quantum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_of_conductance_quantum<
                 T>::value() == static_cast<T>(12906.4037278));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_of_conductance_quantum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::inverse_of_conductance_quantum<
                 T>::uncertainty() == static_cast<T>(2.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::inverse_of_conductance_quantum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::inverse_of_conductance_quantum<
          T>::precision()));
}

// Josephson constant
// (483597852500000.0 ± 3000000.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Josephson_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Josephson_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Josephson_constant<T>::value() ==
             static_cast<T>(483597852500000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Josephson_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Josephson_constant<T>::uncertainty() ==
      static_cast<T>(3000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Josephson_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Josephson_constant<T>::precision()));
}

// joule-atomic mass unit relationship
// (6700535363.0 ± 82.0) u
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6700535363.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(82.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::joule_atomic_mass_unit_relationship<
          T>::precision()));
}

// joule-electron volt relationship
// (6.241509126e+18 ± 38000000000.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::joule_electron_volt_relationship<
                 T>::value() == static_cast<T>(6.241509126e+18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(38000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::joule_electron_volt_relationship<
          T>::precision()));
}

// joule-hartree relationship
// (2.293712317e+17 ± 2800000000.0) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_hartree_relationship<T>::value() ==
      static_cast<T>(2.293712317e+17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2800000000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::joule_hartree_relationship<
                    T>::precision()));
}

// joule-hertz relationship
// (1.509190205e+33 ± 1.9e+25) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_hertz_relationship<T>::value() ==
      static_cast<T>(1.509190205e+33));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(1.9e+25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::joule_hertz_relationship<
                    T>::precision()));
}

// joule-inverse meter relationship
// (5.034116651e+24 ± 6.2e+16) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::joule_inverse_meter_relationship<
                 T>::value() == static_cast<T>(5.034116651e+24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(6.2e+16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::joule_inverse_meter_relationship<
          T>::precision()));
}

// joule-kelvin relationship
// (7.2429731e+22 ± 4.2e+16) K
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_kelvin_relationship<T>::value() ==
      static_cast<T>(7.2429731e+22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(4.2e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::joule_kelvin_relationship<
                    T>::precision()));
}

// joule-kilogram relationship
// (1.112650056e-17 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::joule_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::joule_kilogram_relationship<T>::value() ==
      static_cast<T>(1.112650056e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::joule_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::joule_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::joule_kilogram_relationship<
                    T>::precision()));
}

// kelvin-atomic mass unit relationship
// (9.2510842e-14 ± 5.3e-20) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(9.2510842e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(5.3e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
}

// kelvin-electron volt relationship
// (8.6173303e-05 ± 5e-11) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_electron_volt_relationship<
                 T>::value() == static_cast<T>(8.6173303e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(5e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kelvin_electron_volt_relationship<
          T>::precision()));
}

// kelvin-hartree relationship
// (3.1668105e-06 ± 1.8e-12) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kelvin_hartree_relationship<T>::value() ==
      static_cast<T>(3.1668105e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(1.8e-12));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::kelvin_hartree_relationship<
                    T>::precision()));
}

// kelvin-hertz relationship
// (20836612000.0 ± 12000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kelvin_hertz_relationship<T>::value() ==
      static_cast<T>(20836612000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(12000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::kelvin_hertz_relationship<
                    T>::precision()));
}

// kelvin-inverse meter relationship
// (69.503457 ± 4e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
                 T>::value() == static_cast<T>(69.503457));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(4e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kelvin_inverse_meter_relationship<
          T>::precision()));
}

// kelvin-joule relationship
// (1.38064852e-23 ± 7.9e-30) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kelvin_joule_relationship<T>::value() ==
      static_cast<T>(1.38064852e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_joule_relationship<
                 T>::uncertainty() == static_cast<T>(7.9e-30));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kelvin_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::kelvin_joule_relationship<
                    T>::precision()));
}

// kelvin-kilogram relationship
// (1.53617865e-40 ± 8.8e-47) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_kilogram_relationship<
                 T>::value() == static_cast<T>(1.53617865e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kelvin_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(8.8e-47));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kelvin_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kelvin_kilogram_relationship<
          T>::precision()));
}

// kilogram-atomic mass unit relationship
// (6.022140857e+26 ± 7.4e+18) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6.022140857e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(7.4e+18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
}

// kilogram-electron volt relationship
// (5.60958865e+35 ± 3.4e+27) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::value() == static_cast<T>(5.60958865e+35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(3.4e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kilogram_electron_volt_relationship<
          T>::precision()));
}

// kilogram-hartree relationship
// (2.061485823e+34 ± 2.5e+26) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_hartree_relationship<
                 T>::value() == static_cast<T>(2.061485823e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.5e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kilogram_hartree_relationship<
          T>::precision()));
}

// kilogram-hertz relationship
// (1.356392512e+50 ± 1.7e+42) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_hertz_relationship<T>::value() ==
      static_cast<T>(1.356392512e+50));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kilogram_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(1.7e+42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kilogram_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::kilogram_hertz_relationship<
                    T>::precision()));
}

// kilogram-inverse meter relationship
// (4.524438411e+41 ± 5.6e+33) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::value() == static_cast<T>(4.524438411e+41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(5.6e+33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kilogram_inverse_meter_relationship<
          T>::precision()));
}

// kilogram-joule relationship
// (8.987551787e+16 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::kilogram_joule_relationship<T>::value() ==
      static_cast<T>(8.987551787e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kilogram_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::kilogram_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::kilogram_joule_relationship<
                    T>::precision()));
}

// kilogram-kelvin relationship
// (6.5096595e+39 ± 3.7e+33) K
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_kelvin_relationship<
                 T>::value() == static_cast<T>(6.5096595e+39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::kilogram_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(3.7e+33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::kilogram_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::kilogram_kelvin_relationship<
          T>::precision()));
}

// lattice parameter of silicon
// (5.431020504e-10 ± 8.9e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_parameter_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_parameter_of_silicon<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::lattice_parameter_of_silicon<
                 T>::value() == static_cast<T>(5.431020504e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_parameter_of_silicon<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::lattice_parameter_of_silicon<
                 T>::uncertainty() == static_cast<T>(8.9e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::lattice_parameter_of_silicon<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::lattice_parameter_of_silicon<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 100 kPa)
// (2.6516467e+25 ± 1.5e+19) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
                 T>::value() == static_cast<T>(2.6516467e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
                 T>::uncertainty() == static_cast<T>(1.5e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 101.325 kPa)
// (2.6867811e+25 ± 1.5e+19) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::value() == static_cast<T>(2.6867811e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(1.5e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
}

// mag. constant
// (1.2566370614e-06 ± 0.0) N A^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_constant, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::mag_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::mag_constant<T>::value() ==
             static_cast<T>(1.2566370614e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::mag_constant<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::mag_constant<T>::uncertainty() ==
             static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::mag_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::mag_constant<T>::precision()));
}

// mag. flux quantum
// (2.067833831e-15 ± 1.3e-23) Wb
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_flux_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::mag_flux_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::mag_flux_quantum<T>::value() ==
             static_cast<T>(2.067833831e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::mag_flux_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::mag_flux_quantum<T>::uncertainty() ==
      static_cast<T>(1.3e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::mag_flux_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::mag_flux_quantum<T>::precision()));
}

// molar gas constant
// (8.3144598 ± 4.8e-06) J mol^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_gas_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_gas_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::molar_gas_constant<T>::value() ==
             static_cast<T>(8.3144598));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_gas_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_gas_constant<T>::uncertainty() ==
      static_cast<T>(4.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_gas_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_gas_constant<T>::precision()));
}

// molar mass constant
// (0.001 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::molar_mass_constant<T>::value() ==
             static_cast<T>(0.001));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_mass_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_mass_constant<T>::precision()));
}

// molar mass of carbon-12
// (0.012 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_of_carbon_12, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_mass_of_carbon_12<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_mass_of_carbon_12<T>::value() ==
      static_cast<T>(0.012));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::molar_mass_of_carbon_12<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::molar_mass_of_carbon_12<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_mass_of_carbon_12<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_mass_of_carbon_12<T>::precision()));
}

// molar Planck constant
// (3.990312711e-10 ± 1.8e-19) J s mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_Planck_constant<T>::value() ==
      static_cast<T>(3.990312711e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_Planck_constant<T>::uncertainty() ==
      static_cast<T>(1.8e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_Planck_constant<T>::precision()));
}

// molar Planck constant times c
// (0.119626565582 ± 5.4e-11) J m mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant_times_c, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant_times_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::molar_Planck_constant_times_c<
                 T>::value() == static_cast<T>(0.119626565582));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant_times_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::molar_Planck_constant_times_c<
                 T>::uncertainty() == static_cast<T>(5.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_Planck_constant_times_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_Planck_constant_times_c<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 100 kPa)
// (0.022710947 ± 1.3e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value() == static_cast<T>(0.022710947));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 101.325 kPa)
// (0.022413962 ± 1.3e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value() ==
             static_cast<T>(0.022413962));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty() ==
      static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
}

// molar volume of silicon
// (1.205883214e-05 ± 6.1e-13) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_volume_of_silicon<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::molar_volume_of_silicon<T>::value() ==
      static_cast<T>(1.205883214e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::molar_volume_of_silicon<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::molar_volume_of_silicon<
                 T>::uncertainty() == static_cast<T>(6.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::molar_volume_of_silicon<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::molar_volume_of_silicon<T>::precision()));
}

// Mo x unit
// (1.00209952e-13 ± 5.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Mo_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Mo_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Mo_x_unit<T>::value() ==
             static_cast<T>(1.00209952e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Mo_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Mo_x_unit<T>::uncertainty() ==
             static_cast<T>(5.3e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Mo_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Mo_x_unit<T>::precision()));
}

// muon Compton wavelength
// (1.173444111e-14 ± 2.6e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_Compton_wavelength<T>::value() ==
      static_cast<T>(1.173444111e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(2.6e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_Compton_wavelength<T>::precision()));
}

// muon Compton wavelength over 2 pi
// (1.867594308e-15 ± 4.2e-23) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.867594308e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(4.2e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// muon-electron mass ratio
// (206.7682826 ± 4.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_electron_mass_ratio<T>::value() ==
      static_cast<T>(206.7682826));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::muon_electron_mass_ratio<
                    T>::precision()));
}

// muon g factor
// (-2.0023318418 ± 1.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_g_factor, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_g_factor<T>::value() ==
             static_cast<T>(-2.0023318418));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_g_factor<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_g_factor<T>::uncertainty() ==
             static_cast<T>(1.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_g_factor<T>::precision()));
}

// muon mag. mom.
// (-4.49044826e-26 ± 1e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mag_mom<T>::value() ==
             static_cast<T>(-4.49044826e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mag_mom<T>::uncertainty() ==
             static_cast<T>(1e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mag_mom<T>::precision()));
}

// muon mag. mom. anomaly
// (0.00116592089 ± 6.3e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::value() ==
             static_cast<T>(0.00116592089));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::uncertainty() ==
      static_cast<T>(6.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mag_mom_anomaly<T>::precision()));
}

// muon mag. mom. to Bohr magneton ratio
// (-0.00484197048 ± 1.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00484197048));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// muon mag. mom. to nuclear magneton ratio
// (-8.89059705 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-8.89059705));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// muon mass
// (1.883531594e-28 ± 4.8e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass<T>::value() ==
             static_cast<T>(1.883531594e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass<T>::uncertainty() ==
             static_cast<T>(4.8e-36));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::muon_mass<T>::precision()));
}

// muon mass energy equivalent
// (1.692833774e-11 ± 4.3e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_mass_energy_equivalent<T>::value() ==
      static_cast<T>(1.692833774e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(4.3e-19));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::muon_mass_energy_equivalent<
                    T>::precision()));
}

// muon mass energy equivalent in MeV
// (105.6583745 ± 2.4e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(105.6583745));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(2.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// muon mass in u
// (0.1134289257 ± 2.5e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass_in_u<T>::value() ==
             static_cast<T>(0.1134289257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_mass_in_u<T>::uncertainty() ==
             static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_mass_in_u<T>::precision()));
}

// muon molar mass
// (0.0001134289257 ± 2.5e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_molar_mass<T>::value() ==
             static_cast<T>(0.0001134289257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_molar_mass<T>::precision()));
}

// muon-neutron mass ratio
// (0.1124545167 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.1124545167));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_neutron_mass_ratio<T>::precision()));
}

// muon-proton mag. mom. ratio
// (-3.183345142 ± 7.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_proton_mag_mom_ratio<T>::value() ==
      static_cast<T>(-3.183345142));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_proton_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(7.1e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_proton_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::muon_proton_mag_mom_ratio<
                    T>::precision()));
}

// muon-proton mass ratio
// (0.1126095262 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.1126095262));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::muon_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::muon_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_proton_mass_ratio<T>::precision()));
}

// muon-tau mass ratio
// (0.0594649 ± 5.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_tau_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::muon_tau_mass_ratio<T>::value() ==
             static_cast<T>(0.0594649));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::muon_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(5.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::muon_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::muon_tau_mass_ratio<T>::precision()));
}

// natural unit of action
// (1.0545718e-34 ± 1.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_action<T>::value() ==
      static_cast<T>(1.0545718e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::natural_unit_of_action<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_action<
                 T>::uncertainty() == static_cast<T>(1.3e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_action<T>::precision()));
}

// natural unit of action in eV s
// (6.582119514e-16 ± 4e-24) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
                 T>::value() == static_cast<T>(6.582119514e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
                 T>::uncertainty() == static_cast<T>(4e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_action_in_eV_s<
          T>::precision()));
}

// natural unit of energy
// (8.18710565e-14 ± 1e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_energy<T>::value() ==
      static_cast<T>(8.18710565e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::natural_unit_of_energy<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_energy<
                 T>::uncertainty() == static_cast<T>(1e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_energy<T>::precision()));
}

// natural unit of energy in MeV
// (0.5109989461 ± 3.1e-09) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
                 T>::value() == static_cast<T>(0.5109989461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
                 T>::uncertainty() == static_cast<T>(3.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_energy_in_MeV<
          T>::precision()));
}

// natural unit of length
// (3.8615926764e-13 ± 1.8e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_length<T>::value() ==
      static_cast<T>(3.8615926764e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::natural_unit_of_length<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_length<
                 T>::uncertainty() == static_cast<T>(1.8e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_length<T>::precision()));
}

// natural unit of mass
// (9.10938356e-31 ± 1.1e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938356e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(1.1e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_mass<T>::precision()));
}

// natural unit of mom.um
// (2.730924488e-22 ± 3.4e-30) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::value() ==
      static_cast<T>(2.730924488e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::uncertainty() ==
      static_cast<T>(3.4e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_momum<T>::precision()));
}

// natural unit of mom.um in MeV/c
// (0.5109989461 ± 3.1e-09) MeV/c
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momum_in_MeV_c, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
                 T>::value() == static_cast<T>(0.5109989461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
                 T>::uncertainty() == static_cast<T>(3.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_momum_in_MeV_c<
          T>::precision()));
}

// natural unit of time
// (1.28808866712e-21 ± 5.8e-31) s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_time<T>::value() ==
             static_cast<T>(1.28808866712e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_time<T>::uncertainty() ==
      static_cast<T>(5.8e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::natural_unit_of_time<T>::precision()));
}

// natural unit of velocity
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::natural_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::natural_unit_of_velocity<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::natural_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::natural_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::natural_unit_of_velocity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::natural_unit_of_velocity<
                    T>::precision()));
}

// neutron Compton wavelength
// (1.31959090481e-15 ± 8.8e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_Compton_wavelength<T>::value() ==
      static_cast<T>(1.31959090481e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(8.8e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::neutron_Compton_wavelength<
                    T>::precision()));
}

// neutron Compton wavelength over 2 pi
// (2.1001941536e-16 ± 1.4e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.1001941536e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(1.4e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// neutron-electron mag. mom. ratio
// (0.00104066882 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.00104066882));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_electron_mag_mom_ratio<
          T>::precision()));
}

// neutron-electron mass ratio
// (1838.68366158 ± 9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_electron_mass_ratio<T>::value() ==
      static_cast<T>(1838.68366158));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(9e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::neutron_electron_mass_ratio<
                    T>::precision()));
}

// neutron g factor
// (-3.82608545 ± 9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_g_factor<T>::value() ==
             static_cast<T>(-3.82608545));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_g_factor<T>::uncertainty() ==
      static_cast<T>(9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_g_factor<T>::precision()));
}

// neutron gyromag. ratio
// (183247172.0 ± 43.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::value() ==
      static_cast<T>(183247172.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(43.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_gyromag_ratio<T>::precision()));
}

// neutron gyromag. ratio over 2 pi
// (29.1646933 ± 6.9e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(29.1646933));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(6.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// neutron mag. mom.
// (-9.662365e-27 ± 2.3e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mag_mom<T>::value() ==
             static_cast<T>(-9.662365e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.3e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mag_mom<T>::precision()));
}

// neutron mag. mom. to Bohr magneton ratio
// (-0.00104187563 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00104187563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// neutron mag. mom. to nuclear magneton ratio
// (-1.91304273 ± 4.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-1.91304273));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// neutron mass
// (1.674927471e-27 ± 2.1e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mass<T>::value() ==
             static_cast<T>(1.674927471e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mass<T>::uncertainty() ==
             static_cast<T>(2.1e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mass<T>::precision()));
}

// neutron mass energy equivalent
// (1.505349739e-10 ± 1.9e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.505349739e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.9e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent<
          T>::precision()));
}

// neutron mass energy equivalent in MeV
// (939.5654133 ± 5.8e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(939.5654133));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(5.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// neutron mass in u
// (1.00866491588 ± 4.9e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_mass_in_u<T>::value() ==
             static_cast<T>(1.00866491588));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4.9e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_mass_in_u<T>::precision()));
}

// neutron molar mass
// (0.00100866491588 ± 4.9e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_molar_mass<T>::value() ==
             static_cast<T>(0.00100866491588));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_molar_mass<T>::uncertainty() ==
      static_cast<T>(4.9e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_molar_mass<T>::precision()));
}

// neutron-muon mass ratio
// (8.89248408 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.89248408));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_muon_mass_ratio<T>::precision()));
}

// neutron-proton mag. mom. ratio
// (-0.68497934 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.68497934));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_proton_mag_mom_ratio<
          T>::precision()));
}

// neutron-proton mass difference
// (2.30557377e-30 ± 8.5e-37)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_proton_mass_difference<
                 T>::value() == static_cast<T>(2.30557377e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_proton_mass_difference<
                 T>::uncertainty() == static_cast<T>(8.5e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_proton_mass_difference<
          T>::precision()));
}

// neutron-proton mass difference energy equivalent
// (2.07214637e-13 ± 7.6e-20)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_energy_equivalent,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 neutron_proton_mass_difference_energy_equivalent<T>::value() ==
             static_cast<T>(2.07214637e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty() ==
      static_cast<T>(7.6e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
}

// neutron-proton mass difference energy equivalent in MeV
// (1.29333205 ± 4.8e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    neutron_proton_mass_difference_energy_equivalent_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value() ==
      static_cast<T>(1.29333205));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::
                 neutron_proton_mass_difference_energy_equivalent_in_MeV<
                     T>::uncertainty() == static_cast<T>(4.8e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
}

// neutron-proton mass difference in u
// (0.001388449 ± 5.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_in_u, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::value() == static_cast<T>(0.001388449));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::uncertainty() == static_cast<T>(5.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_proton_mass_difference_in_u<
          T>::precision()));
}

// neutron-proton mass ratio
// (1.00137841898 ± 5.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.00137841898));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.1e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::neutron_proton_mass_ratio<
                    T>::precision()));
}

// neutron-tau mass ratio
// (0.52879 ± 4.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.52879));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::neutron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::neutron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_tau_mass_ratio<T>::precision()));
}

// neutron to shielded proton mag. mom. ratio
// (-0.68499694 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.68499694));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// Newtonian constant of gravitation
// (6.67408e-11 ± 3.1e-15) m^3 kg^-1 s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
                 T>::value() == static_cast<T>(6.67408e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
                 T>::uncertainty() == static_cast<T>(3.1e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Newtonian_constant_of_gravitation<
          T>::precision()));
}

// Newtonian constant of gravitation over h-bar c
// (6.70861e-39 ± 3.1e-43) (GeV/c^2)^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation_over_h_bar_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 Newtonian_constant_of_gravitation_over_h_bar_c<T>::value() ==
             static_cast<T>(6.70861e-39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty() ==
      static_cast<T>(3.1e-43));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
}

// nuclear magneton
// (5.050783699e-27 ± 3.1e-35) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::nuclear_magneton<T>::value() ==
             static_cast<T>(5.050783699e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::nuclear_magneton<T>::uncertainty() ==
      static_cast<T>(3.1e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::nuclear_magneton<T>::precision()));
}

// nuclear magneton in eV/T
// (3.152451255e-08 ± 1.5e-17) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::nuclear_magneton_in_eV_T<T>::value() ==
      static_cast<T>(3.152451255e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::nuclear_magneton_in_eV_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::nuclear_magneton_in_eV_T<
                 T>::uncertainty() == static_cast<T>(1.5e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::nuclear_magneton_in_eV_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::nuclear_magneton_in_eV_T<
                    T>::precision()));
}

// nuclear magneton in inverse meters per tesla
// (0.02542623432 ± 1.6e-10) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 nuclear_magneton_in_inverse_meters_per_tesla<T>::value() ==
             static_cast<T>(0.02542623432));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty() ==
      static_cast<T>(1.6e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
}

// nuclear magneton in K/T
// (0.0003658269 ± 2.1e-10) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton_in_K_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::nuclear_magneton_in_K_T<T>::value() ==
      static_cast<T>(0.0003658269));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::nuclear_magneton_in_K_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::nuclear_magneton_in_K_T<
                 T>::uncertainty() == static_cast<T>(2.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::nuclear_magneton_in_K_T<T>::precision()));
}

// nuclear magneton in MHz/T
// (7.622593285 ± 4.7e-08) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<T>::value() ==
      static_cast<T>(7.622593285));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(4.7e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::nuclear_magneton_in_MHz_T<
                    T>::precision()));
}

// Planck constant
// (6.62607004e-34 ± 8.1e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_constant<T>::value() ==
             static_cast<T>(6.62607004e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_constant<T>::uncertainty() ==
      static_cast<T>(8.1e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_constant<T>::precision()));
}

// Planck constant in eV s
// (4.135667662e-15 ± 2.5e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_in_eV_s<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_constant_in_eV_s<T>::value() ==
      static_cast<T>(4.135667662e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_constant_in_eV_s<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_constant_in_eV_s<
                 T>::uncertainty() == static_cast<T>(2.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_in_eV_s<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_constant_in_eV_s<T>::precision()));
}

// Planck constant over 2 pi
// (1.0545718e-34 ± 1.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_over_2_pi<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_constant_over_2_pi<T>::value() ==
      static_cast<T>(1.0545718e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_constant_over_2_pi<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_constant_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1.3e-42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_constant_over_2_pi<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Planck_constant_over_2_pi<
                    T>::precision()));
}

// Planck constant over 2 pi in eV s
// (6.582119514e-16 ± 4e-24) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_in_eV_s, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
                 T>::value() == static_cast<T>(6.582119514e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
                 T>::uncertainty() == static_cast<T>(4e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
}

// Planck constant over 2 pi times c in MeV fm
// (197.3269788 ± 1.2e-06) MeV fm
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_times_c_in_MeV_fm, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value() ==
             static_cast<T>(197.3269788));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty() ==
      static_cast<T>(1.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
}

// Planck length
// (1.616229e-35 ± 3.8e-40) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_length, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_length<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_length<T>::value() ==
             static_cast<T>(1.616229e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_length<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_length<T>::uncertainty() ==
             static_cast<T>(3.8e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_length<T>::precision()));
}

// Planck mass
// (2.17647e-08 ± 5.1e-13) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_mass<T>::value() ==
             static_cast<T>(2.17647e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_mass<T>::uncertainty() ==
             static_cast<T>(5.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_mass<T>::precision()));
}

// Planck mass energy equivalent in GeV
// (1.22091e+19 ± 290000000000000.0) GeV
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass_energy_equivalent_in_GeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::value() == static_cast<T>(1.22091e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty() == static_cast<T>(290000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
}

// Planck temperature
// (1.416808e+32 ± 3.3e+27) K
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_temperature, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_temperature<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_temperature<T>::value() ==
             static_cast<T>(1.416808e+32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_temperature<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Planck_temperature<T>::uncertainty() ==
      static_cast<T>(3.3e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_temperature<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_temperature<T>::precision()));
}

// Planck time
// (5.39116e-44 ± 1.3e-48) s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_time, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Planck_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_time<T>::value() ==
             static_cast<T>(5.39116e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_time<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Planck_time<T>::uncertainty() ==
             static_cast<T>(1.3e-48));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Planck_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Planck_time<T>::precision()));
}

// proton charge to mass quotient
// (95788332.26 ± 0.59) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(95788332.26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(0.59));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_charge_to_mass_quotient<
          T>::precision()));
}

// proton Compton wavelength
// (1.32140985396e-15 ± 6.1e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_Compton_wavelength<T>::value() ==
      static_cast<T>(1.32140985396e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(6.1e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::proton_Compton_wavelength<
                    T>::precision()));
}

// proton Compton wavelength over 2 pi
// (2.10308910109e-16 ± 9.7e-26) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.10308910109e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(9.7e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// proton-electron mass ratio
// (1836.15267389 ± 1.7e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_electron_mass_ratio<T>::value() ==
      static_cast<T>(1836.15267389));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.7e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::proton_electron_mass_ratio<
                    T>::precision()));
}

// proton g factor
// (5.585694702 ± 1.7e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_g_factor<T>::value() ==
             static_cast<T>(5.585694702));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_g_factor<T>::uncertainty() ==
      static_cast<T>(1.7e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_g_factor<T>::precision()));
}

// proton gyromag. ratio
// (267522190.0 ± 1.8) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_gyromag_ratio<T>::value() ==
             static_cast<T>(267522190.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(1.8));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_gyromag_ratio<T>::precision()));
}

// proton gyromag. ratio over 2 pi
// (42.57747892 ± 2.9e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(42.57747892));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(2.9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// proton mag. mom.
// (1.4106067873e-26 ± 9.7e-35) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mag_mom<T>::value() ==
             static_cast<T>(1.4106067873e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mag_mom<T>::uncertainty() ==
             static_cast<T>(9.7e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mag_mom<T>::precision()));
}

// proton mag. mom. to Bohr magneton ratio
// (0.0015210322053 ± 4.6e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0015210322053));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// proton mag. mom. to nuclear magneton ratio
// (2.7928473508 ± 8.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.7928473508));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(8.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// proton mag. shielding correction
// (2.5691e-05 ± 1.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_shielding_correction, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_shielding_correction<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mag_shielding_correction<
                 T>::value() == static_cast<T>(2.5691e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_shielding_correction<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mag_shielding_correction<
                 T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mag_shielding_correction<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mag_shielding_correction<
          T>::precision()));
}

// proton mass
// (1.672621898e-27 ± 2.1e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mass<T>::value() ==
             static_cast<T>(1.672621898e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mass<T>::uncertainty() ==
             static_cast<T>(2.1e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mass<T>::precision()));
}

// proton mass energy equivalent
// (1.503277593e-10 ± 1.8e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.503277593e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.8e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mass_energy_equivalent<
          T>::precision()));
}

// proton mass energy equivalent in MeV
// (938.2720813 ± 5.8e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(938.2720813));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(5.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// proton mass in u
// (1.007276466879 ± 9.1e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_mass_in_u<T>::value() ==
             static_cast<T>(1.007276466879));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(9.1e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_mass_in_u<T>::precision()));
}

// proton molar mass
// (0.001007276466879 ± 9.1e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_molar_mass<T>::value() ==
             static_cast<T>(0.001007276466879));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_molar_mass<T>::uncertainty() ==
      static_cast<T>(9.1e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_molar_mass<T>::precision()));
}

// proton-muon mass ratio
// (8.88024338 ± 2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.88024338));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_muon_mass_ratio<T>::precision()));
}

// proton-neutron mag. mom. ratio
// (-1.45989805 ± 3.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-1.45989805));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_neutron_mag_mom_ratio<
          T>::precision()));
}

// proton-neutron mass ratio
// (0.99862347844 ± 5.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.99862347844));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.1e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::proton_neutron_mass_ratio<
                    T>::precision()));
}

// proton rms charge radius
// (8.751e-16 ± 6.1e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_rms_charge_radius<T>::value() ==
      static_cast<T>(8.751e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::proton_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(6.1e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::proton_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::proton_rms_charge_radius<
                    T>::precision()));
}

// proton-tau mass ratio
// (0.528063 ± 4.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.528063));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(4.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::proton_tau_mass_ratio<T>::precision()));
}

// quantum of circulation
// (0.00036369475486 ± 1.7e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::quantum_of_circulation<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::quantum_of_circulation<T>::value() ==
      static_cast<T>(0.00036369475486));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::quantum_of_circulation<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::quantum_of_circulation<
                 T>::uncertainty() == static_cast<T>(1.7e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::quantum_of_circulation<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::quantum_of_circulation<T>::precision()));
}

// quantum of circulation times 2
// (0.00072738950972 ± 3.3e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation_times_2, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::quantum_of_circulation_times_2<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::quantum_of_circulation_times_2<
                 T>::value() == static_cast<T>(0.00072738950972));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::quantum_of_circulation_times_2<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::quantum_of_circulation_times_2<
                 T>::uncertainty() == static_cast<T>(3.3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::quantum_of_circulation_times_2<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::quantum_of_circulation_times_2<
          T>::precision()));
}

// Rydberg constant
// (10973731.568508 ± 6.5e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant<T>::value() ==
             static_cast<T>(10973731.568508));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Rydberg_constant<T>::uncertainty() ==
      static_cast<T>(6.5e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Rydberg_constant<T>::precision()));
}

// Rydberg constant times c in Hz
// (3289841960355000.0 ± 19000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_c_in_Hz, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
                 T>::value() == static_cast<T>(3289841960355000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
                 T>::uncertainty() == static_cast<T>(19000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
}

// Rydberg constant times hc in eV
// (13.605693009 ± 8.4e-08) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
                 T>::value() == static_cast<T>(13.605693009));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
                 T>::uncertainty() == static_cast<T>(8.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
}

// Rydberg constant times hc in J
// (2.179872325e-18 ± 2.7e-26) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_J, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
                 T>::value() == static_cast<T>(2.179872325e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
                 T>::uncertainty() == static_cast<T>(2.7e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Rydberg_constant_times_hc_in_J<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 100 kPa)
// (-1.1517084 ± 1.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value() == static_cast<T>(-1.1517084));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty() == static_cast<T>(1.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 101.325 kPa)
// (-1.1648714 ± 1.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value() == static_cast<T>(-1.1648714));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(1.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
}

// second radiation constant
// (0.0143877736 ± 8.3e-09) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(second_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::second_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::second_radiation_constant<T>::value() ==
      static_cast<T>(0.0143877736));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::second_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::second_radiation_constant<
                 T>::uncertainty() == static_cast<T>(8.3e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::second_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::second_radiation_constant<
                    T>::precision()));
}

// shielded helion gyromag. ratio
// (203789458.5 ± 2.7) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
                 T>::value() == static_cast<T>(203789458.5));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(2.7));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio<
          T>::precision()));
}

// shielded helion gyromag. ratio over 2 pi
// (32.43409966 ± 4.3e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(32.43409966));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(4.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded helion mag. mom.
// (-1.07455308e-26 ± 1.4e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_helion_mag_mom<T>::value() ==
      static_cast<T>(-1.07455308e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::shielded_helion_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_helion_mag_mom<
                 T>::uncertainty() == static_cast<T>(1.4e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_helion_mag_mom<T>::precision()));
}

// shielded helion mag. mom. to Bohr magneton ratio
// (-0.001158671471 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-0.001158671471));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded helion mag. mom. to nuclear magneton ratio
// (-2.12749772 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(-2.12749772));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// shielded helion to proton mag. mom. ratio
// (-0.7617665603 ± 9.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.7617665603));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(9.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
}

// shielded helion to shielded proton mag. mom. ratio
// (-0.7617861313 ± 3.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_shielded_proton_mag_mom_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value() ==
             static_cast<T>(-0.7617861313));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty() ==
      static_cast<T>(3.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
}

// shielded proton gyromag. ratio
// (267515317.1 ± 3.3) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
                 T>::value() == static_cast<T>(267515317.1));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(3.3));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio<
          T>::precision()));
}

// shielded proton gyromag. ratio over 2 pi
// (42.57638507 ± 5.3e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(42.57638507));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(5.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded proton mag. mom.
// (1.410570547e-26 ± 1.8e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::shielded_proton_mag_mom<T>::value() ==
      static_cast<T>(1.410570547e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::shielded_proton_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::shielded_proton_mag_mom<
                 T>::uncertainty() == static_cast<T>(1.8e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::shielded_proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::shielded_proton_mag_mom<T>::precision()));
}

// shielded proton mag. mom. to Bohr magneton ratio
// (0.001520993128 ± 1.7e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::
                 shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(0.001520993128));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded proton mag. mom. to nuclear magneton ratio
// (2.7927756 ± 3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(2.7927756));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// speed of light in vacuum
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(speed_of_light_in_vacuum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::speed_of_light_in_vacuum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::speed_of_light_in_vacuum<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::speed_of_light_in_vacuum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::speed_of_light_in_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::speed_of_light_in_vacuum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::speed_of_light_in_vacuum<
                    T>::precision()));
}

// standard acceleration of gravity
// (9.80665 ± 0.0) m s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_acceleration_of_gravity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_acceleration_of_gravity<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::standard_acceleration_of_gravity<
                 T>::value() == static_cast<T>(9.80665));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_acceleration_of_gravity<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::standard_acceleration_of_gravity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_acceleration_of_gravity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::standard_acceleration_of_gravity<
          T>::precision()));
}

// standard atmosphere
// (101325.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_atmosphere, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_atmosphere<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::standard_atmosphere<T>::value() ==
             static_cast<T>(101325.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_atmosphere<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::standard_atmosphere<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_atmosphere<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::standard_atmosphere<T>::precision()));
}

// standard-state pressure
// (100000.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_state_pressure, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_state_pressure<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::standard_state_pressure<T>::value() ==
      static_cast<T>(100000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::standard_state_pressure<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::standard_state_pressure<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::standard_state_pressure<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::standard_state_pressure<T>::precision()));
}

// Stefan-Boltzmann constant
// (5.670367e-08 ± 1.3e-13) W m^-2 K^-4
BOOST_AUTO_TEST_CASE_TEMPLATE(Stefan_Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Stefan_Boltzmann_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Stefan_Boltzmann_constant<T>::value() ==
      static_cast<T>(5.670367e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Stefan_Boltzmann_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::Stefan_Boltzmann_constant<
                 T>::uncertainty() == static_cast<T>(1.3e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::Stefan_Boltzmann_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::Stefan_Boltzmann_constant<
                    T>::precision()));
}

// tau Compton wavelength
// (6.97787e-16 ± 6.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_Compton_wavelength<T>::value() ==
      static_cast<T>(6.97787e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(6.3e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_Compton_wavelength<T>::precision()));
}

// tau Compton wavelength over 2 pi
// (1.11056e-16 ± 1e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.11056e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// tau-electron mass ratio
// (3477.15 ± 0.31)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_electron_mass_ratio<T>::value() ==
      static_cast<T>(3477.15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_electron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_electron_mass_ratio<T>::precision()));
}

// tau mass
// (3.16747e-27 ± 2.9e-31) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass<T>::value() ==
             static_cast<T>(3.16747e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass<T>::uncertainty() ==
             static_cast<T>(2.9e-31));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::tau_mass<T>::precision()));
}

// tau mass energy equivalent
// (2.84678e-10 ± 2.6e-14) J
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_mass_energy_equivalent<T>::value() ==
      static_cast<T>(2.84678e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2.6e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::tau_mass_energy_equivalent<
                    T>::precision()));
}

// tau mass energy equivalent in MeV
// (1776.82 ± 0.16) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(1776.82));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(0.16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// tau mass in u
// (1.90749 ± 0.00017) u
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_in_u, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass_in_u<T>::value() ==
             static_cast<T>(1.90749));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_mass_in_u<T>::uncertainty() ==
             static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_mass_in_u<T>::precision()));
}

// tau molar mass
// (0.00190749 ± 1.7e-07) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_molar_mass<T>::value() ==
             static_cast<T>(0.00190749));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_molar_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_molar_mass<T>::uncertainty() ==
             static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_molar_mass<T>::precision()));
}

// tau-muon mass ratio
// (16.8167 ± 0.0015)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_muon_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::tau_muon_mass_ratio<T>::value() ==
             static_cast<T>(16.8167));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_muon_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_muon_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.0015));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_muon_mass_ratio<T>::precision()));
}

// tau-neutron mass ratio
// (1.89111 ± 0.00017)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_neutron_mass_ratio<T>::value() ==
      static_cast<T>(1.89111));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::tau_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::tau_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_neutron_mass_ratio<T>::precision()));
}

// tau-proton mass ratio
// (1.89372 ± 0.00017)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.89372));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::tau_proton_mass_ratio<T>::precision()));
}

// Thomson cross section
// (6.6524587158e-29 ± 9.1e-38) m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(Thomson_cross_section, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Thomson_cross_section<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Thomson_cross_section<T>::value() ==
      static_cast<T>(6.6524587158e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Thomson_cross_section<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Thomson_cross_section<T>::uncertainty() ==
      static_cast<T>(9.1e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Thomson_cross_section<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Thomson_cross_section<T>::precision()));
}

// triton-electron mass ratio
// (5496.92153588 ± 2.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_electron_mass_ratio<T>::value() ==
      static_cast<T>(5496.92153588));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::triton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::triton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::triton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::triton_electron_mass_ratio<
                    T>::precision()));
}

// triton g factor
// (5.95792492 ± 2.8e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_g_factor<T>::value() ==
             static_cast<T>(5.95792492));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_g_factor<T>::uncertainty() ==
      static_cast<T>(2.8e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_g_factor<T>::precision()));
}

// triton mag. mom.
// (1.504609503e-26 ± 1.2e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mag_mom<T>::value() ==
             static_cast<T>(1.504609503e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mag_mom<T>::uncertainty() ==
             static_cast<T>(1.2e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mag_mom<T>::precision()));
}

// triton mag. mom. to Bohr magneton ratio
// (0.0016223936616 ± 7.6e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0016223936616));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(7.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// triton mag. mom. to nuclear magneton ratio
// (2.97896246 ± 1.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.97896246));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// triton mass
// (5.007356665e-27 ± 6.2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::triton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mass<T>::value() ==
             static_cast<T>(5.007356665e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mass<T>::uncertainty() ==
             static_cast<T>(6.2e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mass<T>::precision()));
}

// triton mass energy equivalent
// (4.500387735e-10 ± 5.5e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.500387735e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(5.5e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mass_energy_equivalent<
          T>::precision()));
}

// triton mass energy equivalent in MeV
// (2808.921112 ± 1.7e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.921112));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.7e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// triton mass in u
// (3.01550071632 ± 1.1e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_mass_in_u<T>::value() ==
             static_cast<T>(3.01550071632));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_mass_in_u<T>::precision()));
}

// triton molar mass
// (0.00301550071632 ± 1.1e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::triton_molar_mass<T>::value() ==
             static_cast<T>(0.00301550071632));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_molar_mass<T>::uncertainty() ==
      static_cast<T>(1.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::triton_molar_mass<T>::precision()));
}

// triton-proton mass ratio
// (2.99371703348 ± 2.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::triton_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::triton_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.99371703348));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::triton_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::triton_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::triton_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::triton_proton_mass_ratio<
                    T>::precision()));
}

// unified atomic mass unit
// (1.66053904e-27 ± 2e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(unified_atomic_mass_unit, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::unified_atomic_mass_unit<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::unified_atomic_mass_unit<T>::value() ==
      static_cast<T>(1.66053904e-27));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::unified_atomic_mass_unit<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2014::unified_atomic_mass_unit<
                 T>::uncertainty() == static_cast<T>(2e-35));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2014::unified_atomic_mass_unit<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2014::unified_atomic_mass_unit<
                    T>::precision()));
}

// von Klitzing constant
// (25812.8074555 ± 5.9e-06) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(von_Klitzing_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::value() ==
      static_cast<T>(25812.8074555));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(5.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::von_Klitzing_constant<T>::precision()));
}

// weak mixing angle
// (0.2223 ± 0.0021)
BOOST_AUTO_TEST_CASE_TEMPLATE(weak_mixing_angle, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::weak_mixing_angle<T>::value()));
  BOOST_TEST(triumf::constants::codata_2014::weak_mixing_angle<T>::value() ==
             static_cast<T>(0.2223));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::weak_mixing_angle<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::weak_mixing_angle<T>::uncertainty() ==
      static_cast<T>(0.0021));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::weak_mixing_angle<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::weak_mixing_angle<T>::precision()));
}

// Wien frequency displacement law constant
// (58789238000.0 ± 34000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_frequency_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::value() == static_cast<T>(58789238000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(34000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Wien_frequency_displacement_law_constant<
          T>::precision()));
}

// Wien wavelength displacement law constant
// (0.0028977729 ± 1.7e-09) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_wavelength_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::value() == static_cast<T>(0.0028977729));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(1.7e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2014::Wien_wavelength_displacement_law_constant<
          T>::precision()));
}
