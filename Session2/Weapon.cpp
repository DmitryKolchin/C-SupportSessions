#include "Weapon.h"

std::string Weapon::GetDisplayInfo()
{
    return InventoryItem::GetDisplayInfo() + ": Damage -  " + std::to_string(Damage);
}
