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
    employees e[4];

    for(int i=0;i<4;i++)
    {
        e[i].input();
    }


    // 
    cout<<"Id\t"<<"Name\t"<<"Salary"<<endl;
    for(int i=0;i<4;i++)
    {
        e[i].display();
    }
 /// salary : 2000 , 3000 , 4000 , 2500
    int max = 0;
    for(int i=0;i<4;i++)
    {
        if(e[i].salary > e[max].salary)
        {
            max = i;
        }
    }

    // display max salary
    cout<<"Max salary employee is : "<<e[max].name<<endl;
    e[max].display();
    
    
}