#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/pippard.hpp>

double pippard_reduced_field_penetration(const double *x, const double *par) {
  return std::abs(
  triumf::superconductivity::pippard::reduced_field_penetration<double>(
      *x, par[0], par[1], par[2], par[3], par[4], par[5], par[6])
      );
}

double bcs_reduced_field_penetration(const double *x, const double *par) {
  return triumf::superconductivity::bcs::reduced_field_penetration<double>(
      *x, par[0], par[1], par[2], par[3], par[4], par[5], par[6]);
}

void plot_field_penetration_pippard() {

  const double z_min = 0.0;
  const double z_max = 200.0;
  
  const auto n_points = 500;

  const double T = 3.5;
  const double T_c = 9.25;
  const double Delta = triumf::superconductivity::bcs::gap_meV<double>(T_c);
  const double xi_0 = 38.0;
  const double ell = 10000.0;
  const double lambda_0 = 22.0;
  const double exponent = 4.0;
  
  TCanvas *canvas = new TCanvas();
  
  TF1 *f_pippard1 =
      new TF1("f_pippard1", pippard_reduced_field_penetration, z_min, z_max, 7);
  f_pippard1->SetTitle("");
  f_pippard1->SetNpx(n_points);
  f_pippard1->SetLineColor(kRed);
  f_pippard1->SetParameter(0, T);
  f_pippard1->SetParameter(1, T_c);
  f_pippard1->SetParameter(2, Delta);
  f_pippard1->SetParameter(3, xi_0);
  f_pippard1->SetParameter(4, ell);
  f_pippard1->SetParameter(5, lambda_0);
  f_pippard1->SetParameter(6, exponent);

  f_pippard1->GetHistogram()->GetXaxis()->SetTitle("z (nm)");
  f_pippard1->GetHistogram()->GetYaxis()->SetTitle("| B(z) / B(0) |");
  
  TF1 *f_pippard2 =
      new TF1("f_pippard2", pippard_reduced_field_penetration, z_min, z_max, 7);
  f_pippard2->SetTitle("");
  f_pippard2->SetNpx(n_points);
  f_pippard2->SetLineColor(kBlue);
  f_pippard2->SetParameter(0, 6.6);
  f_pippard2->SetParameter(1, T_c);
  f_pippard2->SetParameter(2, Delta);
  f_pippard2->SetParameter(3, xi_0);
  f_pippard2->SetParameter(4, ell);
  f_pippard2->SetParameter(5, lambda_0);
  f_pippard2->SetParameter(6, exponent);

  f_pippard2->GetHistogram()->GetXaxis()->SetTitle("z (nm)");
  f_pippard2->GetHistogram()->GetYaxis()->SetTitle("| B(z) / B(0) |");
  
  
  TF1 *f_pippard3 =
      new TF1("f_pippard3", pippard_reduced_field_penetration, z_min, z_max, 7);
  f_pippard3->SetTitle("");
  f_pippard3->SetNpx(n_points);
  f_pippard3->SetLineColor(kGreen);
  f_pippard3->SetParameter(0, 7.7);
  f_pippard3->SetParameter(1, T_c);
  f_pippard3->SetParameter(2, Delta);
  f_pippard3->SetParameter(3, xi_0);
  f_pippard3->SetParameter(4, ell);
  f_pippard3->SetParameter(5, lambda_0);
  f_pippard3->SetParameter(6, exponent);

  f_pippard3->GetHistogram()->GetXaxis()->SetTitle("z (nm)");
  f_pippard3->GetHistogram()->GetYaxis()->SetTitle("| B(z) / B(0) |");
  
  
  TF1 *f_pippard4 =
      new TF1("f_pippard4", pippard_reduced_field_penetration, z_min, z_max, 7);
  f_pippard4->SetTitle("");
  f_pippard4->SetNpx(n_points);
  f_pippard4->SetLineColor(kOrange);
  f_pippard4->SetParameter(0, 8.8);
  f_pippard4->SetParameter(1, T_c);
  f_pippard4->SetParameter(2, Delta);
  f_pippard4->SetParameter(3, xi_0);
  f_pippard4->SetParameter(4, ell);
  f_pippard4->SetParameter(5, lambda_0);
  f_pippard4->SetParameter(6, exponent);

  f_pippard4->GetHistogram()->GetXaxis()->SetTitle("z (nm)");
  f_pippard4->GetHistogram()->GetYaxis()->SetTitle("| B(z) / B(0) |");
  
  TF1 *f_pippard5 =
      new TF1("f_pippard5", pippard_reduced_field_penetration, z_min, z_max, 7);
  f_pippard5->SetTitle("");
  f_pippard5->SetNpx(n_points);
  f_pippard5->SetLineColor(kMagenta);
  f_pippard5->SetParameter(0, 9.2);
  f_pippard5->SetParameter(1, T_c);
  f_pippard5->SetParameter(2, Delta);
  f_pippard5->SetParameter(3, xi_0);
  f_pippard5->SetParameter(4, ell);
  f_pippard5->SetParameter(5, lambda_0);
  f_pippard5->SetParameter(6, exponent);

  f_pippard5->GetHistogram()->GetXaxis()->SetTitle("z (nm)");
  f_pippard5->GetHistogram()->GetYaxis()->SetTitle("| B(z) / B(0) |");
  
  
  
  f_pippard1->Draw();
  f_pippard2->Draw("same");
  f_pippard3->Draw("same");
  f_pippard4->Draw("same");
  f_pippard5->Draw("same");
  
  auto legend = new TLegend(0.125, 0.850, 1.0, 1.0);
  legend->SetNColumns(5);
  // auto legend = new TLegend(0.125, 0.175, 0.475, 0.375);
  // option "C" allows to center the header
  legend->SetHeader("Pippard K(q): T_{c} = 9.25 K, #ell = 10^{4} nm, #lambda_{0} = 22 nm, #xi_{0} = 38 nm", "C");
  legend->AddEntry(f_pippard1, "3.5 K", "l");
  legend->AddEntry(f_pippard2, "6.6 K", "l");
  legend->AddEntry(f_pippard3, "7.7 K", "l");
  legend->AddEntry(f_pippard4, "8.8 K", "l");
  legend->AddEntry(f_pippard5, "9.2 K", "l");
  
  
  // legend->AddEntry(f_bcs, "BCS", "l");
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

  canvas->Print("field_penetration_pippard_linear_scale.pdf", "EmbedFonts");
  
  gPad->SetLogy();
  f_pippard1->GetYaxis()->SetRangeUser(1e-4, 2e0);
  
  canvas->Print("field_penetration_pippard_log_scale.pdf", "EmbedFonts");
}
