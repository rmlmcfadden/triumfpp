#define BOOST_TEST_MODULE CODATA_2006
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/constants/codata_2006.hpp>

// lattice spacing of silicon
// (1.920155762e-10 ± 5e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_spacing_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::lattice_spacing_of_silicon<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::lattice_spacing_of_silicon<T>::value() ==
      static_cast<T>(1.920155762e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::lattice_spacing_of_silicon<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::lattice_spacing_of_silicon<
                 T>::uncertainty() == static_cast<T>(5e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::lattice_spacing_of_silicon<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::lattice_spacing_of_silicon<
                    T>::precision()));
}

// alpha particle-electron mass ratio
// (7294.2995365 ± 3.1e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_electron_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
                 T>::value() == static_cast<T>(7294.2995365));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::alpha_particle_electron_mass_ratio<
          T>::precision()));
}

// alpha particle mass
// (6.6446562e-27 ± 3.3e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_mass<T>::value() ==
             static_cast<T>(6.6446562e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::alpha_particle_mass<T>::uncertainty() ==
      static_cast<T>(3.3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::alpha_particle_mass<T>::precision()));
}

// alpha particle mass energy equivalent
// (5.97191917e-10 ± 3e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::value() == static_cast<T>(5.97191917e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::uncertainty() == static_cast<T>(3e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::alpha_particle_mass_energy_equivalent<
          T>::precision()));
}

// alpha particle mass energy equivalent in MeV
// (3727.379109 ± 9.3e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 alpha_particle_mass_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(3727.379109));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(9.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          alpha_particle_mass_energy_equivalent_in_MeV<T>::precision()));
}

// alpha particle mass in u
// (4.001506179127 ± 6.2e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_mass_in_u<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::alpha_particle_mass_in_u<T>::value() ==
      static_cast<T>(4.001506179127));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::alpha_particle_mass_in_u<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_mass_in_u<
                 T>::uncertainty() == static_cast<T>(6.2e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::alpha_particle_mass_in_u<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::alpha_particle_mass_in_u<
                    T>::precision()));
}

// alpha particle molar mass
// (0.004001506179127 ± 6.2e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_molar_mass<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::alpha_particle_molar_mass<T>::value() ==
      static_cast<T>(0.004001506179127));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::alpha_particle_molar_mass<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_molar_mass<
                 T>::uncertainty() == static_cast<T>(6.2e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::alpha_particle_molar_mass<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::alpha_particle_molar_mass<
                    T>::precision()));
}

// alpha particle-proton mass ratio
// (3.97259968951 ± 4.1e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(alpha_particle_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
                 T>::value() == static_cast<T>(3.97259968951));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::alpha_particle_proton_mass_ratio<
          T>::precision()));
}

// Angstrom star
// (1.00001498e-10 ± 9e-17) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Angstrom_star, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Angstrom_star<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Angstrom_star<T>::value() ==
             static_cast<T>(1.00001498e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Angstrom_star<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Angstrom_star<T>::uncertainty() ==
             static_cast<T>(9e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Angstrom_star<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Angstrom_star<T>::precision()));
}

// atomic mass constant
// (1.660538782e-27 ± 8.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_mass_constant<T>::value() ==
             static_cast<T>(1.660538782e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_constant<T>::uncertainty() ==
      static_cast<T>(8.3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_constant<T>::precision()));
}

// atomic mass constant energy equivalent
// (1.49241783e-10 ± 7.4e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::value() == static_cast<T>(1.49241783e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::uncertainty() == static_cast<T>(7.4e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_constant_energy_equivalent<
          T>::precision()));
}

// atomic mass constant energy equivalent in MeV
// (931.494028 ± 2.3e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_constant_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 atomic_mass_constant_energy_equivalent_in_MeV<T>::value() ==
             static_cast<T>(931.494028));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::uncertainty() ==
      static_cast<T>(2.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          atomic_mass_constant_energy_equivalent_in_MeV<T>::precision()));
}

// atomic mass unit-electron volt relationship
// (931494028.0 ± 23.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_electron_volt_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 atomic_mass_unit_electron_volt_relationship<T>::value() ==
             static_cast<T>(931494028.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          atomic_mass_unit_electron_volt_relationship<T>::uncertainty() ==
      static_cast<T>(23.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          atomic_mass_unit_electron_volt_relationship<T>::precision()));
}

// atomic mass unit-hartree relationship
// (34231777.149 ± 0.049) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::value() == static_cast<T>(34231777.149));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::uncertainty() == static_cast<T>(0.049));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_unit_hartree_relationship<
          T>::precision()));
}

// atomic mass unit-hertz relationship
// (2.2523427369e+23 ± 320000000000000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_hertz_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::value() == static_cast<T>(2.2523427369e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::uncertainty() == static_cast<T>(320000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_unit_hertz_relationship<
          T>::precision()));
}

// atomic mass unit-inverse meter relationship
// (751300667100000.0 ± 1100000.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_inverse_meter_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 atomic_mass_unit_inverse_meter_relationship<T>::value() ==
             static_cast<T>(751300667100000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          atomic_mass_unit_inverse_meter_relationship<T>::uncertainty() ==
      static_cast<T>(1100000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          atomic_mass_unit_inverse_meter_relationship<T>::precision()));
}

// atomic mass unit-joule relationship
// (1.49241783e-10 ± 7.4e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_joule_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::value() == static_cast<T>(1.49241783e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::uncertainty() == static_cast<T>(7.4e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_unit_joule_relationship<
          T>::precision()));
}

// atomic mass unit-kelvin relationship
// (10809527000000.0 ± 19000000.0) K
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::value() == static_cast<T>(10809527000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::uncertainty() == static_cast<T>(19000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_unit_kelvin_relationship<
          T>::precision()));
}

// atomic mass unit-kilogram relationship
// (1.660538782e-27 ± 8.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_mass_unit_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::value() == static_cast<T>(1.660538782e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(8.3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_mass_unit_kilogram_relationship<
          T>::precision()));
}

// atomic unit of 1st hyperpolarizability
// (3.206361533e-53 ± 8.1e-61) C^3 m^3 J^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_1st_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::value() == static_cast<T>(3.206361533e-53));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(8.1e-61));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_1st_hyperpolarizability<
          T>::precision()));
}

// atomic unit of 2nd hyperpolarizability
// (6.23538095e-65 ± 3.1e-72) C^4 m^4 J^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_2nd_hyperpolarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::value() == static_cast<T>(6.23538095e-65));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::uncertainty() == static_cast<T>(3.1e-72));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_2nd_hyperpolarizability<
          T>::precision()));
}

// atomic unit of action
// (1.054571628e-34 ± 5.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::value() ==
      static_cast<T>(1.054571628e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::uncertainty() ==
      static_cast<T>(5.3e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_action<T>::precision()));
}

// atomic unit of charge
// (1.602176487e-19 ± 4e-27) C
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::value() ==
      static_cast<T>(1.602176487e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::uncertainty() ==
      static_cast<T>(4e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_charge<T>::precision()));
}

// atomic unit of charge density
// (1081202300000.0 ± 27000.0) C m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_charge_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_charge_density<
                 T>::value() == static_cast<T>(1081202300000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_charge_density<
                 T>::uncertainty() == static_cast<T>(27000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_charge_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_charge_density<
          T>::precision()));
}

// atomic unit of current
// (0.00662361763 ± 1.7e-10) A
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_current<T>::value() ==
      static_cast<T>(0.00662361763));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::atomic_unit_of_current<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_current<
                 T>::uncertainty() == static_cast<T>(1.7e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_current<T>::precision()));
}

// atomic unit of electric dipole mom.
// (8.47835281e-30 ± 2.1e-37) C m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_dipole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
                 T>::value() == static_cast<T>(8.47835281e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
                 T>::uncertainty() == static_cast<T>(2.1e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_dipole_mom<
          T>::precision()));
}

// atomic unit of electric field
// (514220632000.0 ± 13000.0) V m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_field<
                 T>::value() == static_cast<T>(514220632000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_field<
                 T>::uncertainty() == static_cast<T>(13000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_field<
          T>::precision()));
}

// atomic unit of electric field gradient
// (9.71736166e+21 ± 240000000000000.0) V m^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_field_gradient, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::value() == static_cast<T>(9.71736166e+21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::uncertainty() == static_cast<T>(240000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_field_gradient<
          T>::precision()));
}

// atomic unit of electric polarizability
// (1.6487772536e-41 ± 3.4e-50) C^2 m^2 J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_polarizability, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::value() == static_cast<T>(1.6487772536e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::uncertainty() == static_cast<T>(3.4e-50));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_polarizability<
          T>::precision()));
}

// atomic unit of electric potential
// (27.21138386 ± 6.8e-07) V
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_potential, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_potential<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_potential<
                 T>::value() == static_cast<T>(27.21138386));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_potential<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_electric_potential<
                 T>::uncertainty() == static_cast<T>(6.8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_potential<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_potential<
          T>::precision()));
}

// atomic unit of electric quadrupole mom.
// (4.48655107e-40 ± 1.1e-47) C m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_quadrupole_mom, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::value() == static_cast<T>(4.48655107e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::uncertainty() == static_cast<T>(1.1e-47));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_electric_quadrupole_mom<
          T>::precision()));
}

// atomic unit of energy
// (4.35974394e-18 ± 2.2e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::value() ==
      static_cast<T>(4.35974394e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::uncertainty() ==
      static_cast<T>(2.2e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_energy<T>::precision()));
}

// atomic unit of force
// (8.23872206e-08 ± 4.1e-15) N
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_force, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_force<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_force<T>::value() ==
             static_cast<T>(8.23872206e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_force<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_force<T>::uncertainty() ==
      static_cast<T>(4.1e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_force<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_force<T>::precision()));
}

// atomic unit of length
// (5.2917720859e-11 ± 3.6e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::value() ==
      static_cast<T>(5.2917720859e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::uncertainty() ==
      static_cast<T>(3.6e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_length<T>::precision()));
}

// atomic unit of mag. dipole mom.
// (1.85480183e-23 ± 4.6e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_dipole_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
                 T>::value() == static_cast<T>(1.85480183e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
                 T>::uncertainty() == static_cast<T>(4.6e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_mag_dipole_mom<
          T>::precision()));
}

// atomic unit of mag. flux density
// (235051.7382 ± 0.0059) T
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mag_flux_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
                 T>::value() == static_cast<T>(235051.7382));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
                 T>::uncertainty() == static_cast<T>(0.0059));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_mag_flux_density<
          T>::precision()));
}

// atomic unit of magnetizability
// (7.891036433e-29 ± 2.7e-37) J T^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magnetizability, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_magnetizability<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_magnetizability<
                 T>::value() == static_cast<T>(7.891036433e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_magnetizability<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_magnetizability<
                 T>::uncertainty() == static_cast<T>(2.7e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_magnetizability<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_magnetizability<
          T>::precision()));
}

// atomic unit of mass
// (9.10938215e-31 ± 4.5e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938215e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(4.5e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_mass<T>::precision()));
}

// atomic unit of momentum
// (1.992851565e-24 ± 9.9e-32) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_momentum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_momentum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_momentum<T>::value() ==
      static_cast<T>(1.992851565e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::atomic_unit_of_momentum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_momentum<
                 T>::uncertainty() == static_cast<T>(9.9e-32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_momentum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_momentum<T>::precision()));
}

// atomic unit of permittivity
// (1.112650056e-10 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_permittivity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_permittivity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_permittivity<T>::value() ==
      static_cast<T>(1.112650056e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::atomic_unit_of_permittivity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_permittivity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::atomic_unit_of_permittivity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::atomic_unit_of_permittivity<
                    T>::precision()));
}

// atomic unit of time
// (2.418884326505e-17 ± 1.6e-12) 7 s
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_time<T>::value() ==
             static_cast<T>(2.418884326505e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_time<T>::uncertainty() ==
      static_cast<T>(1.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_time<T>::precision()));
}

// atomic unit of velocity
// (2187691.2541 ± 0.0015) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::atomic_unit_of_velocity<T>::value() ==
      static_cast<T>(2187691.2541));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::atomic_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::atomic_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0015));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::atomic_unit_of_velocity<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::atomic_unit_of_velocity<T>::precision()));
}

// Avogadro constant
// (6.02214179e+23 ± 3e+16) mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Avogadro_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Avogadro_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Avogadro_constant<T>::value() ==
             static_cast<T>(6.02214179e+23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Avogadro_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Avogadro_constant<T>::uncertainty() ==
      static_cast<T>(3e+16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Avogadro_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Avogadro_constant<T>::precision()));
}

// Bohr magneton
// (9.27400915e-24 ± 2.3e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Bohr_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Bohr_magneton<T>::value() ==
             static_cast<T>(9.27400915e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Bohr_magneton<T>::uncertainty() ==
             static_cast<T>(2.3e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_magneton<T>::precision()));
}

// Bohr magneton in eV/T
// (5.7883817555e-05 ± 7.9e-14) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::value() ==
      static_cast<T>(5.7883817555e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::uncertainty() ==
      static_cast<T>(7.9e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_magneton_in_eV_T<T>::precision()));
}

// Bohr magneton in Hz/T
// (13996246040.0 ± 350.0) Hz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_Hz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::value() ==
      static_cast<T>(13996246040.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::uncertainty() ==
      static_cast<T>(350.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_magneton_in_Hz_T<T>::precision()));
}

// Bohr magneton in inverse meters per tesla
// (46.6864515 ± 1.2e-06) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::value() == static_cast<T>(46.6864515));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::uncertainty() == static_cast<T>(1.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_magneton_in_inverse_meters_per_tesla<
          T>::precision()));
}

// Bohr magneton in K/T
// (0.6717131 ± 1.2e-06) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::value() ==
             static_cast<T>(0.6717131));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::uncertainty() ==
      static_cast<T>(1.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_magneton_in_K_T<T>::precision()));
}

// Bohr radius
// (5.2917720859e-11 ± 3.6e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Bohr_radius, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Bohr_radius<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Bohr_radius<T>::value() ==
             static_cast<T>(5.2917720859e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_radius<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Bohr_radius<T>::uncertainty() ==
             static_cast<T>(3.6e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Bohr_radius<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Bohr_radius<T>::precision()));
}

// Boltzmann constant
// (1.3806504e-23 ± 2.4e-29) J K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Boltzmann_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Boltzmann_constant<T>::value() ==
             static_cast<T>(1.3806504e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Boltzmann_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Boltzmann_constant<T>::uncertainty() ==
      static_cast<T>(2.4e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Boltzmann_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Boltzmann_constant<T>::precision()));
}

// Boltzmann constant in eV/K
// (8.617343e-05 ± 1.5e-10) eV K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_eV_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<T>::value() ==
      static_cast<T>(8.617343e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Boltzmann_constant_in_eV_K<
                    T>::precision()));
}

// Boltzmann constant in Hz/K
// (20836644000.0 ± 36000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_Hz_K, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<T>::value() ==
      static_cast<T>(20836644000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<
                 T>::uncertainty() == static_cast<T>(36000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Boltzmann_constant_in_Hz_K<
                    T>::precision()));
}

// Boltzmann constant in inverse meters per kelvin
// (69.50356 ± 0.00012) m^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Boltzmann_constant_in_inverse_meters_per_kelvin,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 Boltzmann_constant_in_inverse_meters_per_kelvin<T>::value() ==
             static_cast<T>(69.50356));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::uncertainty() ==
      static_cast<T>(0.00012));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          Boltzmann_constant_in_inverse_meters_per_kelvin<T>::precision()));
}

// characteristic impedance of vacuum
// (376.730313461 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(characteristic_impedance_of_vacuum, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
                 T>::value() == static_cast<T>(376.730313461));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::characteristic_impedance_of_vacuum<
          T>::precision()));
}

// classical electron radius
// (2.8179402894e-15 ± 5.8e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(classical_electron_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::classical_electron_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::classical_electron_radius<T>::value() ==
      static_cast<T>(2.8179402894e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::classical_electron_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::classical_electron_radius<
                 T>::uncertainty() == static_cast<T>(5.8e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::classical_electron_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::classical_electron_radius<
                    T>::precision()));
}

// Compton wavelength
// (2.4263102175e-12 ± 3.3e-21) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Compton_wavelength<T>::value() ==
             static_cast<T>(2.4263102175e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Compton_wavelength<T>::uncertainty() ==
      static_cast<T>(3.3e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Compton_wavelength<T>::precision()));
}

// Compton wavelength over 2 pi
// (3.8615926459e-13 ± 5.3e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(3.8615926459e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(5.3e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Compton_wavelength_over_2_pi<
          T>::precision()));
}

// conductance quantum
// (7.7480917004e-05 ± 5.3e-14) S
BOOST_AUTO_TEST_CASE_TEMPLATE(conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conductance_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::conductance_quantum<T>::value() ==
             static_cast<T>(7.7480917004e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conductance_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::conductance_quantum<T>::uncertainty() ==
      static_cast<T>(5.3e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conductance_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::conductance_quantum<T>::precision()));
}

// conventional value of Josephson constant
// (483597900000000.0 ± 0.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_Josephson_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::value() == static_cast<T>(483597900000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::conventional_value_of_Josephson_constant<
          T>::precision()));
}

// conventional value of von Klitzing constant
// (25812.807 ± 0.0) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(conventional_value_of_von_Klitzing_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          conventional_value_of_von_Klitzing_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 conventional_value_of_von_Klitzing_constant<T>::value() ==
             static_cast<T>(25812.807));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          conventional_value_of_von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          conventional_value_of_von_Klitzing_constant<T>::precision()));
}

// Cu x unit
// (1.00207699e-13 ± 2.8e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Cu_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Cu_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Cu_x_unit<T>::value() ==
             static_cast<T>(1.00207699e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Cu_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Cu_x_unit<T>::uncertainty() ==
             static_cast<T>(2.8e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Cu_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Cu_x_unit<T>::precision()));
}

// deuteron-electron mag. mom. ratio
// (-0.0004664345537 ± 3.9e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.0004664345537));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_electron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-electron mass ratio
// (3670.4829654 ± 1.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_electron_mass_ratio<
                 T>::value() == static_cast<T>(3670.4829654));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_electron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_electron_mass_ratio<
          T>::precision()));
}

// deuteron g factor
// (0.8574382308 ± 7.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_g_factor<T>::value() ==
             static_cast<T>(0.8574382308));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_g_factor<T>::uncertainty() ==
      static_cast<T>(7.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_g_factor<T>::precision()));
}

// deuteron mag. mom.
// (4.33073465e-27 ± 1.1e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mag_mom<T>::value() ==
             static_cast<T>(4.33073465e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mag_mom<T>::uncertainty() ==
      static_cast<T>(1.1e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mag_mom<T>::precision()));
}

// deuteron mag. mom. to Bohr magneton ratio
// (0.0004669754556 ± 3.9e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.0004669754556));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(3.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// deuteron mag. mom. to nuclear magneton ratio
// (0.8574382308 ± 7.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(0.8574382308));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::
                 deuteron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(7.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          deuteron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// deuteron mass
// (3.3435832e-27 ± 1.7e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::deuteron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mass<T>::value() ==
             static_cast<T>(3.3435832e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mass<T>::uncertainty() ==
             static_cast<T>(1.7e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mass<T>::precision()));
}

// deuteron mass energy equivalent
// (3.00506272e-10 ± 1.5e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(3.00506272e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(1.5e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent<
          T>::precision()));
}

// deuteron mass energy equivalent in MeV
// (1875.612793 ± 4.7e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(1875.612793));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(4.7e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// deuteron mass in u
// (2.013553212724 ± 7.8e-11) u
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_mass_in_u<T>::value() ==
             static_cast<T>(2.013553212724));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(7.8e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_mass_in_u<T>::precision()));
}

// deuteron molar mass
// (0.002013553212724 ± 7.8e-14) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_molar_mass<T>::value() ==
             static_cast<T>(0.002013553212724));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_molar_mass<T>::uncertainty() ==
      static_cast<T>(7.8e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_molar_mass<T>::precision()));
}

// deuteron-neutron mag. mom. ratio
// (-0.44820652 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.44820652));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_neutron_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mag. mom. ratio
// (0.307012207 ± 2.4e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.307012207));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::deuteron_proton_mag_mom_ratio<
          T>::precision()));
}

// deuteron-proton mass ratio
// (1.99900750108 ± 2.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.99900750108));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::deuteron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.2e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::deuteron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::deuteron_proton_mass_ratio<
                    T>::precision()));
}

// deuteron rms charge radius
// (2.1402e-15 ± 2.8e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::deuteron_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::deuteron_rms_charge_radius<T>::value() ==
      static_cast<T>(2.1402e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::deuteron_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::deuteron_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(2.8e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::deuteron_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::deuteron_rms_charge_radius<
                    T>::precision()));
}

// electric constant
// (8.854187817e-12 ± 0.0) F m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electric_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electric_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electric_constant<T>::value() ==
             static_cast<T>(8.854187817e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electric_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electric_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electric_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electric_constant<T>::precision()));
}

// electron charge to mass quotient
// (-175882015000.0 ± 4400.0) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(-175882015000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(4400.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_charge_to_mass_quotient<
          T>::precision()));
}

// electron-deuteron mag. mom. ratio
// (-2143.923498 ± 1.8e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-2143.923498));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_deuteron_mag_mom_ratio<
          T>::precision()));
}

// electron-deuteron mass ratio
// (0.00027244371093 ± 1.2e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mass_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_deuteron_mass_ratio<
                 T>::value() == static_cast<T>(0.00027244371093));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_deuteron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.2e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_deuteron_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_deuteron_mass_ratio<
          T>::precision()));
}

// electron g factor
// (-2.0023193043622 ± 1.5e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_g_factor<T>::value() ==
             static_cast<T>(-2.0023193043622));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_g_factor<T>::uncertainty() ==
      static_cast<T>(1.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_g_factor<T>::precision()));
}

// electron gyromag. ratio
// (176085977000.0 ± 4400.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_gyromag_ratio<T>::value() ==
      static_cast<T>(176085977000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_gyromag_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(4400.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_gyromag_ratio<T>::precision()));
}

// electron gyromag. ratio over 2 pi
// (28024.95364 ± 0.0007) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(28024.95364));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(0.0007));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// electron mag. mom.
// (-9.28476377e-24 ± 2.3e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mag_mom<T>::value() ==
             static_cast<T>(-9.28476377e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.3e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mag_mom<T>::precision()));
}

// electron mag. mom. anomaly
// (0.00115965218111 ± 7.4e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom_anomaly<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mag_mom_anomaly<T>::value() ==
      static_cast<T>(0.00115965218111));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_mag_mom_anomaly<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mag_mom_anomaly<
                 T>::uncertainty() == static_cast<T>(7.4e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_mag_mom_anomaly<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::electron_mag_mom_anomaly<
                    T>::precision()));
}

// electron mag. mom. to Bohr magneton ratio
// (-1.00115965218111 ± 7.4e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-1.00115965218111));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(7.4e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// electron mag. mom. to nuclear magneton ratio
// (-1838.28197092 ± 8e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1838.28197092));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::
                 electron_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          electron_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// electron mass
// (9.10938215e-31 ± 4.5e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mass<T>::value() ==
             static_cast<T>(9.10938215e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mass<T>::uncertainty() ==
             static_cast<T>(4.5e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mass<T>::precision()));
}

// electron mass energy equivalent
// (8.18710438e-14 ± 4.1e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(8.18710438e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(4.1e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mass_energy_equivalent<
          T>::precision()));
}

// electron mass energy equivalent in MeV
// (0.51099891 ± 1.3e-08) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(0.51099891));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// electron mass in u
// (0.00054857990943 ± 2.3e-13) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_mass_in_u<T>::value() ==
             static_cast<T>(0.00054857990943));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_mass_in_u<T>::precision()));
}

// electron molar mass
// (5.4857990943e-07 ± 2.3e-16) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_molar_mass<T>::value() ==
             static_cast<T>(5.4857990943e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.3e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_molar_mass<T>::precision()));
}

// electron-muon mag. mom. ratio
// (206.7669877 ± 5.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_muon_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_muon_mag_mom_ratio<T>::value() ==
      static_cast<T>(206.7669877));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_muon_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_muon_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_muon_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::electron_muon_mag_mom_ratio<
                    T>::precision()));
}

// electron-muon mass ratio
// (0.00483633171 ± 1.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_muon_mass_ratio<T>::value() ==
      static_cast<T>(0.00483633171));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.2e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_muon_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::electron_muon_mass_ratio<
                    T>::precision()));
}

// electron-neutron mag. mom. ratio
// (960.9205 ± 0.00023)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(960.9205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(0.00023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_neutron_mag_mom_ratio<
          T>::precision()));
}

// electron-neutron mass ratio
// (0.00054386734459 ± 3.3e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.00054386734459));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(3.3e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::electron_neutron_mass_ratio<
                    T>::precision()));
}

// electron-proton mag. mom. ratio
// (-658.2106848 ± 5.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-658.2106848));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(5.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_proton_mag_mom_ratio<
          T>::precision()));
}

// electron-proton mass ratio
// (0.00054461702177 ± 2.4e-13)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.00054461702177));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.4e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::electron_proton_mass_ratio<
                    T>::precision()));
}

// electron-tau mass ratio
// (0.000287564 ± 4.7e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.000287564));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.7e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_tau_mass_ratio<T>::precision()));
}

// electron to alpha particle mass ratio
// (0.00013709335557 ± 5.8e-14)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_alpha_particle_mass_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::value() == static_cast<T>(0.00013709335557));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::uncertainty() == static_cast<T>(5.8e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_to_alpha_particle_mass_ratio<
          T>::precision()));
}

// electron to shielded helion mag. mom. ratio
// (864.058257 ± 1e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_helion_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::value() == static_cast<T>(864.058257));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_to_shielded_helion_mag_mom_ratio<
          T>::precision()));
}

// electron to shielded proton mag. mom. ratio
// (-658.2275971 ± 7.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-658.2275971));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(7.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// electron volt
// (1.602176487e-19 ± 4e-27) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::electron_volt<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt<T>::value() ==
             static_cast<T>(1.602176487e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt<T>::uncertainty() ==
             static_cast<T>(4e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt<T>::precision()));
}

// electron volt-atomic mass unit relationship
// (1.073544188e-09 ± 2.7e-17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_volt_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 electron_volt_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.073544188e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          electron_volt_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(2.7e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          electron_volt_atomic_mass_unit_relationship<T>::precision()));
}

// electron volt-hartree relationship
// (0.0367493254 ± 9.2e-10) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_hartree_relationship<
                 T>::value() == static_cast<T>(0.0367493254));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(9.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_hartree_relationship<
          T>::precision()));
}

// electron volt-hertz relationship
// (241798945400000.0 ± 6000000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_hertz_relationship<
                 T>::value() == static_cast<T>(241798945400000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(6000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_hertz_relationship<
          T>::precision()));
}

// electron volt-inverse meter relationship
// (806554.465 ± 0.02) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::value() == static_cast<T>(806554.465));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(0.02));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_inverse_meter_relationship<
          T>::precision()));
}

// electron volt-joule relationship
// (1.602176487e-19 ± 4e-27) J
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_joule_relationship<
                 T>::value() == static_cast<T>(1.602176487e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_joule_relationship<
                 T>::uncertainty() == static_cast<T>(4e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_joule_relationship<
          T>::precision()));
}

// electron volt-kelvin relationship
// (11604.505 ± 0.02) K
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_kelvin_relationship<
                 T>::value() == static_cast<T>(11604.505));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::electron_volt_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.02));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_kelvin_relationship<
          T>::precision()));
}

// electron volt-kilogram relationship
// (1.782661758e-36 ± 4.4e-44) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_volt_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::value() == static_cast<T>(1.782661758e-36));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(4.4e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::electron_volt_kilogram_relationship<
          T>::precision()));
}

// elementary charge
// (1.602176487e-19 ± 4e-27) C
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::elementary_charge<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::elementary_charge<T>::value() ==
             static_cast<T>(1.602176487e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::elementary_charge<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::elementary_charge<T>::uncertainty() ==
      static_cast<T>(4e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::elementary_charge<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::elementary_charge<T>::precision()));
}

// elementary charge over h
// (241798945400000.0 ± 6000000.0) A J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(elementary_charge_over_h, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::elementary_charge_over_h<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::elementary_charge_over_h<T>::value() ==
      static_cast<T>(241798945400000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::elementary_charge_over_h<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::elementary_charge_over_h<
                 T>::uncertainty() == static_cast<T>(6000000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::elementary_charge_over_h<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::elementary_charge_over_h<
                    T>::precision()));
}

// Faraday constant
// (96485.3399 ± 0.0024) C mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Faraday_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Faraday_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Faraday_constant<T>::value() ==
             static_cast<T>(96485.3399));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Faraday_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Faraday_constant<T>::uncertainty() ==
      static_cast<T>(0.0024));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Faraday_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Faraday_constant<T>::precision()));
}

// Faraday constant for conventional electric current
// (96485.3401 ± 0.0048) C_90 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(
    Faraday_constant_for_conventional_electric_current, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Faraday_constant_for_conventional_electric_current<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          Faraday_constant_for_conventional_electric_current<T>::value() ==
      static_cast<T>(96485.3401));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::
                        Faraday_constant_for_conventional_electric_current<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::
                 Faraday_constant_for_conventional_electric_current<
                     T>::uncertainty() == static_cast<T>(0.0048));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          Faraday_constant_for_conventional_electric_current<T>::precision()));
}

// Fermi coupling constant
// (1.16637e-05 ± 1e-10) GeV^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Fermi_coupling_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Fermi_coupling_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Fermi_coupling_constant<T>::value() ==
      static_cast<T>(1.16637e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Fermi_coupling_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Fermi_coupling_constant<
                 T>::uncertainty() == static_cast<T>(1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Fermi_coupling_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Fermi_coupling_constant<T>::precision()));
}

// fine-structure constant
// (0.0072973525376 ± 5e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::fine_structure_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::fine_structure_constant<T>::value() ==
      static_cast<T>(0.0072973525376));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::fine_structure_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::fine_structure_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::fine_structure_constant<T>::precision()));
}

// first radiation constant
// (3.74177118e-16 ± 1.9e-23) W m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::first_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::first_radiation_constant<T>::value() ==
      static_cast<T>(3.74177118e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::first_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::first_radiation_constant<
                 T>::uncertainty() == static_cast<T>(1.9e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::first_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::first_radiation_constant<
                    T>::precision()));
}

// first radiation constant for spectral radiance
// (1.191042759e-16 ± 5.9e-24) W m^2 sr^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(first_radiation_constant_for_spectral_radiance, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          first_radiation_constant_for_spectral_radiance<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 first_radiation_constant_for_spectral_radiance<T>::value() ==
             static_cast<T>(1.191042759e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          first_radiation_constant_for_spectral_radiance<T>::uncertainty() ==
      static_cast<T>(5.9e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          first_radiation_constant_for_spectral_radiance<T>::precision()));
}

// hartree-atomic mass unit relationship
// (2.9212622986e-08 ± 4.2e-17) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(2.9212622986e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(4.2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hartree_atomic_mass_unit_relationship<
          T>::precision()));
}

// hartree-electron volt relationship
// (27.21138386 ± 6.8e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_electron_volt_relationship<
                 T>::value() == static_cast<T>(27.21138386));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(6.8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hartree_electron_volt_relationship<
          T>::precision()));
}

// Hartree energy
// (4.35974394e-18 ± 2.2e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Hartree_energy<T>::value() ==
             static_cast<T>(4.35974394e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Hartree_energy<T>::uncertainty() ==
             static_cast<T>(2.2e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Hartree_energy<T>::precision()));
}

// Hartree energy in eV
// (27.21138386 ± 6.8e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Hartree_energy_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy_in_eV<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Hartree_energy_in_eV<T>::value() ==
             static_cast<T>(27.21138386));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy_in_eV<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Hartree_energy_in_eV<T>::uncertainty() ==
      static_cast<T>(6.8e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Hartree_energy_in_eV<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Hartree_energy_in_eV<T>::precision()));
}

// hartree-hertz relationship
// (6579683920722000.0 ± 44000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hartree_hertz_relationship<T>::value() ==
      static_cast<T>(6579683920722000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(44000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hartree_hertz_relationship<
                    T>::precision()));
}

// hartree-inverse meter relationship
// (21947463.13705 ± 0.00015) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_inverse_meter_relationship<
                 T>::value() == static_cast<T>(21947463.13705));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.00015));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hartree_inverse_meter_relationship<
          T>::precision()));
}

// hartree-joule relationship
// (4.35974394e-18 ± 2.2e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hartree_joule_relationship<T>::value() ==
      static_cast<T>(4.35974394e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_joule_relationship<
                 T>::uncertainty() == static_cast<T>(2.2e-25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hartree_joule_relationship<
                    T>::precision()));
}

// hartree-kelvin relationship
// (315774.65 ± 0.55) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hartree_kelvin_relationship<T>::value() ==
      static_cast<T>(315774.65));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(0.55));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hartree_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hartree_kelvin_relationship<
                    T>::precision()));
}

// hartree-kilogram relationship
// (4.85086934e-35 ± 2.4e-42) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hartree_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_kilogram_relationship<
                 T>::value() == static_cast<T>(4.85086934e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hartree_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(2.4e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hartree_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hartree_kilogram_relationship<
          T>::precision()));
}

// helion-electron mass ratio
// (5495.8852765 ± 5.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_electron_mass_ratio<T>::value() ==
      static_cast<T>(5495.8852765));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::helion_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::helion_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::helion_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::helion_electron_mass_ratio<
                    T>::precision()));
}

// helion mass
// (5.00641192e-27 ± 2.5e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::helion_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::helion_mass<T>::value() ==
             static_cast<T>(5.00641192e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::helion_mass<T>::uncertainty() ==
             static_cast<T>(2.5e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::helion_mass<T>::precision()));
}

// helion mass energy equivalent
// (4.49953864e-10 ± 2.2e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::helion_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.49953864e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::helion_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2.2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::helion_mass_energy_equivalent<
          T>::precision()));
}

// helion mass energy equivalent in MeV
// (2808.391383 ± 7e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.391383));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(7e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::helion_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// helion mass in u
// (3.0149322473 ± 2.6e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::helion_mass_in_u<T>::value() ==
             static_cast<T>(3.0149322473));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.6e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::helion_mass_in_u<T>::precision()));
}

// helion molar mass
// (0.0030149322473 ± 2.6e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::helion_molar_mass<T>::value() ==
             static_cast<T>(0.0030149322473));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.6e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::helion_molar_mass<T>::precision()));
}

// helion-proton mass ratio
// (2.9931526713 ± 2.6e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(helion_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::helion_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::helion_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.9931526713));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::helion_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::helion_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.6e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::helion_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::helion_proton_mass_ratio<
                    T>::precision()));
}

// hertz-atomic mass unit relationship
// (4.4398216294e-24 ± 6.4e-33) u
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(4.4398216294e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(6.4e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hertz_atomic_mass_unit_relationship<
          T>::precision()));
}

// hertz-electron volt relationship
// (4.13566733e-15 ± 1e-22) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_electron_volt_relationship<
                 T>::value() == static_cast<T>(4.13566733e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(1e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hertz_electron_volt_relationship<
          T>::precision()));
}

// hertz-hartree relationship
// (1.519829846006e-16 ± 1e-27) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_hartree_relationship<T>::value() ==
      static_cast<T>(1.519829846006e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(1e-27));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hertz_hartree_relationship<
                    T>::precision()));
}

// hertz-inverse meter relationship
// (3.335640951e-09 ± 0.0) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_inverse_meter_relationship<
                 T>::value() == static_cast<T>(3.335640951e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::hertz_inverse_meter_relationship<
          T>::precision()));
}

// hertz-joule relationship
// (6.62606896e-34 ± 3.3e-41) J
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_joule_relationship<T>::value() ==
      static_cast<T>(6.62606896e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_joule_relationship<
                 T>::uncertainty() == static_cast<T>(3.3e-41));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hertz_joule_relationship<
                    T>::precision()));
}

// hertz-kelvin relationship
// (4.7992374e-11 ± 8.4e-17) K
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_kelvin_relationship<T>::value() ==
      static_cast<T>(4.7992374e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(8.4e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hertz_kelvin_relationship<
                    T>::precision()));
}

// hertz-kilogram relationship
// (7.372496e-51 ± 3.7e-58) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(hertz_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::hertz_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::hertz_kilogram_relationship<T>::value() ==
      static_cast<T>(7.372496e-51));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::hertz_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(3.7e-58));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::hertz_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::hertz_kilogram_relationship<
                    T>::precision()));
}

// inverse fine-structure constant
// (137.035999679 ± 9.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_fine_structure_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_fine_structure_constant<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_fine_structure_constant<
                 T>::value() == static_cast<T>(137.035999679));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_fine_structure_constant<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_fine_structure_constant<
                 T>::uncertainty() == static_cast<T>(9.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_fine_structure_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_fine_structure_constant<
          T>::precision()));
}

// inverse meter-atomic mass unit relationship
// (1.3310250394e-15 ± 1.9e-24) u
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          inverse_meter_atomic_mass_unit_relationship<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 inverse_meter_atomic_mass_unit_relationship<T>::value() ==
             static_cast<T>(1.3310250394e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          inverse_meter_atomic_mass_unit_relationship<T>::uncertainty() ==
      static_cast<T>(1.9e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          inverse_meter_atomic_mass_unit_relationship<T>::precision()));
}

// inverse meter-electron volt relationship
// (1.239841875e-06 ± 3.1e-14) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::value() == static_cast<T>(1.239841875e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(3.1e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_electron_volt_relationship<
          T>::precision()));
}

// inverse meter-hartree relationship
// (4.55633525276e-08 ± 3e-19) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hartree_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_hartree_relationship<
                 T>::value() == static_cast<T>(4.55633525276e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(3e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_hartree_relationship<
          T>::precision()));
}

// inverse meter-hertz relationship
// (299792458.0 ± 0.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hertz_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_hertz_relationship<
                 T>::value() == static_cast<T>(299792458.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hertz_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_hertz_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_hertz_relationship<
          T>::precision()));
}

// inverse meter-joule relationship
// (1.986445501e-25 ± 9.9e-33) J
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_joule_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_joule_relationship<
                 T>::value() == static_cast<T>(1.986445501e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_joule_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_joule_relationship<
                 T>::uncertainty() == static_cast<T>(9.9e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_joule_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_joule_relationship<
          T>::precision()));
}

// inverse meter-kelvin relationship
// (0.014387752 ± 2.5e-08) K
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kelvin_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
                 T>::value() == static_cast<T>(0.014387752));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_kelvin_relationship<
          T>::precision()));
}

// inverse meter-kilogram relationship
// (2.2102187e-42 ± 1.1e-49) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_meter_kilogram_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::value() == static_cast<T>(2.2102187e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::uncertainty() == static_cast<T>(1.1e-49));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_meter_kilogram_relationship<
          T>::precision()));
}

// inverse of conductance quantum
// (12906.4037787 ± 8.8e-06) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(inverse_of_conductance_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_of_conductance_quantum<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_of_conductance_quantum<
                 T>::value() == static_cast<T>(12906.4037787));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_of_conductance_quantum<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::inverse_of_conductance_quantum<
                 T>::uncertainty() == static_cast<T>(8.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::inverse_of_conductance_quantum<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::inverse_of_conductance_quantum<
          T>::precision()));
}

// Josephson constant
// (483597891000000.0 ± 12000000.0) Hz V^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Josephson_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Josephson_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Josephson_constant<T>::value() ==
             static_cast<T>(483597891000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Josephson_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Josephson_constant<T>::uncertainty() ==
      static_cast<T>(12000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Josephson_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Josephson_constant<T>::precision()));
}

// joule-atomic mass unit relationship
// (6700536410.0 ± 330.0) u
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6700536410.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(330.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::joule_atomic_mass_unit_relationship<
          T>::precision()));
}

// joule-electron volt relationship
// (6.24150965e+18 ± 160000000000.0) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_electron_volt_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::joule_electron_volt_relationship<
                 T>::value() == static_cast<T>(6.24150965e+18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(160000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::joule_electron_volt_relationship<
          T>::precision()));
}

// joule-hartree relationship
// (2.29371269e+17 ± 11000000000.0) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_hartree_relationship<T>::value() ==
      static_cast<T>(2.29371269e+17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(11000000000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::joule_hartree_relationship<
                    T>::precision()));
}

// joule-hertz relationship
// (1.50919045e+33 ± 7.5e+25) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_hertz_relationship<T>::value() ==
      static_cast<T>(1.50919045e+33));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(7.5e+25));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::joule_hertz_relationship<
                    T>::precision()));
}

// joule-inverse meter relationship
// (5.03411747e+24 ± 2.5e+17) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_inverse_meter_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::joule_inverse_meter_relationship<
                 T>::value() == static_cast<T>(5.03411747e+24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(2.5e+17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::joule_inverse_meter_relationship<
          T>::precision()));
}

// joule-kelvin relationship
// (7.242963e+22 ± 1.3e+17) K
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_kelvin_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_kelvin_relationship<T>::value() ==
      static_cast<T>(7.242963e+22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_kelvin_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(1.3e+17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_kelvin_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::joule_kelvin_relationship<
                    T>::precision()));
}

// joule-kilogram relationship
// (1.112650056e-17 ± 0.0) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(joule_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::joule_kilogram_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::joule_kilogram_relationship<T>::value() ==
      static_cast<T>(1.112650056e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_kilogram_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::joule_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::joule_kilogram_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::joule_kilogram_relationship<
                    T>::precision()));
}

// kelvin-atomic mass unit relationship
// (9.251098e-14 ± 1.6e-19) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(9.251098e-14));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(1.6e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kelvin_atomic_mass_unit_relationship<
          T>::precision()));
}

// kelvin-electron volt relationship
// (8.617343e-05 ± 1.5e-10) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_electron_volt_relationship<
                 T>::value() == static_cast<T>(8.617343e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_electron_volt_relationship<
                 T>::uncertainty() == static_cast<T>(1.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kelvin_electron_volt_relationship<
          T>::precision()));
}

// kelvin-hartree relationship
// (3.1668153e-06 ± 5.5e-12) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_hartree_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kelvin_hartree_relationship<T>::value() ==
      static_cast<T>(3.1668153e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_hartree_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(5.5e-12));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_hartree_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::kelvin_hartree_relationship<
                    T>::precision()));
}

// kelvin-hertz relationship
// (20836644000.0 ± 36000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kelvin_hertz_relationship<T>::value() ==
      static_cast<T>(20836644000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(36000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::kelvin_hertz_relationship<
                    T>::precision()));
}

// kelvin-inverse meter relationship
// (69.50356 ± 0.00012) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
                 T>::value() == static_cast<T>(69.50356));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
                 T>::uncertainty() == static_cast<T>(0.00012));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kelvin_inverse_meter_relationship<
          T>::precision()));
}

// kelvin-joule relationship
// (1.3806504e-23 ± 2.4e-29) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kelvin_joule_relationship<T>::value() ==
      static_cast<T>(1.3806504e-23));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_joule_relationship<
                 T>::uncertainty() == static_cast<T>(2.4e-29));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kelvin_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::kelvin_joule_relationship<
                    T>::precision()));
}

// kelvin-kilogram relationship
// (1.5361807e-40 ± 2.7e-46) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(kelvin_kilogram_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_kilogram_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_kilogram_relationship<
                 T>::value() == static_cast<T>(1.5361807e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_kilogram_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kelvin_kilogram_relationship<
                 T>::uncertainty() == static_cast<T>(2.7e-46));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kelvin_kilogram_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kelvin_kilogram_relationship<
          T>::precision()));
}

// kilogram-atomic mass unit relationship
// (6.02214179e+26 ± 3e+19) u
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_atomic_mass_unit_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::value() == static_cast<T>(6.02214179e+26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::uncertainty() == static_cast<T>(3e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kilogram_atomic_mass_unit_relationship<
          T>::precision()));
}

// kilogram-electron volt relationship
// (5.60958912e+35 ± 1.4e+28) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_electron_volt_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::value() == static_cast<T>(5.60958912e+35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::uncertainty() == static_cast<T>(1.4e+28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kilogram_electron_volt_relationship<
          T>::precision()));
}

// kilogram-hartree relationship
// (2.06148616e+34 ± 1e+27) E_h
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hartree_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_hartree_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_hartree_relationship<
                 T>::value() == static_cast<T>(2.06148616e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_hartree_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_hartree_relationship<
                 T>::uncertainty() == static_cast<T>(1e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_hartree_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kilogram_hartree_relationship<
          T>::precision()));
}

// kilogram-hertz relationship
// (1.356392733e+50 ± 6.8e+42) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_hertz_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_hertz_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_hertz_relationship<T>::value() ==
      static_cast<T>(1.356392733e+50));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kilogram_hertz_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_hertz_relationship<
                 T>::uncertainty() == static_cast<T>(6.8e+42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kilogram_hertz_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::kilogram_hertz_relationship<
                    T>::precision()));
}

// kilogram-inverse meter relationship
// (4.52443915e+41 ± 2.3e+34) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_inverse_meter_relationship, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::value() == static_cast<T>(4.52443915e+41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::uncertainty() == static_cast<T>(2.3e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kilogram_inverse_meter_relationship<
          T>::precision()));
}

// kilogram-joule relationship
// (8.987551787e+16 ± 0.0) J
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_joule_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_joule_relationship<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::kilogram_joule_relationship<T>::value() ==
      static_cast<T>(8.987551787e+16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kilogram_joule_relationship<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_joule_relationship<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::kilogram_joule_relationship<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::kilogram_joule_relationship<
                    T>::precision()));
}

// kilogram-kelvin relationship
// (6.509651e+39 ± 1.1e+34) K
BOOST_AUTO_TEST_CASE_TEMPLATE(kilogram_kelvin_relationship, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_kelvin_relationship<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_kelvin_relationship<
                 T>::value() == static_cast<T>(6.509651e+39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_kelvin_relationship<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::kilogram_kelvin_relationship<
                 T>::uncertainty() == static_cast<T>(1.1e+34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::kilogram_kelvin_relationship<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::kilogram_kelvin_relationship<
          T>::precision()));
}

// lattice parameter of silicon
// (5.43102064e-10 ± 1.4e-17) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_parameter_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::lattice_parameter_of_silicon<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::lattice_parameter_of_silicon<
                 T>::value() == static_cast<T>(5.43102064e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::lattice_parameter_of_silicon<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::lattice_parameter_of_silicon<
                 T>::uncertainty() == static_cast<T>(1.4e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::lattice_parameter_of_silicon<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::lattice_parameter_of_silicon<
          T>::precision()));
}

// Loschmidt constant (273.15 K, 101.325 kPa)
// (2.6867774e+25 ± 4.7e+19) m^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(Loschmidt_constant_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::value() == static_cast<T>(2.6867774e+25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(4.7e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Loschmidt_constant_27315_K_101325_kPa<
          T>::precision()));
}

// mag. constant
// (1.2566370614e-06 ± 0.0) N A^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_constant, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::mag_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::mag_constant<T>::value() ==
             static_cast<T>(1.2566370614e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::mag_constant<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::mag_constant<T>::uncertainty() ==
             static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::mag_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::mag_constant<T>::precision()));
}

// mag. flux quantum
// (2.067833667e-15 ± 5.2e-23) Wb
BOOST_AUTO_TEST_CASE_TEMPLATE(mag_flux_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::mag_flux_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::mag_flux_quantum<T>::value() ==
             static_cast<T>(2.067833667e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::mag_flux_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::mag_flux_quantum<T>::uncertainty() ==
      static_cast<T>(5.2e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::mag_flux_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::mag_flux_quantum<T>::precision()));
}

// molar gas constant
// (8.314472 ± 1.5e-05) J mol^-1 K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_gas_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_gas_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::molar_gas_constant<T>::value() ==
             static_cast<T>(8.314472));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_gas_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_gas_constant<T>::uncertainty() ==
      static_cast<T>(1.5e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_gas_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_gas_constant<T>::precision()));
}

// molar mass constant
// (0.001 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_mass_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::molar_mass_constant<T>::value() ==
             static_cast<T>(0.001));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_mass_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_mass_constant<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_mass_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_mass_constant<T>::precision()));
}

// molar mass of carbon-12
// (0.012 ± 0.0) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_mass_of_carbon_12, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_mass_of_carbon_12<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_mass_of_carbon_12<T>::value() ==
      static_cast<T>(0.012));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::molar_mass_of_carbon_12<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::molar_mass_of_carbon_12<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_mass_of_carbon_12<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_mass_of_carbon_12<T>::precision()));
}

// molar Planck constant
// (3.9903126821e-10 ± 5.7e-19) J s mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_Planck_constant<T>::value() ==
      static_cast<T>(3.9903126821e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_Planck_constant<T>::uncertainty() ==
      static_cast<T>(5.7e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_Planck_constant<T>::precision()));
}

// molar Planck constant times c
// (0.11962656472 ± 1.7e-10) J m mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_Planck_constant_times_c, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant_times_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::molar_Planck_constant_times_c<
                 T>::value() == static_cast<T>(0.11962656472));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant_times_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::molar_Planck_constant_times_c<
                 T>::uncertainty() == static_cast<T>(1.7e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_Planck_constant_times_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_Planck_constant_times_c<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 100 kPa)
// (0.022710981 ± 4e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::value() == static_cast<T>(0.022710981));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::uncertainty() == static_cast<T>(4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_volume_of_ideal_gas_27315_K_100_kPa<
          T>::precision()));
}

// molar volume of ideal gas (273.15 K, 101.325 kPa)
// (0.022413996 ± 3.9e-08) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_ideal_gas_27315_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::value() ==
             static_cast<T>(0.022413996));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::uncertainty() ==
      static_cast<T>(3.9e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          molar_volume_of_ideal_gas_27315_K_101325_kPa<T>::precision()));
}

// molar volume of silicon
// (1.20588349e-05 ± 1.1e-12) m^3 mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(molar_volume_of_silicon, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_volume_of_silicon<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::molar_volume_of_silicon<T>::value() ==
      static_cast<T>(1.20588349e-05));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::molar_volume_of_silicon<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::molar_volume_of_silicon<
                 T>::uncertainty() == static_cast<T>(1.1e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::molar_volume_of_silicon<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::molar_volume_of_silicon<T>::precision()));
}

// Mo x unit
// (1.00209955e-13 ± 5.3e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Mo_x_unit, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Mo_x_unit<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Mo_x_unit<T>::value() ==
             static_cast<T>(1.00209955e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Mo_x_unit<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Mo_x_unit<T>::uncertainty() ==
             static_cast<T>(5.3e-20));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Mo_x_unit<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Mo_x_unit<T>::precision()));
}

// muon Compton wavelength
// (1.173444104e-14 ± 3e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_Compton_wavelength<T>::value() ==
      static_cast<T>(1.173444104e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(3e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_Compton_wavelength<T>::precision()));
}

// muon Compton wavelength over 2 pi
// (1.867594295e-15 ± 4.7e-23) m
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.867594295e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(4.7e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// muon-electron mass ratio
// (206.7682823 ± 5.2e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_electron_mass_ratio<T>::value() ==
      static_cast<T>(206.7682823));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.2e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::muon_electron_mass_ratio<
                    T>::precision()));
}

// muon g factor
// (-2.0023318414 ± 1.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_g_factor, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_g_factor<T>::value() ==
             static_cast<T>(-2.0023318414));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_g_factor<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_g_factor<T>::uncertainty() ==
             static_cast<T>(1.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_g_factor<T>::precision()));
}

// muon mag. mom.
// (-4.49044786e-26 ± 1.6e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mag_mom<T>::value() ==
             static_cast<T>(-4.49044786e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mag_mom<T>::uncertainty() ==
             static_cast<T>(1.6e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mag_mom<T>::precision()));
}

// muon mag. mom. anomaly
// (0.00116592069 ± 6e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::value() ==
             static_cast<T>(0.00116592069));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::uncertainty() ==
      static_cast<T>(6e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mag_mom_anomaly<T>::precision()));
}

// muon mag. mom. to Bohr magneton ratio
// (-0.00484197049 ± 1.2e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00484197049));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.2e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// muon mag. mom. to nuclear magneton ratio
// (-8.89059705 ± 2.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-8.89059705));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// muon mass
// (1.8835313e-28 ± 1.1e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass<T>::value() ==
             static_cast<T>(1.8835313e-28));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass<T>::uncertainty() ==
             static_cast<T>(1.1e-35));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::muon_mass<T>::precision()));
}

// muon mass energy equivalent
// (1.69283351e-11 ± 9.5e-19) J
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_mass_energy_equivalent<T>::value() ==
      static_cast<T>(1.69283351e-11));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(9.5e-19));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::muon_mass_energy_equivalent<
                    T>::precision()));
}

// muon mass energy equivalent in MeV
// (105.6583668 ± 3.8e-06) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(105.6583668));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(3.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// muon mass in u
// (0.1134289256 ± 2.9e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass_in_u<T>::value() ==
             static_cast<T>(0.1134289256));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_mass_in_u<T>::uncertainty() ==
             static_cast<T>(2.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_mass_in_u<T>::precision()));
}

// muon molar mass
// (0.0001134289256 ± 2.9e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_molar_mass<T>::value() ==
             static_cast<T>(0.0001134289256));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.9e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_molar_mass<T>::precision()));
}

// muon-neutron mass ratio
// (0.1124545167 ± 2.9e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.1124545167));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_neutron_mass_ratio<T>::precision()));
}

// muon-proton mag. mom. ratio
// (-3.183345137 ± 8.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_proton_mag_mom_ratio<T>::value() ==
      static_cast<T>(-3.183345137));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_proton_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(8.5e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_proton_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::muon_proton_mag_mom_ratio<
                    T>::precision()));
}

// muon-proton mass ratio
// (0.1126095261 ± 2.9e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_proton_mass_ratio<T>::value() ==
      static_cast<T>(0.1126095261));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::muon_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::muon_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.9e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_proton_mass_ratio<T>::precision()));
}

// muon-tau mass ratio
// (0.0594592 ± 9.7e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_tau_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::muon_tau_mass_ratio<T>::value() ==
             static_cast<T>(0.0594592));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::muon_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(9.7e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::muon_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::muon_tau_mass_ratio<T>::precision()));
}

// natural unit of action
// (1.054571628e-34 ± 5.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_action<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_action<T>::value() ==
      static_cast<T>(1.054571628e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_action<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_action<
                 T>::uncertainty() == static_cast<T>(5.3e-42));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_action<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_action<T>::precision()));
}

// natural unit of action in eV s
// (6.58211899e-16 ± 1.6e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_action_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
                 T>::value() == static_cast<T>(6.58211899e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
                 T>::uncertainty() == static_cast<T>(1.6e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_action_in_eV_s<
          T>::precision()));
}

// natural unit of energy
// (8.18710438e-14 ± 4.1e-21) J
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_energy<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_energy<T>::value() ==
      static_cast<T>(8.18710438e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_energy<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_energy<
                 T>::uncertainty() == static_cast<T>(4.1e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_energy<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_energy<T>::precision()));
}

// natural unit of energy in MeV
// (0.51099891 ± 1.3e-08) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_energy_in_MeV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
                 T>::value() == static_cast<T>(0.51099891));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
                 T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_energy_in_MeV<
          T>::precision()));
}

// natural unit of length
// (3.8615926459e-13 ± 5.3e-22) m
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_length, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_length<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_length<T>::value() ==
      static_cast<T>(3.8615926459e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_length<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_length<
                 T>::uncertainty() == static_cast<T>(5.3e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_length<T>::precision()));
}

// natural unit of mass
// (9.10938215e-31 ± 4.5e-38) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_mass<T>::value() ==
             static_cast<T>(9.10938215e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_mass<T>::uncertainty() ==
      static_cast<T>(4.5e-38));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_mass<T>::precision()));
}

// natural unit of momentum
// (2.73092406e-22 ± 1.4e-29) kg m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momentum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_momentum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_momentum<T>::value() ==
      static_cast<T>(2.73092406e-22));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_momentum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_momentum<
                 T>::uncertainty() == static_cast<T>(1.4e-29));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_momentum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::natural_unit_of_momentum<
                    T>::precision()));
}

// natural unit of momentum in MeV/c
// (0.51099891 ± 1.3e-08) MeV/c
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_momentum_in_MeV_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
                 T>::value() == static_cast<T>(0.51099891));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
                 T>::uncertainty() == static_cast<T>(1.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_momentum_in_MeV_c<
          T>::precision()));
}

// natural unit of time
// (1.288088657e-21 ± 1.8e-30) s
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_time, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_time<T>::value() ==
             static_cast<T>(1.288088657e-21));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_time<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_time<T>::uncertainty() ==
      static_cast<T>(1.8e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::natural_unit_of_time<T>::precision()));
}

// natural unit of velocity
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(natural_unit_of_velocity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::natural_unit_of_velocity<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::natural_unit_of_velocity<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_velocity<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::natural_unit_of_velocity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::natural_unit_of_velocity<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::natural_unit_of_velocity<
                    T>::precision()));
}

// neutron Compton wavelength
// (1.3195908951e-15 ± 2e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_Compton_wavelength<T>::value() ==
      static_cast<T>(1.3195908951e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(2e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::neutron_Compton_wavelength<
                    T>::precision()));
}

// neutron Compton wavelength over 2 pi
// (2.1001941382e-16 ± 3.1e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.1001941382e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(3.1e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// neutron-electron mag. mom. ratio
// (0.00104066882 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(0.00104066882));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_electron_mag_mom_ratio<
          T>::precision()));
}

// neutron-electron mass ratio
// (1838.6836605 ± 1.1e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_electron_mass_ratio<T>::value() ==
      static_cast<T>(1838.6836605));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::neutron_electron_mass_ratio<
                    T>::precision()));
}

// neutron g factor
// (-3.82608545 ± 9e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_g_factor<T>::value() ==
             static_cast<T>(-3.82608545));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_g_factor<T>::uncertainty() ==
      static_cast<T>(9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_g_factor<T>::precision()));
}

// neutron gyromag. ratio
// (183247185.0 ± 43.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::value() ==
      static_cast<T>(183247185.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(43.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_gyromag_ratio<T>::precision()));
}

// neutron gyromag. ratio over 2 pi
// (29.1646954 ± 6.9e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(29.1646954));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(6.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// neutron mag. mom.
// (-9.6623641e-27 ± 2.3e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mag_mom<T>::value() ==
             static_cast<T>(-9.6623641e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mag_mom<T>::uncertainty() ==
      static_cast<T>(2.3e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mag_mom<T>::precision()));
}

// neutron mag. mom. to Bohr magneton ratio
// (-0.00104187563 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00104187563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// neutron mag. mom. to nuclear magneton ratio
// (-1.91304273 ± 4.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(-1.91304273));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(4.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// neutron mass
// (1.674927211e-27 ± 8.4e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mass<T>::value() ==
             static_cast<T>(1.674927211e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mass<T>::uncertainty() ==
             static_cast<T>(8.4e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mass<T>::precision()));
}

// neutron mass energy equivalent
// (1.505349505e-10 ± 7.5e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.505349505e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(7.5e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent<
          T>::precision()));
}

// neutron mass energy equivalent in MeV
// (939.565346 ± 2.3e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(939.565346));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(2.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// neutron mass in u
// (1.00866491597 ± 4.3e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_mass_in_u<T>::value() ==
             static_cast<T>(1.00866491597));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_mass_in_u<T>::uncertainty() ==
      static_cast<T>(4.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_mass_in_u<T>::precision()));
}

// neutron molar mass
// (0.00100866491597 ± 4.3e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_molar_mass<T>::value() ==
             static_cast<T>(0.00100866491597));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_molar_mass<T>::uncertainty() ==
      static_cast<T>(4.3e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_molar_mass<T>::precision()));
}

// neutron-muon mass ratio
// (8.89248409 ± 2.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.89248409));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_muon_mass_ratio<T>::precision()));
}

// neutron-proton mag. mom. ratio
// (-0.68497934 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.68497934));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_proton_mag_mom_ratio<
          T>::precision()));
}

// neutron-proton mass ratio
// (1.00137841918 ± 4.6e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.00137841918));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::neutron_proton_mass_ratio<
                    T>::precision()));
}

// neutron-tau mass ratio
// (0.52874 ± 8.6e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.52874));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::neutron_tau_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::neutron_tau_mass_ratio<
                 T>::uncertainty() == static_cast<T>(8.6e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_tau_mass_ratio<T>::precision()));
}

// neutron to shielded proton mag. mom. ratio
// (-0.68499694 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_to_shielded_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.68499694));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::neutron_to_shielded_proton_mag_mom_ratio<
          T>::precision()));
}

// Newtonian constant of gravitation
// (6.67428e-11 ± 6.7e-15) m^3 kg^-1 s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
                 T>::value() == static_cast<T>(6.67428e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
                 T>::uncertainty() == static_cast<T>(6.7e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Newtonian_constant_of_gravitation<
          T>::precision()));
}

// Newtonian constant of gravitation over h-bar c
// (6.70881e-39 ± 6.7e-43) (GeV/c^2)^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(Newtonian_constant_of_gravitation_over_h_bar_c, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 Newtonian_constant_of_gravitation_over_h_bar_c<T>::value() ==
             static_cast<T>(6.70881e-39));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::uncertainty() ==
      static_cast<T>(6.7e-43));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          Newtonian_constant_of_gravitation_over_h_bar_c<T>::precision()));
}

// nuclear magneton
// (5.05078324e-27 ± 1.3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::nuclear_magneton<T>::value() ==
             static_cast<T>(5.05078324e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::nuclear_magneton<T>::uncertainty() ==
      static_cast<T>(1.3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::nuclear_magneton<T>::precision()));
}

// nuclear magneton in eV/T
// (3.1524512326e-08 ± 4.5e-17) eV T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_eV_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton_in_eV_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::nuclear_magneton_in_eV_T<T>::value() ==
      static_cast<T>(3.1524512326e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::nuclear_magneton_in_eV_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::nuclear_magneton_in_eV_T<
                 T>::uncertainty() == static_cast<T>(4.5e-17));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::nuclear_magneton_in_eV_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::nuclear_magneton_in_eV_T<
                    T>::precision()));
}

// nuclear magneton in inverse meters per tesla
// (0.02542623616 ± 6.4e-10) m^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_inverse_meters_per_tesla, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 nuclear_magneton_in_inverse_meters_per_tesla<T>::value() ==
             static_cast<T>(0.02542623616));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::uncertainty() ==
      static_cast<T>(6.4e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          nuclear_magneton_in_inverse_meters_per_tesla<T>::precision()));
}

// nuclear magneton in K/T
// (0.00036582637 ± 6.4e-10) K T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_K_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton_in_K_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::nuclear_magneton_in_K_T<T>::value() ==
      static_cast<T>(0.00036582637));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::nuclear_magneton_in_K_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::nuclear_magneton_in_K_T<
                 T>::uncertainty() == static_cast<T>(6.4e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton_in_K_T<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::nuclear_magneton_in_K_T<T>::precision()));
}

// nuclear magneton in MHz/T
// (7.62259384 ± 1.9e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(nuclear_magneton_in_MHz_T, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<T>::value() ==
      static_cast<T>(7.62259384));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<
                 T>::uncertainty() == static_cast<T>(1.9e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::nuclear_magneton_in_MHz_T<
                    T>::precision()));
}

// Planck constant
// (6.62606896e-34 ± 3.3e-41) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_constant<T>::value() ==
             static_cast<T>(6.62606896e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_constant<T>::uncertainty() ==
      static_cast<T>(3.3e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_constant<T>::precision()));
}

// Planck constant in eV s
// (4.13566733e-15 ± 1e-22) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_in_eV_s, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_in_eV_s<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_constant_in_eV_s<T>::value() ==
      static_cast<T>(4.13566733e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_constant_in_eV_s<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_constant_in_eV_s<
                 T>::uncertainty() == static_cast<T>(1e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_in_eV_s<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_constant_in_eV_s<T>::precision()));
}

// Planck constant over 2 pi
// (1.054571628e-34 ± 5.3e-42) J s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_over_2_pi<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_constant_over_2_pi<T>::value() ==
      static_cast<T>(1.054571628e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_constant_over_2_pi<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_constant_over_2_pi<
                 T>::uncertainty() == static_cast<T>(5.3e-42));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_constant_over_2_pi<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Planck_constant_over_2_pi<
                    T>::precision()));
}

// Planck constant over 2 pi in eV s
// (6.58211899e-16 ± 1.6e-23) eV s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_in_eV_s, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
                 T>::value() == static_cast<T>(6.58211899e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
                 T>::uncertainty() == static_cast<T>(1.6e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_constant_over_2_pi_in_eV_s<
          T>::precision()));
}

// Planck constant over 2 pi times c in MeV fm
// (197.3269631 ± 4.9e-06) MeV fm
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_constant_over_2_pi_times_c_in_MeV_fm, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::value() ==
             static_cast<T>(197.3269631));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::uncertainty() ==
      static_cast<T>(4.9e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          Planck_constant_over_2_pi_times_c_in_MeV_fm<T>::precision()));
}

// Planck length
// (1.616252e-35 ± 8.1e-40) m
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_length, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_length<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_length<T>::value() ==
             static_cast<T>(1.616252e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_length<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_length<T>::uncertainty() ==
             static_cast<T>(8.1e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_length<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_length<T>::precision()));
}

// Planck mass
// (2.17644e-08 ± 1.1e-12) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_mass<T>::value() ==
             static_cast<T>(2.17644e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_mass<T>::uncertainty() ==
             static_cast<T>(1.1e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_mass<T>::precision()));
}

// Planck mass energy equivalent in GeV
// (1.220892e+19 ± 610000000000000.0) GeV
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_mass_energy_equivalent_in_GeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::value() == static_cast<T>(1.220892e+19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::uncertainty() == static_cast<T>(610000000000000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_mass_energy_equivalent_in_GeV<
          T>::precision()));
}

// Planck temperature
// (1.416785e+32 ± 7.1e+27) K
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_temperature, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_temperature<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_temperature<T>::value() ==
             static_cast<T>(1.416785e+32));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_temperature<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Planck_temperature<T>::uncertainty() ==
      static_cast<T>(7.1e+27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_temperature<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_temperature<T>::precision()));
}

// Planck time
// (5.39124e-44 ± 2.7e-48) s
BOOST_AUTO_TEST_CASE_TEMPLATE(Planck_time, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Planck_time<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_time<T>::value() ==
             static_cast<T>(5.39124e-44));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_time<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Planck_time<T>::uncertainty() ==
             static_cast<T>(2.7e-48));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Planck_time<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Planck_time<T>::precision()));
}

// proton charge to mass quotient
// (95788339.2 ± 2.4) C kg^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_charge_to_mass_quotient, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_charge_to_mass_quotient<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_charge_to_mass_quotient<
                 T>::value() == static_cast<T>(95788339.2));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_charge_to_mass_quotient<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_charge_to_mass_quotient<
                 T>::uncertainty() == static_cast<T>(2.4));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_charge_to_mass_quotient<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_charge_to_mass_quotient<
          T>::precision()));
}

// proton Compton wavelength
// (1.3214098446e-15 ± 1.9e-24) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_Compton_wavelength<T>::value() ==
      static_cast<T>(1.3214098446e-15));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(1.9e-24));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_Compton_wavelength<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::proton_Compton_wavelength<
                    T>::precision()));
}

// proton Compton wavelength over 2 pi
// (2.1030890861e-16 ± 3e-25) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_Compton_wavelength_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::value() == static_cast<T>(2.1030890861e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::uncertainty() == static_cast<T>(3e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// proton-electron mass ratio
// (1836.15267247 ± 8e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_electron_mass_ratio<T>::value() ==
      static_cast<T>(1836.15267247));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(8e-07));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::proton_electron_mass_ratio<
                    T>::precision()));
}

// proton g factor
// (5.585694713 ± 4.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_g_factor<T>::value() ==
             static_cast<T>(5.585694713));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_g_factor<T>::uncertainty() ==
      static_cast<T>(4.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_g_factor<T>::precision()));
}

// proton gyromag. ratio
// (267522209.9 ± 7.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_gyromag_ratio<T>::value() ==
             static_cast<T>(267522209.9));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_gyromag_ratio<T>::uncertainty() ==
      static_cast<T>(7.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_gyromag_ratio<T>::precision()));
}

// proton gyromag. ratio over 2 pi
// (42.5774821 ± 1.1e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromag_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
                 T>::value() == static_cast<T>(42.5774821));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1.1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// proton mag. mom.
// (1.410606662e-26 ± 3.7e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mag_mom<T>::value() ==
             static_cast<T>(1.410606662e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mag_mom<T>::uncertainty() ==
             static_cast<T>(3.7e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mag_mom<T>::precision()));
}

// proton mag. mom. to Bohr magneton ratio
// (0.001521032209 ± 1.2e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.001521032209));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.2e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// proton mag. mom. to nuclear magneton ratio
// (2.792847356 ± 2.3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.792847356));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// proton mag. shielding correction
// (2.5694e-05 ± 1.4e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mag_shielding_correction, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_shielding_correction<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mag_shielding_correction<
                 T>::value() == static_cast<T>(2.5694e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_shielding_correction<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mag_shielding_correction<
                 T>::uncertainty() == static_cast<T>(1.4e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mag_shielding_correction<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mag_shielding_correction<
          T>::precision()));
}

// proton mass
// (1.672621637e-27 ± 8.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mass<T>::value() ==
             static_cast<T>(1.672621637e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mass<T>::uncertainty() ==
             static_cast<T>(8.3e-35));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mass<T>::precision()));
}

// proton mass energy equivalent
// (1.503277359e-10 ± 7.5e-18) J
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(1.503277359e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(7.5e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mass_energy_equivalent<
          T>::precision()));
}

// proton mass energy equivalent in MeV
// (938.272013 ± 2.3e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(938.272013));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(2.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// proton mass in u
// (1.00727646677 ± 1e-10) u
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_mass_in_u<T>::value() ==
             static_cast<T>(1.00727646677));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(1e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_mass_in_u<T>::precision()));
}

// proton molar mass
// (0.00100727646677 ± 1e-13) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_molar_mass<T>::value() ==
             static_cast<T>(0.00100727646677));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_molar_mass<T>::uncertainty() ==
      static_cast<T>(1e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_molar_mass<T>::precision()));
}

// proton-muon mass ratio
// (8.88024339 ± 2.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_muon_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_muon_mass_ratio<T>::value() ==
      static_cast<T>(8.88024339));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_muon_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_muon_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_muon_mass_ratio<T>::precision()));
}

// proton-neutron mag. mom. ratio
// (-1.45989806 ± 3.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-1.45989806));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_neutron_mag_mom_ratio<
          T>::precision()));
}

// proton-neutron mass ratio
// (0.99862347824 ± 4.6e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_neutron_mass_ratio<T>::value() ==
      static_cast<T>(0.99862347824));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(4.6e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_neutron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::proton_neutron_mass_ratio<
                    T>::precision()));
}

// proton rms charge radius
// (8.768e-16 ± 6.9e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_rms_charge_radius, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_rms_charge_radius<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_rms_charge_radius<T>::value() ==
      static_cast<T>(8.768e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_rms_charge_radius<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::proton_rms_charge_radius<
                 T>::uncertainty() == static_cast<T>(6.9e-18));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::proton_rms_charge_radius<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::proton_rms_charge_radius<
                    T>::precision()));
}

// proton-tau mass ratio
// (0.528012 ± 8.6e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_tau_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::value() ==
      static_cast<T>(0.528012));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::uncertainty() ==
      static_cast<T>(8.6e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::proton_tau_mass_ratio<T>::precision()));
}

// quantum of circulation
// (0.00036369475199 ± 5e-13) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::quantum_of_circulation<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::quantum_of_circulation<T>::value() ==
      static_cast<T>(0.00036369475199));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::quantum_of_circulation<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::quantum_of_circulation<
                 T>::uncertainty() == static_cast<T>(5e-13));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::quantum_of_circulation<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::quantum_of_circulation<T>::precision()));
}

// quantum of circulation times 2
// (0.000727389504 ± 1e-12) m^2 s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(quantum_of_circulation_times_2, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::quantum_of_circulation_times_2<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::quantum_of_circulation_times_2<
                 T>::value() == static_cast<T>(0.000727389504));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::quantum_of_circulation_times_2<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::quantum_of_circulation_times_2<
                 T>::uncertainty() == static_cast<T>(1e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::quantum_of_circulation_times_2<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::quantum_of_circulation_times_2<
          T>::precision()));
}

// Rydberg constant
// (10973731.568527 ± 7.3e-05) m^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant<T>::value() ==
             static_cast<T>(10973731.568527));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Rydberg_constant<T>::uncertainty() ==
      static_cast<T>(7.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Rydberg_constant<T>::precision()));
}

// Rydberg constant times c in Hz
// (3289841960361000.0 ± 22000.0) Hz
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_c_in_Hz, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
                 T>::value() == static_cast<T>(3289841960361000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
                 T>::uncertainty() == static_cast<T>(22000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Rydberg_constant_times_c_in_Hz<
          T>::precision()));
}

// Rydberg constant times hc in eV
// (13.60569193 ± 3.4e-07) eV
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_eV, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
                 T>::value() == static_cast<T>(13.60569193));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_eV<
          T>::precision()));
}

// Rydberg constant times hc in J
// (2.17987197e-18 ± 1.1e-25) J
BOOST_AUTO_TEST_CASE_TEMPLATE(Rydberg_constant_times_hc_in_J, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
                 T>::value() == static_cast<T>(2.17987197e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
                 T>::uncertainty() == static_cast<T>(1.1e-25));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Rydberg_constant_times_hc_in_J<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 100 kPa)
// (-1.1517047 ± 4.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_100_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::value() == static_cast<T>(-1.1517047));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::uncertainty() == static_cast<T>(4.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_100_kPa<
          T>::precision()));
}

// Sackur-Tetrode constant (1 K, 101.325 kPa)
// (-1.1648677 ± 4.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(Sackur_Tetrode_constant_1_K_101325_kPa, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::value() == static_cast<T>(-1.1648677));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::uncertainty() == static_cast<T>(4.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Sackur_Tetrode_constant_1_K_101325_kPa<
          T>::precision()));
}

// second radiation constant
// (0.014387752 ± 2.5e-08) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(second_radiation_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::second_radiation_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::second_radiation_constant<T>::value() ==
      static_cast<T>(0.014387752));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::second_radiation_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::second_radiation_constant<
                 T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::second_radiation_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::second_radiation_constant<
                    T>::precision()));
}

// shielded helion gyromag. ratio
// (203789473.0 ± 5.6) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
                 T>::value() == static_cast<T>(203789473.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(5.6));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio<
          T>::precision()));
}

// shielded helion gyromag. ratio over 2 pi
// (32.43410198 ± 9e-07) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(32.43410198));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(9e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_helion_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded helion mag. mom.
// (-1.074552982e-26 ± 3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_helion_mag_mom<T>::value() ==
      static_cast<T>(-1.074552982e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::shielded_helion_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_helion_mag_mom<
                 T>::uncertainty() == static_cast<T>(3e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_helion_mag_mom<T>::precision()));
}

// shielded helion mag. mom. to Bohr magneton ratio
// (-0.001158671471 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-0.001158671471));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded helion mag. mom. to nuclear magneton ratio
// (-2.127497718 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(-2.127497718));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(2.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          shielded_helion_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// shielded helion to proton mag. mom. ratio
// (-0.761766558 ± 1.1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_proton_mag_mom_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::value() == static_cast<T>(-0.761766558));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::uncertainty() == static_cast<T>(1.1e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_helion_to_proton_mag_mom_ratio<
          T>::precision()));
}

// shielded helion to shielded proton mag. mom. ratio
// (-0.7617861313 ± 3.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_shielded_proton_mag_mom_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 shielded_helion_to_shielded_proton_mag_mom_ratio<T>::value() ==
             static_cast<T>(-0.7617861313));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::uncertainty() ==
      static_cast<T>(3.3e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          shielded_helion_to_shielded_proton_mag_mom_ratio<T>::precision()));
}

// shielded proton gyromag. ratio
// (267515336.2 ± 7.3) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
                 T>::value() == static_cast<T>(267515336.2));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
                 T>::uncertainty() == static_cast<T>(7.3));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio<
          T>::precision()));
}

// shielded proton gyromag. ratio over 2 pi
// (42.5763881 ± 1.2e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_gyromag_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::value() == static_cast<T>(42.5763881));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(1.2e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_proton_gyromag_ratio_over_2_pi<
          T>::precision()));
}

// shielded proton mag. mom.
// (1.410570419e-26 ± 3.8e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_mag_mom<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::shielded_proton_mag_mom<T>::value() ==
      static_cast<T>(1.410570419e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::shielded_proton_mag_mom<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::shielded_proton_mag_mom<
                 T>::uncertainty() == static_cast<T>(3.8e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::shielded_proton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::shielded_proton_mag_mom<T>::precision()));
}

// shielded proton mag. mom. to Bohr magneton ratio
// (0.001520993128 ± 1.7e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::
                 shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(0.001520993128));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(1.7e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded proton mag. mom. to nuclear magneton ratio
// (2.792775598 ± 3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_mag_mom_to_nuclear_magneton_ratio,
                              T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(2.792775598));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(3e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::
          shielded_proton_mag_mom_to_nuclear_magneton_ratio<T>::precision()));
}

// speed of light in vacuum
// (299792458.0 ± 0.0) m s^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(speed_of_light_in_vacuum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::speed_of_light_in_vacuum<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::speed_of_light_in_vacuum<T>::value() ==
      static_cast<T>(299792458.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::speed_of_light_in_vacuum<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::speed_of_light_in_vacuum<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::speed_of_light_in_vacuum<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::speed_of_light_in_vacuum<
                    T>::precision()));
}

// standard acceleration of gravity
// (9.80665 ± 0.0) m s^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_acceleration_of_gravity, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_acceleration_of_gravity<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::standard_acceleration_of_gravity<
                 T>::value() == static_cast<T>(9.80665));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_acceleration_of_gravity<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::standard_acceleration_of_gravity<
                 T>::uncertainty() == static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_acceleration_of_gravity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::standard_acceleration_of_gravity<
          T>::precision()));
}

// standard atmosphere
// (101325.0 ± 0.0) Pa
BOOST_AUTO_TEST_CASE_TEMPLATE(standard_atmosphere, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_atmosphere<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::standard_atmosphere<T>::value() ==
             static_cast<T>(101325.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_atmosphere<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::standard_atmosphere<T>::uncertainty() ==
      static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::standard_atmosphere<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::standard_atmosphere<T>::precision()));
}

// Stefan-Boltzmann constant
// (5.6704e-08 ± 4e-13) W m^-2 K^-4
BOOST_AUTO_TEST_CASE_TEMPLATE(Stefan_Boltzmann_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Stefan_Boltzmann_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Stefan_Boltzmann_constant<T>::value() ==
      static_cast<T>(5.6704e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Stefan_Boltzmann_constant<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::Stefan_Boltzmann_constant<
                 T>::uncertainty() == static_cast<T>(4e-13));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::Stefan_Boltzmann_constant<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::Stefan_Boltzmann_constant<
                    T>::precision()));
}

// tau Compton wavelength
// (6.9772e-16 ± 1.1e-19) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_Compton_wavelength<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_Compton_wavelength<T>::value() ==
      static_cast<T>(6.9772e-16));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_Compton_wavelength<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_Compton_wavelength<
                 T>::uncertainty() == static_cast<T>(1.1e-19));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_Compton_wavelength<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_Compton_wavelength<T>::precision()));
}

// tau Compton wavelength over 2 pi
// (1.11046e-16 ± 1.8e-20) m
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_Compton_wavelength_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
                 T>::value() == static_cast<T>(1.11046e-16));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
                 T>::uncertainty() == static_cast<T>(1.8e-20));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_Compton_wavelength_over_2_pi<
          T>::precision()));
}

// tau-electron mass ratio
// (3477.48 ± 0.57)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_electron_mass_ratio<T>::value() ==
      static_cast<T>(3477.48));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.57));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_electron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_electron_mass_ratio<T>::precision()));
}

// tau mass
// (3.16777e-27 ± 5.2e-31) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass<T>::value() ==
             static_cast<T>(3.16777e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass<T>::uncertainty() ==
             static_cast<T>(5.2e-31));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_mass<T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::tau_mass<T>::precision()));
}

// tau mass energy equivalent
// (2.84705e-10 ± 4.6e-14) J
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_energy_equivalent<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_mass_energy_equivalent<T>::value() ==
      static_cast<T>(2.84705e-10));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_mass_energy_equivalent<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(4.6e-14));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_mass_energy_equivalent<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::tau_mass_energy_equivalent<
                    T>::precision()));
}

// tau mass energy equivalent in MeV
// (1776.99 ± 0.29) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
                 T>::value() == static_cast<T>(1776.99));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
                 T>::uncertainty() == static_cast<T>(0.29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// tau mass in u
// (1.90768 ± 0.00031) u
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_mass_in_u, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass_in_u<T>::value() ==
             static_cast<T>(1.90768));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_in_u<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_mass_in_u<T>::uncertainty() ==
             static_cast<T>(0.00031));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_mass_in_u<T>::precision()));
}

// tau molar mass
// (0.00190768 ± 3.1e-07) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_molar_mass<T>::value() ==
             static_cast<T>(0.00190768));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_molar_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_molar_mass<T>::uncertainty() ==
             static_cast<T>(3.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_molar_mass<T>::precision()));
}

// tau-muon mass ratio
// (16.8183 ± 0.0027)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_muon_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_muon_mass_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::tau_muon_mass_ratio<T>::value() ==
             static_cast<T>(16.8183));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_muon_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_muon_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.0027));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_muon_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_muon_mass_ratio<T>::precision()));
}

// tau-neutron mass ratio
// (1.89129 ± 0.00031)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_neutron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_neutron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_neutron_mass_ratio<T>::value() ==
      static_cast<T>(1.89129));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::tau_neutron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::tau_neutron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(0.00031));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_neutron_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_neutron_mass_ratio<T>::precision()));
}

// tau-proton mass ratio
// (1.8939 ± 0.00031)
BOOST_AUTO_TEST_CASE_TEMPLATE(tau_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::value() ==
      static_cast<T>(1.8939));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::uncertainty() ==
      static_cast<T>(0.00031));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::tau_proton_mass_ratio<T>::precision()));
}

// Thomson cross section
// (6.652458558e-29 ± 2.7e-37) m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(Thomson_cross_section, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Thomson_cross_section<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Thomson_cross_section<T>::value() ==
      static_cast<T>(6.652458558e-29));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Thomson_cross_section<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Thomson_cross_section<T>::uncertainty() ==
      static_cast<T>(2.7e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Thomson_cross_section<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Thomson_cross_section<T>::precision()));
}

// triton-electron mag. mom. ratio
// (-0.001620514423 ± 2.1e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_electron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-0.001620514423));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(2.1e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_electron_mag_mom_ratio<
          T>::precision()));
}

// triton-electron mass ratio
// (5496.9215269 ± 5.1e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_electron_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_electron_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_electron_mass_ratio<T>::value() ==
      static_cast<T>(5496.9215269));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_electron_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_electron_mass_ratio<
                 T>::uncertainty() == static_cast<T>(5.1e-06));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_electron_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::triton_electron_mass_ratio<
                    T>::precision()));
}

// triton g factor
// (5.957924896 ± 7.6e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_g_factor, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_g_factor<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_g_factor<T>::value() ==
             static_cast<T>(5.957924896));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_g_factor<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_g_factor<T>::uncertainty() ==
      static_cast<T>(7.6e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_g_factor<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_g_factor<T>::precision()));
}

// triton mag. mom.
// (1.504609361e-26 ± 4.2e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mag_mom<T>::value() ==
             static_cast<T>(1.504609361e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mag_mom<T>::uncertainty() ==
             static_cast<T>(4.2e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mag_mom<T>::precision()));
}

// triton mag. mom. to Bohr magneton ratio
// (0.001622393657 ± 2.1e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.001622393657));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(2.1e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mag_mom_to_Bohr_magneton_ratio<
          T>::precision()));
}

// triton mag. mom. to nuclear magneton ratio
// (2.978962448 ± 3.8e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mag_mom_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::value() == static_cast<T>(2.978962448));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::uncertainty() == static_cast<T>(3.8e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mag_mom_to_nuclear_magneton_ratio<
          T>::precision()));
}

// triton mass
// (5.00735588e-27 ± 2.5e-34) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mass<T>::value() ==
             static_cast<T>(5.00735588e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mass<T>::uncertainty() ==
             static_cast<T>(2.5e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mass<T>::precision()));
}

// triton mass energy equivalent
// (4.50038703e-10 ± 2.2e-17) J
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mass_energy_equivalent<
                 T>::value() == static_cast<T>(4.50038703e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mass_energy_equivalent<
                 T>::uncertainty() == static_cast<T>(2.2e-17));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mass_energy_equivalent<
          T>::precision()));
}

// triton mass energy equivalent in MeV
// (2808.920906 ± 7e-05) MeV
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_energy_equivalent_in_MeV, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::value() == static_cast<T>(2808.920906));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::uncertainty() == static_cast<T>(7e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mass_energy_equivalent_in_MeV<
          T>::precision()));
}

// triton mass in u
// (3.0155007134 ± 2.5e-09) u
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_mass_in_u, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_in_u<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_mass_in_u<T>::value() ==
             static_cast<T>(3.0155007134));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_in_u<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_mass_in_u<T>::uncertainty() ==
      static_cast<T>(2.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_mass_in_u<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_mass_in_u<T>::precision()));
}

// triton molar mass
// (0.0030155007134 ± 2.5e-12) kg mol^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_molar_mass, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_molar_mass<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_molar_mass<T>::value() ==
             static_cast<T>(0.0030155007134));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_molar_mass<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_molar_mass<T>::uncertainty() ==
      static_cast<T>(2.5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_molar_mass<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_molar_mass<T>::precision()));
}

// triton-neutron mag. mom. ratio
// (-1.55718553 ± 3.7e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_neutron_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
                 T>::value() == static_cast<T>(-1.55718553));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(3.7e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::triton_neutron_mag_mom_ratio<
          T>::precision()));
}

// triton-proton mag. mom. ratio
// (1.066639908 ± 1e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_proton_mag_mom_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_proton_mag_mom_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_proton_mag_mom_ratio<T>::value() ==
      static_cast<T>(1.066639908));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_proton_mag_mom_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_proton_mag_mom_ratio<
                 T>::uncertainty() == static_cast<T>(1e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_proton_mag_mom_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::triton_proton_mag_mom_ratio<
                    T>::precision()));
}

// triton-proton mass ratio
// (2.9937170309 ± 2.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(triton_proton_mass_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::triton_proton_mass_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::triton_proton_mass_ratio<T>::value() ==
      static_cast<T>(2.9937170309));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_proton_mass_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::triton_proton_mass_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::triton_proton_mass_ratio<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::triton_proton_mass_ratio<
                    T>::precision()));
}

// unified atomic mass unit
// (1.660538782e-27 ± 8.3e-35) kg
BOOST_AUTO_TEST_CASE_TEMPLATE(unified_atomic_mass_unit, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::unified_atomic_mass_unit<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::unified_atomic_mass_unit<T>::value() ==
      static_cast<T>(1.660538782e-27));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::unified_atomic_mass_unit<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2006::unified_atomic_mass_unit<
                 T>::uncertainty() == static_cast<T>(8.3e-35));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2006::unified_atomic_mass_unit<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2006::unified_atomic_mass_unit<
                    T>::precision()));
}

// von Klitzing constant
// (25812.807557 ± 1.8e-05) ohm
BOOST_AUTO_TEST_CASE_TEMPLATE(von_Klitzing_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::value() ==
      static_cast<T>(25812.807557));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::uncertainty() ==
      static_cast<T>(1.8e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::von_Klitzing_constant<T>::precision()));
}

// weak mixing angle
// (0.22255 ± 0.00056)
BOOST_AUTO_TEST_CASE_TEMPLATE(weak_mixing_angle, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::weak_mixing_angle<T>::value()));
  BOOST_TEST(triumf::constants::codata_2006::weak_mixing_angle<T>::value() ==
             static_cast<T>(0.22255));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::weak_mixing_angle<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::weak_mixing_angle<T>::uncertainty() ==
      static_cast<T>(0.00056));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::weak_mixing_angle<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::weak_mixing_angle<T>::precision()));
}

// Wien frequency displacement law constant
// (58789330000.0 ± 100000.0) Hz K^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_frequency_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::value() == static_cast<T>(58789330000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(100000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Wien_frequency_displacement_law_constant<
          T>::precision()));
}

// Wien wavelength displacement law constant
// (0.0028977685 ± 5.1e-09) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_wavelength_displacement_law_constant, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::value() == static_cast<T>(0.0028977685));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::uncertainty() == static_cast<T>(5.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2006::Wien_wavelength_displacement_law_constant<
          T>::precision()));
}
