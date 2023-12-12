#pragma once
#include <random>


enum class QueryResult : uint8_t
{
    Less,
    Exact,
    More
};

class RandomNumberGame
{
private:
    std::mt19937 RandomEngine;
    std::uniform_int_distribution<int> Dist;
    int CurrentNumber;


public:
    RandomNumberGame();
    RandomNumberGame(int Seed);
    void StartNewGame(int LeftBorder = 1, int RightBorder = 10);

    void GameLoop();

    QueryResult CheckNumber(int GuessedNumber) const;

};
