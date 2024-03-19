//CLASS PROGRAM

// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();


//USING CLASS

#include<iostream>
using namespace std;


class Date {
private:
    int day;
    int month;
    int year;

public:

    void initDate() {
        day = 30;
        month = 9;
        year = 2000;
    }

    void acceptDateFromConsole() {
        cout << "Enter the DAY: ";
        cin >> day;
        cout << "Enter the MONTH: ";
        cin >> month;
        cout << "Enter the YEAR: ";
        cin >> year;
    }

    void printDateOnConsole() {
        cout << "The Date Entered by you is " << day << " : " << month << " : " << year << endl;
    }

    bool isLeapYear() {
        if (year % 400 == 0 || year % 100 == 0 || year % 4 == 0) {
            cout << endl << "The Year you entered is a leap year" << endl;
            return true;
        } else {
            cout << endl << "The Year you entered is not a leap year" << endl;
            return false;
        }
    }
};

int main() {
    Date d1;
    d1.initDate();
    d1.acceptDateFromConsole();
    d1.printDateOnConsole();
    d1.isLeapYear();

    return 0;
}
