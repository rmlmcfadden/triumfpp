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

#ifndef TRIUMF_BNMR_31MG_DECAY_H
#define TRIUMF_BNMR_31MG_DECAY_H

#include <algorithm>
#include <cmath>
#include <iterator>
#include <limits>

namespace triumf {

namespace bnmr {

// half-lives (s)
const double T_12_31Mg = 0.235;
const double T_12_31Al = 0.644;
const double T_12_31Si = 2.632 /* h */ * 60.0 /* min */ * 60.0 /* s */;
const double T_12_31P = std::numeric_limits<double>::infinity();
const double T_12_30Al = 3.62;
const double T_12_30Si = std::numeric_limits<double>::infinity();

// nuclear lifetimes (s)
const double tau_31Mg = T_12_31Mg / std::log(2);
const double tau_31Al = T_12_31Al / std::log(2);
const double tau_31Si = T_12_31Si / std::log(2);
const double tau_31P = T_12_31P / std::log(2);
const double tau_30Al = T_12_30Al / std::log(2);
const double tau_30Si = T_12_30Si / std::log(2);

// decay constants (1/s)
const double lambda_31Mg = 1.0 / tau_31Mg;
const double lambda_31Al = 1.0 / tau_31Al;
const double lambda_31Si = 1.0 / tau_31Si;
const double lambda_31P = 1.0 / tau_31P;
const double lambda_30Al = 1.0 / tau_30Al;
const double lambda_30Si = 1.0 / tau_30Si;

// branching ratios
const double b_31Mg = 0.938;
const double b_31Al = 0.984;

// Q values (keV)
const double Q_31Mg_b = 11829.0;
const double Q_31Mg_bn = 4671.0;
const double Q_31Al_b = 7998.3;
const double Q_31Al_bn = 1410.9;
const double Q_31Si_b = 1491.50;
const double Q_30Al_b = 8568.1;

// effective Q values
const double Q_31Mg = b_31Mg * Q_31Mg_b + (1.0 - b_31Mg) * Q_31Mg_bn;
const double Q_31Al = b_31Al * Q_31Al_b + (1.0 - b_31Al) * Q_31Al_bn;
const double Q_31Si = Q_31Si_b;
const double Q_30Al = Q_30Al_b;

// find the maximum effective Q value
const double Q[] = {Q_31Mg, Q_31Al, Q_31Si, Q_30Al};
const double Q_max = *std::max_element(std::begin(Q), std::end(Q));

// naive detection efficiencies based on effective Q values
const double e_31Mg = Q_31Mg / Q_max;
const double e_31Al = Q_31Al / Q_max;
const double e_31Si = Q_31Si / Q_max;
const double e_31P = 0.0;
const double e_30Al = Q_30Al / Q_max;
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

// General solutions to rate equations - used as helper functions
double s_31Mg(double time, double beam_rate, double n_31Mg_0);
double s_31Al(double time, double beam_rate, double n_31Mg_0, double n_31Al_0);
double s_31Si(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
              double n_31Si_0);
double s_31P(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
             double n_31Si_0, double n_31P_0);
double s_30Al(double time, double beam_rate, double n_31Mg_0, double n_30Al_0);
double s_30Si(double time, double beam_rate, double n_31Mg_0, double n_31Al_0,
              double n_30Al_0, double n_30Si_0);

// number of atoms
double n_31Mg(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double n_31Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double n_31Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double n_31P(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double n_30Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double n_30Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

// total number of atoms
double n_total(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

// fraction of total atoms
double fn_31Mg(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fn_31Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fn_31Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fn_31P(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fn_30Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fn_30Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

// activity of each species
double a_31Mg(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double a_31Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double a_31Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double a_31P(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double a_30Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double a_30Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

// total activity from all atoms in decay chain
double a_total(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

// fractional activities
double fa_31Mg(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fa_31Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fa_31Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fa_31P(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fa_30Al(double time, double beam_pulse = 1.0, double beam_rate = 1e6);
double fa_30Si(double time, double beam_pulse = 1.0, double beam_rate = 1e6);

} // namespace bnmr

} // namespace triumf

#endif // TRIUMF_BNMR_31MG_DECAY_H
