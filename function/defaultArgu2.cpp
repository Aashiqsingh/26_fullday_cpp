#include<iostream>
using namespace std;

int mul(int x,int y=0,int z){
    return x*y*z;
}

int main()
{
    // cout<<mul()<<endl;
    // cout<<mul(10)<<endl;
    // cout<<mul(10,20)<<endl;
    // cout<<mul(10,20,30)<<endl;



    // cout<<mul(12); // error
    cout<<mul(12,20);
}