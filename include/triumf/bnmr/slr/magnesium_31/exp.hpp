#ifndef TRIUMF_BNMR_SLR_MAGNESIUM_31_EXP_HPP
#define TRIUMF_BNMR_SLR_MAGNESIUM_31_EXP_HPP

#include <triumf/bnmr/slr/exp.hpp>
#include <triumf/bnmr/slr/magnesium_31/decay_corrections.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

// magnesium-31
namespace magnesium_31 {

/// pulsed exponential with magnesium-31 decay corrections
template <typename T = double>
T pulsed_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                  T slr_rate) {
  double beam_pulse = 1e6;
  return fa_31Mg(time, pulse_length, beam_rate) *
         pulsed_exp<T>(time, nuclear_lifetime, pulse_length, asymmetry,
                       slr_rate);
}

/// pulsed exponential with magnesium-31 decay corrections (ROOT)
template <typename T = double> T pulsed_exp(const T *x, const T *par) {
  return pulsed_exp<T>(*x, par[0], par[1], par[2], par[3]);
}

} // namespace magnesium_31

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_MAGNESIUM_31_EXP_HPP
