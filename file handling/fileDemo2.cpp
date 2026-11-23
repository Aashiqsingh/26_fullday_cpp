#include<iostream>
#include<fstream>

using namespace std;

class Bank{

    string name;
    int age;
    int amount;
    public:

    void new_acc();
    
};

void Bank::new_acc()
{
 
    ofstream fout;

    fout.open("bank.txt",ios::app);

    if(!fout)
    {
        cout<<"Error in file creating.."<<endl;
    }
    else{
        cout<<"File created successfully.."<<endl;


        cout<<"Enter Name :";
        getline(cin,name);
        cout<<"Enter age :";
        cin>>age;
        cout<<"Enter Balance :";
        cin>>amount;

        fout<<"Name = "<<name<<endl;
        fout<<"Age = "<<age<<endl;
        fout<<"Bal = "<<amount<<endl;
    }

    fout.close();
}

int main()
{
    Bank b1;
    b1.new_acc();
}