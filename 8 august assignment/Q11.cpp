//Write a C++ function that takes three integers as input and uses nested if-else statements to determine 
//if they form an arithmetic progression (AP), geometric progression (GP), or neither.

#include <bits/stdc++.h>
using namespace std;

string checkProgression(int a, int b, int c) {

    if ((b - a) == (c - b)) {
        return "Arithmetic Progression";
    }
    else if (a != 0 && b != 0 && c != 0 && (b / a == c / b)) {
        return "Geometric Progression";
    }
    else {
        return "Neither";
    }
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "The numbers form " << checkProgression(a, b, c) << ".";

    return 0;
}
