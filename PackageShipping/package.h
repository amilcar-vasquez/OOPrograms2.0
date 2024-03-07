#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;

class Package
{
private:
    string senderName;
    string recipientName;
    int weightInOunce; //measured in ounces
    double costPerOunce;
    string senderZip;
    string recipientZip;

public:
    Package();
    Package(string, string, int, double, string, string);
    string getSender();
    string getRecipient();
    int getWeight();
    double getCost();
    string getSenderZip();
    string getRecipientZip();

    void setSender(string);
    void setRecipient(string);
    void setWeight(int);
    void setCost(double);
    void setSenderZip(string);
    void setRecipientZip(string);
    double calcCost();
    void print();

};

#endif // PACKAGE_H
