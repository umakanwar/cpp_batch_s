//Write a C++ function that takes two integers as input and uses nested if-else statements to 
//determine if the first is a multiple of the second, and if the second is a multiple of the first.
#include <bits/stdc++.h>
using namespace std;

string checkmultiple(int a,int b){
    if(a%b==0){
        return "first is a multiple of the second.";
    }
    else if(b%a==0){
        return "the second is a multiple of the first.";
    }
    else{
        return "none of them are multiple of each other.";
    }
}

int main(){
    int a,b;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    cout<<(checkmultiple(a,b));
}