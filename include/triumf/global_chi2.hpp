#ifndef TRIUMF_GLOBAL_CHI2_HPP
#define TRIUMF_GLOBAL_CHI2_HPP

#include <vector>

#include <Fit/BinData.h>
#include <Fit/Chi2FCN.h>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

/// class for calculating the "global" chi2 using ROOT's fitting utilities
class global_chi2 {
public:
  /// constructor
  global_chi2(std::vector<ROOT::Fit::Chi2Function *> &chi2_vector,
              std::vector<std::vector<int>> &parameter_index_matrix) {
    for (auto c2v : chi2_vector) {
      chi2.push_back(c2v);
    }
    parameter_index = parameter_index_matrix;
  };

  /// necessary for integration w/ ROOT's fitting objects
  double operator()(const double *par) const {
    // Function parameters for chi2 calculation
    std::vector<std::vector<double>> parameters;
    parameters.reserve(chi2.size());

    // Map the array of shared/free parameters to a matrix using the parameter
    // index matrix
    for (auto &i : parameter_index) {
      std::vector<double> tmp_parameters;
      for (auto &j : i) {
        tmp_parameters.push_back(par[j]);
      }
      parameters.push_back(tmp_parameters);
    }

    // sum up the chi2s from each dataset
    double global_chi2 = 0.0;
    for (std::size_t i = 0; i < chi2.size(); ++i) {
      global_chi2 += (*chi2.at(i))(parameters.at(i).data());
    }
    return global_chi2;
  };

  /// return the number of data points used during fitting for calculating the
  /// reduced chi^2
  static unsigned int ndp(const std::vector<ROOT::Fit::BinData> &data_vector) {
    unsigned int ndp = 0;
    for (auto &data : data_vector) {
      ndp += data.Size();
    }
    return ndp;
  };

private:
  /// matrix of parameter indices to pass to the individual chi2 functions
  std::vector<std::vector<int>> parameter_index;
  /// holder of the individual chi2 functions
  std::vector<const ROOT::Math::IMultiGenFunction *> chi2;
  /// helper function for calculating individual chi2
  static double get_chi2(const ROOT::Math::IMultiGenFunction *function,
                         const double *parameters) {
    return (*function)(parameters);
  };
}; //  class global_chi2

} // namespace triumf

#endif // TRIUMF_GLOBAL_CHI2_HPP
