#include<iostream>
using namespace std;

void print(int *a,int *b){

    *a = 200;
    *b = 300;

    
}


int main()
{
    int x = 20;
    int y = 30;
    cout<<"value of x = "<<x<<" value of y = "<<y<<endl;

    print(&x,&y);

    cout<<"value of x = "<<x<<" value of y = "<<y;
}