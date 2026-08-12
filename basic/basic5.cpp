#include<iostream>
using namespace std;

int main()
{
    bool isActive = false;
    int age = 16;
   


    if(isActive == true)
    {
        if(age > 18)
        {
            cout<<"You are eligible for voting"<<endl;
        }
        else{
            cout<<"You are not eligible for voting"<<endl;
        }
    }
    else{
        cout<<"DEAD"<<endl;
    }
}