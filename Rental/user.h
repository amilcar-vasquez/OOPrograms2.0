#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User
{
private:
    int EmployeeID;
    int UserID;
    string UserFirstName;
    string UserLastName;
    string Username;
    string UserPassword;
    int UserRole; //int as it will be an ID from roles table?

public:
    User(int newEmployeeID, int newUserID, string newUserFirstName, string newUserLastName, string newUserName, string newUserPassword, int newRole);
    int getEmployeeID();
    int getUserID();
    string getUserFirstName();
    string getUSerLastName();
    string getUsername();
    string getUserPassword();
    int getUserRole;

    void setEmployeeID(int newEmployeeID);
    void setUserID(int newUserID);
    void setUserFirstName(string newUserFirstName);
    void setUserLastName(string newUserLastName);
    void setUsername(string newUsername);
    void setUserPassword(string newUserPassword);
    void setUserRole(int newUserRole);
    void loginVerification(int);

};

#endif // USER_H
