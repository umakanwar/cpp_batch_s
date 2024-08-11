//Write a C++ function that takes a year as an argument and returns whether it is a leap year
//or not using an if-else statement and logical operators.

#include<bits/stdc++.h>
using namespace std;

string checkLeapYear(int year) {
    if (year % 4 == 0) {
                return "Leap Year";
            } else {
                return "Not a Leap Year";
            }
}      

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    cout << year << " is " << checkLeapYear(year);
    return 0;
}
