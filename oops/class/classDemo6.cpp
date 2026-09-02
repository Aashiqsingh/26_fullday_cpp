#include<iostream>
using namespace std;

class Employee{
    private:
    string name = "priya";
    int salary;

    public:
    int age;

    string setName(string n)
    {
        // return name = n;
        name = n;
        
    }

    int setSalary(int s)
    {
        salary = s;
    }

    void displayData()
    {
        cout<<"Name : "<<name<<"\n";
        cout<<"Salary : "<<salary<<"\n";
    }

};


int main()
{
   Employee e1;
//    cout<<e1.name;
//    e1.age = 20;
//    cout<<e1.age;
    // cout<<e1.setName("john");
    e1.setName("tejas");
    e1.setSalary(1000);
    e1.displayData();
}


