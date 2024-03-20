// Assignment 2

// Q1. Write a menu driven program to calculate volume of the
// box(length * width * height).Provide parameterless,
//  parameterized(with 3 parameters) and single paramaterized constructor.
//  Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume
//  with length,breadth and height with same value3.
// Calculate Volume with different length,breadth and height value

#include <iostream>
using namespace std;

class box
{
    private:

    double length;
    double width;
    double height;
    double dimension;

public:
    box()
    {
        length = 30.05;
        width = 50.60;
        height = 40.10;
    }

    box(double dimension)
    {
        this->dimension=dimension;
    }

    box(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void calculateVolumeSingleParam()
    {
        cout << "Area with the Single parameter function: "<<dimension * dimension * dimension << endl;
    }

    void calculateVolume()
    {
        cout << length * width * height << endl;
    }
};

int main()
{
    int choice;

    do{
    cout << "Enter Your choice: " << endl;
    cout << "1. Calculate Volume with default values " << endl;
    cout << "2. Calculate Volume with length,breadth and height with same value " << endl;
    cout << "3. Calculate Volume with different length,breadth and height values " << endl;
    cout << "Type 0 to escape the menu." << endl;

    cin >> choice;

    switch (choice)
    {

    case 1:
    {
        box b1;
        b1.calculateVolume();
        break;
    }

    case 2:
    {
        box b2(50.50);
        b2.calculateVolumeSingleParam();
        break;
    }
    case 3:
    {
        box b3(23.50, 45.21, 35.90);
        b3.calculateVolume();
        break;
    }
    
    }

    }while(choice!=0);

    return 0;
}
