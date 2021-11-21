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

#include "31mg_decay.h"

namespace triumf {

namespace bnmr {

double s_31Mg(double time, double beam_rate, double n_31Mg_0) {
  return ((n_31Mg_0 * lambda_31Mg - beam_rate) *
          std::exp(-time * lambda_31Mg)) /
             lambda_31Mg +
         beam_rate / lambda_31Mg;
}

// number 31Mg atoms
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

// activity of 31Mg atoms
double a_31Mg(double time, double beam_pulse, double beam_rate) {
  return e_31Mg * lambda_31Mg * n_31Mg(time, beam_pulse, beam_rate);
}

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

// number of 31Al atoms
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

// activity of 31Al atoms
double a_31Al(double time, double beam_pulse, double beam_rate) {
  return e_31Al * lambda_31Al * n_31Al(time, beam_pulse, beam_rate);
}

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

// number of 31Si atoms
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

// activity of 31Si atoms
double a_31Si(double time, double beam_pulse, double beam_rate) {
  return e_31Si * lambda_31Si * n_31Si(time, beam_pulse, beam_rate);
}

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

// number of 31P atoms
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

double a_31P(double time, double beam_pulse, double beam_rate) {
  return e_31P * lambda_31P * n_31P(time, beam_pulse, beam_rate);
}

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

// number of 30Al atoms
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

double a_30Al(double time, double beam_pulse, double beam_rate) {
  return e_30Al * lambda_30Al * n_30Al(time, beam_pulse, beam_rate);
}

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

// number of 30Si atoms
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

double a_30Si(double time, double beam_pulse, double beam_rate) {
  return e_30Si * lambda_30Si * n_30Si(time, beam_pulse, beam_rate);
}

// total atoms
double n_total(double time, double beam_pulse, double beam_rate) {
  return n_31Mg(time, beam_pulse, beam_rate) +
         n_31Al(time, beam_pulse, beam_rate) +
         n_31Si(time, beam_pulse, beam_rate) +
         n_31P(time, beam_pulse, beam_rate) +
         n_30Al(time, beam_pulse, beam_rate) +
         n_30Si(time, beam_pulse, beam_rate);
}

// fractions of total atoms
double fn_31Mg(double time, double beam_pulse, double beam_rate) {
  return n_31Mg(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

double fn_31Al(double time, double beam_pulse, double beam_rate) {
  return n_31Al(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

double fn_31Si(double time, double beam_pulse, double beam_rate) {
  return n_31Si(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

double fn_31P(double time, double beam_pulse, double beam_rate) {
  return n_31P(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

double fn_30Al(double time, double beam_pulse, double beam_rate) {
  return n_30Al(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

double fn_30Si(double time, double beam_pulse, double beam_rate) {
  return n_30Si(time, beam_pulse, beam_rate) /
         n_total(time, beam_pulse, beam_rate);
}

// total activity
double a_total(double time, double beam_pulse, double beam_rate) {
  return a_31Mg(time, beam_pulse, beam_rate) +
         a_31Al(time, beam_pulse, beam_rate) +
         a_31Si(time, beam_pulse, beam_rate) +
         a_31P(time, beam_pulse, beam_rate) +
         a_30Al(time, beam_pulse, beam_rate) +
         a_30Si(time, beam_pulse, beam_rate);
}

// fractional activities
double fa_31Mg(double time, double beam_pulse, double beam_rate) {
  return a_31Mg(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

double fa_31Al(double time, double beam_pulse, double beam_rate) {
  return a_31Al(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

double fa_31Si(double time, double beam_pulse, double beam_rate) {
  return a_31Si(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

double fa_31P(double time, double beam_pulse, double beam_rate) {
  return a_31P(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

double fa_30Al(double time, double beam_pulse, double beam_rate) {
  return a_30Al(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

double fa_30Si(double time, double beam_pulse, double beam_rate) {
  return a_30Si(time, beam_pulse, beam_rate) /
         a_total(time, beam_pulse, beam_rate);
}

} // namespace bnmr

} // namespace triumf
