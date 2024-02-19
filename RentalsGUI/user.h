#ifndef USER_H
#define USER_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class User
{
private:
    int UserID;
    QString lname;
    QString fname;
    QString username;
    QString password;
    int role; // int as it will be an ID from roles table?

public:
    User();
    User(int, QString, QString, QString, QString, int);

    int getUserID();
    QString getUserFirstName();
    QString getUserLastName();
    QString getUsername();
    QString getUserPassword();
    int getUserRole();

    void setUserID(int);
    void setUserFirstName(QString);
    void setUserLastName(QString);
    void setUsername(QString);
    void setUserPassword(QString);
    void setUserRole(QString);
    bool loginVerification(QString, QString);
    void addNewUser(int, QString, QString, QString, QString);
    void updateUser(int, int, QString, QString, QString, QString);
    void deleteUser(int);
};

#endif // USER_H
