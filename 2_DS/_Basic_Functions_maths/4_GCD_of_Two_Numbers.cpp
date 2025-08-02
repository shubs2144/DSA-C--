/*

You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


Examples:

Input: n1 = 4, n2 = 6
Output: 2
Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.
Input: n1 = 9, n2 = 8
Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.
Greatest Common divisor = 1.

*/

#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    // Base case: if one number is 0, return the other number
    if (n2 == 0) {
        return n1;
    }
    // Recursive case: call gcd with the second number and the remainder of n1 divided by n2
    return gcd(n2, n1 % n2);
}


int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int result = gcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << result << endl;
    return 0;
}
// Output: GCD of 4 and 6 is: 2


/*

Algorithm	        ==>  Euclidean Algorithm
Time Complexity	    ==>  O(log(min(n1, n2)))
Space Complexity	==>  O(log(min(n1, n2))) due to recursion

Dry Run:

Input: n1 = 4, n2 = 6
gcd(4, 6) 
→ gcd(6, 4 % 6)  = gcd(6, 4)
→ gcd(4, 6 % 4)  = gcd(4, 2)
→ gcd(2, 4 % 2)  = gcd(2, 0)
→ return 2


*/