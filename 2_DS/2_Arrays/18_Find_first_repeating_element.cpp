/*
Examples:

Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
Output: 2
Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.

Input: arr[] = [1, 2, 3, 4]
Output: -1
Explanation: All elements appear only once so answer is -1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, 3, 3, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "index is " << i + 1;
                return 0;
            }
        }
    }
    cout << "-1";
}

// optimized solution using Hash STL 

int main()
{
    int arr[] = {1, 4, 3, 3, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int , int>hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
        for (int i = 0; i < size; i++)
        {
            if (hash[arr[i]] > 1)
            {
                cout << "index is " << i + 1;
                return 0;
            }
        }
    cout << "-1";
}

/*

🧠 Step-by-Step Explanation:

Step 1: Frequency Map
Use unordered_map<int, int> to count how many times each number appears.

Step 2: Find First Repeating
Loop through the array again, and print the first index where count > 1.

Output:
The index is 1-based (i.e., position starts from 1, not 0).

💡 Example:
Input: {1, 4, 3, 3, 5, 6, 6}

Map: {1:1, 4:1, 3:2, 5:1, 6:2}

First repeating element is 3, at index 3, so output is index is 4.


📈 Time & Space Complexity:

Time: O(n)
Space: O(n)

🗣️ What to Say in an Interview:
"I used a hash map to count each element’s frequency in one pass. Then, I looped again to find the first repeating element and printed its 1-based index. This approach ensures O(n) time and handles all edge cases efficiently."


*/