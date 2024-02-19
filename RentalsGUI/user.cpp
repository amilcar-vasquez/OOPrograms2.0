#include "user.h"

User::User(){}

User::User(int newID, QString newFname, QString newLname, QString newUsername, QString newPassword, int newRole)
    :UserID(newID), lname(newLname), fname(newFname), username(newUsername), password(newPassword), role(newRole) {}

int User::getUserID()
{
    return UserID;
}

QString User::getUserFirstName()
{
    return fname;
}

QString User::getUserLastName()
{
    return lname;
}

QString User::getUsername()
{
    return username;
}

QString User::getUserPassword()
{
    return password;
}

int User::getUserRole()
{
    return role;
}

void User::setUserID(int newUserID)
{
    UserID = newUserID;
}

void User::setUserFirstName(QString newFname)
{
    fname = newFname;
}

void User::setUserLastName(QString newLname)
{
    lname = newLname;
}

void User::setUsername(QString newUsername)
{
    username = newUsername;
}

void User::setUserPassword(QString newPassword)
{
    password = newPassword;
}

//setter function will include the logic for getting the user's role from the database.
void User::setUserRole(QString enteredUsername)
{
    QSqlQuery roleQuery;

    // get role id and username from db.
    if (roleQuery.exec("SELECT role_id FROM users WHERE user_name = '" + enteredUsername + "'"))
    {
        if (roleQuery.next())
        {
            int userRoleFromDB = roleQuery.value(0).toInt();
            role = userRoleFromDB;
            qDebug() << "User role set successfully.";
        }
        else
        {
            qDebug() << "Failed to retrieve user role. Defaulting to UserRole = 0.";
            role = 0; // Default role if the query didn't return a result
        }
    }
    else
    {
        qDebug() << roleQuery.lastError().text();
        role = 0; // Default role in case of an error
    }
}

//login verifyer
bool User::loginVerification(QString uiUsername, QString uiPassword)
{
        QSqlQuery verifyQuery; // Creating a query to verify user information.

        if (verifyQuery.exec("SELECT user_name, user_password FROM users WHERE user_name = '" + uiUsername + "'"))
        {
            if (verifyQuery.next())
            {
                QString dbUsername = verifyQuery.value(0).toString();
                QString dbPassword = verifyQuery.value(1).toString();
                //compare password from db to password entered.
                if (dbUsername == uiUsername && dbPassword == uiPassword)
                {
                    qDebug() << "Login successful.";
                    setUserRole(uiUsername);
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

void User::addNewUser(int newRoleID, QString newUsername, QString newPassword, QString newFname, QString newLname)
{
    QSqlQuery addUserQuery;
    addUserQuery.prepare("INSERT INTO users (role_id, user_name, user_password, user_first_name, user_last_name) VALUES (:roleID, :username, :password, :fname, :lname)");

    addUserQuery.bindValue(":roleID", newRoleID); //bind each value from db to values from the user interface.
    addUserQuery.bindValue(":username", newUsername);
    addUserQuery.bindValue(":password", newPassword);
    addUserQuery.bindValue(":fname", newFname);
    addUserQuery.bindValue(":lname", newLname);

    if (!addUserQuery.exec())
    {
        qDebug() << "Error adding new user:" << addUserQuery.lastError().text();
    }
}

void User::updateUser(int userID, int updatedRoleID, QString updatedUsername, QString updatedPassword, QString updatedFname, QString updatedLname)
{
    QSqlQuery updateUserQuery;
    updateUserQuery.prepare("UPDATE users SET role_id = :updatedRoleID, user_name = :updatedUsername, user_password = :updatedPassword, user_first_name = :updatedFname, user_last_name = :updatedLname WHERE user_id = :userID");

    updateUserQuery.bindValue(":updatedRoleID", updatedRoleID);
    updateUserQuery.bindValue(":updatedUsername", updatedUsername);
    updateUserQuery.bindValue(":updatedPassword", updatedPassword);
    updateUserQuery.bindValue(":updatedFname", updatedFname);
    updateUserQuery.bindValue(":updatedLname", updatedLname);
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
