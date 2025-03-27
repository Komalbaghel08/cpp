#include <iostream>
using namespace std;
int main()
{
    int n, r = 0, k;
    cout << "Enter a number/n";
    cin >> n;
    k=n;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if (r == k)
    {
        cout << "n is palindrome/n";
    }
    else
    {
        cout << "n is not palindrome/n";
    }
}