//Write a C++ function that takes a character as input and uses nested if-else statements 
//to determine if it is a vowel and if it is uppercase or lowercase, or if it is a consonant.
#include <bits/stdc++.h>
using namespace std;
string checkcharacter(char u){
    char ch=tolower(u);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        if(islower(u)){
            return "The character is lowercase vowel.";
        }
        else if(isupper(u)){
            return "The character is uppercase vowel.";
        }
    }
    else{
        if(islower(u)){
            return "The character is lowercase consonant.";
        }
        else if(isupper(u)){
            return "The character is uppercase consonant.";
        }
    }
}
int main(){
    char u;
    cout<<"Enter any character: ";
    cin>>u;
    cout<<(checkcharacter(u));
}