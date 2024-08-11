//Implement a C++ function that takes the quantity of books purchased as an argument and 
//returns the total cost after applying discounts based on the quantity using if-else statements.

#include<bits/stdc++.h>
using namespace std;


double calculateTotalCost(int quantity) {
    int pricePerBook = 100; 
    int totalCost;

    totalCost = quantity * pricePerBook;

    if (quantity >= 10) {
        totalCost *= 0.80; 
    } else if (quantity >= 5) {
         totalCost *= 0.90;
    }

    return totalCost;
}

int main() {
    int quantity;

    cout << "Enter the quantity of books purchased: ";
    cin >> quantity;


    int totalCost = calculateTotalCost(quantity);


    cout << "The total cost for " << quantity << " books is INR " << totalCost ;

    return 0;
}
