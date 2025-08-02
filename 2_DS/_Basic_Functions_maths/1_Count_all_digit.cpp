/*

Count all Digits of a Number

You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Examples:

Input: n = 4
Output: 1
Explanation: There is only 1 digit in 4.

Input: n = 14
Output: 2
Explanation: There are 2 digits in 14.

*/

#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n >= 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = countDigits(n);
    cout << "Number of digits: " << result << endl;
    return 0;
}


//---------> Method 2: Using log10 function


#include <iostream>
#include <cmath> // For log10 function
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1; // Special case for 0
    return int (log10(n)) + 1; // Count digits using logarithm
}


/*

n = 1234
log10(1234) ≈ 3.09
int(log10(1234)) = 3
3 + 1 = 4 → ✅ 4 digits

*/