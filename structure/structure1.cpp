#include<iostream>
using namespace std;

// struct student{
//     int roll;
//     char name[20];
//     float marks;
// };

struct students{
    int roll;
    string name;
    float marks;


    void display()
    {
        cout<<"roll : "<<roll<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};


int main()
{
    // struct students s1;
    students s1,s2,s3;

    s1.roll = 10;
    s1.name = "priya";
    s1.marks = 98.78;


    s2.roll = 20;
    s2.name = "tejas";
    s2.marks = 99.99;


    s3.roll = 30;
    s3.name = "rahul";
    s3.marks = 100.00;

    s1.display();
    s2.display();
    s3.display();

}