// Remove Duplicates from a Sorted Array
// o Explanation: Remove duplicates and return the unique elements.
// o Given Array: {1, 1, 2, 3, 3, 4}
// o Expected Array: {1, 2, 3, 4}

#include <bits/stdc++.h>
using namespace std;


void removeDuplicates(int arr[], int& size) {
    int k = 0; // Position of the last unique element

    // Start from the second element and compare with the previous one
    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[k]) {
            k++; // Move to the next unique position
            arr[k] = arr[i]; // Update the unique position with the current element
        }
    }

    // Update the size to reflect the number of unique elements
    size = k + 1;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Get the number of elements in the array

    removeDuplicates(arr, size);

    // Print the unique elements
    cout << "Unique elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
   cout << endl;

    return 0;
}
