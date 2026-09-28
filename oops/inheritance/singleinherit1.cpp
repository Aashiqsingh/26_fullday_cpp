#include<iostream>
using namespace std;

class Car{
    public:
    void display()
    {
        cout<<"I am a car class"<<endl;
    }
};


class SportsCar: public Car{

    public:
    void display2()
    {
        cout<<"I am a sports car class"<<endl;
    }
};

int main()
{
    SportsCar s;
    // s.display2();
    // s.display();


    Car c;
    c.display();
    c.display2();
}