#define BOOST_TEST_MODULE BNMR_SLR
#include <boost/test/included/unit_test.hpp>

#include <cmath>
#include <triumf/bnmr/nuclei.hpp>
#include <triumf/bnmr/slr/bi_exp.hpp>
#include <triumf/bnmr/slr/exp.hpp>
#include <triumf/bnmr/slr/sq_exp.hpp>
#include <triumf/bnmr/slr/sqrt_exp.hpp>
#include <triumf/bnmr/slr/str_exp.hpp>
#include <triumf/numpy.hpp>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pulsed_exp, T, test_types) {
  //
  constexpr T pulse_length = 4.0;
  constexpr T nuclear_lifetime = triumf::bnmr::nuclei::lithium_8<T>::lifetime();
  constexpr T initial_asymmetry = 1.0;
  constexpr T slr_rate = 1.0;
  //
  BOOST_TEST(triumf::bnmr::slr::pulsed_exp<T>(-1.0, nuclear_lifetime,
                                              pulse_length, initial_asymmetry,
                                              slr_rate) == 0.0);
  BOOST_TEST(triumf::bnmr::slr::pulsed_exp<T>(0.0, nuclear_lifetime,
                                              pulse_length, initial_asymmetry,
                                              slr_rate) == initial_asymmetry);
  //
  for (auto &time : triumf::numpy::linspace<T>(0.0, 16.0, 100)) {
    BOOST_TEST(triumf::bnmr::slr::pulsed_exp<T>(time, nuclear_lifetime,
                                                pulse_length, initial_asymmetry,
                                                slr_rate) <= initial_asymmetry);
  }
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pulsed_sq_exp, T, test_types) {
  //
  constexpr T pulse_length = 4.0;
  constexpr T nuclear_lifetime = triumf::bnmr::nuclei::lithium_8<T>::lifetime();
  constexpr T initial_asymmetry = 1.0;
  constexpr T slr_rate = 1.0;
  //
  BOOST_TEST(
      triumf::bnmr::slr::pulsed_sq_exp<T>(-1.0, nuclear_lifetime, pulse_length,
                                          initial_asymmetry, slr_rate) == 0.0);
  BOOST_TEST(triumf::bnmr::slr::pulsed_sq_exp<T>(
                 0.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                 slr_rate) == initial_asymmetry);
  //
  for (auto &time : triumf::numpy::linspace<T>(0.0, 16.0, 100)) {
    BOOST_TEST(triumf::bnmr::slr::pulsed_sq_exp<T>(
                   time, nuclear_lifetime, pulse_length, initial_asymmetry,
                   slr_rate) <= initial_asymmetry);
  }
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pulsed_sqrt_exp, T, test_types) {
  //
  constexpr T pulse_length = 4.0;
  constexpr T nuclear_lifetime = triumf::bnmr::nuclei::lithium_8<T>::lifetime();
  constexpr T initial_asymmetry = 1.0;
  constexpr T slr_rate = 1.0;
  //
  BOOST_TEST(triumf::bnmr::slr::pulsed_sqrt_exp<T>(
                 -1.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                 slr_rate) == 0.0);
  BOOST_TEST(triumf::bnmr::slr::pulsed_sqrt_exp<T>(
                 0.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                 slr_rate) == initial_asymmetry);
  //
  for (auto &time : triumf::numpy::linspace<T>(0.0, 16.0, 100)) {
    BOOST_TEST(triumf::bnmr::slr::pulsed_sqrt_exp<T>(
                   time, nuclear_lifetime, pulse_length, initial_asymmetry,
                   slr_rate) <= initial_asymmetry);
  }
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pulsed_str_exp, T, test_types) {
  //
  constexpr T pulse_length = 4.0;
  constexpr T nuclear_lifetime = triumf::bnmr::nuclei::lithium_8<T>::lifetime();
  constexpr T initial_asymmetry = 1.0;
  constexpr T slr_rate = 1.0;
  //
  for (const auto &beta : triumf::numpy::linspace<T>(0.1, 1.0, 10)) {
    BOOST_TEST(triumf::bnmr::slr::pulsed_str_exp<T>(
                   -1.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                   slr_rate, beta) == 0.0);
    BOOST_TEST(triumf::bnmr::slr::pulsed_str_exp<T>(
                   0.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                   slr_rate, beta) == initial_asymmetry);
    //
    for (const auto &time : triumf::numpy::linspace<T>(0.0, 16.0, 100)) {
      BOOST_TEST(triumf::bnmr::slr::pulsed_str_exp<T>(
                     time, nuclear_lifetime, pulse_length, initial_asymmetry,
                     slr_rate, beta) <= initial_asymmetry);
    }
  }
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(pulsed_bi_exp, T, test_types) {
  //
  constexpr T pulse_length = 4.0;
  constexpr T nuclear_lifetime = triumf::bnmr::nuclei::lithium_8<T>::lifetime();
  constexpr T initial_asymmetry = 1.0;
  constexpr T fraction_slow = 0.75;
  constexpr T slr_rate_slow = 0.10;
  constexpr T slr_rate_fast = 10.0;
  //
  BOOST_TEST(triumf::bnmr::slr::pulsed_bi_exp<T>(
                 -1.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                 fraction_slow, slr_rate_slow, slr_rate_fast) == 0.0);
  BOOST_TEST(triumf::bnmr::slr::pulsed_bi_exp<T>(
                 0.0, nuclear_lifetime, pulse_length, initial_asymmetry,
                 fraction_slow, slr_rate_slow,
                 slr_rate_fast) == initial_asymmetry);
  //
  for (const auto &time : triumf::numpy::linspace<T>(0.0, 16.0, 100)) {
    BOOST_TEST(triumf::bnmr::slr::pulsed_bi_exp<T>(
                   time, nuclear_lifetime, pulse_length, initial_asymmetry,
                   fraction_slow, slr_rate_slow,
                   slr_rate_fast) <= initial_asymmetry);
  }
}