#include<iostream>
using namespace std;


class User{
    protected:
    string name;


    public:
    void getName()
    {
        cout<<"Enter name: ";
        cin>>name;
    }
};

class Customer: virtual public User{
    protected:
    string Food;
    int price;

    public:
    void getFood()
    {
        cout<<"Enter food: ";
        cin>>Food;
        cout<<"Enter price: ";
        cin>>price;
    
    }
};

class DeliveryPartner: virtual public User{
    protected:
    string address;
    

    public:
    void getAddress()
    {
        cout<<"Enter address: ";
        cin>>address;
    }
};

class FoodPartner: public Customer, public DeliveryPartner{
    public:
    void display()
    {
        cout<<"-------Food Partner-------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Food: "<<Food<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

int main()
{
    FoodPartner fp[2];
    // fp.getName();
    // fp.getFood();
    // fp.getAddress();

    // fp.display();

    for(int i=0;i<2;i++)
    {
        fp[i].getName();
        fp[i].getFood();
        fp[i].getAddress();
        fp[i].display();
    }


}