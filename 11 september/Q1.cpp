// 1. program to find prime or not prime if user enter 1 and if user enters 2 call a function to check whether it is even or odd.

#include<bits/stdc++.h>
using namespace std;

string isPrime(int number) {
    cout<<"Enter any number: ";
    cin>>number;
    if (number <= 1) {
        return "Neither prime nor composite."; 
    }
    if (number == 2) {
        return "Prime"; 
    }
    if (number % 2 == 0) {
        return "composite"; 
    }
    
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return "composite"; 
        }
    }
    
    return "Prime"; 
}


string evenodd(int n){
     cout<<"Enter any number: ";
     cin>>n;
    if(n%2==0){
        return "Even";
    }
    return "odd";
}
int main()
{
   int num;
   int number;
   cout<<"Enter any number:";
   cin>>num;
   if(num==1){
    cout<<(isPrime(number));
   }
   else if(num==2){
    cout<<(evenodd(number));
   }
   else{
    cout<<"invalid input";
   }
    return 0;
}