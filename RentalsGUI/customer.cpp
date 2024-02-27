#include "customer.h"

Customer::Customer() {}
Customer::Customer(int newCustomerID, QString newCustomerName, QString newAddress, QString newPhoneNo)
    :customerID(newCustomerID), customerName(newCustomerName), address(newAddress), phoneNo(newPhoneNo) {}

//standard set and get functions
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

QString Customer::getPhoneNo()
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

void Customer::setPhoneNo(QString newPhoneNo)
{
    phoneNo = newPhoneNo;
}

//function that will add new customer to db.
void Customer::addCustomer(QString newCustomer, QString newAddress, QString newPhoneNo)
{
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO customers (customer_name, customer_address, customer_phone) VALUES (:dbCustomer, :dbAddress, :dbPhoneNo)");

    insertQuery.bindValue(":dbCustomer", newCustomer); //bind each value from db to values from the user interface.
    insertQuery.bindValue(":dbAddress", newAddress);
    insertQuery.bindValue(":dbPhoneNo", newPhoneNo);

    if (!insertQuery.exec())
    {
        qDebug() << "Error adding new customer:" << insertQuery.lastError().text();
    }
}

//function that will update customer information.
void Customer::updateCustomer(int NewCID, QString newCustomer, QString newAddress, QString newPhoneNo)
{
    QSqlQuery updateQuery;
   updateQuery.prepare("UPDATE customers SET customer_id = :dbCustomerID, customer_name = :dbCustomerName, customer_address = :dbCustomerAddress, customer_phone = :dbPhoneNo WHERE customer_id = :dbCustomerID");

    updateQuery.bindValue(":dbCustomerID", NewCID);
    updateQuery.bindValue(":dbCustomerName", newCustomer);
    updateQuery.bindValue(":dbCustomerAddress", newAddress);
    updateQuery.bindValue(":dbPhoneNo", newPhoneNo);

    if (!updateQuery.exec())
    {
        qDebug() << "Error updating customer:" << updateQuery.lastError().text();
    }
}

//delete customer function
void Customer::deleteCustomer(int customerID)
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM customers WHERE customer_id = :customerID;");

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
