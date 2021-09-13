#define BOOST_TEST_MODULE SRIM_PDF
#include <boost/test/included/unit_test.hpp>

#include <limits>
#include <tuple>

typedef std::tuple<float, double, long double> test_types;

#include <triumf/srim/pdf.hpp>

//
BOOST_AUTO_TEST_CASE_TEMPLATE(modified_beta, T, test_types) {
  T alpha = 2.0;
  T beta = 3.0;
  T z_max = 100.0;

  BOOST_TEST(triumf::srim::pdf::modified_beta<T>(-1.0, alpha, beta, z_max) ==
             static_cast<T>(0.0));
  BOOST_TEST(triumf::srim::pdf::modified_beta<T>(z_max + 1.0, alpha, beta,
                                                 z_max) == static_cast<T>(0.0));
}
