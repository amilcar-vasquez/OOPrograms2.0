#include "secretary.h"

Secretary::Secretary() : Employee() {}

int Secretary::getLawyerEmpID()
{
    return lawyerEmpID;
}

void Secretary::setLawyerEmpID(int newLawyerEmpID)
{
    lawyerEmpID = newLawyerEmpID;
}
