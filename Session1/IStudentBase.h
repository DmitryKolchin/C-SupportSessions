#pragma once

#include <string>
#include <iostream>

struct Student
{
    std::string FirstName;
    std::string LastName;
    unsigned int ID;

    void DisplayInfo() const
    {
        std::cout << "Full Name: " << FirstName << " " << LastName << ", ID = " << ID << "\n";
    }

    Student() : FirstName("John"), LastName("Doe"), ID(0) {}
    Student(std::string&& FirstName, std::string&& LastName, const unsigned int ID) : FirstName(FirstName), LastName(LastName), ID(ID) {}


};



class IStudentBase
{
public:

    IStudentBase() = default;
    virtual ~IStudentBase() = default;

    virtual void AddStudent(Student NewStudent) = 0;
    virtual void RemoveStudentByID(int ID) = 0;
    virtual bool GetStudentByID(int StudentID, Student& OutStudent) = 0;
    void DisplayStudentInfoByID(int StudentID);



};
