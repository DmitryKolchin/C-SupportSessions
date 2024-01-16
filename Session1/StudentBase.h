#pragma once
#include <iostream>
#include <map>
#include <string>

#include "IStudentBase.h"


class StudentBase : public IStudentBase
{
public:
    StudentBase() = default;

    void AddStudent(Student Student) override;
    void RemoveStudentByID(int StudentID) override;

    bool GetStudentByID(int StudentID, Student& OutStudent) override;


private:
    std::map<int, Student> Students;
};
