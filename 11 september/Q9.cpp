// user se 4 input lena hai un ka product nikalna hai 
// agar wo product even hota hai to fir ek function call
// karna hai aur usme A is printed likhna hai. agar wo
// product odd hota hai to fir ek dusra function call hoga aur usme B is printed.

#include <bits/stdc++.h>
using namespace std;

void A(){
    cout<<"A is printed.";
}
string B(){
    return "B is printe";
}
int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers:";
    cin>>a>>b>>c>>d;
    int product=a*b*c*d;
    if(product%2==0){
        A();
    }
    else{
        cout<<B();
    }
    return 0;
}