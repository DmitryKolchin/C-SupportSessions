#include "Player.h"

void Player::SetName(std::string NewName)
{
    Name = NewName;
}

std::string Player::GetName()
{
    return Name;
}

void Player::SetHealth(int NewHealth)
{
    Health = NewHealth;
}

int Player::GetHealth()
{
    return Health;
}

void Player::SetScore(int NewScore)
{
    Score = NewScore;
}

int Player::GetScore()
{
    return Score;
}
