#ifndef TRIUMF_BNMR_SLR_SQ_EXP_HPP
#define TRIUMF_BNMR_SLR_SQ_EXP_HPP

#include <boost/math/constants/constants.hpp>
#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed square exponential integral (from 0 to time_p <= time)
template <typename T = double>
T pulsed_sq_exp_integral(T time, T time_p, T nuclear_lifetime, T slr_rate) {
  // make sure that
  assert(time >= time_p);
  // break up the expression into smaller chunks
  T term_1 = (boost::math::constants::root_pi<T>() / (2.0 * slr_rate)) *
             std::exp(1.0 / (4.0 * slr_rate * slr_rate * nuclear_lifetime *
                             nuclear_lifetime));
  T term_2 =
      std::erf((2.0 * time * slr_rate * slr_rate * nuclear_lifetime + 1.0) /
               (2.0 * slr_rate * nuclear_lifetime));
  T term_3 = std::erf(
      ((2.0 * (time - time_p)) * slr_rate * slr_rate * nuclear_lifetime + 1.0) /
      (2.0 * slr_rate * nuclear_lifetime));
  return term_1 * (term_2 - term_3);
}

/// pulsed square exponential
template <typename T = double>
T pulsed_sq_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                T slr_rate) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_sq_exp_integral(time, time, nuclear_lifetime, slr_rate) /
           normalization(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_sq_exp_integral(time, pulse_length, nuclear_lifetime,
                                   slr_rate) /
            normalization(pulse_length, nuclear_lifetime)) /
           std::exp(-(time - pulse_length) / nuclear_lifetime);
  } else {
    return 0.0;
  }
}

/// pulsed square exponential (ROOT)
template <typename T = double> T pulsed_sq_exp(const T *x, const T *par) {
  return pulsed_sq_exp<T>(*x, par[0], par[1], par[2], par[3]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_SQ_EXP_HPP