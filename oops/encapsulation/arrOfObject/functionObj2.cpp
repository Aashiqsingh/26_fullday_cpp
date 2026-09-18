#include<iostream>
using namespace std;

class Area{
    
    public:
    int length;
    int width;

    void getSquareArea(Area a)
    {
        cout<<"Area of square = "<<a.length*a.length<<endl;
    }

    void getRectArea(Area a)
    {
        cout<<"Area of rectangle = "<<a.length*a.width<<endl;
    }
};

int main()
{
    Area a1;
    a1.length = 10;
    a1.width = 20;

    a1.getSquareArea(a1);
    a1.getRectArea(a1);

    Area a2;
    a2.length = 10;
    a2.width = 5;
    a2.getSquareArea(a2);
    a2.getRectArea(a2);

}