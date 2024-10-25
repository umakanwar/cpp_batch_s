//6 : Overload a function swapValues to swap two integers,
//  two floats, and two characters. Write a program that 
//  demonstrates swapping of these data types.

#include <bits/stdc++.h>
using namespace std;
int swapValues(int a,int b){
    int c=a;
    a=b;
    b=c;
    cout<<"swapped integers are: "<<a<<" "<<b<<endl;
    return 0;
}
int swapValues(float a,float b){
   float c=a;
    a=b;
    b=c;
    cout<<"swapped floats are: "<<a<<" "<<b<<endl;
    return 0;
}
int swapValues(char a,char b){
   char c=a;
    a=b;
    b=c;
    cout<<"swapped characters are: "<<a<<" "<<b<<endl;
    return 0;
}
int main(){
    int a=4,b=5;
    cout<<"Original integers are: "<<a<<" "<<b<<endl;
    swapValues(a,b);
    float c=3.23,d=6.78;
    cout<<"Original floats are: "<<c<<" "<<d<<endl;
    swapValues(c,d);
    char e='S', f='U';
    cout<<"Original characters are: "<<e<<" "<<f<<endl;
    swapValues(e,f);
}