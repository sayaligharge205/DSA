#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;  // Remove the last digit of n
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // If the number is 0, the count of digits is 1
    if (num == 0) {
        cout << "Number of digits: 1" << endl;
    } else {
        // Handle negative numbers by converting to positive
        int digitCount = countDigits(abs(num));  // abs is act like mod | num |
        cout << "Number of digits: " << digitCount << endl;
    }

    return 0;
}