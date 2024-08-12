//Write a C++ function that takes two integers as input and uses nested if-else statements 
//to determine if their sum is even or odd, and if it is greater than a specific number.
#include <bits/stdc++.h>
using namespace std;
string evenodd(int sum){
    if(sum%2==0){
        if(sum>10){
        return "Even and greater then 10.";
        }
        else{
            return "Even and less then 10.";
        }
    }
    else{
        if(sum>10){
        return "Odd greater then 10.";
        }
        else{
            return "Odd and less then 10.";
        }
    }
    
}
int main(){
    int a,b,sum;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    sum=a+b;
    cout<<"The number is "<<(evenodd(sum));
}