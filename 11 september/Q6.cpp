// .if agar user ne input kiya hai
//   1 then ek function call karna hai A() ===> A is printed uske andar ek aur function call karna hai and call function D() and "print I am D"
//   2 then ek function call karna hai B() ===> B is printed 
// and call function E() and "print I am E"
//   3 then ek function call karna hai C() ===> C is printed 
// and call function F() and "print I am F"

#include <bits/stdc++.h>
using namespace std;
void D(){
    cout<<"I am D.";
}
void A(){
    cout<< "A is printed."<<endl;
    D();
}
void E(){
    cout<<"I am E.";
}
void B(){
    cout<< "B is printed."<<endl;
    E();
}
void F(){
    cout<<"I am F.";
}
void C(){
    cout<< "C is printed."<<endl;
    F();
}
int main(){
    int key;
    cout<<"Enter any nember:";
    cin>>key;
    if(key==1){
        A();
    }
    else if(key==2){
        B();
    }
    else if(key==3){
        C();
    }
    else{
        cout<<"Invalid Input";
    }
    
    return 0;
}