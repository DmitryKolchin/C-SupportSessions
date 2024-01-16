#pragma once
#include "InventoryItem.h"

class Weapon : public InventoryItem
{
protected:
    int Damage;
public:
    Weapon() = default;
    Weapon(std::string Name, int Damage) : InventoryItem(Name), Damage(Damage) {}

    virtual std::string GetDisplayInfo() override;

};
