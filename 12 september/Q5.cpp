// user se ek input lena hai agr wo input positive hota hai to fir ek function call karna
//  hai usme 2 values lena hai aur unka swap karna hai, agar input -ve hota hai to fir ek
// function call karna hai aur check karna hai ki wo entered number pallindrome hai ya nahi,
// agar wo 0 hota hai to fir ek function call karna hai aur usme ek input lena hai
//  and check karna hai ki wo input powerof2 hai ya nahi.

#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    cout << "Enter the 2 numbres:";
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << "The swapped values are:" << a << " " << b;
}

void palindrome(int a)
{
    int rem, sum = 0;
    cout << "Enter a number:";
    cin >> a;
    int temp = a;
    while (a > 0)
    {
        rem = a % 10;
        sum = sum * 10 + rem;
        a = a / 10;
    }
    if (sum == temp)
    {
        cout << "Number is pallindrome.";
    }
    else
    {
        cout << "Number is not pallindrome.";
    }
}

int powerof2()
{
    int n;
    cout << "Enter number to check if it's power of 2:";
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    if (n == 1)
    {
        cout << "Power of 2 hai";
    }
    else
    {
        cout << "Power of 2 Nahi hai";
    }
}

int main()
{
    int num;
    int a, b;
    cout << "Enter any number:";
    cin >> num;
    if (num > 0)
    {
        swap(a, b);
    }
    else if (num < 0)
    {
        palindrome(a);
    }
    else
    {
        powerof2();
    }
}