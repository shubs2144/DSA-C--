/*

Two strings are called anagrams if they contain the same characters in the same frequencies, but possibly in different orders.

This code checks whether two given strings are anagrams of each other.
Example: Are “listen” and “silent” anagrams?
Sort both:

“listen” → “eilnst”
“silent” → “eilnst”

Both are the same, so “listen” and “silent” are anagrams.

*/

// Bruit Force
//  Tc - O(n(logn))
#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(strign a, string b)
{
    int sizeA = a.length();
    int sizeB = b.length();

    if (sizeA != sizeB)
        return false;

    sort(a.begin(), sort(a.end()));
    sort(b.begin(), sort(b.end()));

    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string word1;
    cout << "Enter Word1 : ";
    cin >> word1;

    string word2;
    cout << "Enter Word2 : ";
    cin >> word2;

    int ans = checkAnagram(word1, word2);
    if (ans == 1)
    {
        cout << "Both words are anagram ";
    }
    else
    {
        cout << "Words are not anagram ";
    }

    return 0;
}

// Optimize way
// TC -> O(n)

bool checkAnagram(string a, string b)
{
    int freqTable[256] = {0};

    for (int i = 0; i < a.size(); i++)
    {
        freqTable[a[i]]++;
    }

    for (int j = 0; j < a.size(); j++)
    {
        freqTable[a[j]]--;
    }

    for (int k = 0; k < 256; k++)
    {
        if (freqTable[k] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string word1;
    cout << "Enter Word1 : ";
    cin >> word1;

    string word2;
    cout << "Enter Word2 : ";
    cin >> word2;

    int ans = checkAnagram(word1, word2);
    if (ans == 1)
    {
        cout << "Both words are anagram ";
    }
    else
    {
        cout << "Words are not anagram ";
    }

    return 0;
}

/*
Char  s1 (listen)	 s2 (silent)	    freq[ch - 'a']
l	    +1	            -1	                0
i	    +1	            -1	                0
s	    +1	            -1	                0
t	    +1	            -1	                0
e	    +1	            -1	                0
n	    +1	            -1	                0

✅ Final freq[] array is all zeros → Strings are anagrams.
*/