#include<iostream>
using namespace std;

class User{
    public:


    User(int age){
        cout<<"\nUser side age "<<age<<endl;
    }
};

class Student: public User{
    public:
    Student(int age):User(age){
    
        cout<<"\nStudent side constructor called"<<age<<endl;
    }
};

int main()
{
    Student s(30);
}