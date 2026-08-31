#include<iostream>
#include<stdlib.h>
using namespace std;

class Calc{
    // private:
    int a,b;

    public:

    void scanData()
    {
        cout<<"Enter Two number : ";
        cin>>a>>b;
    }

    void add()
    {
        cout<<"Addition = "<<a+b;
    }

    void sub()
    {
        cout<<"Subtraction = "<<a-b;

    }

    void mul()
    {
        cout<<"Multiplication = "<<a*b;
    }

    int div()
    {
        // cout<<"Division = "<<a/b;
        return a/b;
    }


};

int main()
{
    Calc c,c2;

    
    c2.scanData();
    cout<<"1 - Adiditon \n2 - Substraction \n3 - Multiplication \n4 - Division \n5 - Exit \n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:c2.add();
            break;
        case 2:c2.sub();
            break;
        case 3:c2.mul();
            break;
        case 4:cout<<"Division = "<<c2.div();
            break;
        case 5:exit(0);
            break;
        default:cout<<"Wrong Choice";
    }
}