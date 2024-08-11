//Create a C++ function that takes a character as an argument and returns whether it is a vowel or consonant 
//using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string checkcharacter(char k) {
    char u=tolower(k);
    if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u'){
        return "vowel";
    }
    else {
        return "consonant";
    }
}

int main() {
    char u;
    cout << "Enter any character: ";
    cin >>u;
    cout << "The character you entered is: " << checkcharacter(u);
    return 0;
}
