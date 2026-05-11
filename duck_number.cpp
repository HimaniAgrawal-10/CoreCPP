
// Problem: Duck Number Check
// Difficulty: Easy
// Approach: Check if number contains zero
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check duck number
bool isDuckNumber(string num) {

    // First digit should not be zero
    if(num[0] == '0')
        return false;

    // Check for zero in remaining digits
    for(int i = 1; i < num.length(); i++) {
        if(num[i] == '0')
            return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string num;
        cin >> num;

        if(isDuckNumber(num))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
