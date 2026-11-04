#include<iostream>
using namespace std;

class Payment{
    public:

    virtual void pay()=0;
};

class UPI: public Payment{
    public:
    void pay()
    {
        cout<<"Payment done by UPI.."<<endl;
    }
};

class Credit:public Payment{
    public:

    void pay()
    {
        cout<<"Payment done by Credit"<<endl;
    }
};

class Cash:public Payment{
    public:

    void pay()
    {
        cout<<"Payment done by Cash."<<endl;
    }
};

int main()
{
    // Cash c;
    // c.pay();

    Payment *p;
    Cash c;

    Credit cr;

    p = &c;
    p->pay();


    p = &cr;
    p->pay();
}
