#define BOOST_TEST_MODULE SRF
#include <boost/test/included/unit_test.hpp>

#include <array>
#include <limits>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include "triumf/superconductivity/bcs.hpp"

//
BOOST_AUTO_TEST_CASE_TEMPLATE(bcs_gap, T, test_types) {
  // check the correct value is returned for limiting values
  BOOST_TEST(triumf::superconductivity::bcs::reduced_gap<T>(-10.0) ==
             static_cast<T>(1.0));
  BOOST_TEST(triumf::superconductivity::bcs::reduced_gap<T>(0.0) ==
             static_cast<T>(1.0));
  BOOST_TEST(triumf::superconductivity::bcs::reduced_gap<T>(1.0) ==
             static_cast<T>(0.0));
  BOOST_TEST(triumf::superconductivity::bcs::reduced_gap<T>(10.0) ==
             static_cast<T>(0.0));

  // check against tabulated values from:
  //
  // B. Mühlschlegel.
  // "Die thermodynamischen Funktionen des Supraleiters".
  // Z. Physik 155, 313-327 (1959).
  // https://doi.org/10.1007/BF01332932
  constexpr size_t N = 44;
  constexpr T tolerance = 0.3; // in percent
  std::array<T, N> t = {0.14, 0.16, 0.18, 0.20, 0.22, 0.24, 0.26, 0.28, 0.30,
                        0.32, 0.34, 0.36, 0.38, 0.40, 0.42, 0.44, 0.46, 0.48,
                        0.50, 0.52, 0.54, 0.56, 0.58, 0.60, 0.62, 0.64, 0.66,
                        0.68, 0.70, 0.72, 0.74, 0.76, 0.78, 0.80, 0.82, 0.84,
                        0.86, 0.88, 0.90, 0.92, 0.94, 0.96, 0.98, 1.0};
  std::array<T, N> delta = {
      1.0000, 1.0000, 1.0000, 0.9999, 0.9997, 0.9994, 0.9989, 0.9982, 0.9971,
      0.9957, 0.9938, 0.9915, 0.9885, 0.985,  0.9809, 0.9760, 0.9704, 0.9641,
      0.9569, 0.9488, 0.9399, 0.9299, 0.919,  0.9070, 0.8939, 0.8796, 0.8640,
      0.8474, 0.8288, 0.8089, 0.7874, 0.764,  0.7386, 0.7110, 0.6810, 0.6480,
      0.6117, 0.5715, 0.5263, 0.4749, 0.4148, 0.3416, 0.2436, 0.0000};

  for (std::size_t i = 0; i < N; ++i) {
    BOOST_CHECK_CLOSE(triumf::superconductivity::bcs::reduced_gap<T>(t.at(i)),
                      delta.at(i), tolerance);
  }
}

//
BOOST_AUTO_TEST_CASE_TEMPLATE(bcs_gap_meV, T, test_types) {
  BOOST_TEST(triumf::superconductivity::bcs::gap_meV<T>(0.0) ==
             static_cast<T>(0.0));
}
