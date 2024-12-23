#include "QuenchThirst.hpp"

QuenchThirst *QuenchThirst::Instance()
{
    QuenchThirst Qt;
    return &Qt;
}