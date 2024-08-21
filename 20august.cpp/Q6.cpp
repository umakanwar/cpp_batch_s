//{1,2,3,5} find missing elements
#include <bits/stdc++.h>
using namespace std;
int main(){
int array[]={1,2,3,5},n;
n=array[3];
int sum=n*(n+1)/2;
int sumarray=0;
for(int i=0;i<4;i++){
    sumarray=sumarray+array[i];   
}
int missingelement=sum-sumarray;
cout<<"Missing element= "<<missingelement;
return 0;
}