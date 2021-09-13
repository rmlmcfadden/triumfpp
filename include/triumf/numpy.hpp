#ifndef TRIUMF_NUMPY_HPP
#define TRIUMF_NUMPY_HPP

#include <cmath>
#include <vector>

// TRIUMF: Canada's particle accerlerator centre
namespace triumf {

// NumPy inspired functions
namespace numpy {

/// \brief Return an array numbers spaced evenly on a linear scale.
/// \details The array contains num values [start, stop].
/// See also:
/// https://numpy.org/doc/stable/reference/generated/numpy.linspace.html
template <typename T = double>
std::vector<T> linspace(T start, T stop, std::size_t num = 100) {
  std::vector<T> values(num);
  T step = (stop - start) / (static_cast<T>(num) - 1.0);
  for (std::size_t i = 0; i < num; ++i) {
    values.at(i) = start + step * i;
  }
  return values;
}

/// \brief Return an array numbers spaced evenly on a log10 scale.
/// \details The array contains num values between [10^start, 10^stop].
/// See also:
/// https://numpy.org/doc/stable/reference/generated/numpy.logspace.html
template <typename T = double>
std::vector<T> logspace(T start, T stop, std::size_t num = 100) {
  std::vector<T> values(num);
  std::vector<T> exponents = linspace<T>(start, stop, num);
  for (std::size_t i = 0; i < num; ++i) {
    values.at(i) = std::pow(static_cast<T>(10.0), exponents.at(i));
  }
  return values;
}

/// \brief Return an array of numbers spaced evenly on a log10 scale.
/// \details The array contains num values between [10^start, 10^stop].
/// See also:
/// https://numpy.org/doc/stable/reference/generated/numpy.geomspace.html
template <typename T = double>
std::vector<T> geomspace(T start, T stop, std::size_t num = 100) {
  return logspace<T>(std::log10(start), std::log10(stop), num);
}

} // namespace numpy

} // namespace triumf

#endif // TRIUMF_NUMPY_HPP
