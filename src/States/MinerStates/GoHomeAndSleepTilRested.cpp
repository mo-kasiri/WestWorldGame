#include "GoHomeAndSleepTilRested.hpp"

GoHomeAndSleeptilRested *GoHomeAndSleeptilRested::Instance()
{
    GoHomeAndSleeptilRested *Gh = new GoHomeAndSleeptilRested;
    return Gh;
}