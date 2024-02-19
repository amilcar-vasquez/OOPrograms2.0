#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <QStringList>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStringList>

using namespace std;

class database
{
private:
    QSqlDatabase db;
public:
    database();
    ~database();
    // QStringList verifyUsers(QString,QString);
    // bool addUser(QString, QString, QString, QString, int);
    // bool editUser(QString, QString, QString, QString, int);
    // bool removeUser(QString);
    // QSqlQuery searchForUser(QString);
    // bool createLicense(QString, QString, QString, QString, QString, QString,QString);
};

#endif // DATABASE_H
