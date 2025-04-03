#include <iostream>
using namespace std;
int main(){
int otp;
cout<<"Enter otp";
cin>>otp;
if(otp>=1000 && otp<=9999)
{
    if(otp==1112)
    {
        cout<<"otp valid";
    }
    else{
        cout<<"otp invalid";
    }
}
else{
    cout<<"wrong";
}
}
