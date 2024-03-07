#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
protected:
    int empID;
    string fname;
    string lname;
    string birthDate;
    int workHours;
    double salary;
    int vacationDays;

public:
    Employee(); //passes on default value for salary and workHours
    Employee(int, string, string, string, int, double, int);

    int getEmpID();
    string getFname();
    string getLname();
    string getBirthDate();
    int getWorkHours();
    double getSalary();
    int getVacationDays();

    void setEmpID(int);
    void setFname(string);
    void setLname(string);
    void setBirthDate(string);
    void setWorkHours(int);
    void setSalary(double);
    void setVacationDays(int);
    virtual void printEmployeeDetails();
};

#endif // EMPLOYEE_H
