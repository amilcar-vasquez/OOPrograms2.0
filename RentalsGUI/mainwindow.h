#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <database.h>
#include <user.h>
#include <QStringList>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    Database db;
    User user;

};
#endif // MAINWINDOW_H
