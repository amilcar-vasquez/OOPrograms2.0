#ifndef LAWYER_H
#define LAWYER_H
#include "employee.h"

class Lawyer : public Employee
{
private:
    int caseInProgress;

public:
    Lawyer();

    int getCases();
    void setCases(int);
};

#endif // LAWYER_H
