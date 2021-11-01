#ifndef TRIUMF_BNMR_SLR_EXP_HPP
#define TRIUMF_BNMR_SLR_EXP_HPP

#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed exponential integral (from 0 to time_p <= time)
template <typename T = double>
T pulsed_exp_integral(T time, T time_p, T nuclear_lifetime, T slr_rate) {
  return nuclear_lifetime * std::exp(-time / nuclear_lifetime) *
         (std::exp(time_p / nuclear_lifetime + time_p * slr_rate) - 1.0) /
         ((slr_rate * nuclear_lifetime + 1.0) * std::exp(time * slr_rate));
}

/// pulsed exponential integral
template <typename T = double>
T pulsed_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
             T slr_rate) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_exp_integral(time, time, nuclear_lifetime, slr_rate) /
           normalization(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_exp_integral(pulse_length, pulse_length, nuclear_lifetime,
                                slr_rate) /
            normalization(pulse_length, nuclear_lifetime)) *
           std::exp(-slr_rate * (time - pulse_length));
  } else {
    return 0.0;
  }
}

/// pulsed exponential integral (ROOT)
template <typename T = double> T pulsed_exp(const T *x, const T *par) {
  return pulsed_exp<T>(*x, par[0], par[1], par[2], par[3]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_EXP_HPP