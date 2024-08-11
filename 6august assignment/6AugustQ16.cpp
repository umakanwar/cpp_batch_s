   //Create a C++ function that takes a student's score as an argument and returns whether the score is 
//valid (between 0 and 100) and whether the student passed (score >= 50) or failed using logical operators.

#include<bits/stdc++.h>
using namespace std;

string result(int score){
   if(score>=50){
       return "pass";
   }
   else{
    return "fail";
   }
}
int main(){
 int score;
    cout<<"Enter the score: ";
    cin>>score;
    cout<<result(score);
    return 0;
}