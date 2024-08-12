//Write a C++ function that takes an integer as input and uses nested 
//if-else statements to determine if the number is within a specific range (e.g., 1-100) and if it is divisible by 7.
#include <bits/stdc++.h>
using namespace std;
string checknumber(int a){
    if(a>=1 && a<=100){
        if(a%7==0){
            return "The number is between 1-100 and is divisible by 7.";
        }
        else{
            return "The number is between 1-100 but not divisible by 7.";
        }
    }
    else{
        if(a%7==0){
            return "The number is not between 1-100 but is divisible by 7.";
        }
        else{
            return "The number is not between 1-100 and not divisible by 7.";
        }
    }
}
int main(){
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<(checknumber(a));
    return 0;
}