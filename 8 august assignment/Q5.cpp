//Write a C++ function that takes two integers as input and uses nested if-else 
//statements to determine if both numbers are positive, both are negative, 
//or one is positive and the other is negative.
#include <bits/stdc++.h>
using namespace std;
string checknumber(int a,int b){
    if(a>=0){
            if(b>=0){
                return "Both numbers are positive.";
            }
            else{
                return "First number is positive but second number is negetive.";
                }
    }
    else{
        if(b>=0){
            return "First number is negetive but second number is positive.";
        }
        else{
            return "Both numbers are negetive.";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<(checknumber(a,b));
    return 0;
}