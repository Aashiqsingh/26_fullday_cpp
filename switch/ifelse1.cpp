#include<iostream>
using namespace std;

int main()
{

    bool isMarried = false;
    bool isActive = true;
    bool isChild = true;


    if(isActive)
    {
        if(isMarried)
        {

            cout<<"You are married and active"<<endl;
            if(isChild){
                cout<<"You are married and active and child"<<endl;
            }   
            else{
                cout<<"You are married and active but not child"<<endl;
            }
        }
        else{
            cout<<"You are active but not married"<<endl;
        }
    }
    else{
        cout<<"You are not active"<<endl;
    }


}