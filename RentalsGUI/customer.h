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
    QString phoneNo;


public:
    Customer();
    Customer(int, QString, QString, QString);

    int getCustomerID();
    QString getCustomerName();
    QString getAddress();
    QString getPhoneNo();

    void setCustomerID(int);
    void setCustomerName(QString);
    void setCustomerAddress(QString);
    void setPhoneNo(QString);
    void addCustomer(QString, QString, QString);
    void updateCustomer(int, QString, QString, QString);
    void deleteCustomer(int);
};

#endif // CUSTOMER_H
