// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. 
// The birthdate shoud be of type Date.Cretae a class Employee with data members id, sal, dept and joining date. 
// The joining date should be of type date.Employee class should be inherited from Person.Implement following classes. 
// Test all functionalities in main().(Note - Perform the Association and Inheritance in the above case.)


//CAN DO 
//LATE BINDING USING VIRTUAL
#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 30;
        month = 9;
        year = 2000;
    }
    void acceptDate()
    {
        cout<<endl;
        cout << "Enter the day: ";
        cin >> day;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    string address;
    Date *birthdate = NULL;

public:
    Person()
    {
        
        birthdate = new Date(); // compulsory declared so follows composition
    }
    
    //virtual

    void acceptData()
    {
        cout<<endl;
        cout << "Enter name of Person:";
        cin>>name;
        cout << "Enter address of Person:";
        cin>> address;
        cout << "Enter birthdate of Person:";
        birthdate->acceptDate();
        cout << endl;
    }
    


    //virtual 
    void displayData()
    {
        cout << "Personal Details of the Person: "<<endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;

        if (birthdate != NULL)
        {
            cout << "Birthdate: ";
            birthdate->displayDate();
        }
    }

    ~Person()
    {
        if (birthdate != NULL)
        {
            delete birthdate;
            birthdate = NULL;
        }
    }
};

class Employee: public Person
{
private:
    int id;
    double sal;
    string dept;
    Date *jdate;

public:
    Employee()
    {
        jdate = new Date(); // compulsory declared so follows composition
    }

    void acceptData()
    {
        cout << "Enter empid of Employee - ";

        cin >> id;
        cout << "Enter Depatement of Employee - ";
        cin>>dept;
        cout << "Enter salary of Employee - ";

        cin >> sal;
        cout << "Enter Date of Joining of Employee - "<<endl;
        jdate->acceptDate();
    }

    void displayData()
    {
        cout <<endl<< "Personal details of employee: " << endl;
        
        cout << "Employee id: " << id << endl;
        cout << "Department of the Employee: " << dept << endl;
        
         if (jdate != NULL)
        {
           cout << "Joining Date: " << endl;
            jdate->displayDate();
        }

    }

    ~Employee()
    {
        if (jdate != NULL)
        {
            delete jdate;
            jdate = NULL;
        }
    }
};

int main()
{

    // Person p;
    // p.acceptData();
    // p.displayData();

    // Employee e;
    // e.acceptData();
    // e.displayData();


    Person *ptr = new Employee;

    ptr->acceptData();
    ptr->displayData();

}