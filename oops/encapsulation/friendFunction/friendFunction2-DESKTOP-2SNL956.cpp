#include<iostream>
using namespace std;

class Facebook{

    int likes = 314;
    int shares = 123;
    char str[100] = "meta";


    void display();
};

// void display()
// {
//         cout<<"Likes: "<<likes<<endl;
//         cout<<"Shares: "<<shares<<endl;
//         cout<<"Name: "<<str<<endl;
// }

int main()
{
    Facebook f;
    cout<<"Likes: "<<f.likes<<endl;
}