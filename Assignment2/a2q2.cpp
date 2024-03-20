// Q2. Imagine a tollbooth at a bridge. Cars passing by the
// booth are expected to pay a fifty-cent toll. Mostly they do,
// but sometimes a car goes by without paying.The tollbooth keeps
// track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.T
// he two data items are a type unsigned int to hold the total number of cars,
// and a type double to hold the total amount of money collected.A constructor
//  initializes all data members to 0. A member function called payingCar()
//   increments the car total and adds 0.50 to the cash total. An other function,
//   called nopayCar()increments the car total but adds nothing to the cash total.
//   Finally, a member function called printOnConsole() displays the two totals
// and number of paying as well as non paying cars total


#include <iostream>
using namespace std;

// class- blueprint - no processing while creating class
class toolbooth
{

    unsigned int noOfCars;
    double totalAmt;
    unsigned int payingCars;

public:
    toolbooth()
    {
        noOfCars = 0;
        totalAmt = 0;
        payingCars=0;
    }

    void payingCar() // processed only when called
    {
        noOfCars++;
        payingCars++;
        totalAmt += 0.50;
    }

    void nopayCar() // processed only when called
    {
        noOfCars++;
    }

    void printOnConsole()
    {

        cout << "Total Amount payed by the cars passed through the toll: " << totalAmt << endl;
        cout << "Total No of cars passed through the toll: " << noOfCars << endl;
        cout<<"Total cars who paid toll: "<<payingCars<<endl;
        cout<<"Total cars who did not paid toll: "<<noOfCars-payingCars<<endl;


    }
};

int main()
{
    int choice;
    toolbooth t1;
    do
    {
        

        cout << "Enter Your choice: " << endl;
        cout << "1. Number of Paying Cars  " << endl;
        cout << "2. Number of non Paying Cars" << endl;
        cout << "3. Display the totalAmt collected, Total No of Cars passed through toll   " << endl;
        cout << "Type 0 to escape the menu." << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
        {
            t1.payingCar();
            break;
        }

        case 2:
        {
           t1.nopayCar();
            break;
        }
        case 3:
        {
            t1.printOnConsole();
            break;
        }
        }

    } while (choice != 0);

    return 0;
}
