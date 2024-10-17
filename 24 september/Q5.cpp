// 5. 1 2 3 6 18 .....
//      a =1 b=2 c=3 d =c*b

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b=2,c=3,d;
    cout<<a<<" "<<b<<" "<<c<<" ";
        for(int i=4;i<10;i++){
        d=b*c;
        b=c;
        c=d;
        cout<<d<<" ";
    }

}