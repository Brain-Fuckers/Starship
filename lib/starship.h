#ifndef STARSHIP_H
#define STARSHIP_H


class Starship
{
private:
    Position;

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

//    PowerStation; // Генерация энергии
    Strength;
    FuelType;
    Efficiency;
    Productivity;

//    EnergyStorage; // Запасает и быстро отдаёт энергию
    Strength;
    Productivity;
    Capacity;
    Amount;
    Leakage;

//    DriveUnit; //
    Strength;
    MaxConsumption;
//    Mode;
    Range;
    Speed;
    Consumption;

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
    Strength;
    MaxConsumption;
    Efficiency;
    Leakage;

//    Armor
    Strength; //Вероятность отразить урон.

//    Shell;
    Strength; //При мгновенном сильном повреждении может оторвать модули.

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

public:
    Starship();
// //     effect(Module, Effect);
//    shot();
//    move();
    damage(); //уворот, поглащение щитами, отражение броне, поглащение бронёй, поглащение корпусом.
};

#endif // STARSHIP_H
