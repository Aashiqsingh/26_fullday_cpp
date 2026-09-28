#include<iostream>
using namespace std;

class Student{
    protected:
    string name;
    int roll;
    int marks;

    public:

    void setData(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};


class Result: public Student{

    public:

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Percentage : "<<marks<<"%"<<endl;
    }
};

int main()
{

    Result r;
    r.setData("pooja",101,98);
    r.display();
  
    // r.name = "aashi";
}