#include<iostream>
using namespace std;
int main()
{
    string ans;
    
    cout<<"Enter your name : ";
    // cin>>ans;
    getline(cin,ans);

    cout<<"Your name is : "<<ans<<endl;
}