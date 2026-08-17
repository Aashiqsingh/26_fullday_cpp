#include<iostream>
using namespace std;

int main()
{
    string fname = "tejas";
    string lname = "tehas";
    bool flag = true;

    if(fname.length() == lname.length())
    {
        for(int i=0;i<fname.length();i++)
        {
            if(fname[i] != lname[i])
            {
                flag = false;
                // break;   
            }
        }
    }


    if(flag == true)
    {
        cout<<"Names are same"<<endl;
    }
    else{
        cout<<"Names are not same"<<endl;
    }
}