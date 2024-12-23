/*  Singleton Design Pattern  */
#pragma once

#include "State.hpp"
#include "VisitBankAndDepositGold.hpp"
class EnterMineAndDigForNugget : public State<Miner>
{
private:
    EnterMineAndDigForNugget() {};
    EnterMineAndDigForNugget(EnterMineAndDigForNugget &) = delete;

public:
    static EnterMineAndDigForNugget *Instance();
    virtual void Enter(Miner *pMiner);
    virtual void Execute(Miner *pMiner);
    virtual void Exit(Miner *pMiner);
};