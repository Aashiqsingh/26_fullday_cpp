#include<iostream>

using namespace std;

class Employees{
    private:
        int id;
        string name;
        int salary;

    public:
    void getEmployeeDetails();
    void displayEmployeeDetails();
};

void Employees::getEmployeeDetails()
{
    cout<<"Enter Employee Id: ";
    cin>>id;
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Employee Salary: ";
    cin>>salary;
}

void Employees::displayEmployeeDetails()
{
    cout<<"Employee Details: "<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}

int main()
{
    Employees e[3];
    
    for(int i=0;i<3;i++)
    {
        cout<<" Enter details of "<<i+1<<" th Employees: "<<endl;
        e[i].getEmployeeDetails();
    }

    cout<<" Display Details of Employees: "<<endl;
    for(int i=0;i<3;i++)
    {
        e[i].displayEmployeeDetails();
    }
}