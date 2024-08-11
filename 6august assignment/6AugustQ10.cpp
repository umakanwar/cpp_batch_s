//Write a C++ function that takes age and time of day as arguments and returns
// the ticket price for a movie after applying discounts for children and seniors using if-else statements.

#include<bits/stdc++.h>
using namespace std;


double TicketPrice(int age) {
    int regularPrice = 100; 
    int childPrice = 50;    
    int seniorPrice = 70;   

    int price;

    if (age <= 12) {
        price = childPrice;  
    } else if (age >= 65) {
        price = seniorPrice; 
    } else {
        price = regularPrice; 
    }

    return price;
}

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    int price = TicketPrice(age);

    cout << "The ticket price is INR" <<" "<< price;

    return 0;
}
