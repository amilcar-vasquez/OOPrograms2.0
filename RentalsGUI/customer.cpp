#include "customer.h"

Customer::Customer() {}
Customer::Customer(int newCustomerID, QString newCustomerName, QString newAddress, int newPhoneNo)
    :customerID(newCustomerID), customerName(newCustomerName), address(newAddress), phoneNo(newPhoneNo) {}

int Customer::getCustomerID()
{
    return customerID;
}

QString Customer::getCustomerName()
{
    return customerName;
}

QString Customer::getAddress()
{
    return address;
}

int Customer::getPhoneNo()
{
    return phoneNo;
}

void Customer::setCustomerID(int newCID)
{
    customerID = newCID;
}

void Customer::setCustomerName(QString newCname)
{
    customerName = newCname;
}

void Customer::setCustomerAddress(QString newAddress)
{
    address = newAddress;
}

void Customer::setPhoneNo(int newPhoneNo)
{
    phoneNo = newPhoneNo;
}

void Customer::addCustomer(QString newCustomer, QString newAddress, int newPhoneNo)
{
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO customers (customer_name, customer_address, customer_phone) VALUES (:dbCustomer, :dbAddress, :dbPhoneNo)");

    insertQuery.bindValue(":dbCustomer", newCustomer); //bind each value from db to values from the user interface.
    insertQuery.bindValue(":dbAddress", newAddress);
    insertQuery.bindValue("dbPhoneNo", newPhoneNo);

    if (!insertQuery.exec())
    {
        qDebug() << "Error adding new user:" << insertQuery.lastError().text();
    }
}

void Customer::updateCustomer(int NewCID, QString newCustomer, QString newAddress, int newPhoneNo)
{
    QSqlQuery updateQuery;
   updateQuery.prepare("UPDATE customers SET customer_id = :dbCustomerID, customer_name = :dbCustomerName, customer_address = :dbCustomerAddress, customer_phone = :dbPhoneNo WHERE customer_id = :dbCustomerID");

    updateQuery.bindValue(":dbcustomerID", NewCID);
    updateQuery.bindValue(":dbCustomerName", newCustomer);
    updateQuery.bindValue(":dbCustomerAddress", newAddress);
    updateQuery.bindValue(":dbPhoneNo", newPhoneNo);

    if (!updateQuery.exec())
    {
        qDebug() << "Error updating user:" << updateQuery.lastError().text();
    }
}

void Customer::deleteCustomer(int customerID)
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM users WHERE customer_id = :customerID;");

    deleteQuery.bindValue(":customerID", customerID);

    if (deleteQuery.exec())
    {
        qDebug() << "Successfully deleted user" << deleteQuery.lastError().text();
    }
    else
    {
        qDebug() << "Error deleting user:" << deleteQuery.lastError().text();
    }
}
