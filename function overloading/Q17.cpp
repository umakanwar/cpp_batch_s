//17 : Write a program to overload the printSquare
//  function that prints the square of an integer, a float, and a double value.

#include <bits/stdc++.h>
using namespace std;
int 
square(int a){
    int c=a*a;
    cout<<c<<endl;
    return 0;
}
int 
square(float a){
    float c=a*a;
    cout<<c<<endl;
    return 0;
}
int 
square(double a){
    double c=a*a;
    cout<<c<<endl;
    return 0;
}
int main(){
    int a=478;
    float c=3.23;
    double b=56.787;
    square(a);
    square(c);
    square(b);
}