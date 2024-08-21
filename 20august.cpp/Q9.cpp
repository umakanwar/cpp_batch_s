//given an array find a sub array with maximun sum
//find the largest sum contigous subarray
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<size;

    int maxCurrent = arr[0];
    int maxGlobal = arr[0];
    for (int i = 1; i < size; ++i) {
        maxCurrent = max(arr[i], maxCurrent + arr[i]);
        maxGlobal = max(maxGlobal, maxCurrent);
    }

    cout << "The largest sum of a contiguous subarray is: " << maxGlobal << endl;

    return 0;
}




