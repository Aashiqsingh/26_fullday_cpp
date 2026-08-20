#include<iostream>
using namespace std;

void swapping(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{

    int a = 10 , b = 20;

    cout<<"value of a = "<<a<<" value of b = "<<b<<endl;

    swapping(&a,&b);

    cout<<"value of a = "<<a<<" value of b = "<<b;
}