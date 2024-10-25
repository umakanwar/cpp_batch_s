// 7: Define a function compare that is overloaded to compare two integers,
// two floats, and two characters, returning the greater value in each case.
// Test the overloaded functions with appropriate examples.

#include <bits/stdc++.h>
using namespace std;
int compare(int a,int b){
    if(a>b){
        cout<<a<<endl;
    }
    else if(b>a){
        cout<<b<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int compare(float c,float d){
     if(c>d){
        cout<<c<<endl;
    }
    else if(d>c){
        cout<<d<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int compare(char c, char d){
     if(c>d){
        cout<<c<<endl;
    }
    else if(d>c){
        cout<<d<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int main(){
    int a=4,b=5;
    float c=3.23,d=6.78;
    char e='A', f='G';
    compare(a,b);
    compare(c,d);
    compare(e,f);
}