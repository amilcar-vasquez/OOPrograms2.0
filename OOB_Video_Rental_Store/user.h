#ifndef USER_H
#define USER_H
#include <database.h>
#include <QStringList>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStringList>


class user
{
private:
    QSqlDatabase db;
    QString userID;
    int roleID;
public:
    user();
    QStringList verifyUsers(QString,QString);
    bool addUser(QString,QString, QString, QString, QString, int);
    bool editUser(int, QString, QString, QString,QString ,int);
    bool removeUser(int);
    QStringList searchForUser(int);
    QString getUserID();
    void setUserID(QString);
    int getUserRole();
    void setUserRole(int);
};

#endif // USER_H
