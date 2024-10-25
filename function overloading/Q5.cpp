//5 : Create an overloaded function multiply that multiplies two integers,
//  two floats, and an integer with a float. Write a test program to verify 
//  the result of all overloaded functions.

#include <bits/stdc++.h>
using namespace std;
int Multiply(int a,int b){
    int c=a*b;
    cout<<c<<endl;
    return 0;
}
int Multiply(float c,float d){
    int x=c*d;
    cout<<x<<endl;
    return 0;
}
int Multiply(int c,float d){
    float e=c*d;
    cout<<e<<endl;
    return 0;
}
int main(){
    int a=4,b=5;
    float c=3.23,d=6.78;
    Multiply(a,b);
    Multiply(c,d);
    Multiply(a,d);
}