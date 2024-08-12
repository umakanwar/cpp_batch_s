//Write a C++ function that takes an integer as input and uses nested if-else
//statements to determine if the number is a strong number (sum of factorials of digits equals the number) or not.
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
   int fact=1;
   for(int i=1;i<=n;i++){
    fact*=i;
   }
   return fact;
}
string checkStrongNumber(int num) {
    int temp = num;
    int sum = 0;
    
    if (num < 0) {
        return "Negative numbers cannot be strong numbers.";
    }
    
   
    while (num > 0) {
        int rem= num % 10;
        sum=sum+ factorial(rem);
        num=num/ 10;
    }
    
    if (sum == temp) {
        return "Strong Number";
    } else {
        return "Not a Strong Number";
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << checkStrongNumber(num);

    return 0;
}
