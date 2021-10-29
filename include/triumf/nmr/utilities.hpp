#ifndef TRIUMF_NMR_UTILITIES_HPP
#define TRIUMF_NMR_UTILITIES_HPP

#include <boost/math/constants/constants.hpp>

#include <triumf/constants/codata_2018.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// nuclear magnetic resonance
namespace nmr {

// miscellaneous helper functions
namespace utilities {

// calculate the gyromagnetic ratio (MHz / T) of an NMR probe nucleus from its
// magnetic dipole moment (nm) and spin quantum number
template <typename T>
constexpr T calculate_gamma(T magnetic_dipole_moment, T spin_quantum_number) {
  return 1e6 * boost::math::constants::two_pi<T>() *
         triumf::constants::codata_2018::nuclear_magneton_in_MHz_T<T>::value() *
         magnetic_dipole_moment / spin_quantum_number;
}

} // namespace utilities

} // namespace nmr

} // namespace triumf

#endif // TRIUMF_NMR_UTILITIES_HPP
