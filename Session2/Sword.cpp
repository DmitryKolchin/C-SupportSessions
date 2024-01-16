#include "Sword.h"

std::string Sword::GetDisplayInfo()
{
    return Name + ": Type - Sword, Damage " + std::to_string(Damage);
}
