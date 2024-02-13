#ifndef USER_H
#define USER_H
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

public:
    User();
    User(int newUserID, const string newUserFirstName, const string newUserLastName, const string newUserName, const string newUserPassword, int newRole);

    int getUserID();
    string getUserFirstName();
    string getUserLastName();
    string getUsername();
    string getUserPassword();
    int getUserRole();

    void setUserID(int newUserID);
    void setUserFirstName(const string newUserFirstName);
    void setUserLastName(const string newUserLastName);
    void setUsername(const string newUsername);
    void setUserPassword(const string newUserPassword);
    void setUserRole(const string enteredUsername);
    bool loginVerification(const string, const string);
    void addNewUser(int newRoleID, const string newUsername, const string newPassword, const string newFname, const string newLname);
    void updateUser(int userID, int updatedRoleID, const string updatedUsername, const string updatedPassword, const string updatedFname, const string updatedLname);
    void deleteUser(int userID, int toDeleteRoleID, const string toDeleteUsername, const string toDeletePassword, const string toDeleteFname, const string toDeleteLname);
};

#endif // USER_H
