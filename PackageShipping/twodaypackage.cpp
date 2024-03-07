#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage() {}
TwoDayPackage::TwoDayPackage(string, string, int, double, string, string, double) {}

double TwoDayPackage::getFlatFee()
{
    return flatFee;
}

void TwoDayPackage::setFlatFee(double newFee)
{
    flatFee = newFee;
}

double TwoDayPackage::calcCost()
{
    return Package::calcCost() + flatFee;
}
