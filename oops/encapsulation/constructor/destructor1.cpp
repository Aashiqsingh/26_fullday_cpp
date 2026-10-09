#include<iostream>
using namespace std;

class Student{
    private:
    int roll;
    string name;

    public:
    Student(int roll,string name){
        this->roll=roll;
        this->name=name;
    }

    void display()
    {
        cout<<"roll no: "<<roll<<endl<<"name: "<<name<<endl;
    }

    ~Student()
    {
        cout<<"destructor called"<<endl;
    }
};

int main()
{
    Student s(101,"priya");

    s.display();
}