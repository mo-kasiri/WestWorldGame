#include "Miner.hpp"

// Miner::Miner(int ID)
// {
// }

void Miner::Update()
{
    this->m_iThirst += 1;
    if (m_pCurrentState)
    {
        m_pCurrentState->Execute(this);
    }
    this->m_pStateMachine->Update();
}

void Miner::ChangeState(State<Miner> *pNewState)
{
    // Make sure both states are valide
    // TODO:

    this->m_pCurrentState->Exit(this);

    this->m_pCurrentState = pNewState;

    this->m_pCurrentState->Enter(this);
}

location_type Miner::Location()
{
    return location_type();
}
