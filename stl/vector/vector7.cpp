#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v = {56,98,23,45,32,56,76,34};

    // v.push_back(90);

    // v.pop_back();
    // v.insert(v.begin(),45);
    // v.insert(v.begin()+2,45);


    v.erase(v.begin()+2,v.begin()+5);

    for(auto i:v)
    {
        cout<<i<<" ";
    }

}