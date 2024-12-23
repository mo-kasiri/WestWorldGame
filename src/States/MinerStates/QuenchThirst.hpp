#pragma once

#include "../State.hpp"
class QuenchThirst : public State<Miner>
{
private:
    QuenchThirst() {};
    QuenchThirst(QuenchThirst &) = delete;

public:
    static QuenchThirst *Instance();
    virtual void Enter(Miner *pMiner);
    virtual void Execute(Miner *pMiner);
    virtual void Exit(Miner *pMiner);
};