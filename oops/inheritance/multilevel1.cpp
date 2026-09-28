#include<iostream>
using namespace std;

class Student{
    protected:
    int rollno;
    string name;

    public:
    void getData()
    {
        cout<<"Enter Roll No : ";
        cin>>rollno;
        cout<<"Enter Name : ";
        cin>>name;
    }
};

class Exam : public Student{
    protected:
    int marks1;
    int marks2;

    public:
    void getMarks()
    {
        cout<<"Enter Marks1 : ";
        cin>>marks1;
        cout<<"Enter Marks2 : ";
        cin>>marks2;
    }
};

class Result : public Exam{
    // int result;
    int result;
    public:
    // int result = marks1 + marks2;
    void getResult()
    {
         result = marks1 + marks2;
    }
    void displayResult()
    {
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks1 : "<<marks1<<endl;
        cout<<"Marks2 : "<<marks2<<endl;
        cout<<"Result : "<<result<<endl;
    }
};

int main()
{
    Result r;
    r.getData();
    r.getMarks();
    r.getResult();
    r.displayResult();
}