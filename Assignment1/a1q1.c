#include <stdio.h>

// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* date) {
    date->day = 30;
    date->month = 9;
    date->year = 2000;
}

void acceptDateFromConsole(struct Date* date) {
    printf("Enter the DAY: ");
    scanf("%d", &date->day);
    printf("Enter the MONTH: ");
    scanf("%d", &date->month);
    printf("Enter the YEAR: ");
    scanf("%d", &date->year);
}

void printDateOnConsole(struct Date* date) {
    printf("The Date Entered by you is %d : %d : %d\n", date->day, date->month, date->year);
}

int main() {
    struct Date d1;
    initDate(&d1);
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);

    return 0;
}
