//search element
#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int target = 30; 

    int flag=0;

    for (int i = 0; i < 5; ++i) {
        if (arr[i] == target) {
            flag = 1;  
            break;
        }
    }

    if (flag=1) {
        cout << "Element found " <<endl;
    } else {
       cout << "Element not found in the array" <<endl;
    }

    return 0;
}