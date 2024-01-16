#include "StudentBaseDynamic.h"

StudentBaseDynamic::~StudentBaseDynamic()
{
    delete[] Students;
}

void StudentBaseDynamic::AddStudent(Student NewStudent)
{
    ++StudentsNumber;

    Student* TmpStudents = new Student[StudentsNumber];
    for (int i = 0; i < StudentsNumber - 1; ++i)
    {
        TmpStudents[i] = Students[i];
    }
    delete [] Students;



}
