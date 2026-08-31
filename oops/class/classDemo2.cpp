#include<iostream>
using namespace std;

class Rectangle{

    float length;
    float width;

    void input()
    {
        cout<<"Enter length =";
        cin>>length;
        cout<<"Enter width =";
        cin>>width;
    }

    int area()
    {
        return length*width;
    }

    int perimeter()
    {
        return 2*(length+width);
    }

    void display()
    {
        
    }
};