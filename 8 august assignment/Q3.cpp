//Write a C++ function that takes a float as input and uses nested if-else statements to determine if 
//the number is positive, negative, or zero, and whether it is a whole number or a fraction.
#include <bits/stdc++.h>
using namespace std;

string checknumber(float num){
    if(num==0){
        return "Zero";
    }
    if(ceil(num)==floor(num)){
        if(num>0){
            return "Positive whole number.";
        }
        else{
            return "Negetive whole number.";
        }
    }
    else{
       if(num>0){
            return "Positive fraction.";
        }
        else{
            return "Negetive fraction.";
        }  
    }
}

int main(){
    float num;
    cout<<"Enter a float number: ";
    cin>>num;
    cout<<"The number is "<<(checknumber(num));
    return 0;
}