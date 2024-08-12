//Write a C++ function that takes an integer as input and uses nested if-else 
//statements to determine if the number is a palindrome and if the sum of its digits is also a palindrome.
#include <bits/stdc++.h>
using namespace std;
bool palindrome(int num){
    int sum=0,rem;
    int temp=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==temp){
        return true;
    }
    else{
        return false;
    }
}

int sumofdigits(int k){
    int rem,sum=0;
    while(k>0){
        rem=k%10;
        sum=sum+rem;
        k=k/10;
    }
    return sum;
}
void checkPalindromeAndSum(int num) {
    if (palindrome(num)) {
        cout << num << " is a palindrome.\n";
        
        int sum = sumofdigits(num);

        if (palindrome(sum)) {
            cout << "The sum of its digits, " << sum << ", is also a palindrome.";
        } else {
            cout << "The sum of its digits, " << sum << ", is not a palindrome.";
        }
    } else {
        cout << num << " is not a palindrome.\n";
    }
}

int main(){
    int number;
    cout<<"Enter any number:";
    cin>>number;
   (checkPalindromeAndSum(number));
    return 0;
}


