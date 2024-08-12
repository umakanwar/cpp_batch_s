// Write a C++ function that takes a character as input and uses nested if-else statements to
// determine if it is a vowel or consonant, considering both uppercase and lowercase letters.
#include <bits/stdc++.h>
using namespace std;

string checkcharacter(char k)
{
    char lowerk = tolower(k);
    if (isalpha(lowerk))
    {
        if (lowerk == 'a' || lowerk == 'e' || lowerk == 'i' || lowerk == 'o' || lowerk == 'u')
        {
            return "vowel.";
        }
        else
        {
            return "consonant.";
        }
    }
    else
    {
        return "Not an alphabet.";
    }
}

int main()
{
    char k;
    cout << "Enter any character: ";
    cin>>k;
    cout<<"The chacter is a "<<(checkcharacter(k));
    return 0;
}