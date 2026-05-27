// Problem: Sunny Number Check
// Difficulty: Easy
// Approach: Check if n+1 is a perfect square
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
#include <cmath>
using namespace std;

// Function to check sunny number
bool isSunny(int n) {

    int root = sqrt(n + 1);

    return (root * root == n + 1);
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        if(isSunny(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
