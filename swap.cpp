#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number\n";
    cin >> a;
    cout << "Enter second number\n";
    cin >> b;

   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<b;
}