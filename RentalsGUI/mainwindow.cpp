#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include <QMainWindow>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

    // Convert QString to std::string
    std::string usernameStr = uname.toStdString();
    std::string passwordStr = pwd.toStdString();

    // Create a User object with an existing Database connection
    Database db;  // Assuming Database has a default constructor
    User user(db); // Pass the existing Database object to the User constructor

    // Run verification
    user.loginVerification(usernameStr, passwordStr);
}
