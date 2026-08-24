#include<iostream>
using namespace std;


int reverse(int n)
{
    static int rev = 0;
    if(n==0)
    {
        return rev;
    }

    int lastdigit = n%10;
    rev = rev * 10 + lastdigit;


    return reverse(n/10);



}

int main()
{
    int n = 121;
    int ans = reverse(n);
    cout<<ans;

    if(ans == n)
    {
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
}










// void test()
// {
//     static int a = 10;
//     a++;
//     cout<<a<<endl;
// }


// int main()
// {
//     test();
//     test();
// }