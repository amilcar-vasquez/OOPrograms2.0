#include <iostream>
#include "employee.h"
#include "janitor.h"
#include "lawyer.h"
#include "secretary.h"

using namespace std;

int main()
{
    Employee emp1;
    emp1.printEmployeeDetails();

    Janitor jan1;
    jan1.setEmpID(1);
    jan1.setFname("Amilcar");
    jan1.setLname("Vasquez");
    jan1.printEmployeeDetails();
    jan1.clean();

    return 0;
}
