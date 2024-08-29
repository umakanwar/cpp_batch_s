#include <bits/stdc++.h>
using namespace std;
class ABC{
   private:
   int a=30;
   int b=20;

   public:
   int sum(){
    return a+b;
   }
   int multi(){
    return a*b;
   }
};

int main(){
   ABC obj;
   cout<<"sum: "<<obj.sum()<<endl;
   cout<<"multiplication: "<<obj.multi();
}