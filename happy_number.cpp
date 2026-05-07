
// Problem: Happy Number Check
// Difficulty: Easy-Medium
// Approach: Use cycle detection (set) to avoid infinite loop
// Time Complexity: O(log n)
// Space Complexity: O(n)

#include <iostream>
#include <set>
using namespace std;

// Function to calculate sum of squares of digits 
int digitSquareSum(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Check if number is happy
bool isHappy(int n) {
    set<int> seen;

    while(n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = digitSquareSum(n);
    }

    return n == 1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isHappy(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
