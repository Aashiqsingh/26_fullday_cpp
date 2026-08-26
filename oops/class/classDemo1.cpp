#include<iostream>
using namespace std;


// class must have to start with capital letter
class Test {
    public:
    int a = 10;

    private:
        float pi = 3.14;

    public: 
        float demo()
        {
           return pi*pi; 
        }


    // bydefault class , datamembers are private
};




int main()
{
    Test t;


    // cout<<t.a;
    // cout<<t.pi;


    cout<<t.demo();
}