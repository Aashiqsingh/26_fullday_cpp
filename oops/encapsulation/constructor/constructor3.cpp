#include<iostream>
using namespace std;

class Demo{
    public:


    Demo()
    {
        cout<<"Demo Constructor called"<<endl;
    }

    Demo(int a);


};

Demo::Demo(int a)
{
    cout<<"Demo Constructor called"<<endl;
    cout<<"a = "<<a<<endl;
}


int main()
{
    // Demo d;
    Demo d1(10);
}