#include "dbwindow.h"
#include "ui_dbwindow.h"

DBWindow::DBWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DBWindow)
{
    ui->setupUi(this);

    //connect to the database
    rentaldb = QSqlDatabase::addDatabase("QMYSQL");
    rentaldb.setHostName("127.0.0.1");
    rentaldb.setUserName("root");
    rentaldb.setPassword("Firme.2424");
    rentaldb.setDatabaseName("rental");

    connected = rentaldb.open();

    if (connected)  //if it opens successfully, run this code
    {
        QSqlQuery query; //creates a new SQL query

        if (query.exec("SELECT user_id, user_name, user_password, user_first_name, user_last_name, role_id FROM users"))
        {
            while (query.next())
            {
                qDebug() << query.value(0) << query.value(1) << query.value(2).toString() << query.value(3).toString() << query.value(4).toString() << query.value(5).toString();

                currentID = query.value(0).toInt();
                ui->role->setCurrentIndex(query.value(5).toInt());
                ui->username->setText(query.value(1).toString());
                ui->password->setText(query.value(2).toString());
                ui->firstName->setText(query.value(3).toString());
                ui->lastName->setText(query.value(4).toString());
            }
        }
        else
        {
            qDebug() << query.lastError().text();
        }
    }
    else
    {
        qDebug() << "Failed to connect to database.";
    }
}

DBWindow::~DBWindow()
{
    rentaldb.close();
    delete ui;
}

void DBWindow::on_updateButton_clicked()
{
    if (connected)
    {
        if (currentID == 0)
        {
            qDebug() << "Nothing to update.";
        }
        else
        {
            QString id = QString::number(currentID);
            QString role = QString::number(ui->role->currentIndex());
            QString username = ui->username->text();
            QString password = ui->password->text();
            QString fname = ui->firstName->text();
            QString lname = ui->lastName->text();

            qDebug() << "UPDATE users SET role_id = "+role+", user_name = '"+username+"', user_password = '"+password+"', user_first_name = '"+fname+"', user_last_name = '"+lname+"' WHERE user_id = " +id;

            QSqlQuery query;
            if (query.exec("UPDATE users SET role_id = "+role+", user_name = '"+username+"', user_password = '"+password+"', user_first_name = '"+fname+"', user_last_name = '"+lname+"' WHERE user_id = " +id))
            {
                qDebug() << "Update Success.";
            }
            else
            {
                qDebug() << query.lastError().text();
            }
        }
    }
    else
    {
        qDebug() << "Failed to connect to database.";
    }
}


void DBWindow::on_insertButton_clicked()
{
    if (connected)
    {
        QString role = QString::number(ui->role->currentIndex());
        QString username = ui->username->text();
        QString password = ui->password->text();
        QString fname = ui->firstName->text();
        QString lname = ui->lastName->text();

        qDebug() << "INSERT INTO users (role_id, user_name, user_password, user_first_name, user_last_name) VALUES ("+role+", '"+username+"', '"+password+"', '"+fname+"', '"+lname+"')";

        QSqlQuery query;
        if (query.exec("INSERT INTO users (role_id, user_name, user_password, user_first_name, user_last_name) VALUES ("+role+", '"+username+"', '"+password+"', '"+fname+"', '"+lname+"')"))
        {
            qDebug() << "Insert Success.";
        }
        else
        {
            qDebug() << query.lastError().text();
        }

    }
    else
    {
        qDebug() << "Failed to connect to database.";
    }
}


void DBWindow::on_deleteButton_clicked()
{
    if (connected)
    {
        if(currentID == 0)
        {
            qDebug() << "Nothing to delete.";
        }
        else
        {
            QString id = QString::number(currentID);
            qDebug() << "DELETE FROM users WHERE user_id = " + id;
            QSqlQuery query;
            if (query.exec("DELETE FROM users WHERE user_id = " + id))
            {
                currentID = 0;
                qDebug() << "Delete Success";
            }
            else
            {
                qDebug() << query.lastError().text();
            }
        }
    }
    else
    {
        qDebug() << "Failed to connect to database.";
    }
}

