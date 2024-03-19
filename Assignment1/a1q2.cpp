// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

//USING STRCUTURE


#include<iostream>
using namespace std;

struct Date{

    int day;
    int month;
    int year;
};

void initDate(struct Date* date)
{
    date->day = 30;
    date->month=9;
    date->year =2000;
}

void acceptDateFromConsole(struct Date* date)
{
    cout<<"Enter the DAY: ";
    cin>> date->day;
    cout<<"Enter the MONTH: ";
    cin>> date->month;
    cout<<"Enter the YEAR: ";
    cin>> date->year;
}

void printDateOnConsole(struct Date* date)
{
    cout<<"The Date Entered by you is ";
    cout<<date->day<<" : "<<date->month<<" : "<<date->year<<endl;

}

bool isLeapYear(struct Date* date)
{
    if(date->year%400 ==0 ||date->year%100 ==0||date->year%4 ==0)
    {
        cout<<endl<<"The Year you entered is a leap year"<<endl;
        return true;
    }
    else
    {
        cout<<endl<<"The Year you entered is not a leap year"<<endl;
        return false;

    }
}


int main()
{
    struct Date d1;
    initDate(&d1);
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
    isLeapYear(&d1);
    return 0;
}

