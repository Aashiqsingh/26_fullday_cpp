#include<iostream>
using namespace std;

int main()
{
    string para = "Pranshu moradiya is a good boy";
    int count = 1;

    for(int i=0;i<para.length();i++)
    {
        if(para[i]==' ')
        {
            count++;
        }
    }
    cout<<"count of words = "<<count<<endl;

}