#include "StudentBase.h"
#include "algorithm"

void StudentBase::AddStudent(Student Student)
{
    Students[Student.ID] = Student;

}

void StudentBase::RemoveStudentByID(int StudentID)
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


