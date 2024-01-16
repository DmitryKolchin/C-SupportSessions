#include "IStudentBase.h"

void IStudentBase::DisplayStudentInfoByID(int StudentID)
{
    Student tmp;
    const bool SearchResult = GetStudentByID(StudentID, tmp);
    if (SearchResult)
    {
        tmp.DisplayInfo();
    }
    else
    {
        std::cout << "No such student\n";
    }
}
