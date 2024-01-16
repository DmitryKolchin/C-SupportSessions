#pragma once
#include "GameCharacter.h"

class Wizard : GameCharacter
{
protected:
    unsigned int Arcane;
public:
    Wizard() = default;
    Wizard(std::string Name, unsigned int Level, unsigned int Arcane) : GameCharacter(Name, Level), Arcane(Arcane) {}

    void DisplayInfo() override;

};
