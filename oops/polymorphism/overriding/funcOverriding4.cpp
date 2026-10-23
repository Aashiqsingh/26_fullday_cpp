#include<iostream>
using namespace std;

class Car{
    int gear;

    public:

    void setGear(int g)
    {
        gear=g;
    }
};

class SportsCar:public Car{

    int gear;

    public:
    void setGear(int g)
    {
        gear=g;
    }
};

int main()
{
    SportsCar obj;

    // obj.setGear(23);
    obj.Car::setGear(23);
}