#ifndef TRIUMF_SUPERCONDUCTIVITY_LONDON_HPP
#define TRIUMF_SUPERCONDUCTIVITY_LONDON_HPP

#include <cmath>

#include <triumf/superconductivity/phenomenology.hpp>

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// London's phenomenological theory of superconductivity
namespace london {

// London Kernel
template <typename T = double>
T kernel(T q, T temperature, T critical_temperature, T, exponent, T lambda_0) {
  return std::pow(phenomenology::penetration_depth<T>(
                      temperature, critical_temperature, exponent, lambda_0),
                  -2);
}

// (reduced) London Kernel
template <typename T = double>
T reduced_kernel(T q, T temperature, T critical_temperature, T exponent,
                 T lambda_0) {
  return 1.0;
}

} // namespace london

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_LONDON_HPP
