// 10: Overload the power function to compute the power of an
//  integer raised to another integer, a float raised to an integer, and an integer raised to a float.

#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int c=pow(a,b);
    cout<<c<<endl;
    return 0;
}
int power(int a,float b){
    float x=pow(a,b);
    cout<<x<<endl;
    return 0;
}
int add(float c,int d){
    float x=pow(c,d);
    cout<<x<<endl;
    return 0;
}
int main(){
    int a=4,b=5;
    float c=3.23,d=6.78;
    add(a,b);
    add(b,c);
    add(d,a);
}