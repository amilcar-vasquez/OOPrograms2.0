#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;
class Customer
{
public:
    Customer();
    void setFirstName();
    int generateCustomerID();
    void insertUser();
    void updateUser();
    void deleteUser();

private:
    int customerID;
    string firstName;
    string lastName;
    string address;
    string phoneNumber;

};

#endif // CUSTOMER_H
