#include<iostream>
using namespace std;
int main()
{
    int n, fac;
    cout<<"enter a no\n";
    cin>>n;
    fac=1;
    while (n>=1)
    {
       fac =  fac*n;
       n = n-1;
    }
    cout<<fac;
}