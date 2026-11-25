#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    vector<int> v;

    int no;

    while(true)
    {

        cout<<"Enter number :";
        cin>>no;

        v.push_back(no);

        int choice;
        cout<<"Do you want add number press any keys and if press 0 for break;";
        cin>>choice;

        if(choice == 0)
        {
            break;
        }
    }

    for(auto i:v)
    {
        cout<<i;
    }

}