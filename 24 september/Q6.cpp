// 6. there are four variables a = 1 b= 2 c= 3 c=4
//    formulate  1 2 3 4 5 7 9 12 16  and so on

 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[10];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" ";
    for(int i=4;i<10;i++){
        arr[i]=arr[i-3]+arr[i-2];
        cout<<arr[i]<<" ";
    }
   
 return 0;
 }