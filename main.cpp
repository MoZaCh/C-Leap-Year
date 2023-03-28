#include <iostream>
#include "LeapYear.h"

using namespace std;

int main() {

    int choice = 0;
    int year;
    string name;
    bool quit = false; //Flag set to false for the do-while loop
    bool isLeap;

    do
    {
        cout << "Select an option:" << endl;
        cout << "1) Leap Year Calculator" << endl;
        cout << "2) Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter your name:" << endl;
            cin >> name;
            cout << "Enter the year that you would like to check:" << endl;
            cin >> year;
            isLeap = leapYear(year); //Function call with given argument
            cout << boolalpha << isLeap << endl;
            cout << "----------------------------" << endl;
            break;

        case 2:
            quit = true; //Setting flag to true to exit do-while loop
        }

    } while (!quit);

    return 0;
}