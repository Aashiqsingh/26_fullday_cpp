#include<iostream>
// operator overloadding == operator overloading
using namespace std;

class Test{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void show(Test t2)
    {
        if(a==t2.a)
        {
            cout<<"same"<<endl;
        }
        else{
            cout<<"different"<<endl;
        }
    }
};

int main()
{
    Test t1,t2;

    cout<<"Enter value of t1 : ";
    t1.get();
    cout<<"Enter value of t2 : ";
    t2.get();

    t1.show(t2);
}