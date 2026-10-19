#include<iostream>
using namespace std;

class Demo{
    int a;

    public:

    Demo(int a)
    {
        this->a=a;
    }

    // void operator+(Demo d2)
    // {
        
    //     a=a+d2.a;
    // }

    Demo operator+(Demo d2)
    {
        // Demo d3 = a+d2.a;
        // return d3;

        return Demo(a+d2.a);
    }

    void display()
    {
        cout<<"total = "<<a<<endl;
    }
};

int main()
{
    Demo d1(10);
    Demo d2(20);


    Demo d3(0);
    d3 = d1+d2;

    // d1.display();
    d3.display();
}


// :: , . , .*

// +7
// 4 + 7
// obj.a + obj.b