//
// Author: Ryan M. L. McFadden
//
// 31Mg radioactive decay function for fitting β-NMR SLR spectra, see:
// R. M. L. McFadden et al. JPS Conf. Proc. 21, 011047 (2018).
// https://doi.org/10.7566/JPSCP.21.011047
//
// General solutions to the rate equations computed with:
// Maxima, a Computer Algebra System
// http://maxima.sourceforge.net/
//

#ifndef TRIUMF_BNMR_SLR_31MG_DECAY_HPP
#define TRIUMF_BNMR_SLE_31MG_DECAY_HPP

#include <algorithm>
#include <cmath>
#include <iterator>
#include <limits>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

// β-detected nuclear magnetic resonance (β-NMR)
namespace bnmr {

// spin-lattice relaxation (SLR)
namespace slr {

/// magnesium-31 half-life (s)
const double T_12_31Mg = 0.236;

/// aluminum-31 half-life (s)
const double T_12_31Al = 0.644;

/// silicon-31 half-life (s)
const double T_12_31Si = 157.36 /* min */ * 60.0 /* s min^-1 */;

/// phosphorus-31 half-life (s)
const double T_12_31P = std::numeric_limits<double>::infinity();

/// aluminum-30 half-life (s)
const double T_12_30Al = 3.62;

/// silicon-30 half-life (s)
const double T_12_30Si = std::numeric_limits<double>::infinity();

/// magnesium-31 nuclear lifetime (s)
const double tau_31Mg = T_12_31Mg / std::log(2);

/// aluminum-31 nuclear lifetime (s)
const double tau_31Al = T_12_31Al / std::log(2);

/// silicon-31 nuclear lifetime (s)
const double tau_31Si = T_12_31Si / std::log(2);

/// phosphorus-31 nuclear lifetime (s)
const double tau_31P = T_12_31P / std::log(2);

/// aluminum-30 nuclear lifetime (s)
const double tau_30Al = T_12_30Al / std::log(2);

/// silicon-30 nuclear lifetime (s)
const double tau_30Si = T_12_30Si / std::log(2);

/// magnesium-31 decay constant (1/s)
const double lambda_31Mg = 1.0 / tau_31Mg;

/// aluminum-31 decay constant (1/s)
const double lambda_31Al = 1.0 / tau_31Al;

/// silicon-31 decay constant (1/s)
const double lambda_31Si = 1.0 / tau_31Si;

/// phosphorus-31 decay constant (1/s)
const double lambda_31P = 1.0 / tau_31P;

/// aluminum-30 decay constant (1/s)
const double lambda_30Al = 1.0 / tau_30Al;

/// silicon-30 decay constant (1/s)
const double lambda_30Si = 1.0 / tau_30Si;

/// magnesium-31 ratio
const double b_31Mg = 0.938;

/// aluminum-31 ratio
const double b_31Al = 0.984;

/// magnesium-31 Q-value (keV), major branch
const double Q_31Mg_b = 11829.0;

/// magnesium-31 Q-value (keV), minor branch
const double Q_31Mg_bn = 4671.0;

/// aluminum-31 Q-value (keV), major branch
const double Q_31Al_b = 7998.3;

/// aluminum-31 Q-value (keV), minor branch
const double Q_31Al_bn = 1410.9;

/// silicon-31 Q-value (keV)
const double Q_31Si_b = 1491.50;

/// aluminum-30 Q-value (keV)
const double Q_30Al_b = 8568.1;

/// magnesium-31 effective Q-value (keV)
const double Q_31Mg = b_31Mg * Q_31Mg_b + (1.0 - b_31Mg) * Q_31Mg_bn;

/// aluminum-31 effective Q-value (keV)
const double Q_31Al = b_31Al * Q_31Al_b + (1.0 - b_31Al) * Q_31Al_bn;

/// silicon-31 effective Q-value (keV)
const double Q_31Si = Q_31Si_b;

/// aluminum-30 effective Q-value (keV)
const double Q_30Al = Q_30Al_b;

// find the maximum effective Q value
// const double Q[] = {Q_31Mg, Q_31Al, Q_31Si, Q_30Al};
// const double Q_max = *std::max_element(std::begin(Q), std::end(Q));
const double Q_max = Q_31Mg;

/// relative detection efficiency for magnesium-31 (based on effective Q-value)
const double e_31Mg = Q_31Mg / Q_max;

/// relative detection efficiency for aluminum-31 (based on effective Q-value)
const double e_31Al = Q_31Al / Q_max;

/// relative detection efficiency for silicon-31 (based on effective Q-value)
const double e_31Si = Q_31Si / Q_max;

/// relative detection efficiency for phosphorus-31 (based on effective Q-value)
const double e_31P = 0.0;

/// relative detection efficiency for aluminum-30 (based on effective Q-value)
const double e_30Al = Q_30Al / Q_max;

/// relative detection efficiency for silicon-30 (based on effective Q-value)
const double e_30Si = 0.0;

/*
// naive assumption that all detection efficiencies are equal
const double e_31Mg = 1.0;
const double e_31Al = 1.0;
const double e_31Si = 1.0;
const double e_31P = 1.0;
const double e_30Al = 1.0;
const double e_30Si = 1.0;
*/

/// general solution to the number of magnesium-31 atoms (helper function)
double s_31Mg(double time, double beam_rate, double n_31Mg_0) {
  return ((n_31Mg_0 * lambda_31Mg - beam_rate) *
          std::exp(-time * lambda_31Mg)) /
             lambda_31Mg +
         beam_rate / lambda_31Mg;
}

/// number magnesium-31 atoms
double n_31Mg(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_31Mg(time, beam_rate, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    return s_31Mg(delta, 0, n_31Mg_0);
  }
  return 0.0;
}

/// activity of magnesium-31
double a_31Mg(double time, double beam_pulse, double beam_rate) {
  return e_31Mg * lambda_31Mg * n_31Mg(time, beam_pulse, beam_rate);
}

/// general solution to the number of aluminum-31 atoms (helper function)
double s_31Al(double time, double beam_rate, double n_31Mg_0, double n_31Al_0) {
  return -((n_31Mg_0 * b_31Mg * lambda_31Mg - beam_rate * b_31Mg) *
           std::exp(-time * lambda_31Mg)) /
             (lambda_31Mg - lambda_31Al) +
         (std::exp(-time * lambda_31Al) *
          (((n_31Mg_0 * b_31Mg + n_31Al_0) * lambda_31Al - beam_rate * b_31Mg) *
               lambda_31Mg -
           n_31Al_0 * std::pow(lambda_31Al, 2))) /
             (lambda_31Al * lambda_31Mg - std::pow(lambda_31Al, 2)) +
         (beam_rate * b_31Mg) / lambda_31Al;
}

/// number of aluminum-31 atoms
double n_31Al(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_31Al(time, beam_rate, 0, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    double n_31Al_0 = s_31Al(beam_pulse, beam_rate, 0, 0);
    return s_31Al(delta, 0, n_31Mg_0, n_31Al_0);
  }
  return 0.0;
}

// activity of aluminum-31
double a_31Al(double time, double beam_pulse, double beam_rate) {
  return e_31Al * lambda_31Al * n_31Al(time, beam_pulse, beam_rate);
}

/// general solution to the number of silicon-31 atoms (helper function)
double s_31Si(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
              double n_31Si_0) {
  return ((n_31Si_0 * std::pow(lambda_31Si, 3) +
           ((-n_31Al_0 * b_31Al - n_31Si_0) * lambda_31Al -
            n_31Si_0 * lambda_31Mg) *
               std::pow(lambda_31Si, 2) +
           (n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al + n_31Si_0) *
               lambda_31Al * lambda_31Mg * lambda_31Si -
           beam_rate * b_31Al * b_31Mg * lambda_31Al * lambda_31Mg) *
          std::exp(-time * lambda_31Si)) /
             (std::pow(lambda_31Si, 3) +
              (-lambda_31Mg - lambda_31Al) * std::pow(lambda_31Si, 2) +
              lambda_31Al * lambda_31Mg * lambda_31Si) -
         ((n_31Mg_0 * b_31Al * b_31Mg * lambda_31Al * lambda_31Mg -
           beam_rate * b_31Al * b_31Mg * lambda_31Al) *
          std::exp(-time * lambda_31Mg)) /
             ((lambda_31Mg - lambda_31Al) * lambda_31Si -
              std::pow(lambda_31Mg, 2) + lambda_31Al * lambda_31Mg) +
         (std::exp(-time * lambda_31Al) *
          (((n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al) * lambda_31Al -
            beam_rate * b_31Al * b_31Mg) *
               lambda_31Mg -
           n_31Al_0 * b_31Al * std::pow(lambda_31Al, 2))) /
             ((lambda_31Mg - lambda_31Al) * lambda_31Si -
              lambda_31Al * lambda_31Mg + std::pow(lambda_31Al, 2)) +
         (beam_rate * b_31Al * b_31Mg) / lambda_31Si;
}

/// number of silicon-31 atoms
double n_31Si(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_31Si(time, beam_rate, 0, 0, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    double n_31Al_0 = s_31Al(beam_pulse, beam_rate, 0, 0);
    double n_31Si_0 = s_31Si(beam_pulse, beam_rate, 0, 0, 0);
    return s_31Si(delta, 0, n_31Mg_0, n_31Al_0, n_31Si_0);
  }
  return 0.0;
}

/// activity of silicon-31
double a_31Si(double time, double beam_pulse, double beam_rate) {
  return e_31Si * lambda_31Si * n_31Si(time, beam_pulse, beam_rate);
}

/// general solution to the number of phosphorus-31 atoms (helper function)
double s_31P(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
             double n_31Si_0, double n_31P_0) {
  return -((n_31Si_0 * std::pow(lambda_31Si, 3) +
            ((-n_31Al_0 * b_31Al - n_31Si_0) * lambda_31Al -
             n_31Si_0 * lambda_31Mg) *
                std::pow(lambda_31Si, 2) +
            (n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al + n_31Si_0) *
                lambda_31Al * lambda_31Mg * lambda_31Si -
            beam_rate * b_31Al * b_31Mg * lambda_31Al * lambda_31Mg) *
           std::exp(-time * lambda_31Si)) /
             (std::pow(lambda_31Si, 3) +
              (-lambda_31Mg - lambda_31Al) * std::pow(lambda_31Si, 2) +
              lambda_31Al * lambda_31Mg * lambda_31Si) +
         ((n_31Mg_0 * b_31Al * b_31Mg * lambda_31Al * lambda_31Mg -
           beam_rate * b_31Al * b_31Mg * lambda_31Al) *
          std::exp(-time * lambda_31Mg) * lambda_31Si) /
             ((std::pow(lambda_31Mg, 2) - lambda_31Al * lambda_31Mg) *
                  lambda_31Si -
              std::pow(lambda_31Mg, 3) +
              lambda_31Al * std::pow(lambda_31Mg, 2)) -
         (std::exp(-time * lambda_31Al) *
          (((n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al) * lambda_31Al -
            beam_rate * b_31Al * b_31Mg) *
               lambda_31Mg -
           n_31Al_0 * b_31Al * std::pow(lambda_31Al, 2)) *
          lambda_31Si) /
             ((lambda_31Al * lambda_31Mg - std::pow(lambda_31Al, 2)) *
                  lambda_31Si -
              std::pow(lambda_31Al, 2) * lambda_31Mg +
              std::pow(lambda_31Al, 3)) +
         ((((n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al + n_31Si_0 +
             n_31P_0) *
                lambda_31Al -
            beam_rate * b_31Al * b_31Mg) *
               lambda_31Mg -
           beam_rate * b_31Al * b_31Mg * lambda_31Al) *
              lambda_31Si -
          beam_rate * b_31Al * b_31Mg * lambda_31Al * lambda_31Mg) /
             (lambda_31Al * lambda_31Mg * lambda_31Si) +
         beam_rate * b_31Al * b_31Mg * time;
}

/// number of phosphorus-31 atoms
double n_31P(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_31P(time, beam_rate, 0, 0, 0, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    double n_31Al_0 = s_31Al(beam_pulse, beam_rate, 0, 0);
    double n_31Si_0 = s_31Si(beam_pulse, beam_rate, 0, 0, 0);
    double n_31P_0 = s_31P(time, beam_rate, 0, 0, 0, 0);
    return s_31P(delta, 0, n_31Mg_0, n_31Al_0, n_31Si_0, n_31P_0);
  }
  return 0.0;
}

/// activity of phosphorus-31
double a_31P(double time, double beam_pulse, double beam_rate) {
  return e_31P * lambda_31P * n_31P(time, beam_pulse, beam_rate);
}

/// general solution to the number of aluminum-30 atoms (helper function)
double s_30Al(double time, double beam_rate, double n_31Mg_0, double n_30Al_0) {
  return (((n_31Mg_0 * b_31Mg - n_31Mg_0) * lambda_31Mg - beam_rate * b_31Mg +
           beam_rate) *
          std::exp(-time * lambda_31Mg)) /
             (lambda_31Mg - lambda_30Al) -
         (std::exp(-time * lambda_30Al) *
          (((n_31Mg_0 * b_31Mg - n_31Mg_0 - n_30Al_0) * lambda_30Al -
            beam_rate * b_31Mg + beam_rate) *
               lambda_31Mg +
           n_30Al_0 * std::pow(lambda_30Al, 2))) /
             (lambda_30Al * lambda_31Mg - std::pow(lambda_30Al, 2)) -
         (beam_rate * b_31Mg - beam_rate) / lambda_30Al;
}

/// number of aluminum-30 atoms
double n_30Al(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_30Al(time, beam_rate, 0, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    double n_30Al_0 = s_30Al(beam_pulse, beam_rate, 0, 0);
    return s_30Al(delta, 0, n_31Mg_0, n_30Al_0);
  }
  return 0.0;
}

/// activity of aluminum-30
double a_30Al(double time, double beam_pulse, double beam_rate) {
  return e_30Al * lambda_30Al * n_30Al(time, beam_pulse, beam_rate);
}

/// general solution to the number of silicon-30 atoms (helper function)
double s_30Si(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
              double n_30Al_0, double n_30Si_0) {
  return -((((n_31Mg_0 * b_31Al - n_31Mg_0) * b_31Mg * lambda_31Al +
             (n_31Mg_0 * b_31Mg - n_31Mg_0) * lambda_30Al) *
                std::pow(lambda_31Mg, 2) +
            (((n_31Mg_0 - n_31Mg_0 * b_31Al * b_31Mg) * lambda_30Al +
              (beam_rate - beam_rate * b_31Al) * b_31Mg) *
                 lambda_31Al +
             (beam_rate - beam_rate * b_31Mg) * lambda_30Al) *
                lambda_31Mg +
            (beam_rate * b_31Al * b_31Mg - beam_rate) * lambda_30Al *
                lambda_31Al) *
           std::exp(-time * lambda_31Mg)) /
             (std::pow(lambda_31Mg, 3) +
              (-lambda_31Al - lambda_30Al) * std::pow(lambda_31Mg, 2) +
              lambda_30Al * lambda_31Al * lambda_31Mg) -
         ((((n_31Mg_0 * b_31Al * b_31Mg + n_31Al_0 * b_31Al - n_31Mg_0 -
             n_31Al_0 - n_30Si_0 - n_30Al_0) *
                lambda_30Al -
            beam_rate * b_31Mg + beam_rate) *
               lambda_31Al +
           (beam_rate - beam_rate * b_31Al) * b_31Mg * lambda_30Al) *
              lambda_31Mg +
          (beam_rate - beam_rate * b_31Al * b_31Mg) * lambda_30Al *
              lambda_31Al) /
             (lambda_30Al * lambda_31Al * lambda_31Mg) +
         (std::exp(-time * lambda_31Al) *
          ((((n_31Mg_0 * b_31Al - n_31Mg_0) * b_31Mg + n_31Al_0 * b_31Al -
             n_31Al_0) *
                lambda_31Al +
            (beam_rate - beam_rate * b_31Al) * b_31Mg) *
               lambda_31Mg +
           (n_31Al_0 - n_31Al_0 * b_31Al) * std::pow(lambda_31Al, 2))) /
             (lambda_31Al * lambda_31Mg - std::pow(lambda_31Al, 2)) +
         (std::exp(-time * lambda_30Al) *
          (((n_31Mg_0 * b_31Mg - n_31Mg_0 - n_30Al_0) * lambda_30Al -
            beam_rate * b_31Mg + beam_rate) *
               lambda_31Mg +
           n_30Al_0 * std::pow(lambda_30Al, 2))) /
             (lambda_30Al * lambda_31Mg - std::pow(lambda_30Al, 2)) -
         beam_rate * b_31Al * b_31Mg * time + beam_rate * time;
}

// number of silicon-30 atoms
double n_30Si(double time, double beam_pulse, double beam_rate) {
  if (time > 0 and time <= beam_pulse) {
    return s_30Si(time, beam_rate, 0, 0, 0, 0);
  }
  if (time > beam_pulse) {
    double delta = time - beam_pulse;
    double n_31Mg_0 = s_31Mg(beam_pulse, beam_rate, 0);
    double n_31Al_0 = s_31Al(beam_pulse, beam_rate, 0, 0);
    double n_30Al_0 = s_30Al(beam_pulse, beam_rate, 0, 0);
    double n_30Si_0 = s_30Si(beam_pulse, beam_rate, 0, 0, 0, 0);
    return s_30Si(delta, 0, n_31Mg_0, n_31Al_0, n_30Al_0, n_30Si_0);
  }
  return 0.0;
}

/// activity of silicon-30
double a_30Si(double time, double beam_pulse, double beam_rate) {
  return e_30Si * lambda_30Si * n_30Si(time, beam_pulse, beam_rate);
}

/// total number of atoms
double n_total(double time, double beam_pulse, double beam_rate) {
  return n_31Mg(time, beam_pulse, beam_rate) +
         n_31Al(time, beam_pulse, beam_rate) +
         n_31Si(time, beam_pulse, beam_rate) +
         n_31P(time, beam_pulse, beam_rate) +
         n_30Al(time, beam_pulse, beam_rate) +
         n_30Si(time, beam_pulse, beam_rate);
}

/// fractional number of magnesium-31 atoms
double fn_31Mg(double time, double beam_pulse, double beam_rate) {
  return n_31Mg(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// fractional number of aluminum-31 atoms
double fn_31Al(double time, double beam_pulse, double beam_rate) {
  return n_31Al(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// fractional number of silicon-31 atoms
double fn_31Si(double time, double beam_pulse, double beam_rate) {
  return n_31Si(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// fractional number of phosphorus-31 atoms
double fn_31P(double time, double beam_pulse, double beam_rate) {
  return n_31P(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// fractional number of aluminum-30 atoms
double fn_30Al(double time, double beam_pulse, double beam_rate) {
  return n_30Al(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// fractional number of silicon-30 atoms
double fn_30Si(double time, double beam_pulse, double beam_rate) {
  return n_30Si(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

/// total activity of all species in the magnesium-31 decay chain
double a_total(double time, double beam_pulse, double beam_rate) {
  return a_31Mg(time, beam_pulse, beam_rate) +
         a_31Al(time, beam_pulse, beam_rate) +
         a_31Si(time, beam_pulse, beam_rate) +
         a_31P(time, beam_pulse, beam_rate) +
         a_30Al(time, beam_pulse, beam_rate) +
         a_30Si(time, beam_pulse, beam_rate);
}

/// fractional activity of magnesium-31
double fa_31Mg(double time, double beam_pulse, double beam_rate) {
  return a_31Mg(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

/// fractional activity of aluminum-31
double fa_31Al(double time, double beam_pulse, double beam_rate) {
  return a_31Al(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

/// fractional activity of silicon-31
double fa_31Si(double time, double beam_pulse, double beam_rate) {
  return a_31Si(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

/// fractional activity of phosphorus-31
double fa_31P(double time, double beam_pulse, double beam_rate) {
  return a_31P(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

/// fractional activity of aluminum-30
double fa_30Al(double time, double beam_pulse, double beam_rate) {
  return a_30Al(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

/// fractional activity of silicon-30
double fa_30Si(double time, double beam_pulse, double beam_rate) {
  return a_30Si(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

} // namespace slr

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_SLR_31MG_DECAY_HPP
