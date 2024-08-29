#include <bits/stdc++.h>
using namespace std;
class ABC{
   private:
   int a=30;
   int b=20;

   public:
   int print(){
    return a+b;
   }
};

int main(){
   ABC obj;
   cout<<obj.print();
}