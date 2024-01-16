#pragma once
#include "IStudentBase.h"

class StudentBaseDynamic : public IStudentBase
{
private:
    Student* Students;
    int StudentsNumber = 0;

public:

    ~StudentBaseDynamic() override;

    void AddStudent(Student NewStudent) override;

};
