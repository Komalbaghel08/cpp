#include <iostream>
using namespace std;
int main()
{
    int n,s=0,a=0,k;
    cout<<"enter exact 3 digit number\n";
    cin>>n; //153
    k=n; //backup
    if(n<1000 && n>99)
    {
        do{
            a=n%10; //a=3,a=3,a=1
            s=s+(a*a*a); // 0+(3*3*3)=27, 27+(5*5*5)=152 , 152+(1*1*1)
            n=n/10; //15,1,0
        }while (n>0); //false
        if(k==s)
        {
           cout<<"it is armstrong number";
        }
        else{
            cout<<"not armstrong";
        }
    }
    else{
        cout<<"invalid 3 digit no";
    }
}