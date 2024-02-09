#ifndef RENTAL_H
#define RENTAL_H
#include <iostream>
using namespace std;

class Rental
{
private:
    int RentalID;
    int CustomerID;
    int TitleID;
    string RentalDate;
    double RentalAmountPaid;

public:
    Rental(int newRentalID, int newCustomerID, int newTitleID, string newRentalDate, double newRentalAmountPaid);
    int getRentalID();
    int getCustomerID();
    int getTitleID();
    string getRentalDate();
    double getRentalAmountPaid();

    void setRentalID(int newRentalID);
    void setCustomerID(int newCustomerID);
    void setTitleID(int newTitleID);
    void setRentalDate(string newRentalDate);
    void setRentalAmountPaid(double newRentalAmountPaid);
    void calculateDueDate(int, string);
    void viewRentalStatus(int)

};

#endif // RENTAL_H
