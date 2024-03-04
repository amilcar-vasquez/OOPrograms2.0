#include "time.h"  //includes the definition for time class

using namespace std;



Time::Time()
{
    hour = minute = second = 0;
} //end time constructor


//set new time value using universal time; ensure that the data remains consisten by setting invalid values to 0;

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 00 && h < 24) ? h : 0; //validate hour
    minute = (m >= 0 && m < 60) ? m : 0; //validate minute
    second = (s >= 0 && s < 60) ? s: 0; //validate second
}


void Time::printUniversal()  //print in ut time format (HH:MM:SS)
{
    cout << setfill('0') << setw (2) << hour << ":" << setw (2) << minute << ":" << setw (2) << second << endl;
}

void Time::printStandard() //print in std time format (HH:MM:SS AM or PM)
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12 ) << ":" << setfill ('0') << setw(2) << minute << ":" << setw (2) << second << (hour < 12 ? " AM" : " PM") << endl;
}
