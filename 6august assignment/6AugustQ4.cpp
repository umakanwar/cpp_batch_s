/*Develop a C++ function that takes three angles as arguments and returns whether the 
triangle is acute, obtuse, or right-angled using if-else statements.
*/
#include<bits/stdc++.h>
using namespace std;

string classifyTriangle(int angle1, int angle2, int angle3) {
    if (angle1 + angle2 + angle3 != 180) {
        return "Not a valid triangle";
    }
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        return "Right-angled";
    }
    if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        return "Obtuse";
    }
    return "Acute";
}

int main() {
    int angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    
    cout << "The triangle is " << classifyTriangle(angle1, angle2, angle3);
    
    return 0;
}