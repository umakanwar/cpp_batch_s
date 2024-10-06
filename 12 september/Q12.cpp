// User se 3 input lena hai, unka sum nikalna hai. Agar sum > 80 hai to ek function
// call karna hai, jisme 2 input lena hai aur unka division
//  result return karna hai. Agar result integer hai to us integer ka reverse return karna hai.

#include <bits/stdc++.h>
using namespace std;

int reverse(int num){
    int sum=0;
        while(num>0){
            int r=num%10;
            sum=sum*10+r;
            num=num/10;
        }
        return sum;
}
int division(int a,int b){
    int divide=a/b;
    return divide;
    
}
int main()
{
    int a, b, c;
    int sum;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    sum = a + b + c;
    if(sum>80){
        cout<<"Enter any 2 numbers: ";
        cin>>a>>b;
        int divide=division(a,b);
        cout<<"Division= "<<divide<<endl;
        if(divide>0){
            int rev=reverse(divide);
            cout<<"reverse= "<<rev;
        }
    }
    return 0;
}