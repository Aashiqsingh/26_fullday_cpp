#include<iostream>
using namespace std;

class Employee{
    int salary;
    string name;

    public:

    void getDetails(string n,int salary)
    {
        this->salary=salary;
        name=n;
    }

    void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }

};

int main()
{
    Employee e;
    e.getDetails("chensy",1000);
    e.show();
}