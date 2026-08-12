#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b=3.14;
    char ch = 'a';
    double d = 3.14;
    bool isActive = false;
    string name = "r";
    char ch[] = "ram";


    // cout<<"value of a = "<<a<<endl;
    // cout<<"value of b = "<<b<<endl;
    // cout<<"value of ch = "<<ch<<endl;
    // cout<<"value of d = "<<d<<endl;
    // cout<<"value of isActive = "<<isActive<<endl;
    // cout<<"value of name = "<<name<<endl;

    cout<<"size of int = "<<sizeof(a)<<endl;
    cout<<"size of float = "<<sizeof(b)<<endl;
    cout<<"size of char = "<<sizeof(ch)<<endl;
    cout<<"size of double = "<<sizeof(d)<<endl;
    cout<<"size of bool = "<<sizeof(isActive)<<endl;
    cout<<"size of string = "<<sizeof(name)<<endl;
}