// Problem: Circular Prime Check
// Difficulty: Easy-Medium
// Approach: Rotate digits and check primality for each rotation
// Time Complexity: O(k * sqrt(n))
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// Function to count digits
int countDigits(int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to rotate number
int rotate(int n, int digits) {
    int last = n % 10;
    n /= 10;
    return last * pow(10, digits - 1) + n;
}

// Check circular prime
bool isCircularPrime(int n) {
    int digits = countDigits(n);
    int temp = n;

    for(int i = 0; i < digits; i++) {
        if(!isPrime(temp))
            return false;
        temp = rotate(temp, digits);
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(isCircularPrime(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
