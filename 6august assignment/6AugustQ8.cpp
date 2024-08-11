//Write a C++ function that takes a person's age as an argument and returns 
//their age group (child, teenager, adult, senior) using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string checkage(int age){
    if(age<=12){
        return "child";
    }
    else if(age>=13 && age<=19){
        return "teenager";
    }
    else if(age>=20 && age<=59){
        return "adult";
    }
    else{
        return "senior";
    }
}

int main()
{   
    int age;
    cout<<"Enter age ";
    cin>>age;
    cout<<"The person is a "<<checkage(age);
    return 0;
}