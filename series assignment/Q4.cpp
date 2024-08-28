//  1 2 4 8 32 ....
//      a=1 b=2 c= power of 2

 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        arr[i]=1<<i;
        cout<<arr[i]<<" ";
    }
 return 0;
 }