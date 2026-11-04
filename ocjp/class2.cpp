#include<iostream>
using namespace std;

class Bank
{
    int balance;
    public:
    Bank()
    {
        cout<<"Bank constructor called"<<endl;
    }

    Bank(int amount)
    {
        balance=amount;
        cout<<"Bank int constructor called"<<endl;
    }

    Bank(double amount)
    {
        balance=amount;
        cout<<"Bank double constructor called"<<endl;
    }

    void display()
    {
        cout<<"Balance = "<<balance<<endl;
    }
};

int main()
{
    Bank b;
    Bank b1(1000.76);

    b1.display();
}