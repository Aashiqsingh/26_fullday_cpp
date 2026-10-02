#include<iostream>
using namespace std;

class Payment{
    protected:
    int transactionId;
    int amount;


    public:
    Payment(int id,int amt)
    {
        transactionId=id;
        amount=amt;
    }
};

class UpiTransaction: public Payment{
    string upiId;

    public:
    UpiTransaction(int id,int amt,string upi):Payment(id,amt)
    {
        upiId=upi;
    }

    void display()
    {
        cout<<"Transaction ID: "<<transactionId<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"UPI ID: "<<upiId<<endl;
    }

};

class CardTransaction: public Payment{
    string card_type;

    public:
    CardTransaction(string type,int id,int amt):Payment(id,amt)
    {
        card_type=type;
    }

    void display(){
        cout<<"Transaction ID: "<<transactionId<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"Card Type: "<<card_type<<endl;
    }
};

class CashTransaction: public Payment{
    string counter;

    public:
    CashTransaction(int id,int amt,string c):Payment(id,amt)
    {
        counter=c;
    }

    void display(){
        cout<<"Transaction ID: "<<transactionId<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"Counter: "<<counter<<endl;
    }

};



int main()
{
    UpiTransaction upi(1,2000,"fhj112");

    upi.display();


    CardTransaction card("credit card",2,5000);
    card.display();


    CashTransaction cash(3,1000,"cash");
    cash.display();
}