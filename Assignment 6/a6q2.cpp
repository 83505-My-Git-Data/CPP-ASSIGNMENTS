// Q2.A shop sells book or tapes.The Book class holds id, title, author, and price;
// whereas Tape class holds id, title, artist, and price.There is 5 % discount on tapes,
// while 10 % discount on books.
// Assuming that each user purchase 3 products(either book or tape),
// calculate final bill.
// The program should be menu driven and should not cause memory leakage.
// Hint -
// Create class Product and inherit into Book and Tape.
// Also create array like Product * arr[3]
#include<iostream>
using namespace std;

class Product{
    int id;
    string title;
    float price;

    public:
        void setPrice(int price){
            this->price = price;
        }

        float getPrice(){
            return this->price; 
        }

        virtual void accept(){
            cout<<"ENTER THE ID: "<<endl;
            cin>>id;
            cout<<"ENTER THE TITLE: "<<endl;
            cin>>title;
            cout<<"ENTER THE PRICE: "<<endl;
            cin>>price;
        }

        virtual void display(){
            cout<<"ID :"<<id<<endl;
            cout<<"TITLE :"<<title<<endl;
            cout<<"PRICE :"<<price<<endl;
        }
};

class Book:public Product{
    string author;

    public:
    void accept(){
        Product::accept();
        cout<<"ENTER AUTHOR: "<<endl;
        cin>>author;
        
        setPrice(getPrice() - getPrice()*0.1);

    }

    void display(){
        Product::display();
        cout<<"Author : "<<author;
    }
};

class Tape:public Product{
    string artist;
    
    public:
    void accept(){
        Product::accept();
        cout<<"ENTER Artist: "<<endl;
        cin>>artist;
        setPrice(getPrice() - getPrice()*0.05);
    }

    void display(){
        Product::display();
        cout<<"Artist : "<<artist;
    }
};

int main(){
    int choice;
    Product *pptr[3];
    int index = 0;
    do{
        cout<<"0. EXIT"<<endl;
        cout<<"1. Buy Book"<<endl;
        cout<<"2. Buy Tape"<<endl;
        cout<<"3. Show Total Bill"<<endl;

        cout<<"ENTER YOUR CHOICE: "<<endl;
        cin>>choice;

        switch(choice){
            case 0:
                cout<<"THANKYOU!"<<endl;
                break;
            case 1:
                if(index < 3){
                    pptr[index] = new Book();
                    pptr[index]->accept();
                    index++;
                }
                else{
                    cout<<"Limit Reached!"<<endl;
                }
                break;
            case 2:
                if(index < 3){
                    pptr[index] = new Tape();
                    pptr[index]->accept();
                    index++;
                }
                else{
                    cout<<"Limit Reached!"<<endl;
                }
                break;
            case 3:
                int total = 0;
                for(int i = 0; i < 3; i++){
                    total += pptr[i]->getPrice();
                }
                cout<<"Your Total Bill is: "<<total<<endl;
                break;
            
        }
    }while(choice != 0);

    for(int i = 0; i < 3; i++){
        delete pptr[i];
        pptr[i] = NULL;
    }
    return 0;
}