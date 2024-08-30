// Reverse an Array
// o Explanation: Reverse the order of elements in the array.
// o Given Array: {1, 2, 3, 4, 5}
// o Expected Array: {5, 4, 3, 2, 1}

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the vector with the given array
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Print the original vector
    cout << "Original array: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout <<endl;

    // Reverse the vector
    reverse(vec.begin(), vec.end());

    // Print the reversed vector
    cout << "Reversed array: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
