#ifndef TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP
#define TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP

#include <boost/math/constants/constants.hpp>
#include <cmath>
#include <triumf/bnmr/slr/common.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// pulsed Gaussian distribution of exponentials integral
/// (from 0 to time_p <= time)
template <typename T = double>
T pulsed_gauss_dist_exp_integral(T time, T time_p, T nuclear_lifetime,
                                 T slr_rate, T sigma) {
  // imaginary number i
  std::complex<T> i(0.0, -1.0);
  // common exponential factor
  T expo =
      std::exp(-slr_rate / nuclear_lifetime / sigma / sigma -
               1.0 / 2.0 / sigma / sigma / nuclear_lifetime / nuclear_lifetime -
               slr_rate * slr_rate / 2.0 / sigma / sigma);
  // argument for the first error function
  std::complex<T> erf_arg1 =
      (((boost::math::constants::root_two<T>() * i * time -
         boost::math::constants::root_two<T>() * i * time_p) *
            sigma * sigma -
        boost::math::constants::root_two<T>() * i * slr_rate) *
           nuclear_lifetime -
       boost::math::constants::root_two<T>() * i) /
      (2.0 * sigma * nuclear_lifetime);
  // argument for the second error function
  std::complex<T> erf_arg2 =
      ((i * time * sigma * sigma - i * slr_rate) * nuclear_lifetime - i) /
      (boost::math::constants::root_two<T>() * sigma * nuclear_lifetime);
  // evaluate the result
  std::complex<T> result = boost::math::constants::root_pi<T>() * i * exp *
                           (boost::math::erf<std::complex<T>>(erf_arg1) -
                            boost::math::erf<std::complex<T>>(erf_arg2)) /
                           (boost::math::constants::root_two<T>() * sigma);
  // return only the real part
  return result.real();
}

/// pulsed Gaussian distribution of exponentials
template <typename T = double>
T pulsed_gauss_dist_exp(T time, T nuclear_lifetime, T pulse_length, T asymmetry,
                        T slr_rate, T sigma) {
  if (time == 0.0) {
    return asymmetry;
  } else if (time > 0.0 and time <= pulse_length) {
    return asymmetry *
           pulsed_gauss_dist_exp_integral(time, time, nuclear_lifetime,
                                          slr_rate, sigma) /
           normalization(time, nuclear_lifetime);
  } else if (time > pulse_length) {
    return (asymmetry *
            pulsed_gauss_dist_exp_integral(pulse_length, pulse_length,
                                           nuclear_lifetime, slr_rate, sigma) /
            normalization(pulse_length, nuclear_lifetime)) /
           std::exp(-(time - pulse_length) / nuclear_lifetime);
  } else {
    return 0.0;
  }
}

/// pulsed Gaussian distribution of exponentials (ROOT)
template <typename T = double>
T pulsed_gauss_dist_exp(const T *x, const T *par) {
  return pulsed_gauss_dist_exp<T>(*x, par[0], par[1], par[2], par[3], par[4]);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_GAUSS_DIST_EXP_HPP
