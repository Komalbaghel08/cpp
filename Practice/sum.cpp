#include<iostream>
using namespace std;
int main()
{
    // int n,sum=0;
    // cout<<"enter a no\n";
    // cin>>n;
    // while (n>0)
    // {
    //    sum = sum + n % 10;
    //    n = n/10;
    // }
    // cout<<"sum of digit " <<sum<<"\n";


    //REVERSE OF ANY NO.
    // int n, r=0;
    // cout<<"enter a no.\n";
    // cin>>n;
    // while (n>0)
    // {
    //    r = r*10 + n%10;
    //    n = n/10;
    // }
    // cout<<r<<"\n";

    //PRODUCT OF ANY NO.
    int n, pro=1;
    cout<<"enter a no.\n";
    cin>>n;
    while (n>0)
    {
        pro = pro*n%10;
        n=n/10;
    }
   cout<<pro;
    
}