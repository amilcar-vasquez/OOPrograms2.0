#ifndef FEE_H
#define FEE_H
#include <iostream>
using namespace std;

class Fee
{
private:
    int FeeID;
    double FeeAmount;
    string FeeType;

public:
    Fee(int newFeeID, double newFeeAmount, string newFeeType);
    int getFeeID();
    double getFeeAmount();
    string getFeeType();

    void setFeeID(int newFeeID);
    void setFeeAmount(double newFeeAmount);
    void setFeeType(string newFeeType);
    void viewFees(int);
};

#endif // FEE_H
