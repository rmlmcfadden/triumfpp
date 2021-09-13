#ifndef TRIUMF_SUPERCONDUCTIVITY_DYNES_HPP
#define TRIUMF_SUPERCONDUCTIVITY_DYNES_HPP

#include <cmath>
#include <complex>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

//
namespace dynes {

// density of states w/ broadening term Gamma
// R. C. Dynes et al., "Direct measurement of quasiparticle-lifetime broadening
// in a strong-coupled superconductor", Phys. Rev. Lett. 41, 1509 (1978).
template <typename T = double> T N(T energy, T Gamma, T Delta) {
  std::complex<T> E = std::complex<T>(energy, -Gamma);
  std::complex<T> D = std::complex<T>(Delta, 0.0);
  std::complex<T> result = E / std::sqrt(E * E - D * D);
  return result.real();
}

// BCS coherence factor - used in calculating the Hebel-Slichter peak
template <typename T = double> T M(T energy, T Gamma, T Delta) {
  std::complex<T> E = std::complex<T>(energy, -Gamma);
  std::complex<T> D = std::complex<T>(Delta, 0.0);
  std::complex<T> result = D / std::sqrt(E * E - D * D);
  return result.real();
}

} // namespace dynes

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_DYNES_HPP
