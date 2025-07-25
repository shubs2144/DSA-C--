//  Problem:
// Input: "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        // Skip non-letter characters
        if (!isalpha(s[left])) {
            left++;
        } else if (!isalpha(s[right])) {
            right--;
        } else {
            // Swap letters
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main() {
    string str = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(str) << endl;
    return 0;
}

/*

Letters in ASCII:
'A' to 'Z' → ASCII 65 to 90

'a' to 'z' → ASCII 97 to 122

So we can write our own function like this:


bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

*/