#ifndef STARSHIP_H
#define STARSHIP_H


class Starship
{
    //    FuelTank;
        FuelType;
        Capacity;
        Amount;
        Leakage;
    //    fuel system
        Productivity;
        Leakage;

    //    PowerStation;
        FuelType;
        Efficiency;
        Productivity;

    //    EnergyStorage;
        Productivity;
        Capacity;
        Amount;
        Leakage;

    //    DriveUnit;
        MaxConsumption;
    //    Mode;
        Range;
        Speed;
        Consumption;

    //    TeleportUnit;

    //    Cannon;
        MaxConsumption;
        Accuracy;
        MaxShells;
        Shells;
    //    Mode;
        FireRate;
        Power;
        Consumption;

    //    EnergyShield;
        MaxConsumption;
        Efficiency;
        Leakage;

    //    TransportModule;
    //    TransportSystem;

    //    Armor

    //    DistortingField;
        MaxConsumption;
    //    Mode;
        Radius;
        Coefficient;
        Consumption;

    //    RepairSystem;

public:
    Starship();
};

#endif // STARSHIP_H
