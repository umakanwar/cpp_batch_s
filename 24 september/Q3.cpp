// 3. 1 2 3 6 11 20 ....
//      a=1 b=2 c=3  d =a+b+c

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b=2,c=3,d;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=4;i<10;i++){
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        cout<<d<<" ";
    }
}