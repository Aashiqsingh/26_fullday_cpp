#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v = {87,45,67,23,49};


    sort(v.begin(),v.end());
    // sort(v.end(),v.begin()); // error
    

    for(auto x:v)
    {
        cout<<" "<<x;
    }
    
}