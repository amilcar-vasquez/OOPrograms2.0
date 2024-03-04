#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Customer
{
private:
    int customerID;
    QString customerPassword;
    QString customerFname;
    QString customerLname;
    int financialAdvisor;
    int stockCollections;

public:
    Customer();
    Customer(int, QString, QString, QString, int, int);

    int getCustomerID();
    QString getCustomerPassword();
    QString getCustomerFname();
    QString getCustomerLname();
    int getFinancialAdvisor();
    int getstockCollections();

    void setCustomerID(int);
    void setCustomerPassword(QString);
    void setCustomerFname(QString);
    void setCustomerLname(QString);
    void setFinancialAdvisor(int);
    void setStockCollections(int);
    void customerLogin(int, QString); //will pass the Id and password
    void viewStocks(QString, QString, int, int);  //will pass first and last name, financial advisor, and stock collections
    void addCustomer(int, QString, QString, QString, int, int);  //passes ID, password, fname, lname, advisor and stock.
    void updateCustomer(int, QString, QString, QString, int, int); //same as add customer.
    void deleteCustomer(int); //only ID needed to delete customer.
};

#endif // CUSTOMER_H
