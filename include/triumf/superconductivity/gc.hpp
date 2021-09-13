#ifndef TRIUMF_SUPERCONDUCTIVITY_GC_HPP
#define TRIUMF_SUPERCONDUCTIVITY_GC_HPP

#include <cmath>

#include "triumf/superconductivity/phenomenology.hpp"

// TRIUMF: Canada's particle accelerator centre
namespace triumf {

//
namespace superconductivity {

// Gorter-Casimir phenomenological two-fluid model
namespace gc {

// temperature dependence of the (reduced) penetration depth
template <typename T = double>
T reduced_penetration_depth(T reduced_temperature) {
  return phenomenology::reduced_penetration_depth<T>(reduced_temperature, 4);
}

// temperature dependence of the (reduced) penetration depth
template <typename T = double>
T reduced_penetration_depth(T temperature, T critical_temperature, T exponent) {
  return phenomenology::reduced_penetration_depth<T>(temperature,
                                                     critical_temperature, 4);
}

// temperature dependence of the penetration depth
template <typename T = double>
T penetration_depth(T temperature, T critical_temperature, T exponent,
                    T lambda_0) {
  return phenomenology::penetration_depth<T>(temperature, critical_temperature,
                                             4, lambda_0);
}

} // namespace gc

} // namespace superconductivity

} // namespace triumf

#endif // TRIUMF_SUPERCONDUCTIVITY_GC_HPP
