#include <iostream>
using namespace std;
int main(){
int number ,i=1;
cout<<"enter a number:";
cin>>number;
do{
        if(number<=10)
    cout << number << "*" << i << "=" << number * i<<endl;

i++;
}while(i<=10);

}
