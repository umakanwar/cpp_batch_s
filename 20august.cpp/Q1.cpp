//Find the duplicate value in an array 
#include <bits/stdc++.h>
using namespace std;


int main() {
   int arr[5],number,count=0;
   cout<<"Enter the element: ";
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
  cout<<"Find element: ";
  cin>>number;

  for(int j=0;j<5;j++)
    if(number==arr[j])
    count++;

    cout<<"Number of times the number is repeated "<<count;
    return 0;
}