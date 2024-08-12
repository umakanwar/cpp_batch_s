//Write a C++ function that takes an integer as input and uses 
//nested if-else statements to determine if the number is a power of 2 or not.
#include <bits/stdc++.h>
using namespace std;

string checkPowerOfTwo(int num) {
    if (num > 0) {
        while (num > 1) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                return "Not a power of 2.";
            }
        }
        if (num == 1) {
            return "A power of 2.";
        }
    }
    else{
    return "Not a power of 2.";
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << checkPowerOfTwo(num) ;

    return 0;
}
