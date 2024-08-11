 //Create a C++ program that takes an integer as input and prints whether it is positive, 
//negative, or zero using if-else statements (without return, with argument).

#include<bits/stdc++.h>
using namespace std;

void classifyNumber(int num) {
    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << num << " is zero." << endl;
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    classifyNumber(number);
    
    return 0;
}
