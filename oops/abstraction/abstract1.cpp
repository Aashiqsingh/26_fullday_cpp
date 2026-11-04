#include<iostream>
using namespace std;

class Parent{

    int a;
    public:
    virtual void display() = 0;

};

class Child: public Parent{
    public:
    void display()
    {
        cout<<"This is child class"<<endl;
    }
};

int main()
{
    Child c;
    c.display();
}