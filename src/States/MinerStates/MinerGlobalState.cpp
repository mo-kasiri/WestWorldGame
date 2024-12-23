#include "MinerGlobalState.hpp"

MinerGlobalState *MinerGlobalState::Instance()
{
    MinerGlobalState Mgs;
    return &Mgs;
}
