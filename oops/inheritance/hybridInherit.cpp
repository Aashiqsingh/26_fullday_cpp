#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void getName()
    {
        cout<<"Enter name: ";
        cin>>name;
    }
};

class Student : virtual public Person{
    protected:
    string course;

    public:
    void getCourse()
    {
        cout<<"Enter course: ";
        cin>>course;
    }
};

class Teacher : virtual public Person{
    protected:
    string subject;

    public:
    void getSubject()
    {
        cout<<"Enter subject: ";
        cin>>subject;
        // getline(cin,subject);
    }
};

class TeachingAssistant:public Teacher, public Student{

    public:
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main()
{
    TeachingAssistant t;
    t.getName();
    t.getCourse();
    t.getSubject();
    t.display();
}