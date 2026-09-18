// Constructor it is a special member of class that called automatically at time of object creation. 
// 1.  constuctor name is same as class name 
// 2. bydefault at the object creation time
// 3. no return type 

#include<iostream>
using namespace std;

class Demo{
    public:
    int a = 5;

    Demo()
    {
        cout<<"Demo Constructor called"<<endl;
    }

};

int main()
{
    Demo d1;
    Demo d2;
    cout<<d1.a<<endl;
}