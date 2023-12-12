#include <iostream>
#include <string>
#include "FahrenheitCelciusConverter.h"
#include "RandomNumberGame.h"
#include "StudentBase.h"

void RandomGameLogic()
{
    RandomNumberGame RandomNumberGameManager;

    while (true)
    {
        int LeftBorder, RightBorder;

        std::cout << "Provide the minimum random value\n";
        std::cin >> LeftBorder;
        std::cout << "Provide the maximum random value\n";
        std::cin >> RightBorder;

        RandomNumberGameManager.StartNewGame(LeftBorder, RightBorder);
        RandomNumberGameManager.GameLoop();


        std::cout << "Want to try again (Y/N)\n";
        char Answer;
        std::cin >> Answer;
        if (Answer == 'N')
        {
            break;
        }
    }
}

void TestStudentBase()
{
    StudentBase Students;

    Students.DisplayStudentInfoByID(0);

    Students.AddStudent({"Dmitrii", "Kolchin", 0});
    Students.DisplayStudentInfoByID(0);

    Students.RemoveStudent(0);
    Students.DisplayStudentInfoByID(0);
}
int main(int argc, char* argv[])
{
    TestStudentBase();
    return 0;
}
