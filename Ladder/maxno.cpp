#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
       cout<<"Max number = "<<a<<"\n";
    }
    else if ((b>a)&&(b>c))
    {
        cout<<"Max number = "<<b<<"\n";
    }else{
        cout<<"Max number = "<<c<<"\n";
    }
    
    
}