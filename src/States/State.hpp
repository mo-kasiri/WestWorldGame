#pragma once

#include <iostream>
#include "../BaseGameEntity.hpp"
#include "../Miner.hpp"

template <class entity_type>
class State
{
public:
    virtual ~State() {};
    virtual void Execute(entity_type *) = 0;
    virtual void Enter(entity_type *) = 0;
    virtual void Exit(entity_type *) = 0;
};