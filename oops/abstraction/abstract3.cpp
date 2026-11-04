#include<iostream>
using namespace std;

class Bank{
    public:

    virtual void deposit(int amount);
    virtual void withdraw(int amount);
};

class SBI: public Bank{
    int bal = 5000;
    public:

    void deposit(int amount)
    {
        bal = amount + bal;
        cout<<"SBI Deposit bal = "<<bal<<endl;
    }

    void withdraw(int amount)
    {
        bal -= amount;
        cout<<"SBI Withdraw bal = "<<bal<<endl;
    }
};

class HDFC: public Bank{
    int bal = 5000;
    public:

    void deposit(int amount)
    {
        bal = amount + bal;
        cout<<"HDFC Deposit bal = "<<bal<<endl;
    }

    void withdraw(int amount)
    {
        bal -= amount;
        cout<<"HDFC Withdraw bal = "<<bal<<endl;
    }
};

int main()
{
    SBI sbi;

    sbi.deposit(5000);
    sbi.withdraw(2000);
}