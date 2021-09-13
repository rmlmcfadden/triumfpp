// C++ standard library headers
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

// triumf++ headers
#include <triumf/bnmr/srf.hpp>
#include <triumf/numpy.hpp>
#include <triumf/superconductivity/bcs.hpp>

// ROOT headers
#include <ROOT/RCsvDS.hxx>
#include <ROOT/RDF/RInterface.hxx>
#include <ROOT/RDataFrame.hxx>
#include <TCanvas.h>
#include <TGraph.h>

/*
const double TEMPERATURE = 2.5;
const double T_C = 9.25;
const double D_0 = triumf::superconductivity::bcs::gap_meV<double>(TEMPERATURE);
const double XI_0 = 38.0;
const double ELL = 1e4;
const double LAMBDA_0 = 40.0;
const double EXPONENT = 4.0;
const double B_0 = 0.02;
const double B_D = 5e-5;
const double NU_C = 0.1 / 23.8e-6;
const double SLR_C = 0.75;
const double SLR_N = 1.0;
const double SURFACE_THICKNESS = 10.0;
const double SURFACE_RATE = 10.0;
*/

void test_depth_averaging2() {
  //
  triumf::bnmr::srf::DepthResolvedAnalyzer<double> dra(
      "srim_profile_8li_nb_fitpar.csv");
  dra.critical_temperature = 9.25;
  dra.gap_meV = triumf::superconductivity::bcs::gap_meV<double>(9.25);
  dra.xi_0 = 38.0;
  dra.mean_free_path = 1e4;
  dra.lambda_0 = 40.0;
  dra.exponent = 4.0;
  dra.applied_field = 0.020;
  dra.dipole_field = 4e-5;
  dra.correlation_rate = 1.0 / 23.8e-6;
  dra.slr_constant = 0.75;
  dra.slr_exponent = 1.0;
  dra.surface_thickness = 10.0;
  dra.surface_rate = 20.0;

  //
  std::vector<double> temperatures =
      triumf::numpy::linspace<double>(0.1, 16.0, 100);

  //
  std::vector<double> slr_rates_01keV(temperatures.size());
  std::vector<double> slr_rates_05keV(temperatures.size());
  std::vector<double> slr_rates_10keV(temperatures.size());
  std::vector<double> slr_rates_15keV(temperatures.size());
  std::vector<double> slr_rates_20keV(temperatures.size());
  std::vector<double> slr_rates_25keV(temperatures.size());

  //
  for (std::size_t i = 0; i < temperatures.size(); ++i) {
    //
    dra.temperature = temperatures.at(i);
    //
    slr_rates_01keV.at(i) = dra(1.0);
    slr_rates_05keV.at(i) = dra(5.0);
    slr_rates_10keV.at(i) = dra(10.0);
    slr_rates_15keV.at(i) = dra(15.0);
    slr_rates_20keV.at(i) = dra(20.0);
    slr_rates_25keV.at(i) = dra(25.0);
  }

  //
  TGraph *g_01keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_01keV.data());
  TGraph *g_05keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_05keV.data());
  TGraph *g_10keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_10keV.data());
  TGraph *g_15keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_15keV.data());
  TGraph *g_20keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_20keV.data());
  TGraph *g_25keV = new TGraph(temperatures.size(), temperatures.data(),
                               slr_rates_25keV.data());

  //
  g_01keV->SetMarkerStyle(kFullCircle);
  g_05keV->SetMarkerStyle(kFullCircle);
  g_10keV->SetMarkerStyle(kFullCircle);
  g_15keV->SetMarkerStyle(kFullCircle);
  g_20keV->SetMarkerStyle(kFullCircle);
  g_25keV->SetMarkerStyle(kFullCircle);

  //
  g_01keV->SetMarkerColor(kYellow);
  g_05keV->SetMarkerColor(kRed);
  g_10keV->SetMarkerColor(kBlue);
  g_15keV->SetMarkerColor(kOrange);
  g_20keV->SetMarkerColor(kGreen);
  g_25keV->SetMarkerColor(kMagenta);

  //
  g_01keV->SetLineColor(kYellow);
  g_05keV->SetLineColor(kRed);
  g_10keV->SetLineColor(kBlue);
  g_15keV->SetLineColor(kOrange);
  g_20keV->SetLineColor(kGreen);
  g_25keV->SetLineColor(kMagenta);

  //
  g_01keV->SetNameTitle("g_01keV", "1 keV;Temperature (K);SLR Rate (s^{-1})");
  g_05keV->SetNameTitle("g_05keV", "5 keV;Temperature (K);SLR Rate (s^{-1})");
  g_10keV->SetNameTitle("g_10keV", "10 keV;Temperature (K);SLR Rate (s^{-1})");
  g_15keV->SetNameTitle("g_15keV", "15 keV;Temperature (K);SLR Rate (s^{-1})");
  g_20keV->SetNameTitle("g_20keV", "20 keV;Temperature (K);SLR Rate (s^{-1})");
  g_25keV->SetNameTitle("g_25keV", "25 keV;Temperature (K);SLR Rate (s^{-1})");

  // draw "shaded" area representing the superconducting state
  // https://root-forum.cern.ch/t/marking-an-region-with-different-background-color-in-tgraph/37571/4
  // larger area

  double x1[5] = {0.0, dra.critical_temperature, dra.critical_temperature, 0.0,
                  0.0};
  double y1[5] = {0.0, 0.0, 45.0, 45.0, 0.0};
  TGraph *excl1 = new TGraph(5, x1, y1);
  excl1->SetLineColor(18);
  excl1->SetFillColor(18);
  excl1->SetFillStyle(1001);

  TCanvas *c_mg = new TCanvas();
  // mg->Draw("A pmc plc");

  //
  TMultiGraph *mg = new TMultiGraph();
  mg->SetNameTitle("mg", "");
  mg->GetXaxis()->SetTitle("Temperature (K)");
  mg->GetYaxis()->SetTitle("Depth averaged SLR rate 1/T_{1} (s^{-1})");

  mg->Add(excl1, "F");

  mg->Add(g_01keV, "PL");
  mg->Add(g_05keV, "PL");
  mg->Add(g_10keV, "PL");
  mg->Add(g_15keV, "PL");
  mg->Add(g_20keV, "PL");
  mg->Add(g_25keV, "PL");

  mg->Draw("AP");
  //
  // gPad->BuildLegend();

  gPad->RedrawAxis();
  gPad->RedrawAxis("G");
  gPad->Modified();
  gPad->Update();

  TLegend *legend = new TLegend(0.60, 0.60, 0.975, 0.975);
  legend->SetHeader("^{8}Li^{+} implantation energies", "C");
  legend->SetNColumns(2);

  legend->AddEntry(g_01keV, "1 keV", "PL");
  legend->AddEntry(g_05keV, "5 keV", "PL");
  legend->AddEntry(g_10keV, "10 keV", "PL");
  legend->AddEntry(g_15keV, "15 keV", "PL");
  legend->AddEntry(g_20keV, "20 keV", "PL");
  legend->AddEntry(g_25keV, "25 keV", "PL");

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

  mg->GetXaxis()->UnZoom();
  mg->GetYaxis()->UnZoom();
  gPad->Modified();
  gPad->Update();

  mg->GetXaxis()->SetRangeUser(0.0, 20.0);
  mg->GetYaxis()->SetRangeUser(0.0, 45.0);
  gPad->Modified();
  gPad->Update();

  c_mg->Update();

  c_mg->Print("toy_depth_average_temperatures.pdf", "EmbedFonts");
}

#ifndef __CLING__
int main() {
  test_depth_averaging2();
  return EXIT_SUCCESS;
}
#endif
