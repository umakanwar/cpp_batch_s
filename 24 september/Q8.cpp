// 8.Modified Tribonacci Sequence
// Sequence: 1, 1, 2, 4, 7, 13, ...
// Formulation: a = 1, b = 1, c = 2, d = a + b + c
// DP Problem: Solve for the nth term where each term is the sum of the previous three terms.

#include <bits/stdc++.h>
 using namespace std;

 int main(){
    int arr[10];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
    for(int i=3;i<10;i++){
        arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
        cout<<arr[i]<<" ";
    }
return 0;
 }