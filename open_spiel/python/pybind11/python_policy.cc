

#include "open_spiel/python/pybind11/python_policy.h"

#include "open_spiel/spiel_utils.h"

#ifndef SINGLE_ARG
   #define SINGLE_ARG(...) __VA_ARGS__
#endif

namespace open_spiel {

std::pair< std::vector< Action >, std::vector< double > > PyPolicy::GetStatePolicyAsParallelVectors(
   const State& state
) const
{
   PYBIND11_OVERRIDE_NAME(
      SINGLE_ARG(std::pair< std::vector< Action >, std::vector< double > >),
      Policy,
      "get_state_policy_as_parallel_vectors",
      GetStatePolicyAsParallelVectors,
      state
   );
}
std::pair< std::vector< Action >, std::vector< double > > PyPolicy::GetStatePolicyAsParallelVectors(
    std::string_view info_state
) const
{
   PYBIND11_OVERRIDE_NAME(
      SINGLE_ARG(std::pair< std::vector< Action >, std::vector< double > >),
      Policy,
      "get_state_policy_as_parallel_vectors",
      GetStatePolicyAsParallelVectors,
      info_state
   );
}
std::unordered_map< Action, double > PyPolicy::GetStatePolicyAsMap(const State& state) const
{
   PYBIND11_OVERRIDE_NAME(
      SINGLE_ARG(std::unordered_map< Action, double >),
      Policy,
      "action_probabilities",
      GetStatePolicyAsMap,
      state
   );
}
std::unordered_map< Action, double > PyPolicy::GetStatePolicyAsMap(std::string_view info_state
) const
{
   PYBIND11_OVERRIDE_NAME(
      SINGLE_ARG(std::unordered_map< Action, double >),
      Policy,
      "action_probabilities",
      GetStatePolicyAsMap,
      info_state
   );
}
ActionsAndProbs PyPolicy::GetStatePolicy(const State& state) const
{
   PYBIND11_OVERRIDE_NAME(ActionsAndProbs, Policy, "get_state_policy", GetStatePolicy, state);
}
ActionsAndProbs PyPolicy::GetStatePolicy(const State& state, Player player) const
{
   PYBIND11_OVERRIDE_NAME(
      ActionsAndProbs, Policy, "get_state_policy", GetStatePolicy, state, player
   );
}
ActionsAndProbs PyPolicy::GetStatePolicy(std::string_view info_state) const
{
   PYBIND11_OVERRIDE_NAME(ActionsAndProbs, Policy, "get_state_policy", GetStatePolicy, info_state);
}
std::string PyPolicy::Serialize(int double_precision, std::string delimiter) const
{
   PYBIND11_OVERRIDE_NAME(std::string, Policy, "serialize", Serialize, double_precision, delimiter);
}

}  // namespace open_spiel