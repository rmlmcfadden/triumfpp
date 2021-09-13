#define BOOST_TEST_MODULE SRF
#include <boost/test/included/unit_test.hpp>

#include <limits>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include "triumf/superconductivity/bcs.hpp"
#include "triumf/superconductivity/pippard.hpp"

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pippard_g, T, test_types) {
  BOOST_TEST(triumf::superconductivity::pippard::g<T>(0.0) ==
             static_cast<T>(1.0));

  T large_value = 1e10;
  BOOST_TEST(triumf::superconductivity::pippard::g<T>(large_value) ==
                 static_cast<T>(0.0),
             boost::test_tools::tolerance(0.01));
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pippard_J_0, T, test_types) {
  T T_c = 10.0;
  T Delta = triumf::superconductivity::bcs::gap_meV<T>(T_c);
  T n = 4.0;

  BOOST_TEST(triumf::superconductivity::pippard::J_0<T>(
                 0.0 * T_c, T_c, Delta, n) == static_cast<T>(1.0));

  BOOST_TEST(std::isnan(
      triumf::superconductivity::pippard::J_0<T>(1.0 * T_c, T_c, Delta, n)));
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pippard_coherence_length, T, test_types) {
  T T_c = 10.0;
  T Delta = triumf::superconductivity::bcs::gap_meV<T>(T_c);
  T n = 4.0;
  T xi_0 = 100.0;
  T ell = 1.0;

  //
  T effective_xi = 1.0 / ((1.0 / xi_0) + (1.0 / ell));
  BOOST_TEST(triumf::superconductivity::pippard::coherence_length<T>(
                 0.0 * T_c, T_c, Delta, n, xi_0, ell) == effective_xi);

  //
  BOOST_TEST(std::isnan(triumf::superconductivity::pippard::coherence_length<T>(
      1.0 * T_c, T_c, Delta, n, xi_0, ell)));

  //
  ell = std::numeric_limits<T>::infinity();
  effective_xi = 1.0 / ((1.0 / xi_0) + (1.0 / ell));
  BOOST_TEST(triumf::superconductivity::pippard::coherence_length<T>(
                 0.0 * T_c, T_c, Delta, n, xi_0, ell) == effective_xi);
}

