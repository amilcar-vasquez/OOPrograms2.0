#include "janitor.h"

Janitor::Janitor()  : Employee(), salary(30000.00), vacationDays(5) {}

void Janitor::clean()
{
    cout << fname << " is working for the man" << endl;
}

void Janitor::printEmployeeDetails()
{
    cout << "Employee ID: " << empID << endl;
    cout << "Employee Name: " << fname << " " << lname << endl;
    cout << "Date of Birth: " << birthDate << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Work Hours: " << workHours << endl;
    cout << "Vacation Days: " << vacationDays << endl << endl;

}
