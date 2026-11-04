#include<iostream>
using namespace std;

class Student{
    public:
    
    // Student()
    // {
    //     cout<<"constructor called"<<endl;
    // }

    ~Student()
    {
        cout<<"destructor called"<<endl;
    }

    void display()
    {
        cout<<"display function called"<<endl;
    }

};

int main()
{
    Student s;
    s.display();
    cout<<"main function ended"<<endl;
}