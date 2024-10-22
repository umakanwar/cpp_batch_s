//2 : Create a function calculateArea that is overloaded to compute the area of a circle, 
// rectangle, and triangle. Use appropriate arguments to represent each shape’s dimensions

#include <bits/stdc++.h>
using namespace std;
int calculateArea(int r){
    int area=3.14*r*r;
    cout<<"Area of circle is: "<<area<<endl;
}
int calculateArea(int a,int b){
    int area=a*b;
    cout<<"Area of rectangle is: "<<area<<endl;
}
int calculateArea(float c,float d){
    int area=0.5*c*d;
    cout<<"Area of rectangle is: "<<area<<endl;
}
int main(){
    int a=2,b=3;
    float r=3.5;
    float c=5.6,d=7.66;
    calculateArea(a,b);
    calculateArea(r);
    calculateArea(c,d);

}