#include <triumf/superconductivity/bcs.hpp>
#include <triumf/superconductivity/phenomenology.hpp>

double two_fluid_penetration_depth(const double *x, const double *par) {
  return triumf::superconductivity::phenomenology::penetration_depth<double>(
      *x, par[0], par[1], par[2]);
}

double bcs_penetration_depth(const double *x, const double *par) {
  return triumf::superconductivity::bcs::penetration_depth<double>(
      *x, par[0], par[1], par[2], par[3], par[4], par[5]);
}

void plot_penetration_depth() {

  const auto n_points = 500;

  const double T = 0.1;
  const double T_c = 9.25;
  const double Delta = triumf::superconductivity::bcs::gap_meV<double>(T_c);
  const double xi_0 = 38.0;
  const double ell = 1000.0;
  const double lambda_0 = 32.0;
  const double exponent = 4.0;

  const double diff = 1e-3;
  const double T_min = 0.0 + diff;
  const double T_max = T_c - diff;

  TF1 *f_two_fluid =
      new TF1("f_two_fluid", two_fluid_penetration_depth, T_min, T_max, 3);
  f_two_fluid->SetNpx(n_points);
  f_two_fluid->SetLineColor(kRed);
  f_two_fluid->SetParameter(0, T_c);
  f_two_fluid->SetParameter(1, Delta);
  f_two_fluid->SetParameter(2, xi_0);
  f_two_fluid->SetParameter(3, ell);
  f_two_fluid->SetParameter(4, lambda_0);
  f_two_fluid->SetParameter(5, exponent);

  f_two_fluid->GetHistogram()->GetXaxis()->SetTitle("T (K)");
  f_two_fluid->GetHistogram()->GetYaxis()->SetTitle("#lambda(T) (nm)");

  f_two_fluid->Draw();

  TF1 *f_bcs = new TF1("f_bcs", bcs_penetration_depth, T_min, T_max, 6);
  f_bcs->SetLineColor(kBlue);
  f_bcs->SetNpx(n_points);
  f_bcs->SetParameter(0, T_c);
  f_bcs->SetParameter(1, Delta);
  f_bcs->SetParameter(2, xi_0);
  f_bcs->SetParameter(3, ell);
  f_bcs->SetParameter(4, lambda_0);
  f_bcs->SetParameter(5, exponent);

  f_bcs->GetHistogram()->GetXaxis()->SetTitle("T (K)");
  f_bcs->GetHistogram()->GetYaxis()->SetTitle("#lambda (nm)");

  f_bcs->Draw("same");

  // gPad->SetLogx();
  gPad->SetLogy();
}
