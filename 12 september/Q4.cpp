//  5 input lena hai agar sum greater than 50 hota hai to
//  ek function call karna hai usme mai 1-50 ka sum nikalna hai,
//  agar less than 50 hota hai to fir ek function call karna hai usme 1
//  input char lene hai aur check karna hai ki wo vowel hai ya nahi.
//  agar equals to 50 hota hai then check karna hai sum even tha ya odd.
#include <bits/stdc++.h>
using namespace std;
int sumUpTo50()
{
    int sum = 0;
    for (int i = 1; i <= 50; ++i)
    {
        sum += i;
    }
    return sum;
}
void checkVowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << c << " is a vowel." << endl;
    }
    else
    {
        cout << c << " is not a vowel." << endl;
    }
}
int main()
{
    int a, b, c, d, e, sum;
    char ch;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    cout << "Enter number 4: ";
    cin >> d;
    cout << "Enter number 5: ";
    cin >> e;

    sum = a + b + c + d + e;
    if (sum > 50)
    {
        cout << "The sum of numbers from 1 to 50 is: " << sumUpTo50() << endl;
    }
    else if (sum < 50)
    {
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        checkVowel(ch);
    }

    else { 
        if (sum % 2 == 0) {
            cout << "The sum is 50 and it is even." << endl;
        } else {
            cout << "The sum is 50 and it is odd." << endl;
        }
    }
}