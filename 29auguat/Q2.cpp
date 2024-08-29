 #include <bits/stdc++.h>
using namespace std;
class ABC{
    public:
    int p;
    int r;
    int t;
};

int main(){
   ABC obj;
   cout<<"Enter principal amount: ";
   cin>>obj.p;
   cout<<"Enter the rate per annum: ";
   cin>>obj.r;
   cout<<"Enter the time in years: ";
   cin>>obj.t;
   cout<<(obj.p*obj.r*obj.t)/100;
}