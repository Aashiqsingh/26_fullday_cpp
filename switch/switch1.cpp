#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;


    cout<<"\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nEnter your choice : ";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Addition = "<<a+b<<endl;
            break;
        case 2:
            cout<<"Subtraction = "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication = "<<a*b<<endl;
            break;
        case 4:
            cout<<"Division = "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}