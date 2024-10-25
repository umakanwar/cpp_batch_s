// 9: Create an overloaded findAverage function that calculates the average of
// two integers, three integers, and four integers. Write a program to test the overloaded functions.

#include <bits/stdc++.h>
using namespace std;
int findAverage(int a,int b){
    int c=a+b;
    int avg=c/2;
    cout<<avg<<endl;
    return 0;
}
int findAverage(int a,int b,int c){
    int x=a+b+c;
    int avg=x/3;
    cout<<avg<<endl;
    return 0;
}
int findAverage(int a,int b,int c,int d){
    int x=a+b+c+d;
    int avg=x/4;
    cout<<avg<<endl;
    return 0;
}
int main(){
    int a=4,b=5,c=6,d=9;
    findAverage(a,b);
    findAverage(a,c,d);
    findAverage(a,b,c,d);
}