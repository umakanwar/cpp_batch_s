//matrix array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
 /*  arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=10;
    arr[1][1]=20;
    arr[1][2]=30;
    arr[2][0]=15;
    arr[2][1]=25;
    arr[2][2]=35;*/

for(int i=0;i<3;i++)//outer loop for row
{
    for(int j=0;j<3;j++)//inner loop for column
    {
        cout<<"Enter the element "<<i<<j<<": ";
        cin>>arr[i][j];
    }
}
for(int i=0;i<3;i++)//outer loop for row
{
    for(int j=0;j<3;j++)//inner loop for column
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}