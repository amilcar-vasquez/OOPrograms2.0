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
    void loadCombobox();

private slots:

    void on_loginBTN_clicked();

    void on_createuserBTN_clicked();

    void on_modifyuserBTN_clicked();

    void on_deleteuserBTN_clicked();

    void on_cancelCreate_clicked();

    void on_cancelModify_clicked();

    void on_cancelDelete_clicked();

    void on_ManageruserBTN_clicked();

    void on_modifyuserID_currentTextChanged(const QString &arg1);

    void on_UserOptionsCreateBTN_clicked();

    void on_UserOptionsModifyBTN_clicked();

    void on_UserOptionsDeleteBTN_clicked();

    void on_UserOptionsHomeBTN_clicked();

private:
    Ui::MainWindow *ui;
    database db;
    user users;
    QMessageBox msg;
    int roleid;
     bool modifyingComboBox = false;
};
#endif // MAINWINDOW_H
