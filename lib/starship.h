#ifndef STARSHIP_H
#define STARSHIP_H

#include "effect.h"
#include "permanenteffect.h"
#include "energystation.h"
#include "energystorage.h"

class Starship
{
private:
//    Position;

/*
//    FuelTank;
    FuelType;
    Capacity;
    Amount;
    Leakage;
//    fuel system
    Productivity;
    Leakage;
*/

    EnergyStation EStation;
//    EnergyStation; // Генерация энергии, медленно нарастает мощьность.
//    double Strength;
//    FuelType;
//    Efficiency;
//    double PSProductivity;

    EnergyStorage EStorage; // Запасает излишки енергии, быстро отдаёт энергию, обладает энергостоком
//    double Strength;
//    double ESProductivity; //Способность отдавать энергии за секунду времени
//    double ESCapacity;
//    double ESAmount;
//    double Leakage; // пороцент от запасённого в секунду

/*
//    DriveUnit; //
    Strength;
    MaxConsumption;
//    Mode;
    Range;
    Speed;
    Consumption;
*/

//    TeleportUnit;

/*
//    Cannon;
    MaxConsumption;
    Accuracy;
    MaxShells;
    Shells;
//    Mode;
    FireRate;
    Power;
    Consumption;
*/

//    EnergyShield; //поглащение урона, перегрузка
//    double Strength;
    double EShMaxConsumption;
    double EShEfficiency;
//    double EShOverload; //время поглащения урона
//    Efficiency;
//    double EShLeakage;

/*
//    Armor
    Strength; //Вероятность отразить урон.

//    Shell;
    Strength; //При мгновенном сильном повреждении может оторвать модули.
*/

/*
//    TransportModule;
//    TransportSystem;


//    DistortingField;
    MaxConsumption;
//    Mode;
    Radius;
    Coefficient;
    Consumption;

//    RepairSystem;

//    CommunicationSystem;

*/

    Effect Consumption;

    Effect energyShieldAbsorb(Effect Damage); //Demage - длительнось, количество энергии, энергии в секунду, время начала воздействия
    double energyGenerationRate(double Time);
    double energyShieldEfficiency(double Time);

public:
    Starship();
    void init();
// //     effect(Module, Effect);
//    shot();
//    move();
    void status(double Time);
    Effect damage(Effect Damage); //уворот, поглащение щитами, отражение броне, поглащение бронёй, поглащение корпусом.
};

#endif // STARSHIP_H
