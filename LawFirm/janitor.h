#ifndef JANITOR_H
#define JANITOR_H
#include "employee.h"

class Janitor : public Employee
{
private:
    double salary;
    int vacationDays;

public:
    Janitor();
    void clean();
    void printEmployeeDetails() override;

};

#endif // JANITOR_H
