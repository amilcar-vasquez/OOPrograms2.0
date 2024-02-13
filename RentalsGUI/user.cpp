#include "user.h"

// user.cpp
User::User() : UserID(0), UserFirstName(""), UserLastName(""), Username(""), UserPassword(""), UserRole(0){}

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

void User::setUserRole(const string enteredUsername)
{
    QSqlQuery roleQuery;

    // get role id and username from db.
    if (roleQuery.exec("SELECT role_id FROM users WHERE user_name = '" + QString::fromStdString(enteredUsername) + "'"))
    {
        if (roleQuery.next())
        {
            int userRoleFromDB = roleQuery.value(0).toInt();
            UserRole = userRoleFromDB;
            qDebug() << "User role set successfully.";
        }
        else
        {
            qDebug() << "Failed to retrieve user role. Defaulting to UserRole = 0.";
            UserRole = 0; // Default role if the query didn't return a result
        }
    }
    else
    {
        qDebug() << roleQuery.lastError().text();
        UserRole = 0; // Default role in case of an error
    }
}


bool User::loginVerification(const string enteredUsername, const string enteredPassword)
{
        QSqlQuery verifyQuery; // Creating a query to verify user information.

        if (verifyQuery.exec("SELECT user_name, user_password FROM users WHERE user_name = '" + QString::fromStdString(enteredUsername) + "'"))
        {
            if (verifyQuery.next())
            {
                QString storedUsername = verifyQuery.value(0).toString();
                QString storedPassword = verifyQuery.value(1).toString();
                //compare password from db to password entered.
                if (storedUsername == QString::fromStdString(enteredUsername) && storedPassword == QString::fromStdString(enteredPassword))
                {
                    qDebug() << "Login successful.";
                    setUserRole(enteredUsername);
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
            return false;
        }
}

void User::addNewUser(int newRoleID, const string newUsername, const string newPassword, const string newFname, const string newLname)
{
    QSqlQuery addUserQuery;
    addUserQuery.prepare("INSERT INTO users (role_id, user_name, user_password, user_first_name, user_last_name) VALUES (:roleID, :username, :password, :fname, :lname)");

    addUserQuery.bindValue(":roleID", newRoleID);
    addUserQuery.bindValue(":username", QString::fromStdString(newUsername));
    addUserQuery.bindValue(":password", QString::fromStdString(newPassword));
    addUserQuery.bindValue(":fname", QString::fromStdString(newFname));
    addUserQuery.bindValue(":lname", QString::fromStdString(newLname));

    if (!addUserQuery.exec())
    {
        qDebug() << "Error adding new user:" << addUserQuery.lastError().text();
    }
}

void User::updateUser(int userID, int updatedRoleID, const string updatedUsername, const string updatedPassword, const string updatedFname, const string updatedLname)
{
    QSqlQuery updateUserQuery;
    updateUserQuery.prepare("UPDATE users SET role_id = :updatedRoleID, user_name = :updatedUsername, user_password = :updatedPassword, user_first_name = :updatedFname, user_last_name = :updatedLname WHERE user_id = :userID");

    updateUserQuery.bindValue(":updatedRoleID", updatedRoleID);
    updateUserQuery.bindValue(":updatedUsername", QString::fromStdString(updatedUsername));
    updateUserQuery.bindValue(":updatedPassword", QString::fromStdString(updatedPassword));
    updateUserQuery.bindValue(":updatedFname", QString::fromStdString(updatedFname));
    updateUserQuery.bindValue(":updatedLname", QString::fromStdString(updatedLname));
    updateUserQuery.bindValue(":userID", userID);

    if (!updateUserQuery.exec())
    {
        qDebug() << "Error updating user:" << updateUserQuery.lastError().text();
    }
}

void User::deleteUser(int userID)
{
    QSqlQuery deleteUserQuery;
    deleteUserQuery.prepare("DELETE FROM users WHERE user_id = :userID;");

    deleteUserQuery.bindValue(":userID", userID);

    if (deleteUserQuery.exec())
    {
        qDebug() << "Successfully deleted user" << deleteUserQuery.lastError().text();
    }
    else
    {
        qDebug() << "Error deleting user:" << deleteUserQuery.lastError().text();
    }
}
