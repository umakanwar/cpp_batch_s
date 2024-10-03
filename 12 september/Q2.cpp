// 3 input lena hai usme se jo max hoga agr wo b hota hai to 
// ek function call karna hai aur us function mai 5 ka factorial print karwana ,
//  max agar c hota hai to fir c powerof2 ha ya nahi check
//   karna hai, agr max a hota hai to fir apna nam print karna hai.

#include <bits/stdc++.h>
using namespace std;

int fact(){
    int fact=1;
    for (int i=1;i<=5;i++){
        fact=fact*i;
    }
    return fact;
}
int powerof2(){
    int n;
    cout<<"Enter number to check if it's power of 2:";
    cin>>n;
    while(n%2==0)
    {
        n/=2;    
    }
    if(n==1)
    {
        cout<<"Power of 2 hai\n";
    }
    else
    {
        cout<<"Power of 2 Nahi hai";
    }
}

int name(){
    cout<<"Uma";
}
   
int main(){
    int a,b,c;
    cout<<"Enter any 3 number:";
    cin>>a>>b>>c;
    if(b>a && b>c){
        cout<<"Factorial of 5 is "<<fact();
    }
    else if(c>a && c>b){
        powerof2();
    }
    else{
        name();
    }
    return 0;
}