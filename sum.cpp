#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Check if the number is a three-digit number
    if (number < 100 || number > 999) {
        cout << "Please enter a valid three-digit number." << endl;
        return 1;
    }

    int original = number;
    int sumOfCubes = 0;

    while (number > 0) {
        int digit = number % 10;
        sumOfCubes += digit * digit * digit;
        number /= 10;
    }

    cout << "Sum of cubes of digits of " << original << " is: " << sumOfCubes << endl;

    return 0;
}

