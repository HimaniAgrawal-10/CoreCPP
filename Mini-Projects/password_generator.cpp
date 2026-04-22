// Project: Password Generator
// Description: Generates strong random passwords based on user preferences

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int length;
    char choice;

    string lower = "abcdefghijklmnopqrstuvwxyz";
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";
    string symbols = "@#$%&*!";

    string all = "";

    cout << "Enter password length: ";
    cin >> length;

    cout << "Include uppercase letters? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y') all += upper;

    cout << "Include lowercase letters? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y') all += lower;

    cout << "Include numbers? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y') all += numbers;

    cout << "Include symbols? (y/n): ";
    cin >> choice;
    if(choice == 'y' || choice == 'Y') all += symbols;

    // Safety check
    if(all.empty()) {
        cout << "⚠️ No character set selected!" << endl;
        return 0;
    }

    srand(time(0));

    string password = "";

    for(int i = 0; i < length; i++) {
        password += all[rand() % all.length()];
    }

    cout << "\n🔐 Generated Password: " << password << endl;

    return 0;
}
