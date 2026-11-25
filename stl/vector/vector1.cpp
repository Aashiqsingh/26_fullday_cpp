#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // int arr[5]; // static memory allocation
    // 
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);



    // cout<<v1.size();

    // iterate with for each 


    // for(int i=0;i<v1.size();i++)
    // {
    //     cout<<v1[i];
    // }

    // for(auto i:v1)
    // {
    //     cout<<i<<endl;
    // }

    // v1.pop_back();

    // for(auto i:v1)
    // {
    //     cout<<i<<endl;
    // }

    // cout<<v1.at(2);

    // v1.at(3) = 100;

    // for(auto i:v1)
    // {
    //     cout<<i<<endl;
    // }

    cout<<"first index value :"<<v1.front()<<endl;
    cout<<"last index value :"<<v1.back();

}