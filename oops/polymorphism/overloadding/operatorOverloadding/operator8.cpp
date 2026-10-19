#include<iostream>
using namespace std;

class Demo{
    string name;

    public:

    void getName()
    {
        cout<<"Enter name : ";
        cin>>name;
    }

    Demo add(Demo d2)
    {
        Demo d3;
        d3.name = name+d2.name;  
        
        return d3;
    }

    void display()
    {
        cout<<"Name = "<<name<<endl;
    }


};

int main()
{
    Demo d1,d2,d3;

    d1.getName();
    d2.getName();

    d3 = d1.add(d2);
    d3.display();
}