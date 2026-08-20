#include<iostream>
using namespace std;

void print()
{
    static int a = 10;
    a++;
    cout<<"value of a = "<<a;
}

int main()
{

    print();
    print();
}