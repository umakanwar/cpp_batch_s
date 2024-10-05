// User se 2 input lena hai, inka product nikalna hai. Agar  product < 50 hota hai to ek
// function call karna hai, jisme product aur ek user input ko add  karna hai aur result ko
// cout<< karna hai. Agar cout<<ed value odd hai to ek aur function  call karke us value
//  ko square karna hai aur result cout<< karna hai.

#include <bits/stdc++.h>
using namespace std;

void square(int s){
    cout<<"Square of sum= "<<s*s;
}
void add(int a,int b){
    int sum=a+b;
    cout<<"Sum= "<<sum<<endl;
    if (sum%2!=0) {
        square(sum);
    }
}
int main(){
    int a,b,product;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    product=a*b;
    cout<<"Product= "<<product<<endl;
    if(product<50){
        int k;
        cout<<"Input any number:";
        cin>>k;
        add(product,k);
    }
    return 0;
}
