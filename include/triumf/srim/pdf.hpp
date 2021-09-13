#ifndef TRIUMF_SRIM_PDF_HPP
#define TRIUMF_SRIM_PDF_HPP

#include <boost/math/constants/constants.hpp>
// #include <boost/math/distributions/lognormal.hpp>
// #include <boost/math/distributions/skew_normal.hpp>
#include <boost/math/quadrature/tanh_sinh.hpp>

#include <boost/math/special_functions/beta.hpp>

#include <cmath>

// TRIUMF: Canada's accelerator centre
namespace triumf {

// Stopping and Range of Ions in Matter (SRIM)
namespace srim {

// probability density functions (PDF)
namespace pdf {

/// see Eq. (5.6) in Md Masrur Hossain's MSc thesis, UBC, 2006, p. 52.
template <typename T> T custom(T x, T alpha, T beta, T sigma, T x_max, T N) {
  T y = x / x_max;
  return y < 0.0 or y > 1.0 ? 0.0
                            : N * std::pow(y, alpha) * std::pow(1.0 - y, beta) *
                                  std::exp(-std::pow((x - x_max) / sigma, 2));
}

/// see Eq. (5.6) in Md Masrur Hossain's MSc thesis, UBC, 2006, p. 52.
template <typename T> T custom(const T *x, const T *par) {
  // parameters
  T alpha = par[0];
  T beta = par[1];
  T sigma = par[2];
  T x_max = par[3];
  T N = par[4];
  T y = *x / x_max;

  // ensure function is always properly normalized!
  boost::math::quadrature::tanh_sinh<T> integrator;
  auto integrand = [&](T z) { return custom(z, alpha, beta, sigma, x_max, N); };
  T I = integrator.integrate(integrand, 0.0, x_max);

  // return the normalized function
  return custom(*x, alpha, beta, sigma, x_max, N) / I;
}

/// beta distribution - x in [0, 1]
template <typename T> T _beta(T x, T alpha, T beta) {
  if ((x < 0.0) or (x > 1.0)) {
    return 0.0;
  } else {
    return std::pow(x, alpha - 1.0) * std::pow(1.0 - x, beta - 1.0) /
           boost::math::beta<T, T>(alpha, beta);
  }
}

/// modified beta distribution - x in [0, x_max]
template <typename T> T modified_beta(T x, T alpha, T beta, T x_max) {
  T y = x / x_max;
  return _beta<T>(y, alpha, beta) / x_max;
}

/// modified beta distribution - x in [0, x_max]
/// interface for ROOT TF1
template <typename T> T modified_beta(const T *x, const T *par) {
  T alpha = par[0];
  T beta = par[1];
  T x_max = par[2];
  return modified_beta<T>(*x, alpha, beta, x_max);
}

} // namespace pdf

} // namespace srim

} // namespace triumf

#endif // TRIUMF_SRIM_PDF_HPP
