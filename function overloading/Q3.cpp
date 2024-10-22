//3 : Overload a max function to return the maximum of two integers, two floats,
//  and two strings (lexicographically). Demonstrate its usage in a program.

#include <bits/stdc++.h>
using namespace std;
int max(int a,int b){
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
int max(float c,float d){
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
int max(const string& c, const string& d){
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
    string s1="hello", s2="world";
    max(a,b);
    max(c,d);
    max(s1,s2);
}