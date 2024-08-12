//Write a C++ function that takes three angles as input and uses nested if-else 
//statements to determine if they can form a right-angled triangle, an obtuse triangle, or an acute triangle.
#include <bits/stdc++.h>
using namespace std;

string checktriangle(int a,int b,int c){
    if(a+b+c==180){
        if(a==90 || b==90 || c==90){
            return "This is a Right-angled Triangle.";
        }
        else if(a>90 || b>90 || c>90){
            return "This is an obtuse triangle.";
        }
        else{
            return "This is an acute triangle";
        }
    }
    else{
        return "Not valid angles for triangle.";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter angle A: ";
    cin>>a;
    cout<<"Enter angle B: ";
    cin>>b;
    cout<<"Enter angle C: ";
    cin>>c;
    cout<<(checktriangle(a,b,c));
    return 0;
}