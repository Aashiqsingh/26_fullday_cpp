#include<iostream>
using namespace std;

class A{
    public:

    void f1()
    {
        cout<<"Parent class f1"<<endl;
    }

};

class B:public A{
    public:

    // void f1(double pi)
    // {
    //     cout<<"Parent class f1(double pi)"<<endl;
    // }

    void f2()
    {
        cout<<"Child class f1"<<endl;
    }
};

int main()
{
    // A obj;


    // obj.f1();

    // B obj;
    A obj;
    obj.f1();
}