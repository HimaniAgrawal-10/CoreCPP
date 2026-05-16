
// Problem: Peterson Number Check
// Difficulty: Easy-Medium
// Approach: Sum factorial of digits and compare with original number
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

// Function to check Peterson number
bool isPeterson(int n) {

    int original = n;
    int sum = 0;

    while(n > 0) {

        int digit = n % 10;

        sum += factorial(digit);

        n /= 10;
    }

    return sum == original;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isPeterson(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
