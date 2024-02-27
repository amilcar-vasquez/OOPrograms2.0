#include "title.h"

Title::Title() {}
Title::Title(int newTitleID, QString newTitleName, int newTitleType)
    :titleID(newTitleID), titleName(newTitleName), titleType(newTitleType) {}

int Title::getTitleID()
{
    return titleID;
}

QString Title::getTitleName()
{
    return titleName;
}

int Title::getTitleType()
{
    return titleType;
}

void Title::setTitleID(int newTitleID)
{
    titleID = newTitleID;
}

void Title::setTitleName(QString newTitleName)
{
    titleName = newTitleName;
}

void Title::setTitleType(int newTitleType)
{
    titleType = newTitleType;
}

//function that adds a new title.
void Title::addTitle(QString newTitle, int newTitleType)
{
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO titles (title_name, title_type_id) VALUES (:dbTitleName, :dbTitleType)");

    insertQuery.bindValue(":dbTitleName", newTitle); //bind each value from db to values from the user interface.
    insertQuery.bindValue(":dbTitleType", newTitleType);

    if (!insertQuery.exec())
    {
        qDebug() << "Error adding new title:" << insertQuery.lastError().text();
    }
}

//function that updates titles.
void Title::updateTitle(int newTitleID, QString newTitleName, int newTitleType)
{
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE titles SET title_id = :dbTitleID, title_name = :dbTitleName, title_type_id = :dbTitleType WHERE title_id = :dbTitleID");

    updateQuery.bindValue(":dbTitleID", newTitleID);
    updateQuery.bindValue(":dbTitleName", newTitleName);
    updateQuery.bindValue(":dbTitleType", newTitleType);

    if (!updateQuery.exec())
    {
        qDebug() << "Error updating title:" << updateQuery.lastError().text();
    }
}

//function to delete titles.
void Title::deleteTitle(int newTitleID)
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM titles WHERE title_id = :dbTitleID;");

    deleteQuery.bindValue(":dbTitleID", newTitleID);

    if (deleteQuery.exec())
    {
        qDebug() << "Successfully deleted title" << deleteQuery.lastError().text();
    }
    else
    {
        qDebug() << "Error deleting title:" << deleteQuery.lastError().text();
    }
}
