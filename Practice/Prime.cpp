#include<iostream>
using namespace std;
int main()
{
    int i, count, j;
    cout<<"enter a value of i\n";
    cin>>i;
    count=0;
    j=1;
    while (j<=i)
    {
        if (i%j== 0)
       count++;
       j++;
    }
    if(count==2)
{
    cout<<"The no. is prime\n";
}else{
    cout<<"not prime";
}

}