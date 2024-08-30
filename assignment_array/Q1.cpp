// 1. Find the Maximum Value in an Array
// o Explanation: Identify the largest value in the array.
// o Given Array: {3, 1, 4, 1, 5, 9, 2}
// o Expected Result: 9

#include <bits/stdc++.h>
using namespace std;
int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);  
     int max_value = array[0]; 
    for (int i = 1; i < size; ++i) {
        if (array[i] > max_value) {
            max_value = array[i];  
        }
    }
    cout<<max_value;   
    return 0;
}
