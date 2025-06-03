/*

Example for a palindrome:
“madam” — reads the same backward as forward

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            cout << "string is not palindrom ";
            return 0; // early return
        }
        else
        {
            start++;
            end--;
        }
    }
    cout << " string is palindrome ";
    return 0;
}