#define BOOST_TEST_MODULE CODATA_2002
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/constants/codata_2002.hpp>

// Wien displacement law constant
// (0.0028977685 ± 5.1e-09) m K
BOOST_AUTO_TEST_CASE_TEMPLATE(Wien_displacement_law_constant, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::Wien_displacement_law_constant<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::Wien_displacement_law_constant<
                 T>::value() == static_cast<T>(0.0028977685));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::Wien_displacement_law_constant<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::Wien_displacement_law_constant<
                 T>::uncertainty() == static_cast<T>(5.1e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::Wien_displacement_law_constant<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::Wien_displacement_law_constant<
          T>::precision()));
}

// atomic unit of 1st hyperpolarizablity
// (3.20636151e-53 ± 2.8e-60) C^3 m^3 J^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_1st_hyperpolarizablity, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::value() == static_cast<T>(3.20636151e-53));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::uncertainty() == static_cast<T>(2.8e-60));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_1st_hyperpolarizablity<
          T>::precision()));
}

// atomic unit of 2nd hyperpolarizablity
// (6.2353808e-65 ± 1.1e-71) C^4 m^4 J^-3
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_2nd_hyperpolarizablity, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::value() == static_cast<T>(6.2353808e-65));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::uncertainty() == static_cast<T>(1.1e-71));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_2nd_hyperpolarizablity<
          T>::precision()));
}

// atomic unit of electric dipole moment
// (8.47835309e-30 ± 7.3e-37) C m
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_dipole_moment, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::value() == static_cast<T>(8.47835309e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::uncertainty() == static_cast<T>(7.3e-37));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_electric_dipole_moment<
          T>::precision()));
}

// atomic unit of electric polarizablity
// (1.648777274e-41 ± 1.6e-49) C^2 m^2 J^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_polarizablity, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::value() == static_cast<T>(1.648777274e-41));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::uncertainty() == static_cast<T>(1.6e-49));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_electric_polarizablity<
          T>::precision()));
}

// atomic unit of electric quadrupole moment
// (4.48655124e-40 ± 3.9e-47) C m^2
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_electric_quadrupole_moment, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::value() == static_cast<T>(4.48655124e-40));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::uncertainty() == static_cast<T>(3.9e-47));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_electric_quadrupole_moment<
          T>::precision()));
}

// atomic unit of magn. dipole moment
// (1.8548019e-23 ± 1.6e-30) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magn_dipole_moment, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
                 T>::value() == static_cast<T>(1.8548019e-23));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
                 T>::uncertainty() == static_cast<T>(1.6e-30));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_magn_dipole_moment<
          T>::precision()));
}

// atomic unit of magn. flux density
// (235051.742 ± 0.02) T
BOOST_AUTO_TEST_CASE_TEMPLATE(atomic_unit_of_magn_flux_density, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
                 T>::value() == static_cast<T>(235051.742));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
                 T>::uncertainty() == static_cast<T>(0.02));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::atomic_unit_of_magn_flux_density<
          T>::precision()));
}

// deuteron magn. moment
// (4.33073482e-27 ± 3.8e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_magn_moment<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::deuteron_magn_moment<T>::value() ==
             static_cast<T>(4.33073482e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_magn_moment<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::deuteron_magn_moment<T>::uncertainty() ==
      static_cast<T>(3.8e-34));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_magn_moment<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::deuteron_magn_moment<T>::precision()));
}

// deuteron magn. moment to Bohr magneton ratio
// (0.0004669754567 ± 5e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_magn_moment_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 deuteron_magn_moment_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(0.0004669754567));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
}

// deuteron magn. moment to nuclear magneton ratio
// (0.8574382329 ± 9.2e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_magn_moment_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 deuteron_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(0.8574382329));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(9.2e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          deuteron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
}

// deuteron-electron magn. moment ratio
// (-0.0004664345548 ± 5e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_electron_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::value() == static_cast<T>(-0.0004664345548));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::uncertainty() == static_cast<T>(5e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::deuteron_electron_magn_moment_ratio<
          T>::precision()));
}

// deuteron-proton magn. moment ratio
// (0.3070122084 ± 4.5e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_proton_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
                 T>::value() == static_cast<T>(0.3070122084));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(4.5e-09));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::deuteron_proton_magn_moment_ratio<
          T>::precision()));
}

// deuteron-neutron magn. moment ratio
// (-0.44820652 ± 1.1e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(deuteron_neutron_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
                 T>::value() == static_cast<T>(-0.44820652));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(1.1e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::deuteron_neutron_magn_moment_ratio<
          T>::precision()));
}

// electron gyromagn. ratio
// (176085974000.0 ± 15000.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromagn_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_gyromagn_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::electron_gyromagn_ratio<T>::value() ==
      static_cast<T>(176085974000.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::electron_gyromagn_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_gyromagn_ratio<
                 T>::uncertainty() == static_cast<T>(15000.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_gyromagn_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_gyromagn_ratio<T>::precision()));
}

// electron gyromagn. ratio over 2 pi
// (28024.9532 ± 0.0024) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_gyromagn_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
                 T>::value() == static_cast<T>(28024.9532));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(0.0024));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_gyromagn_ratio_over_2_pi<
          T>::precision()));
}

// electron magn. moment
// (-9.28476412e-24 ± 8e-31) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_magn_moment<T>::value() ==
             static_cast<T>(-9.28476412e-24));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::electron_magn_moment<T>::uncertainty() ==
      static_cast<T>(8e-31));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_magn_moment<T>::precision()));
}

// electron magn. moment to Bohr magneton ratio
// (-1.0011596521859 ± 3.8e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_magn_moment_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 electron_magn_moment_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-1.0011596521859));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          electron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(3.8e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          electron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
}

// electron magn. moment to nuclear magneton ratio
// (-1838.28197107 ± 8.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_magn_moment_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 electron_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1838.28197107));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          electron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(8.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          electron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
}

// electron magn. moment anomaly
// (0.0011596521859 ± 3.8e-12)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_magn_moment_anomaly, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment_anomaly<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_magn_moment_anomaly<
                 T>::value() == static_cast<T>(0.0011596521859));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment_anomaly<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_magn_moment_anomaly<
                 T>::uncertainty() == static_cast<T>(3.8e-12));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_magn_moment_anomaly<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_magn_moment_anomaly<
          T>::precision()));
}

// electron to shielded proton magn. moment ratio
// (-658.2275956 ± 7.1e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_proton_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_proton_magn_moment_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 electron_to_shielded_proton_magn_moment_ratio<T>::value() ==
             static_cast<T>(-658.2275956));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_proton_magn_moment_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          electron_to_shielded_proton_magn_moment_ratio<T>::uncertainty() ==
      static_cast<T>(7.1e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_proton_magn_moment_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          electron_to_shielded_proton_magn_moment_ratio<T>::precision()));
}

// electron to shielded helion magn. moment ratio
// (864.058255 ± 1e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_to_shielded_helion_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_helion_magn_moment_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 electron_to_shielded_helion_magn_moment_ratio<T>::value() ==
             static_cast<T>(864.058255));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_helion_magn_moment_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          electron_to_shielded_helion_magn_moment_ratio<T>::uncertainty() ==
      static_cast<T>(1e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          electron_to_shielded_helion_magn_moment_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          electron_to_shielded_helion_magn_moment_ratio<T>::precision()));
}

// electron-deuteron magn. moment ratio
// (-2143.923493 ± 2.3e-05)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_deuteron_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::value() == static_cast<T>(-2143.923493));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::uncertainty() == static_cast<T>(2.3e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_deuteron_magn_moment_ratio<
          T>::precision()));
}

// electron-muon magn. moment ratio
// (206.7669894 ± 5.4e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_muon_magn_moment_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
                 T>::value() == static_cast<T>(206.7669894));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(5.4e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_muon_magn_moment_ratio<
          T>::precision()));
}

// electron-neutron magn. moment ratio
// (960.9205 ± 0.00023)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_neutron_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
                 T>::value() == static_cast<T>(960.9205));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(0.00023));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_neutron_magn_moment_ratio<
          T>::precision()));
}

// electron-proton magn. moment ratio
// (-658.2106862 ± 6.6e-06)
BOOST_AUTO_TEST_CASE_TEMPLATE(electron_proton_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
                 T>::value() == static_cast<T>(-658.2106862));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(6.6e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::electron_proton_magn_moment_ratio<
          T>::precision()));
}

// magn. constant
// (1.2566370614e-06 ± 0.0) N A^-2
BOOST_AUTO_TEST_CASE_TEMPLATE(magn_constant, T, test_types) {
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::magn_constant<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::magn_constant<T>::value() ==
             static_cast<T>(1.2566370614e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::magn_constant<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::magn_constant<T>::uncertainty() ==
             static_cast<T>(0.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::magn_constant<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::magn_constant<T>::precision()));
}

// magn. flux quantum
// (2.06783372e-15 ± 1.8e-22) Wb
BOOST_AUTO_TEST_CASE_TEMPLATE(magn_flux_quantum, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::magn_flux_quantum<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::magn_flux_quantum<T>::value() ==
             static_cast<T>(2.06783372e-15));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::magn_flux_quantum<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::magn_flux_quantum<T>::uncertainty() ==
      static_cast<T>(1.8e-22));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::magn_flux_quantum<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::magn_flux_quantum<T>::precision()));
}

// muon magn. moment
// (-4.49044799e-26 ± 4e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::muon_magn_moment<T>::value() ==
             static_cast<T>(-4.49044799e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::muon_magn_moment<T>::uncertainty() ==
      static_cast<T>(4e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::muon_magn_moment<T>::precision()));
}

// muon magn. moment to Bohr magneton ratio
// (-0.00484197045 ± 1.3e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_magn_moment_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(-0.00484197045));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.3e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::muon_magn_moment_to_Bohr_magneton_ratio<
          T>::precision()));
}

// muon magn. moment to nuclear magneton ratio
// (-8.89059698 ± 2.3e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_magn_moment_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          muon_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 muon_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-8.89059698));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          muon_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 muon_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(2.3e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          muon_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          muon_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
}

// muon-proton magn. moment ratio
// (-3.183345118 ± 8.9e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(muon_proton_magn_moment_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
                 T>::value() == static_cast<T>(-3.183345118));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(8.9e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::muon_proton_magn_moment_ratio<
          T>::precision()));
}

// neutron gyromagn. ratio
// (183247183.0 ± 46.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromagn_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_gyromagn_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::neutron_gyromagn_ratio<T>::value() ==
      static_cast<T>(183247183.0));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::neutron_gyromagn_ratio<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_gyromagn_ratio<
                 T>::uncertainty() == static_cast<T>(46.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_gyromagn_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::neutron_gyromagn_ratio<T>::precision()));
}

// neutron gyromagn. ratio over 2 pi
// (29.164695 ± 7.3e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_gyromagn_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
                 T>::value() == static_cast<T>(29.164695));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(7.3e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::neutron_gyromagn_ratio_over_2_pi<
          T>::precision()));
}

// neutron magn. moment
// (-9.6623645e-27 ± 2.4e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_magn_moment<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_magn_moment<T>::value() ==
             static_cast<T>(-9.6623645e-27));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_magn_moment<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::neutron_magn_moment<T>::uncertainty() ==
      static_cast<T>(2.4e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_magn_moment<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::neutron_magn_moment<T>::precision()));
}

// neutron magn. moment to Bohr magneton ratio
// (-0.00104187563 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_magn_moment_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 neutron_magn_moment_to_Bohr_magneton_ratio<T>::value() ==
             static_cast<T>(-0.00104187563));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 neutron_magn_moment_to_Bohr_magneton_ratio<T>::uncertainty() ==
             static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
}

// neutron magn. moment to nuclear magneton ratio
// (-1.91304273 ± 4.5e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_magn_moment_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 neutron_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(-1.91304273));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(4.5e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          neutron_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
}

// neutron to shielded proton magn. moment ratio
// (-0.68499694 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_to_shielded_proton_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_to_shielded_proton_magn_moment_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 neutron_to_shielded_proton_magn_moment_ratio<T>::value() ==
             static_cast<T>(-0.68499694));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_to_shielded_proton_magn_moment_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          neutron_to_shielded_proton_magn_moment_ratio<T>::uncertainty() ==
      static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          neutron_to_shielded_proton_magn_moment_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          neutron_to_shielded_proton_magn_moment_ratio<T>::precision()));
}

// neutron-electron magn. moment ratio
// (0.00104066882 ± 2.5e-10)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_electron_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
                 T>::value() == static_cast<T>(0.00104066882));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(2.5e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::neutron_electron_magn_moment_ratio<
          T>::precision()));
}

// neutron-proton magn. moment ratio
// (-0.68497934 ± 1.6e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(neutron_proton_magn_moment_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
                 T>::value() == static_cast<T>(-0.68497934));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(1.6e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::neutron_proton_magn_moment_ratio<
          T>::precision()));
}

// proton gyromagn. ratio
// (267522205.0 ± 23.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromagn_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::value() ==
      static_cast<T>(267522205.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::uncertainty() ==
      static_cast<T>(23.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_gyromagn_ratio<T>::precision()));
}

// proton gyromagn. ratio over 2 pi
// (42.5774813 ± 3.7e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_gyromagn_ratio_over_2_pi, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
                 T>::value() == static_cast<T>(42.5774813));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
                 T>::uncertainty() == static_cast<T>(3.7e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_gyromagn_ratio_over_2_pi<
          T>::precision()));
}

// proton magn. moment
// (1.41060671e-26 ± 1.2e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::proton_magn_moment<T>::value() ==
             static_cast<T>(1.41060671e-26));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::proton_magn_moment<T>::uncertainty() ==
      static_cast<T>(1.2e-33));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_magn_moment<T>::precision()));
}

// proton magn. moment to Bohr magneton ratio
// (0.001521032206 ± 1.5e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_magn_moment_to_Bohr_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::value() == static_cast<T>(0.001521032206));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::uncertainty() == static_cast<T>(1.5e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_magn_moment_to_Bohr_magneton_ratio<
          T>::precision()));
}

// proton magn. moment to nuclear magneton ratio
// (2.792847351 ± 2.8e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_magn_moment_to_nuclear_magneton_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          proton_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 proton_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
             static_cast<T>(2.792847351));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          proton_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          proton_magn_moment_to_nuclear_magneton_ratio<T>::uncertainty() ==
      static_cast<T>(2.8e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          proton_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          proton_magn_moment_to_nuclear_magneton_ratio<T>::precision()));
}

// proton magn. shielding correction
// (2.5689e-05 ± 1.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_magn_shielding_correction, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_shielding_correction<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::proton_magn_shielding_correction<
                 T>::value() == static_cast<T>(2.5689e-05));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_shielding_correction<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::proton_magn_shielding_correction<
                 T>::uncertainty() == static_cast<T>(1.5e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_magn_shielding_correction<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_magn_shielding_correction<
          T>::precision()));
}

// proton-neutron magn. moment ratio
// (-1.45989805 ± 3.4e-07)
BOOST_AUTO_TEST_CASE_TEMPLATE(proton_neutron_magn_moment_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
                 T>::value() == static_cast<T>(-1.45989805));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
                 T>::uncertainty() == static_cast<T>(3.4e-07));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::proton_neutron_magn_moment_ratio<
          T>::precision()));
}

// shielded helion gyromagn. ratio
// (203789470.0 ± 18.0) s^-1 T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromagn_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
                 T>::value() == static_cast<T>(203789470.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
                 T>::uncertainty() == static_cast<T>(18.0));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio<
          T>::precision()));
}

// shielded helion gyromagn. ratio over 2 pi
// (32.4341015 ± 2.8e-06) MHz T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_gyromagn_ratio_over_2_pi, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::value() == static_cast<T>(32.4341015));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::uncertainty() == static_cast<T>(2.8e-06));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::shielded_helion_gyromagn_ratio_over_2_pi<
          T>::precision()));
}

// shielded helion magn. moment
// (-1.074553024e-26 ± 9.3e-34) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_helion_magn_moment<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::shielded_helion_magn_moment<T>::value() ==
      static_cast<T>(-1.074553024e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::shielded_helion_magn_moment<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::shielded_helion_magn_moment<
                 T>::uncertainty() == static_cast<T>(9.3e-34));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::shielded_helion_magn_moment<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2002::shielded_helion_magn_moment<
                    T>::precision()));
}

// shielded helion magn. moment to Bohr magneton ratio
// (-0.001158671474 ± 1.4e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    shielded_helion_magn_moment_to_Bohr_magneton_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_Bohr_magneton_ratio<T>::value() ==
      static_cast<T>(-0.001158671474));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_helion_magn_moment_to_Bohr_magneton_ratio<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_helion_magn_moment_to_Bohr_magneton_ratio<
                     T>::uncertainty() == static_cast<T>(1.4e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded helion magn. moment to nuclear magneton ratio
// (-2.127497723 ± 2.5e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    shielded_helion_magn_moment_to_nuclear_magneton_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_helion_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(-2.127497723));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_helion_magn_moment_to_nuclear_magneton_ratio<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_helion_magn_moment_to_nuclear_magneton_ratio<
                     T>::uncertainty() == static_cast<T>(2.5e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_helion_magn_moment_to_nuclear_magneton_ratio<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2002::
                        shielded_helion_magn_moment_to_nuclear_magneton_ratio<
                            T>::precision()));
}

// shielded helion to proton magn. moment ratio
// (-0.761766562 ± 1.2e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_helion_to_proton_magn_moment_ratio, T,
                              test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_to_proton_magn_moment_ratio<T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_helion_to_proton_magn_moment_ratio<T>::value() ==
             static_cast<T>(-0.761766562));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_to_proton_magn_moment_ratio<T>::uncertainty()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_helion_to_proton_magn_moment_ratio<T>::uncertainty() ==
      static_cast<T>(1.2e-08));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_to_proton_magn_moment_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          shielded_helion_to_proton_magn_moment_ratio<T>::precision()));
}

// shielded helion to shielded proton magn. moment ratio
// (-0.7617861313 ± 3.3e-09)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    shielded_helion_to_shielded_proton_magn_moment_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_helion_to_shielded_proton_magn_moment_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_helion_to_shielded_proton_magn_moment_ratio<T>::value() ==
      static_cast<T>(-0.7617861313));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_helion_to_shielded_proton_magn_moment_ratio<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_helion_to_shielded_proton_magn_moment_ratio<
                     T>::uncertainty() == static_cast<T>(3.3e-09));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_helion_to_shielded_proton_magn_moment_ratio<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2002::
                        shielded_helion_to_shielded_proton_magn_moment_ratio<
                            T>::precision()));
}

// shielded proton magn. moment
// (1.41057047e-26 ± 1.2e-33) J T^-1
BOOST_AUTO_TEST_CASE_TEMPLATE(shielded_proton_magn_moment, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::shielded_proton_magn_moment<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::shielded_proton_magn_moment<T>::value() ==
      static_cast<T>(1.41057047e-26));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::shielded_proton_magn_moment<
                    T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::shielded_proton_magn_moment<
                 T>::uncertainty() == static_cast<T>(1.2e-33));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::shielded_proton_magn_moment<
                    T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2002::shielded_proton_magn_moment<
                    T>::precision()));
}

// shielded proton magn. moment to Bohr magneton ratio
// (0.001520993132 ± 1.6e-11)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    shielded_proton_magn_moment_to_Bohr_magneton_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_Bohr_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_Bohr_magneton_ratio<T>::value() ==
      static_cast<T>(0.001520993132));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_proton_magn_moment_to_Bohr_magneton_ratio<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_proton_magn_moment_to_Bohr_magneton_ratio<
                     T>::uncertainty() == static_cast<T>(1.6e-11));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_Bohr_magneton_ratio<T>::precision()));
}

// shielded proton magn. moment to nuclear magneton ratio
// (2.792775604 ± 3e-08)
BOOST_AUTO_TEST_CASE_TEMPLATE(
    shielded_proton_magn_moment_to_nuclear_magneton_ratio, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_nuclear_magneton_ratio<T>::value()));
  BOOST_TEST(
      triumf::constants::codata_2002::
          shielded_proton_magn_moment_to_nuclear_magneton_ratio<T>::value() ==
      static_cast<T>(2.792775604));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_proton_magn_moment_to_nuclear_magneton_ratio<
                            T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::
                 shielded_proton_magn_moment_to_nuclear_magneton_ratio<
                     T>::uncertainty() == static_cast<T>(3e-08));
  BOOST_TEST(
      std::isfinite(triumf::constants::codata_2002::
                        shielded_proton_magn_moment_to_nuclear_magneton_ratio<
                            T>::precision()));
  BOOST_TEST(
      !std::signbit(triumf::constants::codata_2002::
                        shielded_proton_magn_moment_to_nuclear_magneton_ratio<
                            T>::precision()));
}

// {220} lattice spacing of silicon
// (1.920155965e-10 ± 7e-18) m
BOOST_AUTO_TEST_CASE_TEMPLATE(lattice_spacing_of_silicon_220, T, test_types) {
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
          T>::value()));
  BOOST_TEST(triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
                 T>::value() == static_cast<T>(1.920155965e-10));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
          T>::uncertainty()));
  BOOST_TEST(triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
                 T>::uncertainty() == static_cast<T>(7e-18));
  BOOST_TEST(std::isfinite(
      triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
          T>::precision()));
  BOOST_TEST(!std::signbit(
      triumf::constants::codata_2002::lattice_spacing_of_silicon_220<
          T>::precision()));
}
