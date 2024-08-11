//Write a C++ function that takes a credit 
//score as an argument and returns its category ("Excellent," "Good," "Fair," "Poor") using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string category(float score){
   if(score>=80 && score<=100){
       return "Excellent";
   }
   else if(score>=50 && score<=79){
       return "Good";
   }
   else if(score<=49 && score>=35){
       return "Fair" ;
   }
   else{
    return "Poor";
   }
   return 0;
}
int main(){
    float score;
    cout<<"Enter the score: ";
    cin>>score;
    cout<<category(score);
    return 0;
}