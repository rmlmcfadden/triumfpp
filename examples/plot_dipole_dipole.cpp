#include <triumf/nmr/dipole_dipole.hpp>

#include <boost/math/constants/constants.hpp>

#include <cmath>

double dipole_dipole(const double *x, const double *par) {
  double omega_d = std::abs(par[2] * par[3] * par[0] * par[0]);
  double factor = par[1] * (3.0 / 10.0);
  double normalization = factor / omega_d;
  return normalization * triumf::nmr::dipole_dipole::slr_rate<double>(
                             *x, par[0], par[1], par[2], par[3]);
}

double generic(const double *x, const double *par) {
  double B_d = par[0];
  double nu_c = par[1];
  double gamma_I = par[2];
  double omega = gamma_I * x[0];
  double omega_d = gamma_I * gamma_I * B_d * B_d;
  return triumf::nmr::dipole_dipole::j<double>(omega, nu_c) * par[1];
}

void plot_dipole_dipole() {

  const double B_min = 2e-5;
  const double B_max = 2e-1;

  const auto n_points = 200;

  const double B_d = 1e-5;
  const double nu_c = 1.0 / 23.8e-6;
  const double gamma_8Li = boost::math::constants::two_pi<double>() * 6.30221e6;
  const double gamma_93Nb =
      boost::math::constants::two_pi<double>() * 10.30221e6;

  TCanvas *canvas = new TCanvas();

  TF1 *f_dipole = new TF1("f_dipole", dipole_dipole, B_min, B_max, 4);
  f_dipole->SetTitle("");
  f_dipole->SetNpx(n_points);
  f_dipole->SetLineColor(kRed);
  f_dipole->SetParameter(0, B_d);
  f_dipole->SetParameter(1, nu_c);
  f_dipole->SetParameter(2, gamma_8Li);
  f_dipole->SetParameter(3, gamma_93Nb);

  f_dipole->GetHistogram()->GetXaxis()->SetTitle("B_{0} (T)");
  f_dipole->GetHistogram()->GetYaxis()->SetTitle(
      "[1/T_{1}(B_{0})] / [1/T_{1}(0)]");

  f_dipole->Draw();

  TF1 *f_generic = new TF1("f_generic", generic, B_min, B_max, 3);
  f_generic->SetTitle("");
  f_generic->SetLineColor(kBlue);
  f_generic->SetNpx(n_points);
  f_generic->SetParameter(0, B_d);
  f_generic->SetParameter(1, nu_c);
  f_generic->SetParameter(2, gamma_8Li);

  f_generic->GetHistogram()->GetXaxis()->SetTitle("B_{0} (T)");
  f_generic->GetHistogram()->GetYaxis()->SetTitle(
      "[1/T_{1}(B_{0})] / [1/T_{1}(0)]");

  f_generic->Draw("same");

  auto legend = new TLegend(0.15, 0.15, 0.60, 0.45);
  // option "C" allows to center the header
  legend->SetHeader("Models for dipole-dipole SLR 1/T_{1}", "C");
  legend->AddEntry(f_dipole, "Eq. (8.21) in Mehring (1983)", "l");
  legend->AddEntry(f_generic, "Generic BPP expression", "l");
  legend->Draw();

  // logarithmic scale
  gPad->SetLogx();
  gPad->SetLogy();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  canvas->Print("dipole-dipole.pdf", "EmbedFonts");
}
