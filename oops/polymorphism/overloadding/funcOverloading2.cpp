#include<iostream>
using namespace std;

class Amazon{

    public:

    void order(double orderId){
        cout<<"Amazon double orderId is "<<orderId<<endl;
    }

    void order(double orderId)
    {
        cout<<"Amazon float orderId is "<<orderId<<endl;
    }

    
};

int main()
{
    Amazon a;


    a.order(234.45f);
    a.order(345.67);
}