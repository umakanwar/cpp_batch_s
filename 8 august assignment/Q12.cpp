//Write a C++ function that takes a single digit as input and uses nested if-else 
//statements to determine if it is even or odd and if it is prime or not.
#include <bits/stdc++.h>
using namespace std;

string checkDigit(int digit) {
    if (digit < 0 || digit > 9) {
        return "Invalid input. Please enter a single digit.";
    }

    if (digit % 2 == 0) {
        if (digit == 2) {
            return "Even and Prime";
        } else {
            return "Even and Not Prime";
        }
    } else {
        if (digit == 3 || digit == 5 || digit == 7) {
            return "Odd and Prime";
        } else {
            return "Odd and Not Prime";
        }
    }
}

int main() {
    int digit;
    cout << "Enter a single digit: ";
    cin >> digit;

    cout << checkDigit(digit);

    return 0;
}

