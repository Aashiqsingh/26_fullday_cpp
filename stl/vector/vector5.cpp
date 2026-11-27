#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    int n;
    vector<int> v;
    int SIZE = 5;

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter number :";
        cin>>n;

        v.push_back(n);
    }

    // reverse(v.begin(),v.end());
    
    // for(int x:v)
    // {
    //     cout<<x<<endl;
    // }
    
    int temp;
    for(int i=0;i<SIZE/2;i++)
    {
        temp = v[i];
        v[i] = v[SIZE-i-1];
        v[SIZE-i-1] = temp;
    }

    for(int x:v)
    {
        cout<<x<<endl;
    }

}