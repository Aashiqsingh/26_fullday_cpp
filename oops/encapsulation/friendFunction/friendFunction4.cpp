#include<iostream>
using namespace std;

class Telephone{

    int number = 63547175;

    public:
    void innerFun()
    {
        cout<<"Inner member function called...";
        cout<<"\n"<<number;
    }

    void outerFun();

    friend void iamFriend(Telephone obj);

};

void Telephone::outerFun()
{
    cout<<"\nOuter member function called...";
    cout<<"\n"<<number;
}

// no need to declare resolution operator
void iamFriend(Telephone obj)
{
    cout<<"\nFriend function called...";
    cout<<"\n"<<obj.number;
}


int main()
{
    Telephone t;
    t.innerFun();
    t.outerFun();
    iamFriend(t);
}