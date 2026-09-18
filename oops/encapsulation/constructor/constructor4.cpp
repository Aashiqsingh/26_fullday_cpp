#include<iostream>
using namespace std;


class Employee{
    // public:

    int id;
    string name;
    int salary;
    int exp;

    public:
    Employee(int id,string name,int salary,int exp){
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->exp = exp;
    }

    Employee(int age , string name);


    void calculateSalary()
    {
        int grossSalary = 0;
        if(exp > 5)
        {
            grossSalary = salary + 1000 + 2000 + 5000;
        }
        else{
            grossSalary = salary + 1000 + 2000;
        }


        cout<<"Id = "<<this->id<<endl;
        cout<<"Name = "<<this->name<<endl;
        cout<<"Salary = "<<this->salary<<endl;
        cout<<"Exp = "<<this->exp<<endl;
        cout<<"Salary after calculation = "<<grossSalary<<endl;
    }

};

Employee::Employee(int age,string name)
{
    cout<<"age = "<<age<<endl;
    cout<<"name = "<<name<<endl;
}



int main()
{
    // Employee e(1,"rudra",30000,5);
    // e.calculateSalary();

    // Employee e2(2,"rahul",40000,6);
    // e2.calculateSalary();


    Employee emp(101,"diya");
}