//bubble sort
#include <bits/stdc++.h>
using namespace std;
int main(){
int array[]={5,1,4,2,8};
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(array[i]>array[j]){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}
for(int i=0;i<5;i++){
cout<<array[i]<<endl;
}
return 0;
}