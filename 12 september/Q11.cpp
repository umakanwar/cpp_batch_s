// User se 4 input lena hai, inka minimum nikalna hai. Agar minimum < 10 hai to ek function call karna hai aur minimum ko 5 
// se multiply karna hai aur result return karna hai. Agar result > 50 hai to factorial nikalna hai aur result return karna hai.

#include <bits/stdc++.h>
using namespace std;

int multiply(int a){
    int product=a*5;
    return product;
}

int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int main(){
int a,b,c,d;
int minimum;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
cout<<"Enter the third number: ";
cin>>c;
cout<<"Enter the fourth number: ";
cin>>d;
minimum=a;
if(b<minimum) minimum=b;
if(c<minimum) minimum=c;
if(d<minimum) minimum=d;

cout<<"Minimum= "<<minimum<<endl;

if(minimum<10){
      int product=multiply(minimum);
      cout<<"Product= "<<product;
      if(product>50){
        cout<<"Factorial= "<<fact(product);
      }
}

    return 0;
}