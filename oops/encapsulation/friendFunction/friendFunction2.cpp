#include<iostream>
using namespace std;

class Facebook{

    int likes = 314;
    int shares = 123;
    char str[100] = "meta";

    void friend display2(Facebook f);

    protected:
    string name = "pranshu";
    
    public:
    void display();

};

void display2(Facebook f)
{
    cout<<"Likes: "<<f.likes<<endl;
    cout<<"Shares: "<<f.shares<<endl;
    cout<<"Name: "<<f.str<<endl;
    cout<<"Name: "<<f.name<<endl;
}

void Facebook::display()
{
        cout<<"Likes: "<<likes<<endl;
        cout<<"Shares: "<<shares<<endl;
        cout<<"Name: "<<str<<endl;
        cout<<"Name: "<<name<<endl;
}

int main()
{
    Facebook f;
    // cout<<"Likes: "<<f.likes<<endl;
    display2(f);
    f.display();
}

