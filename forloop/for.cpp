#include <iostream>
using namespace std;
int main(){
//WAP to find out the power

int a,b,k=1;
cout<<"enter the base:";
cin>>a;
cout<<"enter the exponent: ";
cin>>b;
for(int i=1; i<=b; i++)
{
    k = a*k;
}
cout<<k;
}
