// user se 3 input lena agr unka avg 50 se zada aya then ek function call 
//karna hai us function mai 20-30 print karna hai 
// ab agar uska avg 50 se kam ata hai to fir function calling 1-20 print karna hai

#include <bits/stdc++.h>
using namespace std;

void B(){
    for(int i=1;i<=20;i++){
        cout<<i<<" ";
    }
}
void A(){
    for(int i=20;i<=30;i++){
        cout<<i<<" ";
    }
}
int main(){
    int a,b,c,avg;
    cout<<"Enter any 3 number:";
    cin>>a>>b>>c;
    int sum=a+b+c;
    avg=sum/3;
    cout<<avg<<endl;
    if(avg>50){
        A();
    }
    else if(avg<50){
        B();
    }
    return 0;
}