#include<iostream>
using namespace std;

class Animal{
    public:

    virtual void sound()
    {
        cout<<"Animal sound"<<endl;
    }
};

class Dog:public Animal{
    public:

    void sound()
    {
        cout<<"dog sound"<<endl;
    }
};

class Cat:public Animal{
    public:

    void sound()
    {
        cout<<"cat sound"<<endl;
    }
};

class Lion:public Animal{
    public:

    void sound()
    {
        cout<<"lion sound"<<endl;
    }
};

int main()
{
    Dog d;
    
    Animal *ptr;

    ptr=&d;
    ptr->sound();

    Cat c;
    ptr=&c;
    ptr->sound();
}