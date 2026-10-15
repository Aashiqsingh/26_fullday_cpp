#include<iostream>
using namespace std;


class Data{
    int val;

    public:
    Data(int val)
    {
        this->val=val;
    }

    void operator++()
    {

        ++val;
    }

    void operator--()
    {
        --val;
    }

    void display()
    {
        cout<<"val = "<<val<<endl;
    }
};


int main()
{

    Data t1(10);
    // ++t1;
    // t1.operator++();
    t1.operator--();
    t1.display();

}