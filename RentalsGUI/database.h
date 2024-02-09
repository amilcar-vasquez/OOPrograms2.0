#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Database
{
public:
    Database();
    ~Database();

    bool isConnected() const;

private:
    QSqlDatabase db;
    bool connected;
    int currentID;

    // Private helper functions
    bool openDatabase();
    void closeDatabase();
};

#endif // DATABASE_H
