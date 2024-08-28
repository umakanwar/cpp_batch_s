 #include <bits/stdc++.h>
using namespace std;
class ABC{
    public:
    int n=5;
    int fact=1;

};

int main(){
   ABC obj;
   for(int i=1;i<=obj.n;i++){
      obj.fact=obj.fact*i;
   }
   cout<<obj.fact;
}
