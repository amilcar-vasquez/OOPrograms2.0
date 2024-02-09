#ifndef TITLE_H
#define TITLE_H
#include <iostream>
using namespace std;

class Title
{
private:
    int TitleID;
    string TitleName;
    string TitleType;

public:
    Title(int newTitleID, string newTitleName, string newTitleType);
    int getTitleID();
    string getTitleName();
    string getTitleType();

    void setTitleID(int newTitleID);
    void setTitleName(string newTitleName);
    void setTitleType(string newTitleType);
    void viewTitle(int);
};

#endif // TITLE_H
