#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
using namespace std;

class Inventory
{
private:
    int inventory_id;
    string title;
    string type;
    int rentalCost;


public:
    Inventory();
    void addProduct(int,string,string,int);
    void editProduct(int,string,string,int);
    void deleteProduct(int);
};

#endif // INVENTORY_H
