#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    list.push_front(5);


    // list.front() = 10;

    list.insert(list.begin(),100);

    // cout<<list.front();

    // cout<<list.back();

    // list.pop_back();
    // list.pop_front();

    for(int i:list)
    {
        cout<<i<<" ";
    }
}