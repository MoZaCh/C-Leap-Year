#include "LeapYear.h"

/*
* Leap Year calculator
*
*@param year - Takes year as int
*@return isLeap - Bool (True or False) depending on whether the input is a leap year or not
*/
bool leapYear(int year) {

    bool isLeap = false;

    if (year % 4 == 0)
    {
        if (year % 100 == 0) 
        {
            if (year % 400 == 0)
            {
                isLeap = true;
                cout << "Leap Year = True!" << endl;
            }
            else cout << "Not leap year!" << endl;
        }
        else 
        {
            isLeap = true;
            cout << "Leap Year = True!" << endl;
        }
    }
    else cout << "Not leap year!" << endl;

    return isLeap;
}