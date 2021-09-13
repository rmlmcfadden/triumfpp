#define BOOST_TEST_MODULE SRF
#include <boost/test/included/unit_test.hpp>

#include <limits>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include "triumf/superconductivity/phenomenology.hpp"

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


