#include<iostream>
using namespace std;

void test()
{
    cout<<"test function called"<<endl;
}

void greet()
{
    cout<<"greet function called"<<endl;
}

int main()
{
    string file = "greet";

    void(*p)();

    if(file == "test"){
        p = test;
    }
    else{
        p = greet;
    }

    p();
}