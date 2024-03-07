#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"

class OvernightPackage : public Package
{
private:
    double extreFeePerOunce;

public:
    OvernightPackage(string, string, int, double, string, string, double);

    double getExtraFee();
    void setExtraFee(double);
    double calCost();
    void print();

};

#endif // OVERNIGHTPACKAGE_H
