#include<iostream>
using namespace std;


int *test()
{
    int avlbal = 100;
    int *p = &avlbal;



    return p;
    
}

int main()
{
    int *ans; 
    ans = test();
    cout<<"value of avlbal = "<<*ans<<endl;
    cout<<"address of avlbal = "<<ans;
}