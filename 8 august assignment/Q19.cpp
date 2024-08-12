//Write a C++ function that takes an integer as input and uses nested 
//if-else statements to determine if the number is divisible by 4, 5, 
//or 6, and if it is also a prime number.
#include <bits/stdc++.h>
using namespace std;
string checkdivisibility_orprime(int a){
    int flag=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0){
             flag=1;
             break;
        }
    }
    if(flag==1)
    {
        if(a%4==0 || a%5==0 || a%6==0){
            return "Not Prime and divisible by 4,5 or 6.";
        }
    }
    else if(flag==0)
    {
        if(a%4==0 || a%5==0 || a%6==0){
            return "Prime and divisible by 4,5 or 6.";
        }
    }
   else{
    return "Not divisible by 4,5 or 6.";
   }

}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<checkdivisibility_orprime(a);
}