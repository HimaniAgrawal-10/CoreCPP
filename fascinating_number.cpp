
// Problem: Fascinating Number Check
// Difficulty: Easy-Medium
// Approach: Concatenate multiples and verify digit frequency
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

// Function to check fascinating number
bool isFascinating(int n) {

    string num = to_string(n) +
                 to_string(2 * n) +
                 to_string(3 * n);

    // Must contain exactly 9 digits
    if(num.length() != 9)
        return false;

    vector<int> freq(10, 0);

    for(char ch : num) {

        int digit = ch - '0';

        // Zero not allowed
        if(digit == 0)
            return false;

        freq[digit]++;
    }

    // Digits 1-9 should appear exactly once
    for(int i = 1; i <= 9; i++) {
        if(freq[i] != 1)
            return false;
    }

    return true;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isFascinating(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
