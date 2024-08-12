//Write a C++ function that takes the year as input and uses nested if-else 
//statements to determine if it is a century year (ends with 00) and if it is a leap year.
#include <bits/stdc++.h>
using namespace std;

string check_year(int year){
    if(year%100==0){
        if(year%4==0){
            return "Both century and leap year.";
        }
    }
    else{
        if(year%4==0){
            return "Not a century year but aleap year.";
        }
        else{
            return "Neither a century year nor a leap year.";
        }
    }
}
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    cout<<(check_year(year));
}