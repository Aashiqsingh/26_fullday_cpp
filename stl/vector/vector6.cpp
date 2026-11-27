#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v = {23,67,89,43,56};

    sort(v.rbegin(),v.rend());

    for(int x:v)
    {
        cout<<x<<endl;
    }
}