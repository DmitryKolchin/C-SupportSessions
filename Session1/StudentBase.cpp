#include "StudentBase.h"
#include "algorithm"

void StudentBase::AddStudent(Student Student)
{
    Students[Student.ID] = Student;

}

void StudentBase::RemoveStudent(int StudentID)
{
    Students.erase(StudentID);
}

bool StudentBase::GetStudentByID(int StudentID, Student& OutStudent)
{
    auto tmp = Students.find(StudentID);
    if (tmp != Students.end())
    {
        OutStudent = tmp->second;
        return true;
    }
    return false;
}

void StudentBase::DisplayStudentInfoByID(int StudentID)
{
    Student tmp;
    bool SearchResult = GetStudentByID(StudentID, tmp);
    if (SearchResult)
    {
        tmp.DisplayInfo();
    }
    else
    {
        std::cout << "No such student\n";
    }
}

