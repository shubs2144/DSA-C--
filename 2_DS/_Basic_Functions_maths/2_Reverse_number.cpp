/*

Input: n = 25
Output: 52
Explanation: Reverse of 25 is 52.

*/


#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;
    while (n > 0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    return reverse;
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = reverseNumber(n);
    cout << "Reversed number: " << result << endl;
    return 0;
}