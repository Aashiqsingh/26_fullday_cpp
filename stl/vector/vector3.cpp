#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> txt;

    txt.push_back("pooja");
    txt.push_back("krinal");
    txt.push_back("om");
    txt.push_back("tejas");

    // for(auto i:txt)
    // {
    //     cout<<i<<endl;
    // }

    // cout<<txt.size();
    
    txt.insert(txt.begin()+2,"pranshu");

    for(auto i:txt)
    {
        cout<<i<<endl;
    }
}