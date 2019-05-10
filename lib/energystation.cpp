#include "energystation.h"

EnergyStation::EnergyStation()
{

}

void EnergyStation::init(double _Rate)
{
    Productivity.init(_Rate, 0);
}

