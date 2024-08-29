#include <bits/stdc++.h>
using namespace std;
class ABC{
    public:
    int l;
    int b;
};

int main(){
   ABC obj;
   cout<<"Enter length: ";
   cin>>obj.l;
   cout<<"Enter breadth: ";
   cin>>obj.b;
   cout<<"Area= "<<obj.l*obj.b<<endl;
   cout<<"Perimeter= "<<2*(obj.l+obj.b);
}