#include<iostream>
using namespace std;

struct employees{
    int id;
    string name;
    float salary;


    void input()
    {
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter salary :";
        cin>>salary;
    }


    void display()
    {
        cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
    }
};


int main()
{
    employees e1;
    

    e1.input();
    e1.display();
}