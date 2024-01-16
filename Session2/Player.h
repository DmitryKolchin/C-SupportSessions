#pragma once

#include <string>


class Player
{

    std::string Name;
    int Health;
    int Score;

public:
    Player() : Name("No spesified"), Health(100), Score(0) {}
    Player(std::string Name) : Name(Name), Health(100), Score(0) {}
    Player(std::string Name, int Health, int Score) : Name(Name), Health(Health), Score(Score) {}

    void SetName(std::string NewName);
    std::string GetName();

    void SetHealth(int NewHealth);
    int GetHealth();

    void SetScore(int NewScore);
    int GetScore();



};
