// 9.Sum of Odd and Even Index Terms
// Sequence: 1, 2, 2, 4, 4, 8, 8,16,16, 32, 32 ...
// Formulation: a = 1, b = a + even index numbers
// DP Problem: Use dynamic programming to calculate the nth term where the pattern is determined by the sum of even and odd indexed numbers.

#include <bits/stdc++.h>
 using namespace std;

 int main(){
    int arr[10];
    arr[0]=1;
   int count=1;
    cout<<arr[0]<<" ";
    for(int i=1;i<10;i++){
        if(i%2!=0){
             arr[i]=pow(2,count);
             count++;
             cout<<arr[i]<<" ";
        }
       else{
        cout<<arr[i-1]<<" ";
       }
    }
return 0;
 }