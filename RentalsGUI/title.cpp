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

void Title::addTitle(QString newTitle, int newTitleType)
{

}

void Title::updateTitle(int newTitleID, QString newTitleName, int newTitleType)
{

}

void Title::deleteTitle(int newTitleID)
{

}
