#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    ui->backButton->hide();
    ui->stackedWidget->setCurrentIndex(0);
    ui->centralwidget->layout()->addWidget(ui->backButton);
    qApp->setStyleSheet("QPushButton { background-color: #424242; border: 1px solid #757575; color: #ffffff; padding: 8px 16px; border-radius: 4px;}"
                        "QPushButton:hover {background-color: #616161;}"
                        "QPushButton:pressed {background-color: #757575;}");
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

    // Run verification
    if (user.loginVerification(uname, pwd))
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

    user.addNewUser(role, username, password, fname, lname);
    QMessageBox successful;
    successful.setText("User added succesfully");
    successful.exec();
}

void MainWindow::on_updateUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
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

        // Update ui with db information.
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

    user.updateUser(userIDToUpdate, updatedRoleID, updatedUsername, updatedPassword, updatedFname, updatedLname);
    QMessageBox successful;
    successful.setText("User updated succesfully");
    successful.exec();
}

void MainWindow::on_deleteUser_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
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
        QMessageBox noUsers;
        noUsers.setText("No more users to show/delete");
        noUsers.exec();
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

void MainWindow::on_addTitle_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_addTitleButton_clicked()
{
    int titleType = ui->titleTypeSelector->currentIndex();
    QString titleName = ui->enterTitleBox->text();

    title.addTitle(titleName, titleType);
    QMessageBox successful;
    successful.setText("Title added succesfully");
    successful.exec();
}

void MainWindow::on_updateTitle_clicked()
{
    int userRole = user.getUserRole();
    if (userRole == 2) // if role is manager role show buttons to edit and delete.
    {
        ui->updateTitleButton->show();
        ui->deleteTitleButton->show();
    }
    else
    {
        ui->updateTitleButton->hide();
        ui->deleteTitleButton->hide();
    }
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_updateTitleButton_clicked()
{
    int titleIDToUpdate = ui->titleIDBox->value();
    QString updatedTitleName = ui->updateTitleBox->text();
    int updatedTitleType = ui->updateTitleType->currentIndex();

    //call the function to update
    title.updateTitle(titleIDToUpdate, updatedTitleName, updatedTitleType);
    QMessageBox successful;
    successful.setText("Title updated succesfully");
    successful.exec();
}

void MainWindow::on_titleIDBox_valueChanged(int titleID)
{
    QSqlQuery query;
    query.prepare("SELECT title_name, title_type_id FROM titles WHERE title_id = :titleID");
    query.bindValue(":titleID", titleID);

    if (query.exec() && query.next())
    {
        QString titleName = query.value(0).toString();
        int titleType = query.value(1).toInt();
        // Update ui with db information.
        ui->updateTitleBox->setText(titleName);
        ui->updateTitleType->setCurrentIndex(titleType);
    }
    else
    {
        qDebug() << query.lastError().text();
        QMessageBox noTitles;
        noTitles.setText("No more titles");
        noTitles.exec();
    }
}

void MainWindow::on_deleteTitleButton_clicked()
{
    int titleID = ui->titleIDBox->value();
    title.deleteTitle(titleID);
}

void MainWindow::showNextTitle()
{
    int nextTitleID = getNextTitleID();
    if (nextTitleID != -1)
    {
        ui->titleIDBox->setValue(nextTitleID);
    }
    else
    {
        QMessageBox noTitles;
        noTitles.setText("No more Titles to show/delete");
        noTitles.exec();
    }
}

int MainWindow::getNextTitleID()
{
    QSqlQuery nextTitleQuery;
    nextTitleQuery.prepare("SELECT MIN(title_id) FROM titles WHERE title_id > :currentTitleID;");
    nextTitleQuery.bindValue(":currentTitleID", ui->titleIDBox->value());

    if (nextTitleQuery.exec() && nextTitleQuery.next())
    {
        return nextTitleQuery.value(0).toInt();
    }
    else
    {
        return -1; // No more titles or an error occurred
    }
}

void MainWindow::on_backButton_clicked()
{
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

void MainWindow::on_stackedWidget_currentChanged(int newIndex)
{
    if(newIndex == 0)
    {
        ui->backButton->hide();
    }
    else
    {
        ui->backButton->show();
    }
}

void MainWindow::on_addCustomer_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_addCustomerButton_clicked()
{
    QString cName = ui->enterCustomerBox->text();
    QString cAddress = ui->enterAddressBox->text();
    QString cPhone = ui->enterPhoneBox->text();

    customer.addCustomer(cName, cAddress, cPhone);
    QMessageBox successful;
    successful.setText("Customer added succesfully");
    successful.exec();
}

void MainWindow::on_updateCustomer_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_customerUpdateButton_clicked()
{
    int customerIDToUpdate = ui->customerIDBox->value();
    QString updatedCustomerName = ui->updateCustomerBox->text();
    QString updatedCustomerAddress = ui->updateAddressBox->text();
    QString updatedPhone = ui->updatePhoneNoBox->text();

    //call the function to update
    customer.updateCustomer(customerIDToUpdate, updatedCustomerName, updatedCustomerAddress, updatedPhone);
    QMessageBox successful;
    successful.setText("Customer updated succesfully");
    successful.exec();
}

void MainWindow::on_customerDeleteButton_clicked()
{
    int cID = ui->customerIDBox->value();
    customer.deleteCustomer(cID);
    QMessageBox successful;
    successful.setText("User deleted succesfully");
    successful.exec();
}

void MainWindow::on_customerIDBox_valueChanged(int cID)
{
    QSqlQuery query;
    query.prepare("SELECT customer_name, customer_address, customer_phone FROM customers WHERE customer_id = :customerID");
    query.bindValue(":customerID", cID);

    if (query.exec() && query.next())
    {
        QString cName = query.value(0).toString();
        QString cAddress = query.value(1).toString();
        QString cPhone = query.value(2).toString();
        // Update ui with db information.
        ui->updateCustomerBox->setText(cName);
        ui->updateAddressBox->setText(cAddress);
        ui->updatePhoneNoBox->setText(cPhone);
    }
    else
    {
        qDebug() << query.lastError().text();
        QMessageBox noCustomers;
        noCustomers.setText("No Customer record found");
        noCustomers.exec();
    }
}
void MainWindow::on_deleteTitle_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_deleteCustomer_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_addCustomerClerk_clicked()
{
    on_addCustomer_clicked();
}


void MainWindow::on_updateCustomerClerk_clicked()
{
    on_updateCustomer_clicked();
}


void MainWindow::on_viewTitles_clicked()
{
    on_updateTitle_clicked();
}

