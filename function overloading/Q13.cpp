//13 : Implement overloaded functions isEqual to check if two integers are equal, two 
// characters are equal, and two floating-point numbers are equal (with precision tolerance).

#include <bits/stdc++.h>
using namespace std;

int isEqual(int a,int b){
     if(a==b){
          cout<<"Eqaul"<<endl;
     }
     else cout<<"Uneqaul"<<endl;
     return 0;
}

int isEqual(float a,float b){
     if(a==b){
          cout<<"Eqaul"<<endl;
     }
     else cout<<"Uneqaul"<<endl;
     return 0;
}

int isEqual(char a,char b){
     if(a==b){
          cout<<"Eqaul"<<endl;
     }
     else cout<<"Uneqaul"<<endl;
     return 0;
}

int main(){
     int a=34,b=87;
     float c=3.45,d=9.67;
     char e='y',f='y';
     isEqual(a,b);
     isEqual(c,d);
     isEqual(e,f);
}