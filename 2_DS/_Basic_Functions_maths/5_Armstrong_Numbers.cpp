/*

An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


Examples:
Input: n = 153
Output: true

Explanation: Number of digits : 3.
1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.
Therefore, it is an Armstrong number.

Input: n = 12
Output: false

Explanation: Number of digits : 2.
1 ^ 2 + 2 ^ 2 = 1 + 4 = 5.
Therefore, it is not an Armstrong number.

*/

#include <iostream>
#include <cmath> // For pow function
using namespace std;

bool isArmstrong(int n) {
    int original = n; // Store the original number
    int sum = 0; // Initialize sum to 0

    while(n > 0){

        int digit = n % 10; // Get the last digit
        sum += pow(digit, 3); // Add the cube of the digit to sum
        n /= 10; // Remove the last digit from n
    }
    if(original == sum) {
        return true; // The number is an Armstrong number
    } else {
        return false; // The number is not an Armstrong number
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}
// Output: 153 is an Armstrong number.
// Input: 153