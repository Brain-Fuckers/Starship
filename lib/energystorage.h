#ifndef ENERGYSTORAGE_H
#define ENERGYSTORAGE_H
#include "effect.h"

class EnergyStorage
{
    //    double Strength;
    double MaxProductivity;
    double Capacity;
    double Amount;
    //    double Leakage; // пороцент от запасённого в секунду
    Effect EnergyProduction; //Способность отдавать энергии за секунду времени

public:
    EnergyStorage();
};

#endif // ENERGYSTORAGE_H
