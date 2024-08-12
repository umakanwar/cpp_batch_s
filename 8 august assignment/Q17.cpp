//Write a C++ function that takes an integer as input and uses nested 
//if-else statements to determine if the number is prime and if it is less than a specific value.
#include <bits/stdc++.h>
using namespace std;
string checkprime(int a){
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
        if(a>10){
            return "10 se bada hai par prime nhi hai.";
        }
        else{
            return "10 se chota hai or prime nhi hai.";
        }
    }
    else
    {
      if(a<10){
            return "10 se chota hai or prime hai.";
        }
        else{
            return "10 se bada hai or prime hai.";
        }  
}
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<checkprime(a);
}