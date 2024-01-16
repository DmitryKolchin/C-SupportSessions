#pragma once
#include <string>

class Person
{
    std::string Name;
    int Age;


public:

    Person() = default;
    Person(std::string&& Name, int Age) : Name(Name), Age(Age) {}
    void SetName(std::string NewName);
    void SetAge(int NewAge);
    void DisplayInfo();
};
