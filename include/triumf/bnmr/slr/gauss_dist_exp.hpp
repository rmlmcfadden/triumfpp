#ifndef TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP
#define TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP

#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/tanh_sinh.hpp>
#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed Gaussian distribution of exponentials integral
/// (from 0 to time_p <= time)
template <typename T = double>
T pulsed_gauss_dist_exp_integral(T time, T time_p, T nuclear_lifetime,
                                 T slr_rate, T sigma) {
  // make sure that
  assert(time >= time_p);
  // integrand for the numeric integral
  auto integrand = [=](T t_p) {
    // translated from Maxima
    T expo1 = std::exp(
        boost::math::constants::half<T>() * time * time * sigma * sigma +
        boost::math::constants::half<T>() * t_p * t_p * sigma * sigma +
        t_p * slr_rate);
    T expo2 = std::exp(-time / nuclear_lifetime + t_p / nuclear_lifetime -
                       t_p * time * sigma * sigma);
    T expo3 = std::exp(time * slr_rate);
    return -expo2 *
           (expo1 * std::erf(((time - t_p) * sigma * sigma - slr_rate) /
                             boost::math::constants::root_two<T>() / sigma) -
            expo1) /
           (expo3 * std::erf(slr_rate / sigma /
                             boost::math::constants::root_two<T>()) +
            expo3);
  };
  // create the integrator for tanh-sinh quadrature
  static boost::math::quadrature::tanh_sinh<T> integrator;
  // evaluate the integral from 0 to time_p
  T Q = integrator.integrate(integrand, 0.0, time_p);
  return Q;
}

/// pulsed Gaussian distribution of exponentials
template <typename T = double>
T pulsed_gauss_dist_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                        T slr_rate, T sigma) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_gauss_dist_exp_integral(time, time, nuclear_lifetime,
                                          slr_rate, sigma) /
           normalization(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_gauss_dist_exp_integral(time, pulse_length, nuclear_lifetime,
                                           slr_rate, sigma) /
            normalization(pulse_length, nuclear_lifetime)) /
           std::exp(-(time - pulse_length) / nuclear_lifetime);
  } else {
    return 0.0;
  }
}

/// pulsed Gaussian distribution of exponentials (ROOT)
template <typename T = double>
T pulsed_gauss_dist_exp(const T *x, const T *par) {
  return pulsed_gauss_dist_exp<T>(*x, par[0], par[1], par[2], par[3], par[4]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP
