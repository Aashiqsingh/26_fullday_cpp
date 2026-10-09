#include<iostream>
using namespace std;

class Area{
    public:


    void calculate(int side)
    {
        cout<<"Area of Square: "<<side*side<<endl;
    }

    void calculate(int l,int b)
    {
        cout<<"Area of Rectangle: "<<l*b<<endl;
    }

    void calculate(int r,int h,int w)
    {
        cout<<"Area of Triangle: "<<(r*h)/2<<endl;
    }

};

int main()
{
    Area a;
    // a.calculate(4);
    a.calculate(4,5);
    a.calculate(3,4);
}