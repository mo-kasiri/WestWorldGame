#pragma once

#include "../State.hpp"
class GoHomeAndSleeptilRested : public State<Miner>
{
private:
    GoHomeAndSleeptilRested() {};
    GoHomeAndSleeptilRested(GoHomeAndSleeptilRested &) = delete;

public:
    static GoHomeAndSleeptilRested *Instance();
    virtual void Enter(Miner *pMiner);
    virtual void Execute(Miner *pMiner);
    virtual void Exit(Miner *pMiner);
};