#pragma once
#include <string>

class GameCharacter
{

protected:
    std::string Name;
    unsigned int Level;

public:
    GameCharacter() = default;
    GameCharacter(std::string Name, unsigned int Level) : Name(Name), Level(Level) {}

    virtual void DisplayInfo() = 0;


};
