#include<iostream>
using namespace std;


void add(int a=0,int b=0 , int c=0){
    cout<<"sum = "<<a+b+c;
}

int main()
{

    // add(10,20);
    // add(10);// error
    // add(10,20,30); // error
    // add();

    // add(10);
    // add(10,20);

    // add(10,20);
    // add();
    add();
    add(12);
    add(10,20);
    add(10,20,30);
}