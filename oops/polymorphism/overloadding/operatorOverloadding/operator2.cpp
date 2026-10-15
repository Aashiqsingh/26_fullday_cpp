#include<iostream>
using namespace std;

class Data{
    int bal;

    public:

    Data(int bal)
    {
        this->bal=bal;
    }

    // Data operator++()
    // {
    //     // ++bal;
    //     // return *this;
    //     return ++bal;
    // }

    int operator++()
    {
        // ++bal;
        // return *this;
        return ++bal;
    }

    void display()
    {
        cout<<"bal = "<<bal<<endl;
    }

};

int main()
{
    Data t1(10),t2(10);

    // t2 = ++t1;
    t2 = t1.operator++();

    // int ans = ++t1;
    // cout<<"ans = "<<ans<<endl;

    t2.display();
    // t1.display();
}



// int main()
// {
//     int a=19;
//     a++;
//     a


// }