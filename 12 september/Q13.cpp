// User se 2 input lena hai, inka difference nikalna hai. Agar difference < 0 hai to 
// absolute value return karna hai. Agar difference even hai to ek function 
// call karna hai aur us value ka cube return karna hai.
#include <bits/stdc++.h>
using namespace std;

int findcube(int k){
    return k*k*k;
}
int abosolute(int k){
    return (abs(k));
}
int main()
{
    int a, b;
    int differ;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    differ=a-b;
    if(differ<0){
        int abs=abosolute(differ);
        cout<<"Absolute= "<<abs<<endl;
    }
    if(differ%2==0){
        int cube=findcube(differ);
        cout<<"Cube= "<<cube;
    }
return 0;
} 