#include<iostream>
using namespace std;

// Types of Constructors
// 1. Default Constructor -- no argument
// 2. Parameterized Constructor -- one argument
// 3. Copy Constructor -- one argument
// 4. constructor overloading

class Bank{

    public:
    int balance;
    string name;

    Bank()
    {
          cout<<"Constructor called..."  ;    
    }

    Bank(int bal,string names)
    {
        balance = bal;
        name = names;
    }

};

int main()
{
    Bank b1;
    // Bank b2(1000,"ABC");
    // Bank b3(2000,"XYZ");


    // cout<<b2.balance<<endl;
    // cout<<b2.name<<endl;

    cout<<b1.balance<<endl;
}