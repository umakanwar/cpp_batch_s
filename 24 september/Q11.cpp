// 11. Geometric Progression
// Sequence: 1, 3, 9, 27, 81, ...
// Formulation: a = 1, b = a * 3
// Problem: Calculate the nth term where each term is triple the previous.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b;
    cout<<a<<" ";
    for(int i=1; i<=12;i++){
            b=a*3;
            a=b;
            cout<<a<<" ";
    }
    return 0;
}