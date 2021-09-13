#include <triumf/nmr/hebel_slichter.hpp>
#include <triumf/superconductivity/bcs.hpp>

double hebel_slichter_integrand(const double *x, const double *par) {
  return triumf::nmr::hebel_slichter::integrand<double>(*x, par[0], par[1],
                                                        par[2], par[3], par[4]);
}

double hebel_slichter_peak(const double *x, const double *par) {
  return triumf::nmr::hebel_slichter::slr_ratio<double>(*x, par[0], par[1],
                                                        par[2], par[3]);
}

double hebel_slichter_niobium(const double *x, const double *par) {
  return triumf::nmr::hebel_slichter::slr_ratio<double>(*x, par[0], par[1],
                                                        par[2], par[3]) *
         par[4] * (*x);
}

void plot_hebel_slichter_peak() {

  const auto n_points = 500;

  const double T_c = 10.0;
  const double Delta = triumf::superconductivity::bcs::gap_meV<double>(T_c);
  // std::cout << Delta << std::endl;
  const double alpha = 0.001;
  const double Gamma = 0.01;

  TCanvas *canvas1 = new TCanvas();

  const double T = 0.5 * T_c;
  const double E_min = 0.0;
  const double E_max = 5.0 * Delta;

  const double T_min = 0.0;
  const double T_max = 1.5 * T_c;

  TF1 *f_i = new TF1("f_i", hebel_slichter_integrand, E_min, E_max, 5);
  f_i->SetTitle("");
  f_i->SetNpx(n_points);
  f_i->SetLineColor(kRed);
  f_i->SetParameter(0, T);
  f_i->SetParameter(1, T_c);
  f_i->SetParameter(2, Delta);
  f_i->SetParameter(3, alpha);
  f_i->SetParameter(4, Gamma);

  f_i->GetHistogram()->GetXaxis()->SetTitle("E - E_{F} (meV)");
  f_i->GetHistogram()->GetYaxis()->SetTitle(
      "[N(E)N(E') + M(E)M(E')] #times f(E)[1-f(E')]");

  f_i->Draw();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  // logarithmic scale
  // gPad->SetLogx();
  gPad->SetLogy();

  canvas1->Print("hebel_slichter_integrand.pdf", "EmbedFonts");

  TCanvas *canvas2 = new TCanvas();

  TF1 *f_hs = new TF1("f_hs", hebel_slichter_peak, T_min, T_max, 4);
  f_hs->SetTitle("");
  f_hs->SetNpx(n_points);
  f_hs->SetLineColor(kRed);
  f_hs->SetParameter(0, T_c);
  f_hs->SetParameter(1, Delta);
  f_hs->SetParameter(2, alpha);
  f_hs->SetParameter(3, Gamma);

  f_hs->GetHistogram()->GetXaxis()->SetTitle("T (K)");
  f_hs->GetHistogram()->GetYaxis()->SetTitle(
      "( 1 / T_{1}^{superconducting} ) / ( 1 / T_{1}^{normal} )");

  f_hs->Draw();

  /*
  auto legend = new TLegend(0.15, 0.15, 0.60, 0.45);
  // option "C" allows to center the header
  legend->SetHeader("Models for Kernel K(q)", "C");
  legend->AddEntry(f_hs, "Pippard", "l");
  legend->AddEntry(f_bcs, "BCS", "l");
  legend->Draw();
  */

  // logarithmic scale
  // gPad->SetLogx();
  // gPad->SetLogy();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  canvas2->Print("hebel_slichter_peak.pdf", "EmbedFonts");

  TCanvas *canvas3 = new TCanvas();

  double T_c_Nb = 9.25;
  double Delta_Nb = triumf::superconductivity::bcs::gap_meV<double>(T_c_Nb);
  double alpha_Nb = 0.0;
  double Gamma_Nb = 0.05;
  double slope_Nb = 0.01271;

  TF1 *f_hss = new TF1("f_hss", hebel_slichter_niobium, T_min, T_max, 5);
  f_hss->SetTitle("");
  f_hss->SetNpx(n_points);
  f_hss->SetLineColor(kRed);
  f_hss->SetLineStyle(kDashed);
  f_hss->SetParameter(0, T_c_Nb);
  f_hss->SetParameter(1, Delta_Nb);
  f_hss->SetParameter(2, alpha_Nb);
  f_hss->SetParameter(3, Gamma_Nb);
  f_hss->SetParameter(4, slope_Nb);

  f_hss->GetHistogram()->GetXaxis()->SetTitle("T (K)");
  f_hss->GetHistogram()->GetYaxis()->SetTitle("1 / T_{1} (s^{-1})");

  f_hss->Draw();

  TF1 *f_lin = new TF1("f_lin", "[0] * x", T_min, T_max);
  f_lin->SetTitle("");
  f_lin->SetNpx(n_points);
  f_lin->SetLineColor(kRed);
  // f_lin->SetLineStyle(kDashed);
  f_lin->SetParameter(0, slope_Nb);

  f_lin->Draw("same");

  auto legend = new TLegend(0.45, 0.15, 0.95, 0.40);
  // option "C" allows to center the header
  // legend->SetHeader("Models for Kernel K(q)", "C");
  legend->AddEntry(f_lin, "Normal state (from data @ 4.10 T)", "l");
  legend->AddEntry(f_hss,
                   "SC state (predicted using: #Gamma = 0.05#Delta(0), "
                   "#hbar#omega_{n} = 0.0#Delta(0)) ",
                   "l");
  legend->Draw();

  // logarithmic scale
  // gPad->SetLogx();
  // gPad->SetLogy();

  // tick marks on all sides of the plot
  gPad->SetTickx();
  gPad->SetTicky();

  // grid lines
  gPad->SetGridx();
  gPad->SetGridy();

  canvas3->Print("hebel_slichter_niobium.pdf", "EmbedFonts");
}
