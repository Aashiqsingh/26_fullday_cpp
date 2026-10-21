#include<iostream>
using namespace std;


class Parent{
    public:

    void display()
    {
        cout<<"Parent dispaly function"<<endl;
    }
};

class Child: public Parent{
    public:
    void display()
    {
        cout<<"Child dispaly function"<<endl;
    }
};

int main()
{
    Child c;
    // c.display();
    c.Parent::display();
    Child c2;
    c2.display();
}


