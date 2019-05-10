#ifndef ENERGYSTATION_H
#define ENERGYSTATION_H
#include "permanenteffect.h"

class EnergyStation
{
private:
    //    double Strength;
    //    FuelType;
    //    Efficiency;
public:
    EnergyStation();
    void init(double _Rate);

    PermanentEffect Productivity;
};

#endif // ENERGYSTATION_H
