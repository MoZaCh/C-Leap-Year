#include "LeapYear.h"

bool leapYear(int year) {

    if (year % 4 == 0)
    {
        if (year % 100 == 0) 
        {
            if (year % 400 == 0)
            {
                cout << "Leap Year = True!" << endl;
            }
            else cout << "Not leap year!" << endl;
        }
        else cout << "Leap Year = True!" << endl;
    }
    else cout << "Not leap year!" << endl;

    return 0.0;
}