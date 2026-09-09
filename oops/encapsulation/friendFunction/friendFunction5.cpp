#include<iostream>
using namespace std;
class B;
class A{
    int x = 10;


    void friend friendFun(A obj1,B obj2);
};

class B{
    int y = 20;

    void friend friendFun(A obj1,B obj2);
};

void friendFun(A obj1,B obj2){
    cout<<"\nFriend function called...";
    cout<<"\nClass A = "<<obj1.x;
    cout<<"\nClass B = "<<obj2.y;
    cout<<"\nAddition = "<<obj1.x+obj2.y;
}

int main()
{
    A a;
    B b;

    friendFun(a,b);
}