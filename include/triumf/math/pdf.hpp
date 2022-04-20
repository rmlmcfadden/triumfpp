#ifndef TRIUMF_MATH_PDF_HPP
#define TRIUMF_MATH_PDF_HPP

#include <boost/math/constants/constants.hpp>
#include <boost/math/distributions.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace math {

// probability density function (PDF)
namespace pdf {

/// exponentially modified Gaussian distribution
template <typename T = double>
T exponentially_modified_gaussian(T x, T mu, T sigma, T lambda) {
  return boost::math::constants::half<T>() * lambda *
         std::exp(2.0 * mu + lambda * sigma * sigma - 2.0 * x) *
         std::erfc((mu + lambda * sigma * sigma - x) /
                   (boost::math::constants::root_two<T>() * sigma));
}

/// exponentially modified Gaussian distribution (ROOT interface)
template <typename T = double>
T exponentially_modified_gaussian(const T *x, const T *par) {
  return exponentially_modified_gaussian<T>(*x, par[0], par[1], par[2]);
}

/// skew-normal distribution
template <typename T = double>
T skew_normal_distribution(T x, T mu, T sigma, T alpha) {
  boost::math::skew_normal_distribution<T> distribution(mu, sigma, alpha);
  return boost::math::pdf(distribution, x);
}

/// skew-normal distribution (ROOT interface)
template <typename T = double>
T skew_normal_distribution(const T *x, const T *par) {
  return skew_normal_distribution<T>(*x, par[0], par[1], par[2]);
}

/// modified beta distribution - x in [0, x_max]
template <typename T = double> T modified_beta(T x, T alpha, T beta, T x_max) {
  if (x <= 0.0 or x >= x_max) {
    return 0.0;
  }
  T y = x / x_max;
  boost::math::beta_distribution<T> distribution(alpha, beta);
  return boost::math::pdf(distribution, y) / x_max;
}

/// modified beta distribution - x in [0, x_max] (ROOT interface)
template <typename T = double> T modified_beta(const T *x, const T *par) {
  T alpha = par[0];
  T beta = par[1];
  T x_max = par[2];
  return modified_beta<T>(*x, alpha, beta, x_max);
}

/// two modified beta distributions.
template <typename T = double>
T two_modified_beta(T x, T alpha_1, T beta_1, T x_max_1, T fraction_1,
                    T alpha_2, T beta_2, T x_max_2) {
  return fraction_1 * modified_beta<T>(x, alpha_1, beta_1, x_max_1) +
         (1.0 - fraction_1) * modified_beta<T>(x, alpha_2, beta_2, x_max_2);
}

/// modified non-central beta distribution - x in [0, x_max]
template <typename T = double>
T modified_non_central_beta(T x, T alpha, T beta, T lambda, T x_max) {
  if (x <= 0.0 or x >= x_max) {
    return 0.0;
  }
  T y = x / x_max;
  if (lambda == 0.0) {
      return modified_beta(x, alpha, beta, x_max);
  }
  boost::math::non_central_beta_distribution<T> distribution(alpha, beta,
                                                             lambda);
  return boost::math::pdf(distribution, y) / x_max;
}

/// modified non-central beta distribution - x in [0, x_max] (ROOT interface)
template <typename T = double>
T modified_non_central_beta(const T *x, const T *par) {
  return modified_non_central_beta<T>(*x, par[0], par[1], par[2], par[3]);
}

} // namespace pdf

} // namespace math

} // namespace triumf

#endif // TRIUMF_MATH_PDF_HPP
