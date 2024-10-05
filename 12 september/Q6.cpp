// User se 4 input lena hai, inka sum nikalna  hai. Agar sum > 100 hota hai to ek function
// call karna hai, jisme 3 input lena hai aur  unka average cout<< karna hai. Agar cout<<ed average > 50 hai to ek aur function
// call karke factorial nikalna hai aur check  karna hai wo prime fact hai ya nahi.

#include <bits/stdc++.h>
using namespace std;

string isPrime(int number) {
   
    if (number <= 1) {
        return "Neither prime nor composite."; 
    }
    if (number == 2) {
        return "Prime"; 
    }
    if (number % 2 == 0) {
        return "composite"; 
    }
    
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return "composite"; 
        }
    }
    
    return "Prime"; 
}

int factorial()
{
    int k, fact = 1;
    cout << "Enter a number you want to find factorial of:";
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << k << " is " << fact << endl;
   cout<<"The factorial is "<< (isPrime(fact))<<"."<<endl;    
}

int avg()
{
    int a, b, c;
    cout << "Enter 3 numbers you want to find average of: ";
    cin >> a >> b >> c;
    int sum = a + b + c;
    int avg = sum / 3;

    if (avg > 50)
    {
        factorial();
    }

    return avg;
}
int main()
{
    int a, b, c, d, sum;

    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    cout << "Enter number 4: ";
    cin >> d;
    sum = a + b + c + d;
    if (sum > 100)
    {
        cout << "Average of numbers is " << avg()<< endl;
    }
}
