#ifndef TRIUMF_BNMR_SLR_SQRT_EXP_HPP
#define TRIUMF_BNMR_SLR_SQRT_EXP_HPP

#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed square root exponential integral (from 0 to time_p <= time)
template <typename T = double>
T pulsed_sqrt_exp_integral(T time, T time_p, T nuclear_lifetime, T slr_rate) {
  // make sure that
  assert(time >= time_p);

  // simplify the arguments
  T arg_1 = (slr_rate * nuclear_lifetime * nuclear_lifetime +
             4.0 * std::sqrt((time - time_p) * slr_rate) * nuclear_lifetime +
             4.0 * (time - time_p)) /
            (4.0 * nuclear_lifetime);
  T arg_2 = (slr_rate * nuclear_lifetime * nuclear_lifetime +
             4.0 * std::sqrt(time * slr_rate) * nuclear_lifetime + 4.0 * time) /
            (4.0 * nuclear_lifetime);
  T exp_1 = std::pow(slr_rate * nuclear_lifetime, 1.5) *
            std::exp(slr_rate * nuclear_lifetime / 4) / (2.0 * slr_rate);
  T exp_2 = std::pow(slr_rate * nuclear_lifetime, 1.5) *
            std::exp(slr_rate * nuclear_lifetime / 4);

  // return the result in terms of the full (non-normalized) upper incomplete
  // gamma function
  return -boost::math::tgamma(0.5, arg_1) * exp_1 +
         boost::math::tgamma(0.5, arg_2) * exp_1 +
         boost::math::tgamma(1.0, arg_1) * exp_2 -
         boost::math::tgamma(1.0, arg_2) * exp_2;
}

/// pulsed square root exponential
template <typename T = double>
T pulsed_sqrt_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                  T slr_rate) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_sqrt_exp_integral(time, time, nuclear_lifetime, slr_rate) /
           normalization(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_sqrt_exp_integral(time, pulse_length, nuclear_lifetime,
                                     slr_rate) /
            normalization(pulse_length, nuclear_lifetime)) /
           std::exp(-(time - pulse_length) / nuclear_lifetime);
  } else {
    return 0.0;
  }
}

/// pulsed square root exponential (ROOT)
template <typename T = double> T pulsed_sqrt_exp(const T *x, const T *par) {
  return pulsed_sqrt_exp<T>(*x, par[0], par[1], par[2], par[3]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_SQRT_EXP_HPP