//Write a C++ function that takes an integer as input and uses nested if-else 
//statements to determine if the number is a perfect number (sum of divisors equals the number) or not.
#include <bits/stdc++.h>
using namespace std;
string perfectnumber(int num){
    if(num<0){
        return "Not a perfect number.";
    }
    int sum=0;
    for(int i=1;i<=num/2;++i){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        return "perfect number.";
    }
    else{
        return "not a perfect number.";
    }
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<(perfectnumber(num));
}