//Develop a C++ function that takes a character as an argument and returns its category 
//(uppercase letter, lowercase letter, digit, or special character) using if-else statements.

#include<bits/stdc++.h>
using namespace std;



string categorizeCharacter(char u) {
    if (isupper(u)) {
        return "Uppercase letter";
    } else if (islower(u)) {
        return "Lowercase letter";
    } else if (isdigit(u)) {
        return "Digit";
    } else {
        return "Special character";
    }
}

int main() {
    char u;

    cout << "Enter a character: ";
    cin >> u;
    
   

    cout << "The character '" << u << "' is a " << categorizeCharacter(u) ;

    return 0;
}

