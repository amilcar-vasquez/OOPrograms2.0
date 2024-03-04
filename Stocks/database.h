#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Database
{
private:
    QSqlDatabase db; //initiliaze database object
    bool openDatabase();
    void closeDatabase();

public:
    Database(); //default constructor.
    ~Database(); //destructor on disconnect
};

#endif // DATABASE_H
