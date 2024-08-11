//Implement a C++ function that takes a student's
// grades as arguments and returns whether the student is eligible for a scholarship using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string grades(float percentage){
   if(percentage>=80){
       return "Eligible for Scholorship";
   }
   else {
    return "Not Eligible for Scholorship.";
   }
}
int main(){
    float percentage;
    cout<<"Enter the percentage: ";
    cin>>percentage;
    cout<<grades(percentage);
    return 0;
}