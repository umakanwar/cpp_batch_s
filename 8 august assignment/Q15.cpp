//Write a C++ function that takes a character as input and uses nested if-else 
//statements to determine if it is a letter and if it is a vowel or consonant, or if it is a digit.
#include <bits/stdc++.h>
using namespace std;
string checkcharacter(char k){
    if(isupper(k) || islower(k)){
        char c=tolower(k);
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                return "Vowel.";
            }
            else{
                return "Consonant.";
            }
        }
    }
    else if(isdigit(k)){
        return "Digit.";
    }
    else{
        return "Invalid input.";
    }
}
int main(){
    char k;
    cout<<"Enter any character: ";
    cin>>k;
    cout<<"The character "<<k<<" is a "<<(checkcharacter(k));
}