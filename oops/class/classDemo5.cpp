#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;
    int age;

    public:

    void scanData();
    void displayData();
};

int main()
{
    Student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].scanData();
        
    }

    for(int i=0;i<2;i++)
    {
        s[i].displayData();
    }
}

void Student::scanData()
{
    cout<<"Enter Roll Number : ";
    cin>>roll;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
}
void Student::displayData()
{
    cout<<"Roll Number : "<<roll<<"\n";
    cout<<"Name : "<<name<<"\n";
    cout<<"Age : "<<age<<"\n";
}