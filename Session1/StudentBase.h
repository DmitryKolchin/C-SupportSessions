#pragma once
#include <iostream>
#include <map>
#include <string>

struct Student
{
    std::string FirstName;
    std::string LastName;
    unsigned int ID;

    void DisplayInfo()
    {
        std::cout << "Full Name: " << FirstName << " " << LastName << ", ID = " << ID << "\n";
    }

    Student() : FirstName("John"), LastName("Doe"), ID(0) {}
    Student(std::string&& FirstName, std::string&& LastName, const unsigned int ID) : FirstName(FirstName), LastName(LastName), ID(ID) {}


};

class StudentBase
{
public:
    StudentBase() = default;
    void AddStudent(Student Student);
    void RemoveStudent(int StudentID);

    bool GetStudentByID(int StudentID, Student& OutStudent);

    void DisplayStudentInfoByID(int StudentID);



private:
    std::map<int, Student> Students;
};
