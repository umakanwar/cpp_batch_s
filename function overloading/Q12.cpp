// : Overload the absolute function to return the absolute value of an integer,
//  a float, and a double. Write a program to test all the overloaded versions.

#include <bits/stdc++.h>
using namespace std;
int absolute(int a){
    int c=(abs(a));
    cout<<c<<endl;
    return 0;
}
int absolute(float a){
    float c=(abs(a));
    cout<<c<<endl;
    return 0;
}
int absolute(double a){
    double c=(abs(a));
    cout<<c<<endl;
    return 0;
}
int main(){
    int a=-478;
    float c=-3.23;
    double b=-89756.7865;
    absolute(a);
    absolute(c);
    absolute(b);
}