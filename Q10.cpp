// user se 3 input lena hai, unka sum nikalna hai ab
// agar wo sum even hota hai then last 3 input mai se jo max tha uska answer batana hai
// Aur agar sum odd hai fir un tino number ka product(multiplication) nikalna hai

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, sum;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    sum=a+b+c;
    if(sum%2==0){
        if(a>b && a>c){
            cout<<"The sum is even and the largest number is: "<<a;
        }
        else if(b>a && b>c){
            cout<<"The sum is even and the largest number is: "<<b;
        }
        else{
            cout<<"The sum is even and the largest number is: "<<c;
        }
    }
    else{
        int product=a*b*c;
        cout<<product;
    }
}