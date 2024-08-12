//Write a C++ function that takes a four-digit number as input and uses nested if-else 
//statements to determine if it is a palindrome and if its digits form an arithmetic progression.
#include <bits/stdc++.h>
using namespace std;

void checkNumber(int num) {
    if (num < 1000 || num > 9999) {
        cout << "The number is not a four-digit number." << endl;
        return;
    }

    int d1 = num / 1000;           // First digit
    int d2 = (num / 100) % 10;     // Second digit
    int d3 = (num / 10) % 10;      // Third digit
    int d4 = num % 10;            // Fourth digit

    if (d1 == d4 && d2 == d3) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    
    int diff1 = d2 - d1; // Difference between first and second digits
    int diff2 = d3 - d2; // Difference between second and third digits
    int diff3 = d4 - d3; // Difference between third and fourth digits

    if (diff1 == diff2 && diff2 == diff3) {
        cout << "The digits form an arithmetic progression." << endl;
    } else {
        cout << "The digits do not form an arithmetic progression." << endl;
    }
}

int main() {
    int number;
    cout << "Enter a four-digit number: ";
    cin >> number;

    checkNumber(number);

    return 0;
}
