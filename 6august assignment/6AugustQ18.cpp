//Develop a C++ function that takes the quantity of books as an argument and 
//returns the total cost after applying a discount of 10% if the quantity is between 5 and 10, and 20% if the quantity is more than 10.

#include<bits/stdc++.h>
using namespace std;

float calculateTotalCost(int quantity) {
    int pricePerBook = 100; 
    float totalCost;

    totalCost = quantity * pricePerBook;

    if (quantity > 10) {
        totalCost *= 0.80; 
    } else if (quantity >= 5) {
        totalCost *= 0.90; 
    }

    return totalCost;
}

int main() {
    int quantity;
    cout << "Enter the quantity of books: ";
    cin >> quantity;

    float totalCost = calculateTotalCost(quantity);

    cout << "The total cost for " << quantity << " books is INR" << totalCost;

    return 0;
}
