#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter 1 no\n";
cin>>a;
cout<<"enter 2 no\n";
cin>>b;
cout<<"enter 3 no\n";
cin>>c;
if(a>b && a>c)
{
 cout<<a<<"is large";
}
else if(b>a && b>c)
{
    cout<<b<<"is large";
}
else if(a==b && a!=c)
{
    cout<<"larger value is a and b";
}
else if(a==b && b==c)
{
    cout<<"value of a,b,c are equal";
}
else
{
    cout<<c<<"is large";
}
}

