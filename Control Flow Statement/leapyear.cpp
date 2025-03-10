#include <iostream>
using namespace std;
int main()
{
    //Check wheather the given year is leap year or not
    int n;
    cout<<"enter the year:\n";
    cin>>n;
    if( n%4==0 || n%400==0){
        cout<<"given year is leap year:\n";
    }
    else{
        cout<<"year is not a leap year";
    }
}

