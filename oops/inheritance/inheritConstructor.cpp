#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string brand;
    int price;

    public:

    // Vehicle(string b,int p)
    // {
    //     brand=b;
    //     price=p;
    // }

    Vehicle(string brand,int price){
        this->brand=brand;
        this->price=price;
    }
};

class Car: public Vehicle{
    string model;
    public:

    Car(string b,int p,string model):Vehicle(b,p)
    {
        this->model=model;

    }

    void display()
    {
        cout<<"Car brand: "<<brand<<endl;
        cout<<"Car model: "<<model<<endl;
        cout<<"Car price: "<<price<<endl;
    }

};

int main()
{
    Car c("BMW",5000000,"X5");

    c.display();
}