#include "Person.h"

#include <iostream>

void Person::SetName(std::string NewName)
{
    Name = NewName;
}

void Person::SetAge(int NewAge)
{
    Age = NewAge;
}

void Person::DisplayInfo()
{
    std::cout << "Name: " << Name << ", Age: " << Age << '\n';
}
