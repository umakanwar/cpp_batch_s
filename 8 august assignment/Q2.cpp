//Write a C++ function that takes an integer as input and uses nested if-else statements to 
//determine if the number is positive and even, positive and odd, negative and even, or negative and odd.
#include <bits/stdc++.h>
using namespace std;
string checknumber(int num){
    if(num>=0){
        if(num%2==0){
            return "positive and even";
        }
        else{
            return "positive and odd";
        }
    }
    else{
        if(num%2==0){
            return "negetive and even";
        }
        else{
            return "negetive and odd";
        }
    }
}
int main(){
    int num;
    cout<<"Eneter the number: ";
    cin>>num;
    cout<<num<<" is a "<<(checknumber(num))<<" number.";
    return 0;
}