#include "EnterMineAndDigForNugget.hpp"

EnterMineAndDigForNugget *EnterMineAndDigForNugget::Instance()
{
    EnterMineAndDigForNugget *Em = new EnterMineAndDigForNugget();
    return Em;
}

void EnterMineAndDigForNugget::Enter(Miner *pMiner)
{
    if (pMiner->Location() != goldmine)
    {
        std::cout << "\n"
                  << GetNameOfEntity(pMiner->ID()) << ": "
                  << "Walking to the gold mine\n";
        pMiner->ChangeLocation(goldmine);
    }
}
void EnterMineAndDigForNugget::Execute(Miner *pMiner)
{
    pMiner->AddToGoldCarried(1);
    pMiner->IncreaseFatigue();

    std::cout << "\n"
              << GetNameOfEntity(pMiner->ID) << ": "
              << "Picking up a nugget";

    if (pMiner->PocketsFull())
    {
        pMiner->ChangeState(VisitBankAndDepositGold::Instance());
    }

    if (pMiner->Thirsty())
    {
        pMiner->ChangeState(QuenchThirst::Instance());
    }
}
void EnterMineAndDigForNugget::Exit(Miner *pMiner)
{
    std::cout << "\n"
              << GetNameEntity(pMiner->ID()) << ": "
              << "Ah I'm leaving the gold mine with mah pockets full of sweet gold";
};
