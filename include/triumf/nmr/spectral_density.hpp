#ifndef TRIUMF_NMR_SPECTRAL_DENSITY_HPP
#define TRIUMF_NMR_SPECTRAL_DENSITY_HPP

// Author: Ryan M. L. McFadden
// NMR spectral density functions for spin-lattice relaxation in solids.
//
// For additional details see:
//
// N. Bloembergen, E. M. Purcell, and R. V. Pound, "Relaxation Effects in
// Nuclear Magnetic Resonance Absorption", Phys. Rev. 73, 679-712 (1948).
// https://dx.doi.org/10.1103/PhysRev.73.679
//
// P. M. Richards, "Effect of low dimensionality on prefactor anomalies in
// superionic conductors", Solid State Commun. 25, 1019-1021 (1978).
// https://dx.doi.org/10.1016/0038-1098(78)90896-7
//
// C. A Sholl, "Nuclear spin relaxation by translational diffusion in liquids
// and solids: high- and low-frequency limits", J. Phys. C.: Solid State Phys.
// 14, 447-464 (1981). https://dx.doi.org/10.1088/0022-3719/14/4/018
//
// P. A. Beckmann, "Spectral densities and nuclear spin relaxation in solids",
// Phys. Rep. 171, 85-128 (1988).
// https://dx.doi.org/10.1016/0370-1573(88)90073-7
//
// W. Küchler, P. Heitjans, A. Payer, and R. Schöllhorn, "7Li NMR relaxation by
// diffusion in hexagonal and cubic LixTiS2". Solid State Ionics 70-71, Part 1,
// 434-438 (1994). https://dx.doi.org/10.1016/0167-2738(94)90350-6
//

#include <cmath>
#include <iostream>

#include <boost/math/constants/constants.hpp>

#include <triumf/constants/codata_2018.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// Nuclear Magnetic Resonance (NMR)
namespace nmr {

// Arrhenius correlation time
template <typename T = double>
T tau_c(T temperature, T prefactor, T activation_energy) {
  constexpr T boltzmann_constant =
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  if (temperature <= 0.0 or prefactor <= 0.0 or activation_energy < 0.0) {
    return 0.0;
  } else {
    return prefactor *
           std::exp(activation_energy / (boltzmann_constant * temperature));
  }
}

// Arrhenius correlation rate
template <typename T = double>
T nu_c(T temperature, T prefactor, T activation_energy) {
  constexpr T boltzmann_constant =
      triumf::constants::codata_2018::Boltzmann_constant_in_eV_K<T>::value();
  if (temperature <= 0.0 or prefactor <= 0.0 or activation_energy < 0.0) {
    return 0.0;
  } else {
    return prefactor *
           std::exp(-activation_energy / (boltzmann_constant * temperature));
  }
}

// Bloembergen-Purcell-Pound (i.e., Debye) - isotropic 3D fluctuations
template <typename T = double>
T j_3d(T correlation_time, T nmr_frequency, T interaction_strength,
       T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 2 or stretching_exponent < 1) {
    std::cout << "WARNING : stretching exponent outside of bounds : [1, 2]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * 2.0 * correlation_time /
         (1.0 +
          std::pow(nmr_frequency * correlation_time, stretching_exponent));
}

// Richards - empirocal function for 2D fluctuations that gives correct
// asymptotic limits
template <typename T = double>
T j_2d(T correlation_time, T nmr_frequency, T interaction_strength,
       T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 2 or stretching_exponent < 1) {
    std::cout << "WARNING : stretching exponent outside of bounds : [1, 2]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * correlation_time *
         std::log1p(
             std::pow(nmr_frequency * correlation_time, -stretching_exponent));
}

// Cole-Cole - correlated motion (j_cc -> j_bpp as stretching_exponent -> 1)
template <typename T = double>
T j_cc(T correlation_time, T nmr_frequency, T interaction_strength,
       T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 1 or stretching_exponent <= 0) {
    std::cout << "WARNING : stretching exponent outside of bounds : (0, 1]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * (2.0 / nmr_frequency) *
         std::sin(stretching_exponent * boost::math::constants::pi<T>() / 2.0) *
         (std::pow(nmr_frequency * correlation_time, stretching_exponent) /
          (1.0 +
           std::pow(nmr_frequency * correlation_time,
                    2.0 * stretching_exponent) +
           2.0 *
               std::cos(stretching_exponent * boost::math::constants::pi<T>() /
                        2.0) *
               std::pow(nmr_frequency * correlation_time,
                        stretching_exponent)));
}

// Davidson-Cole - distribution of barriers (j_dc -> j_bpp as
// stretching_exponent -> 1)
template <typename T = double>
T j_dc(T correlation_time, T nmr_frequency, T interaction_strength,
       T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 1 or stretching_exponent <= 0) {
    std::cout << "WARNING : stretching exponent outside of bounds : (0, 1]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * (2.0 / nmr_frequency) *
         std::sin(stretching_exponent *
                  std::atan(nmr_frequency * correlation_time)) /
         std::pow(1.0 + nmr_frequency * nmr_frequency * correlation_time *
                            correlation_time,
                  stretching_exponent / 2.0);
}

// Fang - mirror image of Davidson-Cole
template <typename T = double>
T j_fang(T correlation_time, T nmr_frequency, T interaction_strength,
         T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 1 or stretching_exponent <= 0) {
    std::cout << "WARNING : stretching exponent outside of bounds : (0, 1]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * (2.0 / nmr_frequency) *
         std::pow(nmr_frequency * correlation_time, stretching_exponent) *
         std::sin(stretching_exponent *
                  std::atan(1.0 / (nmr_frequency * correlation_time))) /
         std::pow(1.0 + std::pow(nmr_frequency * correlation_time, 2.0),
                  stretching_exponent / 2.0);
}

// Fuoss-Kirkwood - distribution of correlation times
template <typename T = double>
T j_fk(T correlation_time, T nmr_frequency, T interaction_strength,
       T stretching_exponent) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (stretching_exponent > 1 or stretching_exponent <= 0) {
    std::cout << "WARNING : stretching exponent outside of bounds : (0, 1]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * (2.0 * stretching_exponent / nmr_frequency) *
         std::pow(nmr_frequency * correlation_time, stretching_exponent) /
         (1.0 + std::pow(nmr_frequency * correlation_time,
                         2.0 * stretching_exponent));
}

// Havriliak-Negami - correlated motion w/ distribution of barriers
// - delta ~ measure of correlations
// - delta*epsilon ~ measure of a spread in barriers
template <typename T = double>
T j_hn(T correlation_time, T nmr_frequency, T interaction_strength, T delta,
       T epsilon) {
  if (correlation_time < 0 or nmr_frequency < 0 or interaction_strength <= 0) {
    return 0.0;
  }
  if (delta > 1 or delta <= 0 or epsilon > 1.0 / delta or epsilon <= 0) {
    std::cout << "WARNING : stretching exponents outside of bounds : delta -> "
                 "(0, 1]\n";
    std::cout << "                                                   epsilon "
                 "-> (0, 1/delta]"
              << std::endl;
    return 0.0;
  }
  return interaction_strength * (2.0 / nmr_frequency) *
         (std::sin(
             epsilon *
             std::atan(
                 (std::pow(nmr_frequency * correlation_time, delta) *
                  std::sin(delta * boost::math::constants::pi<T>() / 2.0)) /
                 (1.0 + std::pow(nmr_frequency * correlation_time, delta) *
                            std::cos(delta * boost::math::constants::pi<T>() /
                                     2.0))))) *
         std::pow(
             1.0 +
                 2.0 * std::pow(nmr_frequency * correlation_time, delta) *
                     std::cos(delta * boost::math::constants::pi<T>() / 2.0) +
                 std::pow(nmr_frequency * correlation_time, 2.0 * delta),
             -epsilon / 2.0);
}

// Bryn-Mawr
// double j_bm(double correlation_time, double nmr_frequency, double
// interaction_strength = 1, double epsilon = 1, double eta = 1);

// Wagner (i.e., log-Gaussian)
// double j_lg(double correlation_time, double nmr_frequency, double
// interaction_strength = 1, double width = 1);

// log-Lorentzian
// double j_ll(double correlation_time, double nmr_frequency, double
// interaction_strength = 1, double width = 1);

// Frolich (i.e., energy box)
// double j_eb(double correlation_time, double nmr_frequency, double
// interaction_strength = 1, ...);

// Power law : power = 1 (e.g., Korringa); power = 2 (e.g., phonon); power = 3
// (e.g., [Dirac] orbital)
template <typename T = double>
T j_pow(T temperature, T intercept, T constant, T power) {
  if (temperature <= 0.0) {
    return 0.0;
  }
  if (constant == 0.0) {
    return intercept;
  }
  return intercept + constant * std::pow(temperature, power);
}

} // namespace nmr

} // namespace triumf

#endif // TRIUMF_NMR_SPECTRAL_DENSITY_HPP
