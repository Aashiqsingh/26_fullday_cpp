#include<iostream>
using namespace std;

class Employee{
    public:
    int age;
    Employee(int age)
    {
        this->age=age;
    }
    Employee(const Employee &emp)
    {
        cout<<"Employee constructor called"<<endl;
        age = emp.age;
    }

    void display()
    {
        cout<<"Age is "<<age<<endl;
    }
};

// class Manager: public Employee{
//     public:
//     Manager()
//     {
//         cout<<"Manager constructor called"<<endl;
//     }
// };


int main()
{
    Employee e1(18);
    Employee e(e1);

    e.display();
    e1.display();
}