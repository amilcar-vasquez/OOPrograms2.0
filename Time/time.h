#ifndef TIME_H //determines whether a class name is defined.
#define TIME_H // this actually defines the class name.
#include <iostream>
#include <iomanip>

class Time
{
public:
    Time();
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();

private:
    int hour; //0-23 hour format
    int minute; // 0-59
    int second; //0-59
};

#endif // TIME_H marks the end of the code that should not be included multiple times
