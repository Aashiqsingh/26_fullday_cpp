#include<iostream>
using namespace std;

class Car{

    public:
    int speed;


    Car(int speed){
        this->speed = speed;

    }

    Car(const Car &s)
    {
        speed = s.speed;
        cout<<"c2 --> called"<<endl;
    }

    void display(){
        cout<<"speed is "<<speed<<endl;
        
    }

};

int main()
{

    Car c1(100);


    Car c2(c1);


    c1.display();
    c2.display();

}