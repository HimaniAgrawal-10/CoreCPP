// Problem: Disarium Number Check
// Difficulty: Easy-Medium
// Approach: Raise digits to their respective positions and compare sum
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to check Disarium number
bool isDisarium(int n) {

    vector<int> digits;

    int temp = n;

    // Store digits
    while(temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }

    int size = digits.size();
    int sum = 0;

    // Traverse in correct order
    for(int i = size - 1, pos = 1; i >= 0; i--, pos++) {
        sum += pow(digits[i], pos);
    }

    return sum == n;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isDisarium(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
