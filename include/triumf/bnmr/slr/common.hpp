#ifndef TRIUMF_BNMR_SLR_COMMON_HPP
#define TRIUMF_BNMR_SLR_COMMON_HPP

#include <cmath>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// normalization for integration
template <typename T = double> T normalization(T time, T nuclear_lifetime) {
  return nuclear_lifetime * (1.0 - std::exp(-time / nuclear_lifetime));
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_COMMON_HPP