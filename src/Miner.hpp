#pragma once

#include <iostream>
#include "BaseGameEntity.hpp"

#include "States/StateMachine.hpp"

#include "States/State.hpp"
#include "States/MinerStates/MinerGlobalState.hpp"

#include "States/MinerStates/EnterMineAndDigForNugget.hpp"
#include "States/MinerStates/GoHomeAndSleepTilRested.hpp"
#include "States/MinerStates/QuenchThirst.hpp"
#include "States/MinerStates/VisitBankAndDepositGold.hpp"

typedef std::string location_type;

class Miner : public BaseGameEntity
{
private:
    StateMachine<Miner> *m_pStateMachine;

    State<Miner> *m_pCurrentState;
    State<Miner> *m_pPreviousState;
    State<Miner> *m_pGlobalState;

    location_type m_Location;
    int m_iGoldCarried;
    int m_iMoneyInBank;
    int m_iThirst;
    int m_iFatigue;

public:
    Miner(int ID) : m_Location(0),
                    m_iGoldCarried(0),
                    m_iMoneyInBank(0),
                    m_iThirst(0),
                    m_iFatigue(0),
                    BaseGameEntity(ID)
    {

        // Set up state machine
        m_pStateMachine = new StateMachine<Miner>(this);

        m_pStateMachine->SetCurrentState(GoHomeAndSleeptilRested::Instance());
        m_pStateMachine->SetCurrentState(MinerGlobalState::Instance());
    };

    ~Miner() { delete m_pStateMachine; }

    void Update();
    void ChangeState(State<Miner> *pNewState);
    void RevertToPreviousState();
    location_type Location();

    StateMachine<Miner> *GetFSM() const { return m_pStateMachine; }
};