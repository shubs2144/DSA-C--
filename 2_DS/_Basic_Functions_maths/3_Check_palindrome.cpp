#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n; // Store the original number
    int reversed = 0; // Initialize reversed number to 0

    // Reverse the number
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}