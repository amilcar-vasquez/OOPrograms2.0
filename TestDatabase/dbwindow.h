#ifndef DBWINDOW_H
#define DBWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class DBWindow;
}
QT_END_NAMESPACE

class DBWindow : public QMainWindow
{
    Q_OBJECT

public:
    DBWindow(QWidget *parent = nullptr);
    ~DBWindow();

private slots:
    void on_updateButton_clicked();

    void on_insertButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::DBWindow *ui;
    QSqlDatabase rentaldb;
    bool connected;
    int currentID;
};
#endif // DBWINDOW_H
