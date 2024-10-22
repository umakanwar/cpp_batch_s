//4 : Implement an overloaded function print that prints an integer, 
// a float, and a string. Write a program to test it with different data types.

#include <bits/stdc++.h>
using namespace std;
int print(int a){
    cout<<a<<endl;
    return 0;
}
int print(float a){
    cout<<a<<endl;
    return 0;
}
int print(string a){
    cout<<a<<endl;
    return 0;
}
int main(){
    int a=4;
    float c=3.23;
    string s1="hello ";
    print(a);
    print(c);
    print(s1);
}