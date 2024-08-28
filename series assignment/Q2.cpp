// 1 2 2 4 8 32 ....
//    a=1 b=2 c =a*b

 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int a=1,b=2,c;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<8;i++){
        c=a*b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
 return 0;
 }