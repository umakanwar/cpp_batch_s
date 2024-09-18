//2. mujhe user se ek string input mai lena hai agr wo mon-sat weekday sun holiday invalid day


#include<bits/stdc++.h>
using namespace std;

string checkDayType(string Day) {

    transform(Day.begin(), Day.end(), Day.begin(), ::tolower);
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
