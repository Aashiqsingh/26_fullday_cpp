#include<iostream>
using namespace std;

class Car{

    int speed;
    int average;
    int budget;
    string type;
    public:
   
    void setCar()
    {
        cout<<"Enter speed ";
        cin>>speed;
        cout<<"Enter average ";
        cin>>average;
        cout<<"Enter budget ";
        cin>>budget;
        cout<<"Enter type ";
        cin>>type;
    }

    void display()
    {
        cout<<"Speed "<<speed<<endl;
        cout<<"Average "<<average<<endl;
        cout<<"Budget "<<budget<<endl;
        cout<<"Type "<<type<<endl;
    }

   
};




int main()
{
    Car c1;
    c1.setCar();
    c1.display();
}