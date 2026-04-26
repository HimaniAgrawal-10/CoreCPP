// Problem: First Non-Repeating Digit
// Difficulty: Easy
// Approach: Count frequency of digits and find first unique
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

// Function to find first non-repeating digit
int firstNonRepeating(int n) {
    vector<int> freq(10, 0);
    vector<int> digits;

    // Store digits in correct order
    int temp = n;
    while(temp > 0) {
        digits.push_back(temp % 10);
        freq[temp % 10]++;
        temp /= 10;
    }

    // Traverse from left side
    for(int i = digits.size() - 1; i >= 0; i--) {
        if(freq[digits[i]] == 1)
            return digits[i];
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        cout << firstNonRepeating(n) << endl;
    }

    return 0;
}
