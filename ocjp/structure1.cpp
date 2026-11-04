#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class student{
    int roll;
    char name[20];
    int age;

    public:
    
    void setter()
    {
        cout<<"Enter roll:";
        cin>>roll;
        fflush(stdin);
        cout<<"Enter name:";
        cin.getline(name,20);
        cout<<"Enter age:";
        cin>>age;
    }

    void display()
    {
        cout<<"roll:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }

};

int main()
{

    student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].setter();
    }

    for(int i=0;i<3;i++)
        s[i].display();


    s[0].age = 19;

    // struct student s1,s2;
    // struct student s[10];

    // s1.roll=10;
    // s2.roll=20;
    // s1.age=20;
    // s2.age=30;
    // strcpy(s1.name,"om");
    // strcpy(s2.name,"aashi");

}