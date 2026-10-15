#include<iostream>
using namespace std;

class Test{
    int a;

    public:
    Test(int a)
    {
        this->a=a;
    }

    Test operator++()
    {
        ++a;
        return a;
    }

    Test operator++(int)
    {
        a++;
        return a;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};

int main()
{
    Test t1(12);

    Test t2(0);
    // t2 = ++t1;
    t2 = t1++;
    t2.display();
}