#include <iostream>
using namespace std;
int main()
{
    // prime no. or not
    //     int i, count = 0, j;
    //     cout << "Enter a number\n";
    //     cin >> i;
    //     for (j = 1; j <= 0; j++)
    //     {
    //         if (i % j == 0)
    //             count++;
    //     }
    //     if (count == 2)
    //     {
    //         cout << "Prime number\n";
    //     }
    //     else
    //     {
    //         cout << "not prime\n";
    //     }

    // 1-20 prime
    int n = 3, k = 0, flag = 0;
    for (n; n <= 20; n++)
    {
        k = n - 1;
        for (k; k > 1; k--)
        {
            if (n % k == 0)
            {
                flag = 1;      
                break;
            }
        }
        if (flag == 0){
            cout << n << "\n";
    }
    flag = 0;
}
}