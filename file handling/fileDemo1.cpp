#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    // ofstream is used for write 
    // ifstream is used for read the data



    // ofstream fout;
    // fout.open("demo.txt");
    // fout<<"Hello good afternoon..";
    // fout.close();

    // fout.open("demo.txt",ios::app);
    // fout<<"Hello good Evening.."<<endl;
    // fout.close();

    string data;

    ifstream fin;
    fin.open("demo.txt",ios::in);

    getline(fin,data);
    cout<<data;

    fin.close();
    
}