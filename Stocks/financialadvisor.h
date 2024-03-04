#ifndef FINANCIALADVISOR_H
#define FINANCIALADVISOR_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class FinancialAdvisor
{
private:
    int empID;
    QString empPassword;
    QString empFname;
    QString empLname;

public:
    FinancialAdvisor();
    FinancialAdvisor(int, QString, QString, QString);

    int getEmpID();
    QString getEmpPassword();
    QString getEmpFname();
    QString getEmpLname();

    void setEmpID(int);
    void setEmpPassword(QString);
    void setEmpFname(QString);
    void setEmpLname(QString);
    void empLogin(int, QString); //passes ID and password only.
};

#endif // FINANCIALADVISOR_H
