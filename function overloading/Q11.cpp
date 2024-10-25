// 11 : Write a program to overload the reverse function, which reverses an integer,
// a float, and a string. Demonstrate how function overloading works with each data type.

#include <bits/stdc++.h>
using namespace std;
int reverse(int a){
    int sum=0;
    while(a>0){
        int r=a%10
        sum=sum*10+r;
        a/=10;
    }
    cout<<sum<<endl;
    return 0;
}
// int reverse(float c,float d){
//     int x=c+d;
    // cout<<x<<endl
//     return 0;
// }
// int reverse(string a){
//     string reversed = string(a.rbegin(), a.rend());
//     cout<<reversed;
//     return 0;
// }
int main(){
    int a=478;
    float c=3.23;
    // string s1="helloworld";
    reverse(a);
    // reverse(c);
    // reverse(s1);
}