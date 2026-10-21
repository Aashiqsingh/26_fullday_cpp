#include<iostream>
using namespace std;

class Payment{
    public:

    virtual void pay()
    {
        cout<<"Payment function"<<endl;
    }
};

class Cash:public Payment{
    public:

    void pay()
    {
        cout<<"Cash function"<<endl;
    }
};

class Cheque:public Payment{
    public:

    void pay()
    {
        cout<<"Cheque function"<<endl;
    }
};

class CreditCard:public Payment{
    public:

    void pay()
    {
        cout<<"Credit card function"<<endl;
    }
};


int main()
{
    Cash c;

    Payment *p;
    p = &c;
    p->pay();

    Cheque c1;
    p = &c1;
    p->pay();
    
}