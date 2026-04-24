// Problem: Alternate Digit Sum
// Difficulty: Easy
// Approach: Traverse digits and alternate addition/subtraction
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to calculate alternate digit sum
int alternateSum(int n) {
    int result = 0;
    bool add = true;

    while(n > 0) {
        int digit = n % 10;

        if(add)
            result += digit;
        else
            result -= digit;

        add = !add;
        n /= 10;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        cout << alternateSum(n) << endl;
    }

    return 0;
}
