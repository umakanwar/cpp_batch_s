 //1 1 2 3 5 8 13 .....
 //  a=1 b=1 c =a+b 
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int a=1,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<8;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
 return 0;
 }