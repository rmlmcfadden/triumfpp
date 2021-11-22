#include <TF1.h>
#include <triumf/bnmr/nuclei.hpp>
#include <triumf/bnmr/slr/bi_exp.hpp>
#include <triumf/bnmr/slr/cbrt_exp.hpp>
#include <triumf/bnmr/slr/exp.hpp>
#include <triumf/bnmr/slr/gauss_dist_exp.hpp>
#include <triumf/bnmr/slr/sq_exp.hpp>
#include <triumf/bnmr/slr/sqrt_exp.hpp>
#include <triumf/bnmr/slr/str_exp.hpp>

//
constexpr double t_min = 0.0;
constexpr double t_max = 20.0;
constexpr double t_pulse = 4.0;

//
TF1 f_pulsed_exp("f_pulsed_exp", triumf::bnmr::slr::pulsed_exp<double>, t_min,
                 t_max, 4);
TF1 f_pulsed_bi_exp("f_pulsed_bi_exp", triumf::bnmr::slr::pulsed_bi_exp<double>,
                    t_min, t_max, 6);
TF1 f_pulsed_str_exp("f_pulsed_str_exp",
                     triumf::bnmr::slr::pulsed_str_exp<double>, t_min, t_max,
                     5);
TF1 f_pulsed_sqrt_exp("f_pulsed_sqrt_exp",
                      triumf::bnmr::slr::pulsed_sqrt_exp<double>, t_min, t_max,
                      4);
TF1 f_pulsed_cbrt_exp("f_pulsed_cbrt_exp",
                      triumf::bnmr::slr::pulsed_cbrt_exp<double>, t_min, t_max,
                      4);
TF1 f_pulsed_sq_exp("f_pulsed_sq_exp", triumf::bnmr::slr::pulsed_sq_exp<double>,
                    t_min, t_max, 4);
TF1 f_pulsed_gauss_dist_exp("f_pulsed_gauss_dist_exp",
                            triumf::bnmr::slr::pulsed_gauss_dist_exp<double>,
                            t_min, t_max, 5);

void bnmr_slr() {

  //
  f_pulsed_exp.SetNpx(1000);
  f_pulsed_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_exp.FixParameter(1, t_pulse);
  f_pulsed_exp.SetParameter(2, 0.15);
  f_pulsed_exp.SetParameter(3, 1.0);
  f_pulsed_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());

  //
  f_pulsed_bi_exp.SetNpx(1000);
  f_pulsed_bi_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_bi_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_bi_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_bi_exp.SetParName(3, "Fraction (slow)");
  f_pulsed_bi_exp.SetParName(4, "SLR rate (slow) (1/s)");
  f_pulsed_bi_exp.SetParName(5, "SLR rate (fast) (1/s)");
  f_pulsed_bi_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_bi_exp.FixParameter(1, t_pulse);
  f_pulsed_bi_exp.SetParameter(2, 0.15);
  f_pulsed_bi_exp.SetParameter(3, 0.75);
  f_pulsed_bi_exp.SetParameter(4, 0.10);
  f_pulsed_bi_exp.SetParameter(5, 0.10);
  f_pulsed_bi_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_bi_exp.SetParLimits(3, 0.0, 1.0);
  f_pulsed_bi_exp.SetParLimits(
      4, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_bi_exp.SetParLimits(
      5, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());

  //
  f_pulsed_str_exp.SetNpx(1000);
  f_pulsed_str_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_str_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_str_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_str_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_str_exp.SetParName(4, "Beta");
  f_pulsed_str_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_str_exp.FixParameter(1, t_pulse);
  f_pulsed_str_exp.SetParameter(2, 0.15);
  f_pulsed_str_exp.SetParameter(3, 1.0);
  f_pulsed_str_exp.SetParameter(4, 0.75);
  f_pulsed_str_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_str_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_str_exp.SetParLimits(4, 0.0, 1.0);

  //
  f_pulsed_sqrt_exp.SetNpx(1000);
  f_pulsed_sqrt_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_sqrt_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_sqrt_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_sqrt_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_sqrt_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_sqrt_exp.FixParameter(1, t_pulse);
  f_pulsed_sqrt_exp.SetParameter(2, 0.15);
  f_pulsed_sqrt_exp.SetParameter(3, 1.0);
  f_pulsed_sqrt_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_sqrt_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());

  //
  f_pulsed_cbrt_exp.SetNpx(1000);
  f_pulsed_cbrt_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_cbrt_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_cbrt_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_cbrt_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_cbrt_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_cbrt_exp.FixParameter(1, t_pulse);
  f_pulsed_cbrt_exp.SetParameter(2, 0.15);
  f_pulsed_cbrt_exp.SetParameter(3, 1.0);
  f_pulsed_cbrt_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_cbrt_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());

  //
  f_pulsed_sq_exp.SetNpx(1000);
  f_pulsed_sq_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_sq_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_sq_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_sq_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_sq_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_sq_exp.FixParameter(1, t_pulse);
  f_pulsed_sq_exp.SetParameter(2, 0.15);
  f_pulsed_sq_exp.SetParameter(3, 1.0);
  f_pulsed_sq_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_sq_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());

  //
  f_pulsed_gauss_dist_exp.SetNpx(1000);
  f_pulsed_gauss_dist_exp.SetParName(0, "Nuclear lifetime (s)");
  f_pulsed_gauss_dist_exp.SetParName(1, "Pulse length (s)");
  f_pulsed_gauss_dist_exp.SetParName(2, "Initial asymmetry");
  f_pulsed_gauss_dist_exp.SetParName(3, "SLR rate (1/s)");
  f_pulsed_gauss_dist_exp.SetParName(4, "SLR sigma (1/s)");
  f_pulsed_gauss_dist_exp.FixParameter(
      0, triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_gauss_dist_exp.FixParameter(1, t_pulse);
  f_pulsed_gauss_dist_exp.SetParameter(2, 0.15);
  f_pulsed_gauss_dist_exp.SetParameter(3, 1.0);
  f_pulsed_gauss_dist_exp.SetParameter(4, 0.01);
  f_pulsed_gauss_dist_exp.SetParLimits(2, 0.00, 0.30);
  f_pulsed_gauss_dist_exp.SetParLimits(
      3, 0.0, 100.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());
  f_pulsed_gauss_dist_exp.SetParLimits(
      4, 0.00, 10.0 / triumf::bnmr::nuclei::lithium_8<double>::lifetime());
}
