//Q1 Write a C++ function that takes an integer as an argument and uses an if-else statement to 
//determine whether the number is even or odd, then returns the result.

#include<bits/stdc++.h>
using namespace std;

string evenodd(int n){
    
    if(n%2==0){
        return "Even";
    }
    return "odd";
}
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<evenodd(n);
    return 0;
}
