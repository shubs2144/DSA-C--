/*

Find non-repeating characters in a string
This problem asks to find the characters in a string that appear only once, i.e., the non-repeating characters.

These characters are unique and do not appear multiple times in the string.
Example for string “swiss”:
Non-repeating characters are ‘w’ and ‘i’, since ‘s’ repeats.

*/

#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int freqTable[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < s.length(); i++) {
        freqTable[s[i]]++;
    }

    cout << "Characters that appear only once: ";
    for (int i = 0; i < 256; i++) {
        if (freqTable[i] == 1) {
            cout << char(i) << " ";  // convert ASCII code to character
        }
    }

    return 0;
}
