#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Database
{
public:
    Database();  //constructor
    ~Database(); //destructor

    bool isConnected() const; //checks if a connection to the database happens.

private:
    QSqlDatabase db;  //QSQL database object created
    bool connected;
    int currentID;

    // Private helper functions
    bool openDatabase();
    void closeDatabase();
};

#endif // DATABASE_H
