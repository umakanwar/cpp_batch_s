//agar user ki age 0-5 "child" 6-12 "young age" 13-19
// "teenage" 20-50 "middle age" greater than 51 "senior citizen"

#include <bits/stdc++.h>
using namespace std;
string lifestage(int age){
    if(age<=5){
        return "child";
    }
    else if(age<=12){
        return "young age";
    }
    else if(age<=19){
        return "teenage";
    }
    else if(age<=50){
        return "middle age";
    }
    else{
        return "senior citizen";
    }
}

int main(){
    int age;
    cout<<"Enter the age of the person: ";
    cin>>age;
    cout<<"The person is a "<<(lifestage(age))<<".";
    return 0;
}