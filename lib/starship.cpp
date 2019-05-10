#include "starship.h"
#include <iostream>

Effect Starship::energyShieldAbsorb(Effect Damage)
{
    double DamageEnergy = (Damage.rate() - energyGenerationRate(Damage.time()) * energyShieldEfficiency(Damage.time())/100) * Damage.duration();
    if (DamageEnergy < 0){
        DamageEnergy = 0;
    }
    double AbsorbedEnergy = Damage.value() - DamageEnergy;
//    energyShieldConsumption(AbsorbedEnergy, Damage.time(), Demage.duration());
    return Effect(DamageEnergy, Damage.time(), Damage.duration());
}

double Starship::energyGenerationRate(double Time)
{

    return PSProductivity + ESProductivity;//+ потребление
}

double Starship::energyShieldEfficiency(double Time)
{
    return EShEfficiency;
}

Starship::Starship()
{

}

void Starship::init()
{
    EnergyStation.init(1);
//    PSProductivity = 1;
    ESProductivity = 5;
    ESCapacity = 15;
    ESAmount = 0;
    EShMaxConsumption = 7;
    EShEfficiency = 70;

}

void Starship::status(double Time)
{

    std::cout
        << EnergyStation.Productivity.rate() << std::endl
        << ESCapacity  << std::endl
        << ESAmount << std::endl
        << EShMaxConsumption << std::endl
        << EShEfficiency << std::endl;
}

Effect Starship::damage(Effect Damage)
{
//    dodge();
    Damage = energyShieldAbsorb(Damage);
//    ArmorRepulse();
//    ArmorAbsorb();
//    ModuleAbsorb();
    return Damage;
}

