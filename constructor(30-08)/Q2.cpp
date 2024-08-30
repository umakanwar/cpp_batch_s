// Prameterised constructor
 #include <bits/stdc++.h>
using namespace std;
class ABC{
    public:
    ABC(){
        cout<<"Without parameter.";
    }

    ABC(int k){
    cout<<"The value of  k is: "<<k<<endl;
    }
};

int main(){
    ABC obj(100);
    ABC obj2(200);
    ABC obj1;
    // obj.print();
    return 0;
}