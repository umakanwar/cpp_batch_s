//Write a C++ function that takes a character as input and uses nested if-else statements 
//to determine if it is a digit, uppercase letter, lowercase letter, or a special character.
#include <bits/stdc++.h>
using namespace std;
string checkcharacter(char a){
    if(isdigit(a)){
        return "digit.";
    }
    else if(islower(a)){
        return "lowercase character.";
    }
    else if(isupper(a)){
        return "uppercase character.";
    }
    else{
        return "special character.";
    }
}

int main(){
    char a;
    cout<<"Enter any character: ";
    cin>>a;
    cout<<"The character is a "<<(checkcharacter(a));
    return 0;
}
