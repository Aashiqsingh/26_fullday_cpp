#include<iostream>
using namespace std;

// call by value
// call by reference 

int add(int *a,int *b){
    
    return *a+*b;
}

int main()
{
    int x = 20;
    int y = 30;

    cout<<"Addition = "<<add(&x,&y);
    // insertion 
}