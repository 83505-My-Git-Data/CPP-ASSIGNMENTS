
// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include <iostream>
using namespace std;


class student
{
private:
    int rollno;
    string name;
    double marks;

public:
    void initStudent()
    {
        rollno = 100;
        name = "Ronak";
        marks = 78.90;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void printStudentOnConsole()
    {
        cout << "Roll no: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    struct student s1;
    s1.initStudent();
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
}