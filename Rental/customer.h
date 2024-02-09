#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;

class Customer
{
private:
    int CustomerID;
    string CustomerFirstName;
    string CustomerLastName;
    string CustomerAddress;
    string CustomerPhone;

public:
    Customer(int newCustomerID, string newCustomerFirstName, string newCustomerLastName, string newCustomerAddress, string newCustomerPhone);
    int getCustomerID();
    string getCustomerFirstName();
    string getCustomerLastName();
    string getCustomerAddress();
    string getCustomerPhone();

    void setCustomerID(int newCustomerID);
    void setCustomerFirstName(string newCustomerFirstName);
    void setCustomerLastName(string newCustomerLastName);
    void setCustomerAddress(string newCustomerAddress);
    void setCustomerPhone(string newCustomerPhone);
    void viewCustomer(int);
};

#endif // CUSTOMER_H
