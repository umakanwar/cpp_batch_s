// Write a C++ function that takes an integer as input and
// uses nested if-else statements to determine if the number is a perfect cube or not.
#include <bits/stdc++.h>
using namespace std;
string checkcuberoot(int num)
{
    if (num < 0)
    {
        return "Not a perfect cube";
    }
    double cuberoot = cbrt(num);

    int roundedcuberoot = round(cuberoot);

    if (pow(roundedcuberoot, 3) == num)
    {
        return "a Perfect Cube";
    }
    else
    {
        return "Not a perfect cube";
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number is " << (checkcuberoot(num));
}