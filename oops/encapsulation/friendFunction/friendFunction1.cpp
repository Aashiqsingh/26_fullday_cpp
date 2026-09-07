#include<iostream>
using namespace std;
// 

class Abc
{
    private:
        int a=10;


    // void display()
    // {
    //     cout<<"Display function called"<<endl;
    // }  
    
    // friend void display();
    public:
    void friend display(Abc);
    
};

void display(Abc rrr)
{
    cout<<"value of a = "<<rrr.a<<endl;
}


int main()
{
    Abc f;

    display(f);
}