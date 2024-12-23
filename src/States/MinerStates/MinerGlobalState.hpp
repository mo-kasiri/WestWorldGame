#pragma once

#include "../State.hpp"
class MinerGlobalState : public State<Miner>
{
private:
    MinerGlobalState() {};
    MinerGlobalState(MinerGlobalState &) = delete;

public:
    static MinerGlobalState *Instance();
    virtual void Enter(Miner *pMiner);
    virtual void Execute(Miner *pMiner);
    virtual void Exit(Miner *pMiner);
};