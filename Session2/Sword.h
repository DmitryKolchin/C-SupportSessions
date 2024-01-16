#pragma once
#include "Weapon.h"

class Sword : public Weapon
{
public:
    Sword() = default;
    Sword(std::string Name, int Damage) : Weapon(Name, Damage) {}
    std::string GetDisplayInfo() override;

};
