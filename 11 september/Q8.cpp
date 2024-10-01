// 8. User se 3 input lena hai, un calculate karna hai sum nikalna hai
//     if agar wo sum even hota hai print karna hai even, odd hota hai to print karna hai odd

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,sum;
    cout<<"Enter any 3 numbers: ";
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<"Sum="<<sum<<endl;
    if(sum%2==0){
        cout<<"Even";
    }
    else {
        cout<<"odd";
    }
    
}