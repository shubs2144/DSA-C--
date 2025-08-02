// aabbbcc = a2b3c2
// abbccc = a1b2c3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    int count = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            cout << s[i - 1] << count;
            count = 1;
        }
    }
    return 0;
}
