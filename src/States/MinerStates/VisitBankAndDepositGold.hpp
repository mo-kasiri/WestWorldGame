#pragma once

#include "State.hpp"
class VisitBankAndDepositGold : public State<Miner>
{
private:
    VisitBankAndDepositGold() {};
    VisitBankAndDepositGold(VisitBankAndDepositGold &) = delete;

public:
    static VisitBankAndDepositGold *Instance();
    virtual void Enter(Miner *pMiner);
    virtual void Execute(Miner *pMiner);
    virtual void Exit(Miner *pMiner);
};