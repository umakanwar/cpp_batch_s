//Write a C++ function that takes the lengths of three sides of a triangle as input and uses nested if-else statements 
//to determine if the triangle is a right triangle, isosceles right triangle, or neither.
#include <bits/stdc++.h>
using namespace std;
string checktriangle(int a,int b,int c){
    if(a+b<=c || b+c<=a || c+a<=b){
        return "Invalid sides.";
    }
    else if(a*a+b*b==(c*c)){
        if(a==b || b==c || c==a){
            return "Isosceles Right Triangle.";
        }
        else{
            return "Right triangle.";
        }
    }
    return "Niether.";
}
int main(){
    int a,b,c;
    cout<<"Side 1: ";
    cin>>a;
    cout<<"Side 2: ";
    cin>>b;
    cout<<"Side 3: ";
    cin>>c;
    cout<<"The triangle is "<<(checktriangle(a,b,c));
}