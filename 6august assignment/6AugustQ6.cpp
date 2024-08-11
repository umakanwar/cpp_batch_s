//Write a C++ function that takes three numbers as arguments and returns the largest 
//one using if-else statements and relational operators.

#include<bits/stdc++.h>
using namespace std;

int findLargest(int a, int b, int c) {
    int largest;
    
    if (a >= b && a >= c) {
        return a;
    } 
    else if (b >= a && b >= c) {
        return b;
    } 
    else {
        return c;
    }
}

int main() {
    int a,b,c;
    
    cout << "Enter three numbers: ";
    cin >>a>>b>>c;
    
    int largest = findLargest(a, b, c);
    cout << "The largest number is: " << largest << endl;
    return 0;
}
