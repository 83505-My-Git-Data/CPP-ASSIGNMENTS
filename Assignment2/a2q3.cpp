// Q3. Write a class Address with data members
// (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(),
// and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.
#include<iostream>
using namespace std;

class Address{
    private:
        string building;
        string street;
        string city;
        int pin;
    public:
    Address(){
        building = "Guru Prasad";
        street = "Ganesh Colony";
        city = "Jalgaon";
        pin = 425001;
    }
        void accept(){
            cout<<"Enter the Address"<<endl;
            cout<<"Enter the Building Name-";
            getline(cin,building);
            cout<<"Enter the Street Name-";
            getline(cin,street);
            cout<<"Enter the City Name-";
            getline(cin,city);
            cout<<"Enter the Pin Code-";
            cin>>pin;
            cout<<"The Address has been entered! Use The Display method to view the address!"<<endl;

        }

        void display(){
            cout<<"Building Name: "<<building<<endl;
            cout<<"Street Name: "<<street<<endl;
            cout<<"City Name: "<<city<<endl;
            cout<<"Pin Code: "<<pin<<endl;
        }
        
        
        void setBuilding(string building){
            this->building = building;
        }
        
        string getBuilding(){
            return building;
        }

        void setStreet(string street){
            this->street = street;
        }
        
        string getStreet(){
            return street;
        }

        void setCity(string city){
            this->city = city;
        }
        
        string getCity(){
            return city;
        }

        void setPinCode(int pin){
            this->pin = pin;
        }
        
        int getPinCode(){
            return pin;
        }
};

int main(){
    Address a;
    a.display();
    a.accept();
    a.display();
    a.setBuilding("taj");
    cout<<"Building Name:"<<a.getBuilding()<<endl;
    a.setStreet("mg road");
    cout<<"Street Name:"<<a.getStreet()<<endl;
    a.setCity("Mumbai");
    cout<<"City Name:"<<a.getCity()<<endl;
    a.setPinCode(400001);
    cout<<"Pin Code:"<<a.getPinCode()<<endl;



}