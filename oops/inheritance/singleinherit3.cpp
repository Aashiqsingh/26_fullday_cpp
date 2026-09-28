#include<iostream>
#include<stdio.h>
using namespace std;

class Book{
    protected:
    // private:
    string Author;
    string title;
    int year;

    public:
    void getData()
    {
        cout<<"Enter Author : ";
        cin>>Author;
        fflush(stdin);
        cout<<"Enter Title : ";
        // cin>>title;
        getline(cin,title);
        cout<<"Enter Year : ";
        cin>>year;
    }
};

class Ebook: public Book{
    int size;

    public:
    void getSize()
    {
        getData();
        cout<<"Enter Size : ";
        cin>>size;
    }

    void display()
    {
        cout<<"Author : "<<Author<<endl;
        cout<<"Title : "<<title<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Size : "<<size<<endl;
    }
};

int main()
{
    Ebook e;
    e.getSize();
    e.display();


    Book b;
    
}