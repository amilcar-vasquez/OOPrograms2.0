#include "employee.h"

Employee::Employee() : salary(40000.00), vacationDays(10) {}
Employee::Employee(int, string, string, string, int, double, int) {}

int Employee::getEmpID()
{
    return empID;
}

string Employee::getFname()
{
    return fname;
}

string Employee::getLname()
{
    return lname;
}

string Employee::getBirthDate()
{
    return birthDate;
}

int Employee::getWorkHours()
{
    return workHours;
}

double Employee::getSalary()
{
    return salary;
}

int Employee::getVacationDays()
{
    return vacationDays;
}

void Employee::setEmpID(int newEmpID)
{
    empID = newEmpID;
}

void Employee::setFname(string newFname)
{
    fname = newFname;
}

void Employee::setLname(string newLname)
{
    lname = newLname;
}

void Employee::setBirthDate(string newBirthDate)
{
    birthDate = newBirthDate;
}

void Employee::setWorkHours(int newWorkHours)
{
    workHours = newWorkHours;
}

void Employee::setSalary(double newSalary)
{
    salary = newSalary;
}

void Employee::setVacationDays(int newVacationDays)
{
    vacationDays = newVacationDays;
}

void Employee::printEmployeeDetails()
{
    cout << "Employee ID: " << empID << endl;
    cout << "Employee Name: " << fname << " " << lname << endl;
    cout << "Date of Birth: " << birthDate << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Work Hours: " << workHours << endl;
    cout << "Vacation Days: " << vacationDays << endl << endl;

}
