
// Problem: Neon Number Check
// Difficulty: Easy
// Approach: Square the number and sum digits
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to calculate digit sum
int digitSum(int n) {
    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Function to check neon number
bool isNeon(int n) {
    int square = n * n;
    return digitSum(square) == n;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isNeon(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
