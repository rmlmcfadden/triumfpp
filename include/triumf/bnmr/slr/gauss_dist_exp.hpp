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
    return std::exp(
        (((time * time - 2.0 * t_p * time + t_p * t_p) * sigma * sigma +
          (2.0 * t_p - 2.0 * time) * slr_rate) *
             nuclear_lifetime -
         2.0 * time + 2.0 * t_p) /
        (2.0 * nuclear_lifetime));
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
