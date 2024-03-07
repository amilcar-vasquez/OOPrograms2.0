#include "package.h"
#include <iostream>
using namespace std;

Package::Package() {}

Package::Package(string, string, int, double, string, string){}

string Package::getSender()
{
    return senderName;
}

string Package::getRecipient()
{
    return recipientName;
}

int Package::getWeight()
{
    return weightInOunce;
}

double Package::getCost()
{
    return costPerOunce;
}

string Package::getSenderZip()
{
    return senderZip;
}

string Package::getRecipientZip()
{
    return recipientZip;
}

void Package::setSender(string newSender)
{
    senderName = newSender;
}

void Package::setRecipient(string newRecipient)
{
    recipientName = newRecipient;
}

void Package::setWeight(int newWeight)
{
    weightInOunce = newWeight;
}

void Package::setCost(double newCost)
{
    costPerOunce = newCost;
}

void Package::print()
{
    cout << "Package Information:" << std::endl;
    cout << "Sender: " << senderName << ", ZIP: " << senderZip << std::endl;
    cout << "Recipient: " << recipientName << ", ZIP: " << recipientZip << std::endl;
    cout << "Weight: " << weightInOunce << " oz" << std::endl;
    cout << "Cost: $" << calcCost() << std::endl;
}

double Package::calcCost()
{
    return weightInOunce * costPerOunce;
}
