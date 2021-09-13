#ifndef TRIUMF_NMR_DIPOLE_DIPOLE_HPP
#define TRIUMF_NMR_DIPOLE_DIPOLE_HPP

#include <cmath>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// Nuclear Magnetic Resonance (NMR)
namespace nmr {

// dipole-dipole spin-lattice relaxation
namespace dipole_dipole {

// generic spectral density function J(w)
template <typename T> T j(T omega, T nu_c) {
  return nu_c / (nu_c * nu_c + omega * omega);
}

// dipole-dipole SLR rate 1/T1 for unlike spins
// see e.g.,:
// - M. Mehring, "Principles of High Resolution NMR in Solids", 2nd Ed.
//   (Springer, Berlin, 1983), Ch. 8, p. 262, Eq. (8.21)
// - H. W. Spiess, "Rotation of molecules and nuclear spin-relaxation", in
//   NMR Basic Principles and Progress Vol. 15, (Springer, Berlin, 1978),
//   p. 121, Tab. 4.6.
// - A. Abragram, Ch. VIII, p. 295 (but with different numerical factors)?
template <typename T> T slr_rate(T B_0, T B_d, T nu_c, T gamma_I, T gamma_S) {
  // NMR frequencies
  T omega_I = gamma_I * B_0;
  T omega_S = gamma_S * B_0;
  // make sure the "coupling" term isn't negative
  return std::abs(gamma_I * gamma_S) * B_d * B_d *
         ((1.0 / 3.0) * j<T>(omega_I - omega_S, nu_c) +
          (1.0 / 1.0) * j(omega_I, nu_c) +
          (2.0 / 1.0) * j<T>(omega_I + omega_S, nu_c));
}

} // namespace dipole_dipole

} // namespace nmr

} // namespace triumf

#endif // TRIUMF_NMR_DIPOLE_DIPOLE_HPP
