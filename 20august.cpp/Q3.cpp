//reverse element of matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
int array[]={5,1,4,2,8},reversearray[5];
for(int i=0;i<5;i++){
   reversearray[i]=array[5-i-1];
}
for(int i=0;i<5;i++){
cout<<reversearray[i]<<endl;
}
return 0;
}