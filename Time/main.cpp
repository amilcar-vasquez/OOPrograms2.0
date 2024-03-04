#include <iostream>

using namespace std;
#include "time.h"

int main()
{
    Time t;

    cout << "Universal time begins at: " << endl;
    t.printUniversal(); // should be 00:00:00

    cout << "Standard time begins at: " << endl;
    t.printStandard();

    t.setTime(13, 27, 6); //change time

    cout << "new ut: " << endl;
    t.printUniversal();

    cout << "new std time: " << endl;
    t.printStandard();
    return 0;
}
