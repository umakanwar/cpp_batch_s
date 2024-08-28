// 1 2 3 6 11 20 ....
//      a=1 b=2 c=3  d =a+b+c

 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int a=1,b=2,c=3,d;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=3;i<8;i++){
        d=a+b+c;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
    }
 return 0;
 }