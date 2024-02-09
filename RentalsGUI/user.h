#ifndef USER_H
#define USER_H
#include "database.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

using namespace std;

class User
{
private:
    int UserID;
    string UserFirstName;
    string UserLastName;
    string Username;
    string UserPassword;
    int UserRole; // int as it will be an ID from roles table?
    Database& db;

public:
    User();
    User(Database& db);
    User(int newUserID, const string newUserFirstName, const string newUserLastName, const string newUserName, const string newUserPassword, int newRole);

    int getUserID();
    string getUserFirstName();
    string getUserLastName();  // Fixed typo in the function name
    string getUsername();
    string getUserPassword();
    int getUserRole();  // Added parentheses

    void setUserID(int newUserID);
    void setUserFirstName(const string newUserFirstName);  // Adjusted parameter type to const string
    void setUserLastName(const string newUserLastName);
    void setUsername(const string newUsername);
    void setUserPassword(const string newUserPassword);
    void setUserRole(int newUserRole);
    bool loginVerification(const string, const string);
};

#endif // USER_H
