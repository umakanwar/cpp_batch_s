//8 : Write a program that demonstrates function overloading by creating overloaded 
// functions for subtract that subtract two integers, two floats, and two long integers.

#include <bits/stdc++.h>
using namespace std;
int Subtract(int a,int b){
    int c=a-b;
    cout<<c<<endl;
    return 0;
}
int Subtract(float c,float d){
    int x=c-d;
    cout<<x<<endl;
    return 0;
}
int Subtract(long c,long d){
    long x=c-d;
    cout<<x<<endl;
    return 0;
}
int main(){
    int a=4,b=5;
    float c=6.78,d=3.678;
    long e=8907656, f=365829;
    Subtract(a,b);
    Subtract(c,d);
    Subtract(e,f);
}