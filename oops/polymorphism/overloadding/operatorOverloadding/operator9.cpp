#include<iostream>
#include<cstring>
using namespace std;

class Demo{
    char name[100];

    public:

    void getName()
    {
        cout<<"Enter name : ";
        cin>>name;
    }

    Demo operator+(Demo d2)
    {
        Demo d3;
        // d3.name = name+d2.name;  
        strcpy(d3.name,name);
        strcat(d3.name," ");
        strcat(d3.name,d2.name);
        
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

    // d3 = d1.add(d2);

    d3 = d1+d2;
    d3.display();
}