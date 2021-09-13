#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/pippard.hpp>

double pippard_kernel(const double *x, const double *par) {
  return triumf::superconductivity::pippard::kernel<double>(
      *x, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);
}

double bcs_kernel(const double *x, const double *par) {
  return triumf::superconductivity::bcs::kernel<double>(
      *x, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);
}

void plot_kernel() {

  const double q_min = 1e-3;
  const double q_max = 1e2;
  
  const auto n_points = 200;

  const double T = 1.0;
  const double T_c = 9.25;
  const double Delta = triumf::superconductivity::bcs::gap_meV<double>(T_c);
  const double xi_0 = 38.0;
  const double ell = 10000.0;
  const double lambda_0 = 22.0;
  const double exponent = 4.0;
  
  TCanvas *canvas = new TCanvas();
  
  TF1 *f_pippard =
      new TF1("f_pippard", pippard_kernel, q_min, q_max, 7);
  f_pippard->SetTitle("");
  f_pippard->SetNpx(n_points);
  f_pippard->SetLineColor(kRed);
  f_pippard->SetParameter(0, T);
  f_pippard->SetParameter(1, T_c);
  f_pippard->SetParameter(2, Delta);
  f_pippard->SetParameter(3, xi_0);
  f_pippard->SetParameter(4, ell);
  f_pippard->SetParameter(5, lambda_0);
  f_pippard->SetParameter(6, exponent);

  f_pippard->GetHistogram()->GetXaxis()->SetTitle("q (nm^{-1})");
  f_pippard->GetHistogram()->GetYaxis()->SetTitle("K(q) (nm^{-2})");

  f_pippard->Draw();

  TF1 *f_bcs = new TF1("f_bcs", bcs_kernel, q_min, q_max, 7);
  f_bcs->SetTitle("");
  f_bcs->SetLineColor(kBlue);
  f_bcs->SetNpx(n_points);
  f_bcs->SetParameter(0, T);
  f_bcs->SetParameter(1, T_c);
  f_bcs->SetParameter(2, Delta);
  f_bcs->SetParameter(3, xi_0);
  f_bcs->SetParameter(4, ell);
  f_bcs->SetParameter(5, lambda_0);
  f_bcs->SetParameter(6, exponent);

  f_bcs->GetHistogram()->GetXaxis()->SetTitle("q (nm^{-1})");
  f_bcs->GetHistogram()->GetYaxis()->SetTitle("K(q) (nm^{-2})");

  f_bcs->Draw("same");

  
  auto legend = new TLegend(0.15, 0.15, 0.60, 0.40);
  // option "C" allows to center the header
  legend->SetHeader("Models for Kernel K(q)", "C");
  legend->AddEntry(f_pippard, "Pippard", "l");
  legend->AddEntry(f_bcs, "BCS", "l");
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

  canvas->Print("kernel.pdf", "EmbedFonts");
}
