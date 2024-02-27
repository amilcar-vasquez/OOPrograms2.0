#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <database.h>
#include <user.h>
#include <title.h>
#include <customer.h>
#include <QStringList>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QMainWindow>
#include <QFile>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();
    void on_addUser_clicked();
    void on_addUserButton_clicked();
    void on_updateButton_clicked();
    void on_updateUser_clicked();
    void on_userIDBox_valueChanged(int userID);
    void on_deleteUser_clicked();
    void on_deleteButton_clicked();
    void showNextUser();
    int getNextUserID();
    void showNextTitle();
    int getNextTitleID();
    void on_addTitle_clicked();
    void on_addTitleButton_clicked();
    void on_updateTitle_clicked();
    void on_updateTitleButton_clicked();
    void on_titleIDBox_valueChanged(int titleID); 
    void on_deleteTitleButton_clicked();
    void on_backButton_clicked();
    void on_stackedWidget_currentChanged(int arg1);
    void on_addCustomer_clicked();
    void on_updateCustomer_clicked();
    void on_addCustomerButton_clicked();
    void on_customerUpdateButton_clicked();
    void on_customerDeleteButton_clicked();
    void on_customerIDBox_valueChanged(int arg1);
    void on_deleteTitle_clicked();
    void on_deleteCustomer_clicked();
    void on_addCustomerClerk_clicked();
    void on_updateCustomerClerk_clicked();
    void on_viewTitles_clicked();

private:
    Ui::MainWindow *ui;
    Database db;
    User user;
    Title title;
    Customer customer;
};
#endif // MAINWINDOW_H
