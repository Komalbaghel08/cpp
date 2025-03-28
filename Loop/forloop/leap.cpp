#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year\n";
    cin >> year;
    for (int i = year; i <= year; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            {
                cout << i << "is leap year" << "\n";
            }
            else
            {
                cout << i << "is not leap year" << "\n";
            }
        }
    }
}