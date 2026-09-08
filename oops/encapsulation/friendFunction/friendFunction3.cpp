#include<iostream>
using namespace std;

class Car{
    
    int speed = 100;
    int average = 20;


    public:
    void display()
    {
        cout<<"Speed: "<<speed<<endl;
        cout<<"Average: "<<average<<endl;
    }

    friend void dost(Car n);

};

void dost(Car n)
{
    // cout<<n.speed<<endl;
    // n.display();

    n.speed = 200;
    cout<<"Speed: "<<n.speed<<endl;
}

int main()
{
    Car c;

    // c.display();
    // dost(c);
    // c.speed = 200;
    // cout<<"Speed: "<<c.speed<<endl;
}