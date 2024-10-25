//16 : Define an overloaded function minValue that returns the minimum of two integers, two floats,
//  and two double values. Test the program with different inputs.

#include <bits/stdc++.h>
using namespace std;
int minValue(int a,int b){
     if(a<b){
        cout<<a<<endl;
    }
    else if(b<a){
        cout<<b<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int minValue(float a,float b){
     if(a<b){
        cout<<a<<endl;
    }
    else if(b<a){
        cout<<b<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int minValue(double a, double b){
     if(a<b){
        cout<<a<<endl;
    }
    else if(b<a){
        cout<<b<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}
int main(){
    int a=4,b=5;
    float c=3.23,d=6.78;
    double e=908.789,f=765.345;
    minValue(a,b);
    minValue(c,d);
    minValue(e,f);
}