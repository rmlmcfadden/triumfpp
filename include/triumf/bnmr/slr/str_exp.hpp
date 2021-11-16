#ifndef TRIUMF_BNMR_SLR_STR_EXP_HPP
#define TRIUMF_BNMR_SLR_STR_EXP_HPP

#include <boost/math/quadrature/tanh_sinh.hpp>
#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed stretched exponential integral (from 0 to time_p)
template <typename T = double>
T pulsed_str_exp_integral(T time, T time_p, T nuclear_lifetime, T slr_rate,
                          T beta) {
  // integrand for the numeric integral
  auto integrand = [=](T t_p) {
    return std::exp(-(time - t_p) / nuclear_lifetime) *
           std::exp(-std::pow(slr_rate * (time - t_p), beta));
  };
  // create the integrator for tanh-sinh quadrature
  static boost::math::quadrature::tanh_sinh<T> integrator;
  // evaluate the integral from 0 to time_p
  T Q = integrator.integrate(integrand, 0.0, time_p);
  return Q;
}

/// pulsed stretched exponential
template <typename T = double>
T pulsed_str_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                 T slr_rate, T beta) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_str_exp_integral<T>(time, time, nuclear_lifetime, slr_rate,
                                      beta) /
           normalization<T>(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_str_exp_integral<T>(time, pulse_length, nuclear_lifetime,
                                       slr_rate, beta) /
            normalization<T>(pulse_length, nuclear_lifetime)) /
           std::exp(-(time - pulse_length) / nuclear_lifetime);
  } else {
    return 0.0;
  }
}

/// pulsed stretched exponential (ROOT)
template <typename T = double> T pulsed_str_exp(const T *x, const T *par) {
  return pulsed_str_exp<T>(*x, par[0], par[1], par[2], par[3], par[4]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_STR_EXP_HPP