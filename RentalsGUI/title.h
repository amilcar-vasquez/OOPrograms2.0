#ifndef TITLE_H
#define TITLE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class Title
{
private:
    int titleID;
    QString titleName;
    int titleType;

public:
    Title();
    Title(int, QString, int);

    int getTitleID();
    QString getTitleName();
    int getTitleType();

    void setTitleID(int);
    void setTitleName(QString);
    void setTitleType(int);
    void addTitle(QString, int);
    void updateTitle(int, QString, int);
    void deleteTitle(int);
};

#endif // TITLE_H
