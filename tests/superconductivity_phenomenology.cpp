#define BOOST_TEST_MODULE SRF
#include <boost/test/included/unit_test.hpp>

#include <limits>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/numpy.hpp>
#include <triumf/superconductivity/phenomenology.hpp>

//
BOOST_AUTO_TEST_CASE_TEMPLATE(halbritter_gap, T, test_types) {
  BOOST_TEST(triumf::superconductivity::phenomenology::reduced_gap<T>(-10.0) ==
             static_cast<T>(1.0));
  BOOST_TEST(triumf::superconductivity::phenomenology::reduced_gap<T>(0.0) ==
             static_cast<T>(1.0));
  BOOST_TEST(triumf::superconductivity::phenomenology::reduced_gap<T>(1.0) ==
             static_cast<T>(0.0));
  BOOST_TEST(triumf::superconductivity::phenomenology::reduced_gap<T>(10.0) ==
             static_cast<T>(0.0));
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(penetration_depth, T, test_types) {
  BOOST_TEST(
      triumf::superconductivity::phenomenology::reduced_penetration_depth<T>(
          -10.0, 4) == static_cast<T>(1.0));
  BOOST_TEST(
      triumf::superconductivity::phenomenology::reduced_penetration_depth<T>(
          0.0, 4) == static_cast<T>(1.0));
  BOOST_TEST(
      triumf::superconductivity::phenomenology::reduced_penetration_depth<T>(
          1.0, 4) == std::numeric_limits<T>::infinity());
  BOOST_TEST(
      triumf::superconductivity::phenomenology::reduced_penetration_depth<T>(
          10.0, 4) == std::numeric_limits<T>::infinity());
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(critical_temperature, T, test_types) {
  // define some constants to use in the tests
  constexpr T T_c = 9.25; // K
  constexpr T B_c2 = 400; // mT
  constexpr T gamma = 2.0;
  // explicit tests for edge cases
  BOOST_TEST(triumf::superconductivity::phenomenology::critical_temperature<T>(
                 -1.0 * B_c2, T_c, B_c2, gamma) == static_cast<T>(T_c));
  BOOST_TEST(triumf::superconductivity::phenomenology::critical_temperature<T>(
                 0.0 * B_c2, T_c, B_c2, gamma) == static_cast<T>(T_c));
  BOOST_TEST(triumf::superconductivity::phenomenology::critical_temperature<T>(
                 1.1 * B_c2, T_c, B_c2, gamma) == static_cast<T>(0.0));
  // tests for valid input range
  for (const auto &B : triumf::numpy::linspace<T>(0.0, B_c2, 100)) {
    BOOST_TEST(
        triumf::superconductivity::phenomenology::critical_temperature<T>(
            B, T_c, B_c2, gamma) <= T_c);
  }
}
