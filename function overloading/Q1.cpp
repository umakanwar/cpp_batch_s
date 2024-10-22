//1. Define an overloaded function add that adds two integers, two floats, 
// and concatenates two strings. Write a program to demonstrate the working 
// of all overloaded functions.

#include <bits/stdc++.h>
using namespace std;
int add(int a,int b){
    int c=a+b;
    cout<<c<<endl;
    return 0;
}
int add(float c,float d){
    int x=c+d;
    cout<<x<<endl;
    return 0;
}
int add(string c,string d){
    string x=c+d;
    cout<<x<<endl;
    return 0;
}
int main(){
    int a=4,b=5;
    float c=3.23,d=6.78;
    string s1="hello ", s2="world";
    add(a,b);
    add(c,d);
    add(s1,s2);
}