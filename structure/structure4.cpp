#include<iostream>
using namespace std;


struct products{
    private:
        int id;
        string pname;
        int price;
    public:
    void inputdetails()
    {
        cout<<"Enter product Id = ";
        cin>>id;
        cout<<"Enter product name = ";
        cin>>pname;
        cout<<"Enter product price = ";
        cin>>price;
    }


    void display()
    {
        cout<<"Product Id = "<<id<<endl;
        cout<<"Product name = "<<pname<<endl;
        cout<<"Product price = "<<price<<endl;
    }
};



int main()
{
    products p1;

    p1.inputdetails();
    p1.display();


    

}