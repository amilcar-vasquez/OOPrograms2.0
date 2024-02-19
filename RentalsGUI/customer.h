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
    QString customerName;
    QString address;
    int phoneNo;


public:
    Customer();
    Customer(int, QString, QString, int);

    int getCustomerID();
    QString getCustomerName();
    QString getAddress();
    int getPhoneNo();

    void setCustomerID(int);
    void setCustomerName(QString);
    void setCustomerAddress(QString);
    void setPhoneNo(int);
    void addCustomer(QString, QString, int);
    void updateCustomer(int, QString, QString, int);
    void deleteCustomer(int);
};

#endif // CUSTOMER_H
