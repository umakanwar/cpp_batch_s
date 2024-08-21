//{1,2,3,,5} find pair whose sum is 7
#include <bits/stdc++.h>
using namespace std;
int main(){
int array[]={1,2,3,4,5,6};
int num=4,count=0;
for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++){
            int sum=array[i]+array[j];
            if(sum==num){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
