//  4 input lena hai unka sum karna hai(input -ve bhi ho sakte hai ) agar 
//  unka sum -ve hi ata hai to fir reverse of 2nd number karna hai
//  agr wo 2nd number -ve hota hai to use positive mai 
//  karke uska reverse nikalna hai (hint: abs(b)) agr sum +ve hota hai 
//  to fir 4 ka factorial nikalna hai agar sum 0 hota hai to fir 4 input
//  ka product nikalna hai


#include <bits/stdc++.h>
using namespace std;
int reverse(){
    int b,rem,sum=0;
    cout<<"Enter the second number:";
    cin>>b;
    b=(abs(b));
    while(b>0){
         rem=b%10;
         sum=sum*10+rem;
        b=b/10;
    }
    return sum;
}

int fact(){
    int fact=1;
    for (int i=1;i<=4;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a,b,c,d,sum;
    cout<<"Enter any 4 number:";
    cin>>a>>b>>c>>d;
    sum=a+b+c+d;
    if(sum<0){
       cout<< reverse();
    }
    else if(sum>0){
        cout<<"The factorial of 4 is"<<fact();
    }
    else{
        int product=a*b*c*d;
        cout<<product;
    }
}