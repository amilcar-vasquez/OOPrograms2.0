#ifndef STOCKS_H
#define STOCKS_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Stocks
{
private:
    int stockID;
    double purchasePrice;
    int quantityPurchased;
    QString ticketSymbol;
    int customerID;

public:
    Stocks();
    Stocks(int, double, int, QString);

    int getStockID();
    double getPurchasePrice();
    int getQuantityPurchased();
    QString getTicketSymbol();
    int getCustomerID;

    void setStockID(int);
    void setPurchasePrice(double);
    void setQuantityPurchased(int);
    void setTicketSymbol(QString);
    void setCustomerID(int);
    //adds new stock - includes stockID, purchase price, quantity purchased, and customer ID.
    void addStock(int, double, int, QString, int);
    void viewStock(int, double, int, QString, int); //same paramaters of addStock except will be view only.
};

#endif // STOCKS_H
