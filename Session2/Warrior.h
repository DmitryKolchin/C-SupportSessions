#pragma once
#include "GameCharacter.h"

class Warrior : GameCharacter
{
protected:
    unsigned int Stamina;
public:
    Warrior() = default;

    Warrior(std::string Name, int Level, unsigned int Stamina) : GameCharacter(Name, Level), Stamina(Stamina) {}

    void DisplayInfo() override;

};
