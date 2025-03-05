#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 3 digit no\n";
    cin>>a;
    int b;
    b=a/100;
    int c;
c=a%100;
int d;
d=c/10;
int e;
e=c%10;
cout<<b+d+e;
}