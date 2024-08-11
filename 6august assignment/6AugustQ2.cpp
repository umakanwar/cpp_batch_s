 //Create a C++ function that takes a student's percentage as an argument and returns their 
//corresponding grade (A, B, C, etc.) using if-else statements.

#include<bits/stdc++.h>
using namespace std;

char grades(float percentage){
   if(percentage>=80 && percentage<=100){
       return 'A';
   }
   else if(percentage>=50 && percentage<=79){
       return 'B';
   }
   else if(percentage<=49){
       return 'C';
   }
   return 0;
}
int main(){
    float percentage;
    cout<<"Enter the percentage: ";
    cin>>percentage;
    cout<<grades(percentage);
    return 0;
}