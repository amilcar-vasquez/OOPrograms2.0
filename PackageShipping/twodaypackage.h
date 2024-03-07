#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"

class TwoDayPackage : public Package
{
private:
    double flatFee;

public:
    TwoDayPackage();
    TwoDayPackage(string, string, int, double, string, string, double);

    double getFlatFee();
    void setFlatFee(double);
    double calCost();
    void print();
};

#endif // TWODAYPACKAGE_H
