#pragma once
#include "Weapon.h"

class Bow : public Weapon
{
public:
    Bow() = default;
    Bow(std::string Name, int Damage) : Weapon(Name, Damage) {};

    virtual std::string GetDisplayInfo() override;
};
