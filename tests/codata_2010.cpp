#define BOOST_TEST_MODULE CODATA_2010
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/constants/codata_2010.hpp>

// {220} lattice spacing of silicon
// (1.920155714e-10 ± 3.2e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_spacing_of_silicon_220, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
                 T>::value() == static_cast<T>(1.920155714e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
                 T>::uncertainty() == static_cast<T>(3.2e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::lattice_spacing_of_silicon_220<
          T>::precision()));
}

// alpha particle-electron mass ratio
// (7294.2995361 ± 2.9e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_electron_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
                 T>::value() == static_cast<T>(7294.2995361));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::alpha_particle_electron_mass_ratio<
          T>::precision()));
}

// alpha particle mass
// (6.64465675e-27 ± 2.9e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_mass<T>::value() ==
             static_cast<T>(6.64465675e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::alpha_particle_mass<T>::uncertainty() ==
      static_cast<T>(2.9e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::alpha_particle_mass<T>::precision()));
}

// alpha particle mass energy equivalent
// (5.97191967e-10 ± 2.6e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::value() == static_cast<T>(5.97191967e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::uncertainty() == static_cast<T>(2.6e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::alpha_particle_mass_energy_equivalent<
          T>::precision()));
}

// alpha particle mass energy equivalent in MeV
// (3727.37924 ± 8.2e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 alpha_particle_mass_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(3727.37924));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(8.2e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
}

// alpha particle mass in u
// (4.001506179125 ± 6.2e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_mass_in_u<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::alpha_particle_mass_in_u<T>::value() ==
      static_cast<T>(4.001506179125));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::alpha_particle_mass_in_u<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_mass_in_u<
                 T>::uncertainty() == static_cast<T>(6.2e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::alpha_particle_mass_in_u<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::alpha_particle_mass_in_u<
                    T>::precision()));
}

// alpha particle molar mass
// (0.004001506179125 ± 6.2e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_molar_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::alpha_particle_molar_mass<T>::value() ==
      static_cast<T>(0.004001506179125));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::alpha_particle_molar_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_molar_mass<
                 T>::uncertainty() == static_cast<T>(6.2e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::alpha_particle_molar_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::alpha_particle_molar_mass<
                    T>::precision()));
}

// alpha particle-proton mass ratio
// (3.97259968933 ± 3.6e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
                 T>::value() == static_cast<T>(3.97259968933));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.6e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::alpha_particle_proton_mass_ratio<
          T>::precision()));
}

// Angstrom star
// (1.00001495e-10 ± 9e-17) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Angstrom_star, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Angstrom_star<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Angstrom_star<T>::value() ==
             static_cast<T>(1.00001495e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Angstrom_star<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Angstrom_star<T>::uncertainty() ==
             static_cast<T>(9e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Angstrom_star<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Angstrom_star<T>::precision()));
}

// atomic mass constant
// (1.660538921e-27 ± 7.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_mass_constant<T>::value() ==
             static_cast<T>(1.660538921e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_constant<T>::uncertainty() ==
      static_cast<T>(7.3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_constant<T>::precision()));
}

// atomic mass constant energy equivalent
// (1.492417954e-10 ± 6.6e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::value() == static_cast<T>(1.492417954e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::uncertainty() == static_cast<T>(6.6e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_constant_energy_equivalent<
          T>::precision()));
}

// atomic mass constant energy equivalent in MeV
// (931.494061 ± 2.1e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 atomic_mass_constant_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(931.494061));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(2.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
}

// atomic mass unit-electron volt relationship
// (931494061.0 ± 21.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_electron_volt_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 atomic_mass_unit_electron_volt_relationship<T>::value() ==
             static_cast<T>(931494061.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty() ==
      static_cast<T>(21.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
}

// atomic mass unit-hartree relationship
// (34231776.845 ± 0.024) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::value() == static_cast<T>(34231776.845));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::uncertainty() == static_cast<T>(0.024));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_unit_hartree_relationship<
          T>::precision()));
}

// atomic mass unit-hertz relationship
// (2.2523427168e+23 ± 160000000000000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hertz_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::value() == static_cast<T>(2.2523427168e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::uncertainty() == static_cast<T>(160000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_unit_hertz_relationship<
          T>::precision()));
}

// atomic mass unit-inverse meter relationship
// (751300660420000.0 ± 530000.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_inverse_meter_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 atomic_mass_unit_inverse_meter_relationship<T>::value() ==
             static_cast<T>(751300660420000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty() ==
      static_cast<T>(530000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
}

// atomic mass unit-joule relationship
// (1.492417954e-10 ± 6.6e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_joule_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::value() == static_cast<T>(1.492417954e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::uncertainty() == static_cast<T>(6.6e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_unit_joule_relationship<
          T>::precision()));
}

// atomic mass unit-kelvin relationship
// (10809540800000.0 ± 9800000.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::value() == static_cast<T>(10809540800000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty() == static_cast<T>(9800000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
}

// atomic mass unit-kilogram relationship
// (1.660538921e-27 ± 7.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::value() == static_cast<T>(1.660538921e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(7.3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
}

// atomic unit of 1st hyperpolarizability
// (3.206361449e-53 ± 7.1e-61) C^3 m^3 J^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_1st_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::value() == static_cast<T>(3.206361449e-53));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(7.1e-61));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
}

// atomic unit of 2nd hyperpolarizability
// (6.23538054e-65 ± 2.8e-72) C^4 m^4 J^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_2nd_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::value() == static_cast<T>(6.23538054e-65));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(2.8e-72));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
}

// atomic unit of action
// (1.054571726e-34 ± 4.7e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::value() ==
      static_cast<T>(1.054571726e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::uncertainty() ==
      static_cast<T>(4.7e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_action<T>::precision()));
}

// atomic unit of charge
// (1.602176565e-19 ± 3.5e-27) C
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::value() ==
      static_cast<T>(1.602176565e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::uncertainty() ==
      static_cast<T>(3.5e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_charge<T>::precision()));
}

// atomic unit of charge density
// (1081202338000.0 ± 24000.0) C m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_charge_density<
                 T>::value() == static_cast<T>(1081202338000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_charge_density<
                 T>::uncertainty() == static_cast<T>(24000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_charge_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_charge_density<
          T>::precision()));
}

// atomic unit of current
// (0.00662361795 ± 1.5e-10) A
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_current<T>::value() ==
      static_cast<T>(0.00662361795));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::atomic_unit_of_current<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_current<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_current<T>::precision()));
}

// atomic unit of electric dipole mom.
// (8.47835326e-30 ± 1.9e-37) C m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_dipole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
                 T>::value() == static_cast<T>(8.47835326e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
                 T>::uncertainty() == static_cast<T>(1.9e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
}

// atomic unit of electric field
// (514220652000.0 ± 11000.0) V m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_field<
                 T>::value() == static_cast<T>(514220652000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_field<
                 T>::uncertainty() == static_cast<T>(11000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_field<
          T>::precision()));
}

// atomic unit of electric field gradient
// (9.717362e+21 ± 210000000000000.0) V m^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field_gradient, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::value() == static_cast<T>(9.717362e+21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::uncertainty() == static_cast<T>(210000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_field_gradient<
          T>::precision()));
}

// atomic unit of electric polarizability
// (1.6487772754e-41 ± 1.6e-50) C^2 m^2 J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_polarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::value() == static_cast<T>(1.6487772754e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::uncertainty() == static_cast<T>(1.6e-50));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_polarizability<
          T>::precision()));
}

// atomic unit of electric potential
// (27.21138505 ± 6e-07) V
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_potential, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_potential<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_potential<
                 T>::value() == static_cast<T>(27.21138505));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_potential<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_electric_potential<
                 T>::uncertainty() == static_cast<T>(6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_potential<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_potential<
          T>::precision()));
}

// atomic unit of electric quadrupole mom.
// (4.486551331e-40 ± 9.9e-48) C m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_quadrupole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::value() == static_cast<T>(4.486551331e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty() == static_cast<T>(9.9e-48));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
}

// atomic unit of energy
// (4.35974434e-18 ± 1.9e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::value() ==
      static_cast<T>(4.35974434e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::uncertainty() ==
      static_cast<T>(1.9e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_energy<T>::precision()));
}

// atomic unit of force
// (8.23872278e-08 ± 3.6e-15) N
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_force, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_force<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_force<T>::value() ==
             static_cast<T>(8.23872278e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_force<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_force<T>::uncertainty() ==
      static_cast<T>(3.6e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_force<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_force<T>::precision()));
}

// atomic unit of length
// (5.2917721092e-11 ± 1.7e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::value() ==
      static_cast<T>(5.2917721092e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::uncertainty() ==
      static_cast<T>(1.7e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_length<T>::precision()));
}

// atomic unit of mag. dipole mom.
// (1.854801936e-23 ± 4.1e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_dipole_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
                 T>::value() == static_cast<T>(1.854801936e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
                 T>::uncertainty() == static_cast<T>(4.1e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
}

// atomic unit of mag. flux density
// (235051.7464 ± 0.0052) T
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_flux_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
                 T>::value() == static_cast<T>(235051.7464));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
                 T>::uncertainty() == static_cast<T>(0.0052));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_mag_flux_density<
          T>::precision()));
}

// atomic unit of magnetizability
// (7.891036607e-29 ± 1.3e-37) J T^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magnetizability, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_magnetizability<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_magnetizability<
                 T>::value() == static_cast<T>(7.891036607e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_magnetizability<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_magnetizability<
                 T>::uncertainty() == static_cast<T>(1.3e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_magnetizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_magnetizability<
          T>::precision()));
}

// atomic unit of mass
// (9.10938291e-31 ± 4e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938291e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(4e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_mass<T>::precision()));
}

// atomic unit of mom.um
// (1.99285174e-24 ± 8.8e-32) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_momum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_momum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_momum<T>::value() ==
             static_cast<T>(1.99285174e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_momum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_momum<T>::uncertainty() ==
      static_cast<T>(8.8e-32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_momum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_momum<T>::precision()));
}

// atomic unit of permittivity
// (1.112650056e-10 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_permittivity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_permittivity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_permittivity<T>::value() ==
      static_cast<T>(1.112650056e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::atomic_unit_of_permittivity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_permittivity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::atomic_unit_of_permittivity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::atomic_unit_of_permittivity<
                    T>::precision()));
}

// atomic unit of time
// (2.418884326502e-17 ± 1.2e-28) s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_time<T>::value() ==
             static_cast<T>(2.418884326502e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_time<T>::uncertainty() ==
      static_cast<T>(1.2e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_time<T>::precision()));
}

// atomic unit of velocity
// (2187691.26379 ± 0.00071) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::atomic_unit_of_velocity<T>::value() ==
      static_cast<T>(2187691.26379));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::atomic_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::atomic_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.00071));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::atomic_unit_of_velocity<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::atomic_unit_of_velocity<T>::precision()));
}

// Avogadro constant
// (6.02214129e+23 ± 2.7e+16) mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Avogadro_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Avogadro_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Avogadro_constant<T>::value() ==
             static_cast<T>(6.02214129e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Avogadro_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Avogadro_constant<T>::uncertainty() ==
      static_cast<T>(2.7e+16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Avogadro_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Avogadro_constant<T>::precision()));
}

// Bohr magneton
// (9.27400968e-24 ± 2e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Bohr_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Bohr_magneton<T>::value() ==
             static_cast<T>(9.27400968e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Bohr_magneton<T>::uncertainty() ==
             static_cast<T>(2e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_magneton<T>::precision()));
}

// Bohr magneton in eV/T
// (5.7883818066e-05 ± 3.8e-14) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::value() ==
      static_cast<T>(5.7883818066e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::uncertainty() ==
      static_cast<T>(3.8e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_magneton_in_eV_T<T>::precision()));
}

// Bohr magneton in Hz/T
// (13996245550.0 ± 310.0) Hz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_Hz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::value() ==
      static_cast<T>(13996245550.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::uncertainty() ==
      static_cast<T>(310.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_magneton_in_Hz_T<T>::precision()));
}

// Bohr magneton in inverse meters per tesla
// (46.6864498 ± 1e-06) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value() == static_cast<T>(46.6864498));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty() == static_cast<T>(1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
}

// Bohr magneton in K/T
// (0.67171388 ± 6.1e-07) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::value() ==
             static_cast<T>(0.67171388));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::uncertainty() ==
      static_cast<T>(6.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_magneton_in_K_T<T>::precision()));
}

// Bohr radius
// (5.2917721092e-11 ± 1.7e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_radius, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Bohr_radius<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Bohr_radius<T>::value() ==
             static_cast<T>(5.2917721092e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_radius<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Bohr_radius<T>::uncertainty() ==
             static_cast<T>(1.7e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Bohr_radius<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Bohr_radius<T>::precision()));
}

// Boltzmann constant
// (1.3806488e-23 ± 1.3e-29) J K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Boltzmann_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Boltzmann_constant<T>::value() ==
             static_cast<T>(1.3806488e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Boltzmann_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Boltzmann_constant<T>::uncertainty() ==
      static_cast<T>(1.3e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Boltzmann_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Boltzmann_constant<T>::precision()));
}

// Boltzmann constant in eV/K
// (8.6173324e-05 ± 7.8e-11) eV K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_eV_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<T>::value() ==
      static_cast<T>(8.6173324e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<
                 T>::uncertainty() == static_cast<T>(7.8e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Boltzmann_constant_in_eV_K<
                    T>::precision()));
}

// Boltzmann constant in Hz/K
// (20836618000.0 ± 19000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_Hz_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<T>::value() ==
      static_cast<T>(20836618000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<
                 T>::uncertainty() == static_cast<T>(19000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
}

// Boltzmann constant in inverse meters per kelvin
// (69.503476 ± 6.3e-05) m^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_inverse_meters_per_kelvin,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value() ==
             static_cast<T>(69.503476));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty() ==
      static_cast<T>(6.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
}

// characteristic impedance of vacuum
// (376.730313461 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(characteristic_impedance_of_vacuum, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
                 T>::value() == static_cast<T>(376.730313461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::characteristic_impedance_of_vacuum<
          T>::precision()));
}

// classical electron radius
// (2.8179403267e-15 ± 2.7e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(classical_electron_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::classical_electron_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::classical_electron_radius<T>::value() ==
      static_cast<T>(2.8179403267e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::classical_electron_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::classical_electron_radius<
                 T>::uncertainty() == static_cast<T>(2.7e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::classical_electron_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::classical_electron_radius<
                    T>::precision()));
}

// Compton wavelength
// (2.4263102389e-12 ± 1.6e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Compton_wavelength<T>::value() ==
             static_cast<T>(2.4263102389e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Compton_wavelength<T>::uncertainty() ==
      static_cast<T>(1.6e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Compton_wavelength<T>::precision()));
}

// Compton wavelength over 2 pi
// (3.86159268e-13 ± 2.5e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(3.86159268e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(2.5e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Compton_wavelength_over_2_pi<
          T>::precision()));
}

// conductance quantum
// (7.7480917346e-05 ± 2.5e-14) S
BOOST_AUTO_TEST_CASE_TEMPLATE(conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conductance_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::conductance_quantum<T>::value() ==
             static_cast<T>(7.7480917346e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conductance_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::conductance_quantum<T>::uncertainty() ==
      static_cast<T>(2.5e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conductance_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::conductance_quantum<T>::precision()));
}

// conventional value of Josephson constant
// (483597900000000.0 ± 0.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_Josephson_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::value() == static_cast<T>(483597900000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::conventional_value_of_Josephson_constant<
          T>::precision()));
}

// conventional value of von Klitzing constant
// (25812.807 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_von_Klitzing_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          conventional_value_of_von_Klitzing_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 conventional_value_of_von_Klitzing_constant<T>::value() ==
             static_cast<T>(25812.807));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
}

// Cu x unit
// (1.00207697e-13 ± 2.8e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Cu_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Cu_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Cu_x_unit<T>::value() ==
             static_cast<T>(1.00207697e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Cu_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Cu_x_unit<T>::uncertainty() ==
             static_cast<T>(2.8e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Cu_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Cu_x_unit<T>::precision()));
}

// deuteron-electron mag. mom. ratio
// (-0.0004664345537 ± 3.9e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.0004664345537));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_electron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-electron mass ratio
// (3670.4829652 ± 1.5e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_electron_mass_ratio<
                 T>::value() == static_cast<T>(3670.4829652));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.5e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_electron_mass_ratio<
          T>::precision()));
}

// deuteron g factor
// (0.8574382308 ± 7.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_g_factor<T>::value() ==
             static_cast<T>(0.8574382308));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_g_factor<T>::uncertainty() ==
      static_cast<T>(7.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_g_factor<T>::precision()));
}

// deuteron mag. mom.
// (4.33073489e-27 ± 1e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mag_mom<T>::value() ==
             static_cast<T>(4.33073489e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mag_mom<T>::uncertainty() ==
      static_cast<T>(1e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mag_mom<T>::precision()));
}

// deuteron mag. mom. to Bohr magneton ratio
// (0.0004669754556 ± 3.9e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0004669754556));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(3.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// deuteron mag. mom. to nuclear magneton ratio
// (0.8574382308 ± 7.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(0.8574382308));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(7.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// deuteron mass
// (3.34358348e-27 ± 1.5e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::deuteron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mass<T>::value() ==
             static_cast<T>(3.34358348e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mass<T>::uncertainty() ==
             static_cast<T>(1.5e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mass<T>::precision()));
}

// deuteron mass energy equivalent
// (3.00506297e-10 ± 1.3e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(3.00506297e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.3e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent<
          T>::precision()));
}

// deuteron mass energy equivalent in MeV
// (1875.612859 ± 4.1e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(1875.612859));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(4.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// deuteron mass in u
// (2.013553212712 ± 7.7e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_mass_in_u<T>::value() ==
             static_cast<T>(2.013553212712));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(7.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_mass_in_u<T>::precision()));
}

// deuteron molar mass
// (0.002013553212712 ± 7.7e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_molar_mass<T>::value() ==
             static_cast<T>(0.002013553212712));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_molar_mass<T>::uncertainty() ==
      static_cast<T>(7.7e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_molar_mass<T>::precision()));
}

// deuteron-neutron mag. mom. ratio
// (-0.44820652 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.44820652));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mag. mom. ratio
// (0.307012207 ± 2.4e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.307012207));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::deuteron_proton_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mass ratio
// (1.99900750097 ± 1.8e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.99900750097));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::deuteron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.8e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::deuteron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::deuteron_proton_mass_ratio<
                    T>::precision()));
}

// deuteron rms charge radius
// (2.1424e-15 ± 2.1e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::deuteron_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::deuteron_rms_charge_radius<T>::value() ==
      static_cast<T>(2.1424e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::deuteron_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::deuteron_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(2.1e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::deuteron_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::deuteron_rms_charge_radius<
                    T>::precision()));
}

// electric constant
// (8.854187817e-12 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electric_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electric_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electric_constant<T>::value() ==
             static_cast<T>(8.854187817e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electric_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electric_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electric_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electric_constant<T>::precision()));
}

// electron charge to mass quotient
// (-175882008800.0 ± 3900.0) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(-175882008800.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(3900.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_charge_to_mass_quotient<
          T>::precision()));
}

// electron-deuteron mag. mom. ratio
// (-2143.923498 ± 1.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-2143.923498));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_deuteron_mag_mom_ratio<
          T>::precision()));
}

// electron-deuteron mass ratio
// (0.00027244371095 ± 1.1e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_deuteron_mass_ratio<
                 T>::value() == static_cast<T>(0.00027244371095));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_deuteron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_deuteron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_deuteron_mass_ratio<
          T>::precision()));
}

// electron g factor
// (-2.00231930436153 ± 5.3e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_g_factor<T>::value() ==
             static_cast<T>(-2.00231930436153));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_g_factor<T>::uncertainty() ==
      static_cast<T>(5.3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_g_factor<T>::precision()));
}

// electron gyromag. ratio
// (176085970800.0 ± 3900.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_gyromag_ratio<T>::value() ==
      static_cast<T>(176085970800.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_gyromag_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(3900.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_gyromag_ratio<T>::precision()));
}

// electron gyromag. ratio over 2 pi
// (28024.95266 ± 0.00062) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(28024.95266));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(0.00062));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// electron-helion mass ratio
// (0.00018195430761 ± 1.7e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_helion_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_helion_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_helion_mass_ratio<T>::value() ==
      static_cast<T>(0.00018195430761));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_helion_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_helion_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.7e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_helion_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_helion_mass_ratio<
                    T>::precision()));
}

// electron mag. mom.
// (-9.2847643e-24 ± 2.1e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mag_mom<T>::value() ==
             static_cast<T>(-9.2847643e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.1e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mag_mom<T>::precision()));
}

// electron mag. mom. anomaly
// (0.00115965218076 ± 2.7e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom_anomaly<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mag_mom_anomaly<T>::value() ==
      static_cast<T>(0.00115965218076));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_mag_mom_anomaly<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mag_mom_anomaly<
                 T>::uncertainty() == static_cast<T>(2.7e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_mag_mom_anomaly<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_mag_mom_anomaly<
                    T>::precision()));
}

// electron mag. mom. to Bohr magneton ratio
// (-1.00115965218076 ± 2.7e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-1.00115965218076));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.7e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// electron mag. mom. to nuclear magneton ratio
// (-1838.2819709 ± 7.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1838.2819709));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(7.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// electron mass
// (9.10938291e-31 ± 4e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mass<T>::value() ==
             static_cast<T>(9.10938291e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mass<T>::uncertainty() ==
             static_cast<T>(4e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mass<T>::precision()));
}

// electron mass energy equivalent
// (8.18710506e-14 ± 3.6e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(8.18710506e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(3.6e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mass_energy_equivalent<
          T>::precision()));
}

// electron mass energy equivalent in MeV
// (0.510998928 ± 1.1e-08) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(0.510998928));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// electron mass in u
// (0.00054857990946 ± 2.2e-13) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_mass_in_u<T>::value() ==
             static_cast<T>(0.00054857990946));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_mass_in_u<T>::precision()));
}

// electron molar mass
// (5.4857990946e-07 ± 2.2e-16) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_molar_mass<T>::value() ==
             static_cast<T>(5.4857990946e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.2e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_molar_mass<T>::precision()));
}

// electron-muon mag. mom. ratio
// (206.7669896 ± 5.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_muon_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_muon_mag_mom_ratio<T>::value() ==
      static_cast<T>(206.7669896));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_muon_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_muon_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_muon_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_muon_mag_mom_ratio<
                    T>::precision()));
}

// electron-muon mass ratio
// (0.00483633166 ± 1.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_muon_mass_ratio<T>::value() ==
      static_cast<T>(0.00483633166));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.2e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_muon_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_muon_mass_ratio<
                    T>::precision()));
}

// electron-neutron mag. mom. ratio
// (960.9205 ± 0.00023)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(960.9205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(0.00023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_neutron_mag_mom_ratio<
          T>::precision()));
}

// electron-neutron mass ratio
// (0.00054386734461 ± 3.2e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.00054386734461));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.2e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_neutron_mass_ratio<
                    T>::precision()));
}

// electron-proton mag. mom. ratio
// (-658.2106848 ± 5.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-658.2106848));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(5.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-proton mass ratio
// (0.00054461702178 ± 2.2e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.00054461702178));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_proton_mass_ratio<
                    T>::precision()));
}

// electron-tau mass ratio
// (0.000287592 ± 2.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.000287592));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_tau_mass_ratio<T>::precision()));
}

// electron to alpha particle mass ratio
// (0.000137093355578 ± 5.5e-14)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_alpha_particle_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::value() == static_cast<T>(0.000137093355578));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty() == static_cast<T>(5.5e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
}

// electron to shielded helion mag. mom. ratio
// (864.058257 ± 1e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_helion_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::value() == static_cast<T>(864.058257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
}

// electron to shielded proton mag. mom. ratio
// (-658.2275971 ± 7.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-658.2275971));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(7.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-triton mass ratio
// (0.00018192000653 ± 1.7e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_triton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_triton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_triton_mass_ratio<T>::value() ==
      static_cast<T>(0.00018192000653));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_triton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_triton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.7e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_triton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::electron_triton_mass_ratio<
                    T>::precision()));
}

// electron volt
// (1.602176565e-19 ± 3.5e-27) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::electron_volt<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt<T>::value() ==
             static_cast<T>(1.602176565e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt<T>::uncertainty() ==
             static_cast<T>(3.5e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt<T>::precision()));
}

// electron volt-atomic mass unit relationship
// (1.07354415e-09 ± 2.4e-17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_volt_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 electron_volt_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.07354415e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(2.4e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
}

// electron volt-hartree relationship
// (0.03674932379 ± 8.1e-10) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_hartree_relationship<
                 T>::value() == static_cast<T>(0.03674932379));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(8.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_hartree_relationship<
          T>::precision()));
}

// electron volt-hertz relationship
// (241798934800000.0 ± 5300000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_hertz_relationship<
                 T>::value() == static_cast<T>(241798934800000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(5300000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_hertz_relationship<
          T>::precision()));
}

// electron volt-inverse meter relationship
// (806554.429 ± 0.018) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::value() == static_cast<T>(806554.429));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(0.018));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_inverse_meter_relationship<
          T>::precision()));
}

// electron volt-joule relationship
// (1.602176565e-19 ± 3.5e-27) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_joule_relationship<
                 T>::value() == static_cast<T>(1.602176565e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_joule_relationship<
                 T>::uncertainty() == static_cast<T>(3.5e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_joule_relationship<
          T>::precision()));
}

// electron volt-kelvin relationship
// (11604.519 ± 0.011) K
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_kelvin_relationship<
                 T>::value() == static_cast<T>(11604.519));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::electron_volt_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.011));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_kelvin_relationship<
          T>::precision()));
}

// electron volt-kilogram relationship
// (1.782661845e-36 ± 3.9e-44) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::value() == static_cast<T>(1.782661845e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(3.9e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::electron_volt_kilogram_relationship<
          T>::precision()));
}

// elementary charge
// (1.602176565e-19 ± 3.5e-27) C
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::elementary_charge<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::elementary_charge<T>::value() ==
             static_cast<T>(1.602176565e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::elementary_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::elementary_charge<T>::uncertainty() ==
      static_cast<T>(3.5e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::elementary_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::elementary_charge<T>::precision()));
}

// elementary charge over h
// (241798934800000.0 ± 5300000.0) A J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge_over_h, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::elementary_charge_over_h<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::elementary_charge_over_h<T>::value() ==
      static_cast<T>(241798934800000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::elementary_charge_over_h<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::elementary_charge_over_h<
                 T>::uncertainty() == static_cast<T>(5300000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::elementary_charge_over_h<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::elementary_charge_over_h<
                    T>::precision()));
}

// Faraday constant
// (96485.3365 ± 0.0021) C mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Faraday_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Faraday_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Faraday_constant<T>::value() ==
             static_cast<T>(96485.3365));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Faraday_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Faraday_constant<T>::uncertainty() ==
      static_cast<T>(0.0021));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Faraday_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Faraday_constant<T>::precision()));
}

// Faraday constant for conventional electric current
// (96485.3321 ± 0.0043) C_90 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(
    Faraday_constant_for_conventional_electric_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Faraday_constant_for_conventional_electric_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          Faraday_constant_for_conventional_electric_current<T>::value() ==
      static_cast<T>(96485.3321));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::
                        Faraday_constant_for_conventional_electric_current<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::
                 Faraday_constant_for_conventional_electric_current<
                     T>::uncertainty() == static_cast<T>(0.0043));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
}

// Fermi coupling constant
// (1.166364e-05 ± 5e-11) GeV^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Fermi_coupling_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Fermi_coupling_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Fermi_coupling_constant<T>::value() ==
      static_cast<T>(1.166364e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Fermi_coupling_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Fermi_coupling_constant<
                 T>::uncertainty() == static_cast<T>(5e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Fermi_coupling_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Fermi_coupling_constant<T>::precision()));
}

// fine-structure constant
// (0.0072973525698 ± 2.4e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::fine_structure_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::fine_structure_constant<T>::value() ==
      static_cast<T>(0.0072973525698));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::fine_structure_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(2.4e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::fine_structure_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::fine_structure_constant<T>::precision()));
}

// first radiation constant
// (3.74177153e-16 ± 1.7e-23) W m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::first_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::first_radiation_constant<T>::value() ==
      static_cast<T>(3.74177153e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::first_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::first_radiation_constant<
                 T>::uncertainty() == static_cast<T>(1.7e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::first_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::first_radiation_constant<
                    T>::precision()));
}

// first radiation constant for spectral radiance
// (1.191042869e-16 ± 5.3e-24) W m^2 sr^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant_for_spectral_radiance, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          first_radiation_constant_for_spectral_radiance<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 first_radiation_constant_for_spectral_radiance<T>::value() ==
             static_cast<T>(1.191042869e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty() ==
      static_cast<T>(5.3e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
}

// hartree-atomic mass unit relationship
// (2.9212623246e-08 ± 2.1e-17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(2.9212623246e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(2.1e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hartree_atomic_mass_unit_relationship<
          T>::precision()));
}

// hartree-electron volt relationship
// (27.21138505 ± 6e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_electron_volt_relationship<
                 T>::value() == static_cast<T>(27.21138505));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hartree_electron_volt_relationship<
          T>::precision()));
}

// Hartree energy
// (4.35974434e-18 ± 1.9e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Hartree_energy<T>::value() ==
             static_cast<T>(4.35974434e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Hartree_energy<T>::uncertainty() ==
             static_cast<T>(1.9e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Hartree_energy<T>::precision()));
}

// Hartree energy in eV
// (27.21138505 ± 6e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy_in_eV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Hartree_energy_in_eV<T>::value() ==
             static_cast<T>(27.21138505));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy_in_eV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Hartree_energy_in_eV<T>::uncertainty() ==
      static_cast<T>(6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Hartree_energy_in_eV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Hartree_energy_in_eV<T>::precision()));
}

// hartree-hertz relationship
// (6579683920729000.0 ± 33000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hartree_hertz_relationship<T>::value() ==
      static_cast<T>(6579683920729000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(33000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hartree_hertz_relationship<
                    T>::precision()));
}

// hartree-inverse meter relationship
// (21947463.13708 ± 0.00011) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_inverse_meter_relationship<
                 T>::value() == static_cast<T>(21947463.13708));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.00011));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hartree_inverse_meter_relationship<
          T>::precision()));
}

// hartree-joule relationship
// (4.35974434e-18 ± 1.9e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hartree_joule_relationship<T>::value() ==
      static_cast<T>(4.35974434e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_joule_relationship<
                 T>::uncertainty() == static_cast<T>(1.9e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hartree_joule_relationship<
                    T>::precision()));
}

// hartree-kelvin relationship
// (315775.04 ± 0.29) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hartree_kelvin_relationship<T>::value() ==
      static_cast<T>(315775.04));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.29));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hartree_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hartree_kelvin_relationship<
                    T>::precision()));
}

// hartree-kilogram relationship
// (4.85086979e-35 ± 2.1e-42) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_kilogram_relationship<
                 T>::value() == static_cast<T>(4.85086979e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hartree_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(2.1e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hartree_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hartree_kilogram_relationship<
          T>::precision()));
}

// helion-electron mass ratio
// (5495.8852754 ± 5e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_electron_mass_ratio<T>::value() ==
      static_cast<T>(5495.8852754));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::helion_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::helion_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::helion_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::helion_electron_mass_ratio<
                    T>::precision()));
}

// helion g factor
// (-4.255250613 ± 5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_g_factor<T>::value() ==
             static_cast<T>(-4.255250613));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_g_factor<T>::uncertainty() ==
      static_cast<T>(5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_g_factor<T>::precision()));
}

// helion mag. mom.
// (-1.074617486e-26 ± 2.7e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mag_mom<T>::value() ==
             static_cast<T>(-1.074617486e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mag_mom<T>::uncertainty() ==
             static_cast<T>(2.7e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mag_mom<T>::precision()));
}

// helion mag. mom. to Bohr magneton ratio
// (-0.001158740958 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.001158740958));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// helion mag. mom. to nuclear magneton ratio
// (-2.127625306 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-2.127625306));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// helion mass
// (5.00641234e-27 ± 2.2e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::helion_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mass<T>::value() ==
             static_cast<T>(5.00641234e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mass<T>::uncertainty() ==
             static_cast<T>(2.2e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mass<T>::precision()));
}

// helion mass energy equivalent
// (4.49953902e-10 ± 2e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.49953902e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mass_energy_equivalent<
          T>::precision()));
}

// helion mass energy equivalent in MeV
// (2808.391482 ± 6.2e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.391482));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(6.2e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// helion mass in u
// (3.0149322468 ± 2.5e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_mass_in_u<T>::value() ==
             static_cast<T>(3.0149322468));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_mass_in_u<T>::precision()));
}

// helion molar mass
// (0.0030149322468 ± 2.5e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::helion_molar_mass<T>::value() ==
             static_cast<T>(0.0030149322468));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::helion_molar_mass<T>::precision()));
}

// helion-proton mass ratio
// (2.9931526707 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::helion_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::helion_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.9931526707));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::helion_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::helion_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::helion_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::helion_proton_mass_ratio<
                    T>::precision()));
}

// hertz-atomic mass unit relationship
// (4.4398216689e-24 ± 3.1e-33) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(4.4398216689e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(3.1e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hertz_atomic_mass_unit_relationship<
          T>::precision()));
}

// hertz-electron volt relationship
// (4.135667516e-15 ± 9.1e-23) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_electron_volt_relationship<
                 T>::value() == static_cast<T>(4.135667516e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(9.1e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hertz_electron_volt_relationship<
          T>::precision()));
}

// hertz-hartree relationship
// (1.5198298460045e-16 ± 7.6e-28) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_hartree_relationship<T>::value() ==
      static_cast<T>(1.5198298460045e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(7.6e-28));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hertz_hartree_relationship<
                    T>::precision()));
}

// hertz-inverse meter relationship
// (3.335640951e-09 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_inverse_meter_relationship<
                 T>::value() == static_cast<T>(3.335640951e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::hertz_inverse_meter_relationship<
          T>::precision()));
}

// hertz-joule relationship
// (6.62606957e-34 ± 2.9e-41) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_joule_relationship<T>::value() ==
      static_cast<T>(6.62606957e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_joule_relationship<
                 T>::uncertainty() == static_cast<T>(2.9e-41));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hertz_joule_relationship<
                    T>::precision()));
}

// hertz-kelvin relationship
// (4.7992434e-11 ± 4.4e-17) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_kelvin_relationship<T>::value() ==
      static_cast<T>(4.7992434e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(4.4e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hertz_kelvin_relationship<
                    T>::precision()));
}

// hertz-kilogram relationship
// (7.37249668e-51 ± 3.3e-58) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::hertz_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::hertz_kilogram_relationship<T>::value() ==
      static_cast<T>(7.37249668e-51));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::hertz_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(3.3e-58));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::hertz_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::hertz_kilogram_relationship<
                    T>::precision()));
}

// inverse fine-structure constant
// (137.035999074 ± 4.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_fine_structure_constant<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_fine_structure_constant<
                 T>::value() == static_cast<T>(137.035999074));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_fine_structure_constant<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(4.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_fine_structure_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_fine_structure_constant<
          T>::precision()));
}

// inverse meter-atomic mass unit relationship
// (1.3310250512e-15 ± 9.4e-25) u
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          inverse_meter_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 inverse_meter_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.3310250512e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(9.4e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
}

// inverse meter-electron volt relationship
// (1.23984193e-06 ± 2.7e-14) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::value() == static_cast<T>(1.23984193e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(2.7e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_electron_volt_relationship<
          T>::precision()));
}

// inverse meter-hartree relationship
// (4.556335252755e-08 ± 2.3e-19) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_hartree_relationship<
                 T>::value() == static_cast<T>(4.556335252755e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.3e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_hartree_relationship<
          T>::precision()));
}

// inverse meter-hertz relationship
// (299792458.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_hertz_relationship<
                 T>::value() == static_cast<T>(299792458.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_hertz_relationship<
          T>::precision()));
}

// inverse meter-joule relationship
// (1.986445684e-25 ± 8.8e-33) J
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_joule_relationship<
                 T>::value() == static_cast<T>(1.986445684e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_joule_relationship<
                 T>::uncertainty() == static_cast<T>(8.8e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_joule_relationship<
          T>::precision()));
}

// inverse meter-kelvin relationship
// (0.01438777 ± 1.3e-08) K
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
                 T>::value() == static_cast<T>(0.01438777));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_kelvin_relationship<
          T>::precision()));
}

// inverse meter-kilogram relationship
// (2.210218902e-42 ± 9.8e-50) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::value() == static_cast<T>(2.210218902e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(9.8e-50));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_meter_kilogram_relationship<
          T>::precision()));
}

// inverse of conductance quantum
// (12906.4037217 ± 4.2e-06) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_of_conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_of_conductance_quantum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_of_conductance_quantum<
                 T>::value() == static_cast<T>(12906.4037217));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_of_conductance_quantum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::inverse_of_conductance_quantum<
                 T>::uncertainty() == static_cast<T>(4.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::inverse_of_conductance_quantum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::inverse_of_conductance_quantum<
          T>::precision()));
}

// Josephson constant
// (483597870000000.0 ± 11000000.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Josephson_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Josephson_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Josephson_constant<T>::value() ==
             static_cast<T>(483597870000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Josephson_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Josephson_constant<T>::uncertainty() ==
      static_cast<T>(11000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Josephson_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Josephson_constant<T>::precision()));
}

// joule-atomic mass unit relationship
// (6700535850.0 ± 300.0) u
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6700535850.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(300.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::joule_atomic_mass_unit_relationship<
          T>::precision()));
}

// joule-electron volt relationship
// (6.24150934e+18 ± 140000000000.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::joule_electron_volt_relationship<
                 T>::value() == static_cast<T>(6.24150934e+18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(140000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::joule_electron_volt_relationship<
          T>::precision()));
}

// joule-hartree relationship
// (2.29371248e+17 ± 10000000000.0) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_hartree_relationship<T>::value() ==
      static_cast<T>(2.29371248e+17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(10000000000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::joule_hartree_relationship<
                    T>::precision()));
}

// joule-hertz relationship
// (1.509190311e+33 ± 6.7e+25) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_hertz_relationship<T>::value() ==
      static_cast<T>(1.509190311e+33));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(6.7e+25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::joule_hertz_relationship<
                    T>::precision()));
}

// joule-inverse meter relationship
// (5.03411701e+24 ± 2.2e+17) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::joule_inverse_meter_relationship<
                 T>::value() == static_cast<T>(5.03411701e+24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(2.2e+17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::joule_inverse_meter_relationship<
          T>::precision()));
}

// joule-kelvin relationship
// (7.2429716e+22 ± 6.6e+16) K
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_kelvin_relationship<T>::value() ==
      static_cast<T>(7.2429716e+22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(6.6e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::joule_kelvin_relationship<
                    T>::precision()));
}

// joule-kilogram relationship
// (1.112650056e-17 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::joule_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::joule_kilogram_relationship<T>::value() ==
      static_cast<T>(1.112650056e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::joule_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::joule_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::joule_kilogram_relationship<
                    T>::precision()));
}

// kelvin-atomic mass unit relationship
// (9.2510868e-14 ± 8.4e-20) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(9.2510868e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(8.4e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
}

// kelvin-electron volt relationship
// (8.6173324e-05 ± 7.8e-11) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_electron_volt_relationship<
                 T>::value() == static_cast<T>(8.6173324e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(7.8e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kelvin_electron_volt_relationship<
          T>::precision()));
}

// kelvin-hartree relationship
// (3.1668114e-06 ± 2.9e-12) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kelvin_hartree_relationship<T>::value() ==
      static_cast<T>(3.1668114e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(2.9e-12));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::kelvin_hartree_relationship<
                    T>::precision()));
}

// kelvin-hertz relationship
// (20836618000.0 ± 19000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kelvin_hertz_relationship<T>::value() ==
      static_cast<T>(20836618000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(19000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::kelvin_hertz_relationship<
                    T>::precision()));
}

// kelvin-inverse meter relationship
// (69.503476 ± 6.3e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
                 T>::value() == static_cast<T>(69.503476));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(6.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kelvin_inverse_meter_relationship<
          T>::precision()));
}

// kelvin-joule relationship
// (1.3806488e-23 ± 1.3e-29) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kelvin_joule_relationship<T>::value() ==
      static_cast<T>(1.3806488e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_joule_relationship<
                 T>::uncertainty() == static_cast<T>(1.3e-29));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kelvin_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::kelvin_joule_relationship<
                    T>::precision()));
}

// kelvin-kilogram relationship
// (1.536179e-40 ± 1.4e-46) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_kilogram_relationship<
                 T>::value() == static_cast<T>(1.536179e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kelvin_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(1.4e-46));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kelvin_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kelvin_kilogram_relationship<
          T>::precision()));
}

// kilogram-atomic mass unit relationship
// (6.02214129e+26 ± 2.7e+19) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6.02214129e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(2.7e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
}

// kilogram-electron volt relationship
// (5.60958885e+35 ± 1.2e+28) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::value() == static_cast<T>(5.60958885e+35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(1.2e+28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kilogram_electron_volt_relationship<
          T>::precision()));
}

// kilogram-hartree relationship
// (2.061485968e+34 ± 9.1e+26) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_hartree_relationship<
                 T>::value() == static_cast<T>(2.061485968e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(9.1e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kilogram_hartree_relationship<
          T>::precision()));
}

// kilogram-hertz relationship
// (1.356392608e+50 ± 6e+42) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_hertz_relationship<T>::value() ==
      static_cast<T>(1.356392608e+50));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kilogram_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(6e+42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kilogram_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::kilogram_hertz_relationship<
                    T>::precision()));
}

// kilogram-inverse meter relationship
// (4.52443873e+41 ± 2e+34) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::value() == static_cast<T>(4.52443873e+41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(2e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kilogram_inverse_meter_relationship<
          T>::precision()));
}

// kilogram-joule relationship
// (8.987551787e+16 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::kilogram_joule_relationship<T>::value() ==
      static_cast<T>(8.987551787e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kilogram_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::kilogram_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::kilogram_joule_relationship<
                    T>::precision()));
}

// kilogram-kelvin relationship
// (6.5096582e+39 ± 5.9e+33) K
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_kelvin_relationship<
                 T>::value() == static_cast<T>(6.5096582e+39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::kilogram_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(5.9e+33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::kilogram_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::kilogram_kelvin_relationship<
          T>::precision()));
}

// lattice parameter of silicon
// (5.431020504e-10 ± 8.9e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_parameter_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_parameter_of_silicon<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::lattice_parameter_of_silicon<
                 T>::value() == static_cast<T>(5.431020504e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_parameter_of_silicon<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::lattice_parameter_of_silicon<
                 T>::uncertainty() == static_cast<T>(8.9e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::lattice_parameter_of_silicon<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::lattice_parameter_of_silicon<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 100 kPa)
// (2.6516462e+25 ± 2.4e+19) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
                 T>::value() == static_cast<T>(2.6516462e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
                 T>::uncertainty() == static_cast<T>(2.4e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_100_kPa<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 101.325 kPa)
// (2.6867805e+25 ± 2.4e+19) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::value() == static_cast<T>(2.6867805e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(2.4e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
}

// mag. constant
// (1.2566370614e-06 ± 0.0) N A^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_constant, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::mag_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::mag_constant<T>::value() ==
             static_cast<T>(1.2566370614e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::mag_constant<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::mag_constant<T>::uncertainty() ==
             static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::mag_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::mag_constant<T>::precision()));
}

// mag. flux quantum
// (2.067833758e-15 ± 4.6e-23) Wb
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_flux_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::mag_flux_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::mag_flux_quantum<T>::value() ==
             static_cast<T>(2.067833758e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::mag_flux_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::mag_flux_quantum<T>::uncertainty() ==
      static_cast<T>(4.6e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::mag_flux_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::mag_flux_quantum<T>::precision()));
}

// molar gas constant
// (8.3144621 ± 7.5e-06) J mol^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_gas_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_gas_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::molar_gas_constant<T>::value() ==
             static_cast<T>(8.3144621));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_gas_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_gas_constant<T>::uncertainty() ==
      static_cast<T>(7.5e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_gas_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_gas_constant<T>::precision()));
}

// molar mass constant
// (0.001 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::molar_mass_constant<T>::value() ==
             static_cast<T>(0.001));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_mass_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_mass_constant<T>::precision()));
}

// molar mass of carbon-12
// (0.012 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_of_carbon_12, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_mass_of_carbon_12<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_mass_of_carbon_12<T>::value() ==
      static_cast<T>(0.012));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::molar_mass_of_carbon_12<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::molar_mass_of_carbon_12<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_mass_of_carbon_12<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_mass_of_carbon_12<T>::precision()));
}

// molar Planck constant
// (3.9903127176e-10 ± 2.8e-19) J s mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_Planck_constant<T>::value() ==
      static_cast<T>(3.9903127176e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_Planck_constant<T>::uncertainty() ==
      static_cast<T>(2.8e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_Planck_constant<T>::precision()));
}

// molar Planck constant times c
// (0.119626565779 ± 8.4e-11) J m mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant_times_c, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant_times_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::molar_Planck_constant_times_c<
                 T>::value() == static_cast<T>(0.119626565779));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant_times_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::molar_Planck_constant_times_c<
                 T>::uncertainty() == static_cast<T>(8.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_Planck_constant_times_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_Planck_constant_times_c<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 100 kPa)
// (0.022710953 ± 2.1e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value() == static_cast<T>(0.022710953));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty() == static_cast<T>(2.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 101.325 kPa)
// (0.022413968 ± 2e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value() ==
             static_cast<T>(0.022413968));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty() ==
      static_cast<T>(2e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
}

// molar volume of silicon
// (1.205883301e-05 ± 8e-13) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_volume_of_silicon<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::molar_volume_of_silicon<T>::value() ==
      static_cast<T>(1.205883301e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::molar_volume_of_silicon<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::molar_volume_of_silicon<
                 T>::uncertainty() == static_cast<T>(8e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::molar_volume_of_silicon<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::molar_volume_of_silicon<T>::precision()));
}

// Mo x unit
// (1.00209952e-13 ± 5.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Mo_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Mo_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Mo_x_unit<T>::value() ==
             static_cast<T>(1.00209952e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Mo_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Mo_x_unit<T>::uncertainty() ==
             static_cast<T>(5.3e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Mo_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Mo_x_unit<T>::precision()));
}

// muon Compton wavelength
// (1.173444103e-14 ± 3e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_Compton_wavelength<T>::value() ==
      static_cast<T>(1.173444103e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(3e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_Compton_wavelength<T>::precision()));
}

// muon Compton wavelength over 2 pi
// (1.867594294e-15 ± 4.7e-23) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.867594294e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(4.7e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// muon-electron mass ratio
// (206.7682843 ± 5.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_electron_mass_ratio<T>::value() ==
      static_cast<T>(206.7682843));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::muon_electron_mass_ratio<
                    T>::precision()));
}

// muon g factor
// (-2.0023318418 ± 1.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_g_factor, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_g_factor<T>::value() ==
             static_cast<T>(-2.0023318418));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_g_factor<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_g_factor<T>::uncertainty() ==
             static_cast<T>(1.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_g_factor<T>::precision()));
}

// muon mag. mom.
// (-4.49044807e-26 ± 1.5e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mag_mom<T>::value() ==
             static_cast<T>(-4.49044807e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mag_mom<T>::uncertainty() ==
             static_cast<T>(1.5e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mag_mom<T>::precision()));
}

// muon mag. mom. anomaly
// (0.00116592091 ± 6.3e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::value() ==
             static_cast<T>(0.00116592091));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::uncertainty() ==
      static_cast<T>(6.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mag_mom_anomaly<T>::precision()));
}

// muon mag. mom. to Bohr magneton ratio
// (-0.00484197044 ± 1.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00484197044));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// muon mag. mom. to nuclear magneton ratio
// (-8.89059697 ± 2.2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-8.89059697));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// muon mass
// (1.883531475e-28 ± 9.6e-36) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass<T>::value() ==
             static_cast<T>(1.883531475e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass<T>::uncertainty() ==
             static_cast<T>(9.6e-36));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::muon_mass<T>::precision()));
}

// muon mass energy equivalent
// (1.692833667e-11 ± 8.6e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_mass_energy_equivalent<T>::value() ==
      static_cast<T>(1.692833667e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(8.6e-19));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::muon_mass_energy_equivalent<
                    T>::precision()));
}

// muon mass energy equivalent in MeV
// (105.6583715 ± 3.5e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(105.6583715));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(3.5e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// muon mass in u
// (0.1134289267 ± 2.9e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass_in_u<T>::value() ==
             static_cast<T>(0.1134289267));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_mass_in_u<T>::uncertainty() ==
             static_cast<T>(2.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_mass_in_u<T>::precision()));
}

// muon molar mass
// (0.0001134289267 ± 2.9e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_molar_mass<T>::value() ==
             static_cast<T>(0.0001134289267));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_molar_mass<T>::precision()));
}

// muon-neutron mass ratio
// (0.1124545177 ± 2.8e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.1124545177));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.8e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_neutron_mass_ratio<T>::precision()));
}

// muon-proton mag. mom. ratio
// (-3.183345107 ± 8.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_proton_mag_mom_ratio<T>::value() ==
      static_cast<T>(-3.183345107));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_proton_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(8.4e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_proton_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::muon_proton_mag_mom_ratio<
                    T>::precision()));
}

// muon-proton mass ratio
// (0.1126095272 ± 2.8e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.1126095272));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::muon_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::muon_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.8e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_proton_mass_ratio<T>::precision()));
}

// muon-tau mass ratio
// (0.0594649 ± 5.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_tau_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::muon_tau_mass_ratio<T>::value() ==
             static_cast<T>(0.0594649));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::muon_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(5.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::muon_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::muon_tau_mass_ratio<T>::precision()));
}

// natural unit of action
// (1.054571726e-34 ± 4.7e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_action<T>::value() ==
      static_cast<T>(1.054571726e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::natural_unit_of_action<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_action<
                 T>::uncertainty() == static_cast<T>(4.7e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_action<T>::precision()));
}

// natural unit of action in eV s
// (6.58211928e-16 ± 1.5e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
                 T>::value() == static_cast<T>(6.58211928e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
                 T>::uncertainty() == static_cast<T>(1.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_action_in_eV_s<
          T>::precision()));
}

// natural unit of energy
// (8.18710506e-14 ± 3.6e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_energy<T>::value() ==
      static_cast<T>(8.18710506e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::natural_unit_of_energy<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_energy<
                 T>::uncertainty() == static_cast<T>(3.6e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_energy<T>::precision()));
}

// natural unit of energy in MeV
// (0.510998928 ± 1.1e-08) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
                 T>::value() == static_cast<T>(0.510998928));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
                 T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_energy_in_MeV<
          T>::precision()));
}

// natural unit of length
// (3.86159268e-13 ± 2.5e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_length<T>::value() ==
      static_cast<T>(3.86159268e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::natural_unit_of_length<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_length<
                 T>::uncertainty() == static_cast<T>(2.5e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_length<T>::precision()));
}

// natural unit of mass
// (9.10938291e-31 ± 4e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938291e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(4e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_mass<T>::precision()));
}

// natural unit of mom.um
// (2.73092429e-22 ± 1.2e-29) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::value() ==
      static_cast<T>(2.73092429e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::uncertainty() ==
      static_cast<T>(1.2e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_momum<T>::precision()));
}

// natural unit of mom.um in MeV/c
// (0.510998928 ± 1.1e-08) MeV/c
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momum_in_MeV_c, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
                 T>::value() == static_cast<T>(0.510998928));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
                 T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_momum_in_MeV_c<
          T>::precision()));
}

// natural unit of time
// (1.28808866833e-21 ± 8.3e-31) s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_time<T>::value() ==
             static_cast<T>(1.28808866833e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_time<T>::uncertainty() ==
      static_cast<T>(8.3e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::natural_unit_of_time<T>::precision()));
}

// natural unit of velocity
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::natural_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::natural_unit_of_velocity<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::natural_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::natural_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::natural_unit_of_velocity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::natural_unit_of_velocity<
                    T>::precision()));
}

// neutron Compton wavelength
// (1.3195909068e-15 ± 1.1e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_Compton_wavelength<T>::value() ==
      static_cast<T>(1.3195909068e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(1.1e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::neutron_Compton_wavelength<
                    T>::precision()));
}

// neutron Compton wavelength over 2 pi
// (2.1001941568e-16 ± 1.7e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.1001941568e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(1.7e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// neutron-electron mag. mom. ratio
// (0.00104066882 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.00104066882));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_electron_mag_mom_ratio<
          T>::precision()));
}

// neutron-electron mass ratio
// (1838.6836605 ± 1.1e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_electron_mass_ratio<T>::value() ==
      static_cast<T>(1838.6836605));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::neutron_electron_mass_ratio<
                    T>::precision()));
}

// neutron g factor
// (-3.82608545 ± 9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_g_factor<T>::value() ==
             static_cast<T>(-3.82608545));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_g_factor<T>::uncertainty() ==
      static_cast<T>(9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_g_factor<T>::precision()));
}

// neutron gyromag. ratio
// (183247179.0 ± 43.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::value() ==
      static_cast<T>(183247179.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(43.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_gyromag_ratio<T>::precision()));
}

// neutron gyromag. ratio over 2 pi
// (29.1646943 ± 6.9e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(29.1646943));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(6.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// neutron mag. mom.
// (-9.6623647e-27 ± 2.3e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mag_mom<T>::value() ==
             static_cast<T>(-9.6623647e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.3e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mag_mom<T>::precision()));
}

// neutron mag. mom. to Bohr magneton ratio
// (-0.00104187563 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00104187563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// neutron mag. mom. to nuclear magneton ratio
// (-1.91304272 ± 4.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-1.91304272));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// neutron mass
// (1.674927351e-27 ± 7.4e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mass<T>::value() ==
             static_cast<T>(1.674927351e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mass<T>::uncertainty() ==
             static_cast<T>(7.4e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mass<T>::precision()));
}

// neutron mass energy equivalent
// (1.505349631e-10 ± 6.6e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.505349631e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(6.6e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent<
          T>::precision()));
}

// neutron mass energy equivalent in MeV
// (939.565379 ± 2.1e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(939.565379));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(2.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// neutron mass in u
// (1.008664916 ± 4.3e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_mass_in_u<T>::value() ==
             static_cast<T>(1.008664916));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_mass_in_u<T>::precision()));
}

// neutron molar mass
// (0.001008664916 ± 4.3e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_molar_mass<T>::value() ==
             static_cast<T>(0.001008664916));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_molar_mass<T>::uncertainty() ==
      static_cast<T>(4.3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_molar_mass<T>::precision()));
}

// neutron-muon mass ratio
// (8.892484 ± 2.2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.892484));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_muon_mass_ratio<T>::precision()));
}

// neutron-proton mag. mom. ratio
// (-0.68497934 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.68497934));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_proton_mag_mom_ratio<
          T>::precision()));
}

// neutron-proton mass difference
// (2.30557392e-30 ± 7.6e-37)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_proton_mass_difference<
                 T>::value() == static_cast<T>(2.30557392e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_proton_mass_difference<
                 T>::uncertainty() == static_cast<T>(7.6e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_proton_mass_difference<
          T>::precision()));
}

// neutron-proton mass difference energy equivalent
// (2.0721465e-13 ± 6.8e-20)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_energy_equivalent,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 neutron_proton_mass_difference_energy_equivalent<T>::value() ==
             static_cast<T>(2.0721465e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent<T>::uncertainty() ==
      static_cast<T>(6.8e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent<T>::precision()));
}

// neutron-proton mass difference energy equivalent in MeV
// (1.29333217 ± 4.2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    neutron_proton_mass_difference_energy_equivalent_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          neutron_proton_mass_difference_energy_equivalent_in_MeV<T>::value() ==
      static_cast<T>(1.29333217));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::
                 neutron_proton_mass_difference_energy_equivalent_in_MeV<
                     T>::uncertainty() == static_cast<T>(4.2e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::
                        neutron_proton_mass_difference_energy_equivalent_in_MeV<
                            T>::precision()));
}

// neutron-proton mass difference in u
// (0.00138844919 ± 4.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_difference_in_u, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::value() == static_cast<T>(0.00138844919));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::uncertainty() == static_cast<T>(4.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_proton_mass_difference_in_u<
          T>::precision()));
}

// neutron-proton mass ratio
// (1.00137841917 ± 4.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.00137841917));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.5e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::neutron_proton_mass_ratio<
                    T>::precision()));
}

// neutron-tau mass ratio
// (0.52879 ± 4.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.52879));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::neutron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::neutron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_tau_mass_ratio<T>::precision()));
}

// neutron to shielded proton mag. mom. ratio
// (-0.68499694 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.68499694));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// Newtonian constant of gravitation
// (6.67384e-11 ± 8e-15) m^3 kg^-1 s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
                 T>::value() == static_cast<T>(6.67384e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
                 T>::uncertainty() == static_cast<T>(8e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Newtonian_constant_of_gravitation<
          T>::precision()));
}

// Newtonian constant of gravitation over h-bar c
// (6.70837e-39 ± 8e-43) (GeV/c^2)^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation_over_h_bar_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 Newtonian_constant_of_gravitation_over_h_bar_c<T>::value() ==
             static_cast<T>(6.70837e-39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty() ==
      static_cast<T>(8e-43));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
}

// nuclear magneton
// (5.05078353e-27 ± 1.1e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::nuclear_magneton<T>::value() ==
             static_cast<T>(5.05078353e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::nuclear_magneton<T>::uncertainty() ==
      static_cast<T>(1.1e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::nuclear_magneton<T>::precision()));
}

// nuclear magneton in eV/T
// (3.1524512605e-08 ± 2.2e-17) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::nuclear_magneton_in_eV_T<T>::value() ==
      static_cast<T>(3.1524512605e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::nuclear_magneton_in_eV_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::nuclear_magneton_in_eV_T<
                 T>::uncertainty() == static_cast<T>(2.2e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::nuclear_magneton_in_eV_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::nuclear_magneton_in_eV_T<
                    T>::precision()));
}

// nuclear magneton in inverse meters per tesla
// (0.02542623527 ± 5.6e-10) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 nuclear_magneton_in_inverse_meters_per_tesla<T>::value() ==
             static_cast<T>(0.02542623527));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty() ==
      static_cast<T>(5.6e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
}

// nuclear magneton in K/T
// (0.00036582682 ± 3.3e-10) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton_in_K_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::nuclear_magneton_in_K_T<T>::value() ==
      static_cast<T>(0.00036582682));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::nuclear_magneton_in_K_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::nuclear_magneton_in_K_T<
                 T>::uncertainty() == static_cast<T>(3.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::nuclear_magneton_in_K_T<T>::precision()));
}

// nuclear magneton in MHz/T
// (7.62259357 ± 1.7e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<T>::value() ==
      static_cast<T>(7.62259357));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(1.7e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::nuclear_magneton_in_MHz_T<
                    T>::precision()));
}

// Planck constant
// (6.62606957e-34 ± 2.9e-41) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_constant<T>::value() ==
             static_cast<T>(6.62606957e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_constant<T>::uncertainty() ==
      static_cast<T>(2.9e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_constant<T>::precision()));
}

// Planck constant in eV s
// (4.135667516e-15 ± 9.1e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_in_eV_s<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_constant_in_eV_s<T>::value() ==
      static_cast<T>(4.135667516e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_constant_in_eV_s<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_constant_in_eV_s<
                 T>::uncertainty() == static_cast<T>(9.1e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_in_eV_s<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_constant_in_eV_s<T>::precision()));
}

// Planck constant over 2 pi
// (1.054571726e-34 ± 4.7e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_over_2_pi<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_constant_over_2_pi<T>::value() ==
      static_cast<T>(1.054571726e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_constant_over_2_pi<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_constant_over_2_pi<
                 T>::uncertainty() == static_cast<T>(4.7e-42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_constant_over_2_pi<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Planck_constant_over_2_pi<
                    T>::precision()));
}

// Planck constant over 2 pi in eV s
// (6.58211928e-16 ± 1.5e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_in_eV_s, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
                 T>::value() == static_cast<T>(6.58211928e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
                 T>::uncertainty() == static_cast<T>(1.5e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
}

// Planck constant over 2 pi times c in MeV fm
// (197.3269718 ± 4.4e-06) MeV fm
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_times_c_in_MeV_fm, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value() ==
             static_cast<T>(197.3269718));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty() ==
      static_cast<T>(4.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
}

// Planck length
// (1.616199e-35 ± 9.7e-40) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_length, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_length<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_length<T>::value() ==
             static_cast<T>(1.616199e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_length<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_length<T>::uncertainty() ==
             static_cast<T>(9.7e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_length<T>::precision()));
}

// Planck mass
// (2.17651e-08 ± 1.3e-12) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_mass<T>::value() ==
             static_cast<T>(2.17651e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_mass<T>::uncertainty() ==
             static_cast<T>(1.3e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_mass<T>::precision()));
}

// Planck mass energy equivalent in GeV
// (1.220932e+19 ± 730000000000000.0) GeV
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass_energy_equivalent_in_GeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::value() == static_cast<T>(1.220932e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty() == static_cast<T>(730000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
}

// Planck temperature
// (1.416833e+32 ± 8.5e+27) K
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_temperature, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_temperature<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_temperature<T>::value() ==
             static_cast<T>(1.416833e+32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_temperature<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Planck_temperature<T>::uncertainty() ==
      static_cast<T>(8.5e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_temperature<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_temperature<T>::precision()));
}

// Planck time
// (5.39106e-44 ± 3.2e-48) s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_time, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Planck_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_time<T>::value() ==
             static_cast<T>(5.39106e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_time<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Planck_time<T>::uncertainty() ==
             static_cast<T>(3.2e-48));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Planck_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Planck_time<T>::precision()));
}

// proton charge to mass quotient
// (95788335.8 ± 2.1) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(95788335.8));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(2.1));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_charge_to_mass_quotient<
          T>::precision()));
}

// proton Compton wavelength
// (1.32140985623e-15 ± 9.4e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_Compton_wavelength<T>::value() ==
      static_cast<T>(1.32140985623e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(9.4e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::proton_Compton_wavelength<
                    T>::precision()));
}

// proton Compton wavelength over 2 pi
// (2.1030891047e-16 ± 1.5e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.1030891047e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(1.5e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// proton-electron mass ratio
// (1836.15267245 ± 7.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_electron_mass_ratio<T>::value() ==
      static_cast<T>(1836.15267245));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(7.5e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::proton_electron_mass_ratio<
                    T>::precision()));
}

// proton g factor
// (5.585694713 ± 4.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_g_factor<T>::value() ==
             static_cast<T>(5.585694713));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_g_factor<T>::uncertainty() ==
      static_cast<T>(4.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_g_factor<T>::precision()));
}

// proton gyromag. ratio
// (267522200.5 ± 6.3) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_gyromag_ratio<T>::value() ==
             static_cast<T>(267522200.5));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(6.3));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_gyromag_ratio<T>::precision()));
}

// proton gyromag. ratio over 2 pi
// (42.5774806 ± 1e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(42.5774806));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// proton mag. mom.
// (1.410606743e-26 ± 3.3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mag_mom<T>::value() ==
             static_cast<T>(1.410606743e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mag_mom<T>::uncertainty() ==
             static_cast<T>(3.3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mag_mom<T>::precision()));
}

// proton mag. mom. to Bohr magneton ratio
// (0.00152103221 ± 1.2e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.00152103221));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.2e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// proton mag. mom. to nuclear magneton ratio
// (2.792847356 ± 2.3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.792847356));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// proton mag. shielding correction
// (2.5694e-05 ± 1.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_shielding_correction, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_shielding_correction<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mag_shielding_correction<
                 T>::value() == static_cast<T>(2.5694e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_shielding_correction<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mag_shielding_correction<
                 T>::uncertainty() == static_cast<T>(1.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mag_shielding_correction<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mag_shielding_correction<
          T>::precision()));
}

// proton mass
// (1.672621777e-27 ± 7.4e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mass<T>::value() ==
             static_cast<T>(1.672621777e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mass<T>::uncertainty() ==
             static_cast<T>(7.4e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mass<T>::precision()));
}

// proton mass energy equivalent
// (1.503277484e-10 ± 6.6e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.503277484e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(6.6e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mass_energy_equivalent<
          T>::precision()));
}

// proton mass energy equivalent in MeV
// (938.272046 ± 2.1e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(938.272046));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(2.1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// proton mass in u
// (1.007276466812 ± 9e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_mass_in_u<T>::value() ==
             static_cast<T>(1.007276466812));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(9e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_mass_in_u<T>::precision()));
}

// proton molar mass
// (0.001007276466812 ± 9e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_molar_mass<T>::value() ==
             static_cast<T>(0.001007276466812));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_molar_mass<T>::uncertainty() ==
      static_cast<T>(9e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_molar_mass<T>::precision()));
}

// proton-muon mass ratio
// (8.88024331 ± 2.2e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.88024331));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_muon_mass_ratio<T>::precision()));
}

// proton-neutron mag. mom. ratio
// (-1.45989806 ± 3.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-1.45989806));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_neutron_mag_mom_ratio<
          T>::precision()));
}

// proton-neutron mass ratio
// (0.99862347826 ± 4.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.99862347826));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.5e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::proton_neutron_mass_ratio<
                    T>::precision()));
}

// proton rms charge radius
// (8.775e-16 ± 5.1e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_rms_charge_radius<T>::value() ==
      static_cast<T>(8.775e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::proton_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(5.1e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::proton_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::proton_rms_charge_radius<
                    T>::precision()));
}

// proton-tau mass ratio
// (0.528063 ± 4.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.528063));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(4.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::proton_tau_mass_ratio<T>::precision()));
}

// quantum of circulation
// (0.0003636947552 ± 2.4e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::quantum_of_circulation<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::quantum_of_circulation<T>::value() ==
      static_cast<T>(0.0003636947552));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::quantum_of_circulation<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::quantum_of_circulation<
                 T>::uncertainty() == static_cast<T>(2.4e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::quantum_of_circulation<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::quantum_of_circulation<T>::precision()));
}

// quantum of circulation times 2
// (0.0007273895104 ± 4.7e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation_times_2, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::quantum_of_circulation_times_2<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::quantum_of_circulation_times_2<
                 T>::value() == static_cast<T>(0.0007273895104));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::quantum_of_circulation_times_2<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::quantum_of_circulation_times_2<
                 T>::uncertainty() == static_cast<T>(4.7e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::quantum_of_circulation_times_2<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::quantum_of_circulation_times_2<
          T>::precision()));
}

// Rydberg constant
// (10973731.568539 ± 5.5e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant<T>::value() ==
             static_cast<T>(10973731.568539));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Rydberg_constant<T>::uncertainty() ==
      static_cast<T>(5.5e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Rydberg_constant<T>::precision()));
}

// Rydberg constant times c in Hz
// (3289841960364000.0 ± 17000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_c_in_Hz, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
                 T>::value() == static_cast<T>(3289841960364000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
                 T>::uncertainty() == static_cast<T>(17000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
}

// Rydberg constant times hc in eV
// (13.60569253 ± 3e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
                 T>::value() == static_cast<T>(13.60569253));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
                 T>::uncertainty() == static_cast<T>(3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
}

// Rydberg constant times hc in J
// (2.179872171e-18 ± 9.6e-26) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_J, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
                 T>::value() == static_cast<T>(2.179872171e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
                 T>::uncertainty() == static_cast<T>(9.6e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Rydberg_constant_times_hc_in_J<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 100 kPa)
// (-1.1517078 ± 2.3e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value() == static_cast<T>(-1.1517078));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty() == static_cast<T>(2.3e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 101.325 kPa)
// (-1.1648708 ± 2.3e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value() == static_cast<T>(-1.1648708));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(2.3e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
}

// second radiation constant
// (0.01438777 ± 1.3e-08) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(second_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::second_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::second_radiation_constant<T>::value() ==
      static_cast<T>(0.01438777));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::second_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::second_radiation_constant<
                 T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::second_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::second_radiation_constant<
                    T>::precision()));
}

// shielded helion gyromag. ratio
// (203789465.9 ± 5.1) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
                 T>::value() == static_cast<T>(203789465.9));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(5.1));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio<
          T>::precision()));
}

// shielded helion gyromag. ratio over 2 pi
// (32.43410084 ± 8.1e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(32.43410084));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(8.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded helion mag. mom.
// (-1.074553044e-26 ± 2.7e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_helion_mag_mom<T>::value() ==
      static_cast<T>(-1.074553044e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::shielded_helion_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_helion_mag_mom<
                 T>::uncertainty() == static_cast<T>(2.7e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_helion_mag_mom<T>::precision()));
}

// shielded helion mag. mom. to Bohr magneton ratio
// (-0.001158671471 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-0.001158671471));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded helion mag. mom. to nuclear magneton ratio
// (-2.127497718 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(-2.127497718));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// shielded helion to proton mag. mom. ratio
// (-0.761766558 ± 1.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.761766558));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
}

// shielded helion to shielded proton mag. mom. ratio
// (-0.7617861313 ± 3.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_shielded_proton_mag_mom_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value() ==
             static_cast<T>(-0.7617861313));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty() ==
      static_cast<T>(3.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
}

// shielded proton gyromag. ratio
// (267515326.8 ± 6.6) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
                 T>::value() == static_cast<T>(267515326.8));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(6.6));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio<
          T>::precision()));
}

// shielded proton gyromag. ratio over 2 pi
// (42.5763866 ± 1e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(42.5763866));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded proton mag. mom.
// (1.410570499e-26 ± 3.5e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::shielded_proton_mag_mom<T>::value() ==
      static_cast<T>(1.410570499e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::shielded_proton_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::shielded_proton_mag_mom<
                 T>::uncertainty() == static_cast<T>(3.5e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::shielded_proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::shielded_proton_mag_mom<T>::precision()));
}

// shielded proton mag. mom. to Bohr magneton ratio
// (0.001520993128 ± 1.7e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::
                 shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(0.001520993128));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded proton mag. mom. to nuclear magneton ratio
// (2.792775598 ± 3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(2.792775598));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// speed of light in vacuum
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(speed_of_light_in_vacuum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::speed_of_light_in_vacuum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::speed_of_light_in_vacuum<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::speed_of_light_in_vacuum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::speed_of_light_in_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::speed_of_light_in_vacuum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::speed_of_light_in_vacuum<
                    T>::precision()));
}

// standard acceleration of gravity
// (9.80665 ± 0.0) m s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_acceleration_of_gravity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_acceleration_of_gravity<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::standard_acceleration_of_gravity<
                 T>::value() == static_cast<T>(9.80665));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_acceleration_of_gravity<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::standard_acceleration_of_gravity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_acceleration_of_gravity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::standard_acceleration_of_gravity<
          T>::precision()));
}

// standard atmosphere
// (101325.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_atmosphere, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_atmosphere<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::standard_atmosphere<T>::value() ==
             static_cast<T>(101325.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_atmosphere<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::standard_atmosphere<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_atmosphere<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::standard_atmosphere<T>::precision()));
}

// standard-state pressure
// (100000.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_state_pressure, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_state_pressure<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::standard_state_pressure<T>::value() ==
      static_cast<T>(100000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::standard_state_pressure<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::standard_state_pressure<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::standard_state_pressure<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::standard_state_pressure<T>::precision()));
}

// Stefan-Boltzmann constant
// (5.670373e-08 ± 2.1e-13) W m^-2 K^-4
BOOST_AUTO_TEST_CASE_TEMPLATE(Stefan_Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Stefan_Boltzmann_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Stefan_Boltzmann_constant<T>::value() ==
      static_cast<T>(5.670373e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Stefan_Boltzmann_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::Stefan_Boltzmann_constant<
                 T>::uncertainty() == static_cast<T>(2.1e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::Stefan_Boltzmann_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::Stefan_Boltzmann_constant<
                    T>::precision()));
}

// tau Compton wavelength
// (6.97787e-16 ± 6.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_Compton_wavelength<T>::value() ==
      static_cast<T>(6.97787e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(6.3e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_Compton_wavelength<T>::precision()));
}

// tau Compton wavelength over 2 pi
// (1.11056e-16 ± 1e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.11056e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// tau-electron mass ratio
// (3477.15 ± 0.31)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_electron_mass_ratio<T>::value() ==
      static_cast<T>(3477.15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_electron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_electron_mass_ratio<T>::precision()));
}

// tau mass
// (3.16747e-27 ± 2.9e-31) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass<T>::value() ==
             static_cast<T>(3.16747e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass<T>::uncertainty() ==
             static_cast<T>(2.9e-31));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::tau_mass<T>::precision()));
}

// tau mass energy equivalent
// (2.84678e-10 ± 2.6e-14) J
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_mass_energy_equivalent<T>::value() ==
      static_cast<T>(2.84678e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2.6e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::tau_mass_energy_equivalent<
                    T>::precision()));
}

// tau mass energy equivalent in MeV
// (1776.82 ± 0.16) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(1776.82));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(0.16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// tau mass in u
// (1.90749 ± 0.00017) u
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_in_u, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass_in_u<T>::value() ==
             static_cast<T>(1.90749));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_mass_in_u<T>::uncertainty() ==
             static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_mass_in_u<T>::precision()));
}

// tau molar mass
// (0.00190749 ± 1.7e-07) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_molar_mass<T>::value() ==
             static_cast<T>(0.00190749));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_molar_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_molar_mass<T>::uncertainty() ==
             static_cast<T>(1.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_molar_mass<T>::precision()));
}

// tau-muon mass ratio
// (16.8167 ± 0.0015)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_muon_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::tau_muon_mass_ratio<T>::value() ==
             static_cast<T>(16.8167));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_muon_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_muon_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.0015));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_muon_mass_ratio<T>::precision()));
}

// tau-neutron mass ratio
// (1.89111 ± 0.00017)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_neutron_mass_ratio<T>::value() ==
      static_cast<T>(1.89111));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::tau_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::tau_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_neutron_mass_ratio<T>::precision()));
}

// tau-proton mass ratio
// (1.89372 ± 0.00017)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.89372));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.00017));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::tau_proton_mass_ratio<T>::precision()));
}

// Thomson cross section
// (6.652458734e-29 ± 1.3e-37) m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(Thomson_cross_section, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Thomson_cross_section<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Thomson_cross_section<T>::value() ==
      static_cast<T>(6.652458734e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Thomson_cross_section<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Thomson_cross_section<T>::uncertainty() ==
      static_cast<T>(1.3e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Thomson_cross_section<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Thomson_cross_section<T>::precision()));
}

// triton-electron mass ratio
// (5496.9215267 ± 5e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_electron_mass_ratio<T>::value() ==
      static_cast<T>(5496.9215267));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::triton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::triton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::triton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::triton_electron_mass_ratio<
                    T>::precision()));
}

// triton g factor
// (5.957924896 ± 7.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_g_factor<T>::value() ==
             static_cast<T>(5.957924896));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_g_factor<T>::uncertainty() ==
      static_cast<T>(7.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_g_factor<T>::precision()));
}

// triton mag. mom.
// (1.504609447e-26 ± 3.8e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mag_mom<T>::value() ==
             static_cast<T>(1.504609447e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mag_mom<T>::uncertainty() ==
             static_cast<T>(3.8e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mag_mom<T>::precision()));
}

// triton mag. mom. to Bohr magneton ratio
// (0.001622393657 ± 2.1e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.001622393657));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.1e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// triton mag. mom. to nuclear magneton ratio
// (2.978962448 ± 3.8e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.978962448));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(3.8e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// triton mass
// (5.0073563e-27 ± 2.2e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::triton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mass<T>::value() ==
             static_cast<T>(5.0073563e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mass<T>::uncertainty() ==
             static_cast<T>(2.2e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mass<T>::precision()));
}

// triton mass energy equivalent
// (4.50038741e-10 ± 2e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.50038741e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mass_energy_equivalent<
          T>::precision()));
}

// triton mass energy equivalent in MeV
// (2808.921005 ± 6.2e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.921005));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(6.2e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// triton mass in u
// (3.0155007134 ± 2.5e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_mass_in_u<T>::value() ==
             static_cast<T>(3.0155007134));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_mass_in_u<T>::precision()));
}

// triton molar mass
// (0.0030155007134 ± 2.5e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::triton_molar_mass<T>::value() ==
             static_cast<T>(0.0030155007134));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::triton_molar_mass<T>::precision()));
}

// triton-proton mass ratio
// (2.9937170308 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::triton_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::triton_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.9937170308));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::triton_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::triton_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::triton_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::triton_proton_mass_ratio<
                    T>::precision()));
}

// unified atomic mass unit
// (1.660538921e-27 ± 7.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(unified_atomic_mass_unit, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::unified_atomic_mass_unit<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::unified_atomic_mass_unit<T>::value() ==
      static_cast<T>(1.660538921e-27));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::unified_atomic_mass_unit<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2010::unified_atomic_mass_unit<
                 T>::uncertainty() == static_cast<T>(7.3e-35));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2010::unified_atomic_mass_unit<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2010::unified_atomic_mass_unit<
                    T>::precision()));
}

// von Klitzing constant
// (25812.8074434 ± 8.4e-06) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(von_Klitzing_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::value() ==
      static_cast<T>(25812.8074434));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(8.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::von_Klitzing_constant<T>::precision()));
}

// weak mixing angle
// (0.2223 ± 0.0021)
BOOST_AUTO_TEST_CASE_TEMPLATE(weak_mixing_angle, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::weak_mixing_angle<T>::value()));
  BOOST_TEST(triumf::constants::codata_2010::weak_mixing_angle<T>::value() ==
             static_cast<T>(0.2223));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::weak_mixing_angle<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::weak_mixing_angle<T>::uncertainty() ==
      static_cast<T>(0.0021));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::weak_mixing_angle<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::weak_mixing_angle<T>::precision()));
}

// Wien frequency displacement law constant
// (58789254000.0 ± 53000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_frequency_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::value() == static_cast<T>(58789254000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(53000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Wien_frequency_displacement_law_constant<
          T>::precision()));
}

// Wien wavelength displacement law constant
// (0.0028977721 ± 2.6e-09) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_wavelength_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::value() == static_cast<T>(0.0028977721));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(2.6e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2010::Wien_wavelength_displacement_law_constant<
          T>::precision()));
}
