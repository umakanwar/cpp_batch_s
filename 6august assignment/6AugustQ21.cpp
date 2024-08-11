//Implement a C++ function that takes a day of the week as 
//an argument and returns whether it's a weekday or a weekend day using if-else statements.

#include<bits/stdc++.h>
using namespace std;

string checkDayType(string Day) {

    if (Day == "saturday" || Day == "sunday") {
        return "Weekend";
    } else if (Day == "monday" || Day == "tuesday" || Day == "wednesday" || Day == "thursday" || Day == "friday") {
        return "Weekday";
    } else {
        return "Invalid day";
    }
}

int main() {
    string Day;
    cout << "Enter a day of the week: ";
    cin>>Day;
    cout << Day << " is a " << checkDayType(Day);

    return 0;
}
