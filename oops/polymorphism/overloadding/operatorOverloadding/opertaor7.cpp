#include<iostream>

using namespace std;

class Compare{
    public:

    int a;
    int b;
    int c;


    bool operator>(Compare c2)
    {
        return a>c2.a and b>c2.b and c>c2.c;
    }
};

int main()
{

    Compare c1,c2;
    c1.a=15;
    c1.b=20;
    c1.c=25;

    c2.a=10;
    c2.b=15;
    c2.c=20;

    if(c1>c2)
    {
        cout<<"c1 is greater than c2"<<endl;
    }

}