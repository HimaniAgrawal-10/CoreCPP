// Problem: Kaprekar Number Check
// Difficulty: Easy-Medium
// Approach: Square number, split digits, compare sum
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits
int countDigits(long long n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Check Kaprekar
bool isKaprekar(int n) {
    long long square = 1LL * n * n;

    int digits = countDigits(square);
    int d = countDigits(n);

    long long right = square % (long long)pow(10, d);
    long long left = square / (long long)pow(10, d);

    return (left + right == n);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isKaprekar(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
