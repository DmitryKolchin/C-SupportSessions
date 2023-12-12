#include "RandomNumberGame.h"

#include <iostream>

RandomNumberGame::RandomNumberGame()
{
    RandomEngine = std::mt19937(0);
}

RandomNumberGame::RandomNumberGame(int Seed)
{
    RandomEngine = std::mt19937(Seed);
}

void RandomNumberGame::StartNewGame(int LeftBorder, int RightBorder)
{
    Dist = std::uniform_int_distribution<int>(LeftBorder, RightBorder);
    CurrentNumber = Dist(RandomEngine);
}

void RandomNumberGame::GameLoop()
{
    while (true)
    {
        std::cout << "Guess the number\n";
        int GuessedNumber;
        std::cin >> GuessedNumber;
        auto Result = CheckNumber(GuessedNumber);
        switch (Result)
        {
        case QueryResult::Exact:
            std::cout << "Correct\n";
            return;

        case QueryResult::Less:
            std::cout << "Try bigger number\n";
            break;
        case QueryResult::More:
            std::cout << "Try less number\n";
        }

    }
}

QueryResult RandomNumberGame::CheckNumber(int GuessedNumber) const
{
    if (GuessedNumber < CurrentNumber)
    {
        return QueryResult::Less;
    }
    if (GuessedNumber > CurrentNumber)
    {
        return QueryResult::More;
    }

    return QueryResult::Exact;
}

