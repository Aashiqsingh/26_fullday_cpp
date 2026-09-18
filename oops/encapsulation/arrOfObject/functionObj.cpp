#include<iostream>
using namespace std;


class Test{

    public:
    int a = 10;


    void getObject(Test t1)
    {
        cout<<"Object created"<<endl;
        cout<<"variable a is = "<<t1.a<<endl;
    }

};

int main()
{
    Test t;
    cout<<"a = "<<t.a<<endl;
    t.a = 1000;
    Test t2;
    cout<<"a2 = "<<t2.a<<endl;
    t2.a = 2000;
    t.getObject(t2);
    t.getObject(t);
}