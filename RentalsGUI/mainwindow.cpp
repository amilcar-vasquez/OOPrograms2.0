#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , db()
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->userIDBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::on_userIDBox_valueChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    // Get username and password from UI
    QString uname = ui->username->text();
    QString pwd = ui->password->text();

    // Convert QString to string
    string usernameStr = uname.toStdString();
    string passwordStr = pwd.toStdString();
    // Run verification
    if (user.loginVerification(usernameStr, passwordStr))
    {
        // Get the user role
        int userRole = user.getUserRole();

        if (userRole == 2) // if role is manager role show page 1.
        {
            ui->stackedWidget->setCurrentIndex(1);
        }
        else if (userRole == 1) // if role is clerk show page 2.
        {
            ui->stackedWidget->setCurrentIndex(2);
        }
        else
        {
            qDebug() << "Unknown role.";
        }
    }
    else
    {
        qDebug() << "Login verification failed.";
        QMessageBox loginError;
        loginError.setText("Oops, login failed.  Please check your info and try again.");
        loginError.exec();
    }

}

void MainWindow::on_addUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_addUserButton_clicked()
{
    int role = ui->roleSelector->currentIndex();
    QString username = ui->enterUserBox->text();
    QString password = ui->enterPasswordBox->text();
    QString fname = ui->enterFnameBox->text();
    QString lname = ui->enterLnameBox->text();

    user.addNewUser(role, username.toStdString(), password.toStdString(), fname.toStdString(), lname.toStdString());
    QMessageBox successful;
    successful.setText("User added succesfully");
    successful.exec();
}

void MainWindow::on_updateUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_userIDBox_valueChanged(int userID)
{
    QSqlQuery query;
    query.prepare("SELECT role_id, user_name, user_password, user_first_name, user_last_name FROM users WHERE user_id = :userID");
    query.bindValue(":userID", userID);

    if (query.exec() && query.next())
    {
        int roleID = query.value(0).toInt();
        QString username = query.value(1).toString();
        QString password = query.value(2).toString();
        QString fname = query.value(3).toString();
        QString lname = query.value(4).toString();

        // Update the other UI elements with the retrieved information
        ui->updateRole->setCurrentIndex(roleID);
        ui->updateUserBox->setText(username);
        ui->updatePasswordBox->setText(password);
        ui->updateFnameBox->setText(fname);
        ui->updateLnameBox->setText(lname);
    }
    else
    {
        qDebug() << query.lastError().text();
        QMessageBox noUsers;
        noUsers.setText("No users to update");
        noUsers.exec();
    }
}

void MainWindow::on_updateButton_clicked()
{
    // Get the selected user ID from the spin box
    int userIDToUpdate = ui->userIDBox->value();
    int updatedRoleID = ui->updateRole->currentIndex();
    QString updatedUsername = ui->updateUserBox->text();
    QString updatedPassword = ui->updatePasswordBox->text();
    QString updatedFname = ui->updateFnameBox->text();
    QString updatedLname = ui->updateLnameBox->text();

    user.updateUser(userIDToUpdate, updatedRoleID, updatedUsername.toStdString(), updatedPassword.toStdString(), updatedFname.toStdString(), updatedLname.toStdString());
}

void MainWindow::on_deleteUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_deleteButton_clicked()
{
    // Get the selected user ID from the spin box
    int userID = ui->userIDBox->value();
    //call delete user function
    user.deleteUser(userID);
    showNextUser();
}

void MainWindow::showNextUser()
{
    int nextUserID = getNextUserID();
    if (nextUserID != -1)
    {
        ui->userIDBox->setValue(nextUserID);
    }
    else
    {
        // Handle the case when there are no more users
        // You can choose to display a message or reset the interface
    }
}

int MainWindow::getNextUserID()
{
    QSqlQuery nextUserQuery;
    nextUserQuery.prepare("SELECT MIN(user_id) FROM users WHERE user_id > :currentUserID;");
    nextUserQuery.bindValue(":currentUserID", ui->userIDBox->value());

    if (nextUserQuery.exec() && nextUserQuery.next())
    {
        return nextUserQuery.value(0).toInt();
    }
    else
    {
        return -1; // No more users or an error occurred
    }
}
