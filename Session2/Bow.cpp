#include "Bow.h"

std::string Bow::GetDisplayInfo()
{
    return Name + ": Type - Bow, Damage " + std::to_string(Damage);
}
