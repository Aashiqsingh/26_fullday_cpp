#include<iostream>
using namespace std;
void reverse(string name)
{
    string rev = "";
    for(int i=name.length()-1;i>=0;i--)
    {
        rev = rev + name[i];
    }

    cout<<rev<<endl;
}

int main()
{
    string name = "aashiq";

    reverse(name);
}