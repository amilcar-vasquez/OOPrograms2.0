#ifndef SECRETARY_H
#define SECRETARY_H
#include "employee.h"

class Secretary : public Employee
{
private:
    int lawyerEmpID;

public:
    Secretary();

    int getLawyerEmpID();
    void setLawyerEmpID(int);
};

#endif // SECRETARY_H
