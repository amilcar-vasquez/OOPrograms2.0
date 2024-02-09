#include "user.h"

// user.cpp
User::User(Database& database)
    : db(database), UserID(0), UserFirstName(""), UserLastName(""), Username(""), UserPassword(""), UserRole(0)
{
    // Initialize member variables or perform any setup needed
}


User::User(int newUserID, const string newUserFirstName, const string newUserLastName, const string newUsername, const string newUserPassword, int newRole)
    : UserID(newUserID), UserFirstName(newUserFirstName),
    UserLastName(newUserLastName), Username(newUsername), UserPassword(newUserPassword),
    UserRole(newRole)
{
    // Additional setup if needed
}

int User::getUserID()
{
    return UserID;
}

string User::getUserFirstName()
{
    return UserFirstName;
}

string User::getUserLastName()
{
    return UserLastName;
}

string User::getUsername()
{
    return Username;
}

string User::getUserPassword()
{
    return UserPassword;
}

int User::getUserRole()
{
    return UserRole;
}

void User::setUserID(int newUserID)
{
    UserID = newUserID;
}

void User::setUserFirstName(const string newUserFirstName)
{
    UserFirstName = newUserFirstName;
}

void User::setUserLastName(const string newUserLastName)
{
    UserLastName = newUserLastName;
}

void User::setUsername(const string newUsername)
{
    Username = newUsername;
}

void User::setUserPassword(const string newUserPassword)
{
    UserPassword = newUserPassword;
}

void User::setUserRole(int newUserRole)
{
    UserRole = newUserRole;
}

bool User::loginVerification(const string enteredUsername, const string enteredPassword)
{
    if (db.isConnected())
    {
        QSqlQuery verifyQuery; // Creating a query to verify

        if (verifyQuery.exec("SELECT user_name, user_password FROM users WHERE user_name = '" + QString::fromStdString(enteredUsername) + "'"))
        {
            if (verifyQuery.next())
            {
                QString storedUsername = verifyQuery.value(0).toString();
                QString storedPassword = verifyQuery.value(1).toString();

                if (storedUsername == QString::fromStdString(enteredUsername) && storedPassword == QString::fromStdString(enteredPassword))
                {
                    qDebug() << "Login successful.";
                    return true;
                }
                else
                {
                    qDebug() << "Incorrect username or password.";
                    return false;
                }
            }
            else
            {
                qDebug() << "Unknown user.";
                return false;
            }
        }
        else
        {
            qDebug() << verifyQuery.lastError().text();
        }
    }
    else
    {
        qDebug() << "No db connection.";
    }
    return false; // Return false if any error occurred
}

