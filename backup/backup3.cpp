#include<stdio.h>
using namespace std;


class Car{
    int speed;
    int model;
    int price;
    int year;

    public:

    Car(int speed, int model, int price, int year)
    {
        this->speed = speed;
        this->model = model;
        this->price = price;
        this->year = year;
    }

    Car(const Car &c)
    {
        this->speed = c.speed;
        this->model = 2022;
        
    }

};

int main()
{
    Car c1(100, 2020, 20000, 2021);
    Car c2(c1);
}