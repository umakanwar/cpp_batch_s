//Develop a C++ function that takes an integer as an argument
// and returns whether it is divisible by both 3 and 5 using logical operators.
#include<bits/stdc++.h>
using namespace std;

string checkdivisibility(int num){
    if(num%3==0 && num%5==0){
        return "divisible by 3 and 5.";
    }
    else{
        return "not divisible by 3 and 5.";
    }
}
int main(){
    int num;
    cout<<"Enter value of num.";
    cin>>num;
    cout<<"The number is "<< checkdivisibility(num);
    return 0;
}