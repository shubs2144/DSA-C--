/*
Sample Dry Run:
Input: "leetcode"

Vowels: ['e', 'e', 'o', 'e']

Swapped Result: "leotcede"
*/


#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    // Check for both lowercase and uppercase vowels
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string reverseVowels(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (!isVowel(s[left])) {
            left++;
        } else if (!isVowel(s[right])) {
            right--;
        } else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main() {
    string str = "hello";
    cout << reverseVowels(str) << endl;  // Output: "holle"
    return 0;
}
