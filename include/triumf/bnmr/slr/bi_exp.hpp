#ifndef TRIUMF_BNMR_SLR_BI_EXP_HPP
#define TRIUMF_BNMR_SLR_BI_EXP_HPP

#include <cmath>
#include <triumf/bnmr/slr/exp.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed biexponential
template <typename T = double>
T pulsed_bi_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                T fraction_slow, T slr_rate_slow, T slr_rate_fast) {
  return pulsed_exp<T>(time, nuclear_lifetime, pulse_length,
                       asymmetry * fraction_slow, slr_rate_slow) +
         pulsed_exp<T>(time, nuclear_lifetime, pulse_length,
                       asymmetry * (1.0 - fraction_slow), slr_rate_fast);
}

/// pulsed biexponential (ROOT)
template <typename T = double> T pulsed_bi_exp(const T *x, const T *par) {
  return pulsed_bi_exp<T>(*x, par[0], par[1], par[2], par[3], par[4], par[5]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_BI_EXP_HPP