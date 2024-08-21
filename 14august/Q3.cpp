//min
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int min=arr[6];
    for(int i=6;i>=0;i--){
        if(min>arr[i]){
        min=arr[i];
        }
    }
    cout<<min;

    return 0;
}