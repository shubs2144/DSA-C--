/*

Test Case 1:

Input: [1, 2, 2, 4, 5]
Output: Duplicate: 2, Missing: 3

Test Case 2:

Input: [3, 1, 3]
Output: Duplicate: 3, Missing: 2

*/

#include <bits/stdc++.h>
using namespace std;

// Method -1 --> visiting method
int findMissing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = arr[i]; // we can assume element as index
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " "; // print which index are positive
        }
    }
}

int main()
{
    int arr[] = {3, 3, 3, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMissing(arr, size);

    return 0;
}

/*
✅ Problem Goal:
Find the missing number(s) in the array using the index marking technique.

Input:
arr = {3, 3, 3, 3, 5}
Size: 5 (should contain numbers from 1 to 5)

🧠 Step 1: Mark visited indices negative
We use the value at each index to mark the position (value - 1) as visited by turning it negative.

🔁 First Loop:
i = 0 → index = 3 → arr[2] = 3 → Mark: arr[2] = -3

i = 1 → index = 3 → arr[2] = -3 → already negative, skip

i = 2 → index = -3 → arr[2] again, skip (already negative)

i = 3 → index = -3 → skip

i = 4 → index = 5 → arr[4] = 5 → Mark: arr[4] = -5

Modified Array:
{3, 3, -3, 3, -5}

🧠 Step 2: Find positive values
Positive values mean their index was never visited → missing number.

🔁 Second Loop:
arr[0] > 0 → missing = 0 + 1 = 1

arr[1] > 0 → missing = 1 + 1 = 2

arr[2] < 0 → OK

arr[3] > 0 → missing = 3 + 1 = 4

arr[4] < 0 → OK

✅ Final Output:   

1 2 4
These numbers are missing from the array.
*/


// Method 2-> Sorting + swapping method

int findMissing(int arr[], int size)
{
 int i=0;
 while(i < size){
    int index = arr[i] -1;
    if(arr[i] != arr[index]){
        swap(arr[i], arr[index]);
    }else {
        i++;
    }
 }

 for(int i=0; i<size; i++){
    if(arr[i] != i+1){
        cout << i+1<< " ";
    }
 }
}


int main()
{
    int arr[] = {3, 3, 3, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMissing(arr, size);

    return 0;
}

/*

Input Array:
arr[] = {3, 3, 3, 3, 5}
Size = 5, so expected values = 1 to 5

🧠 Step 1: Cyclic Sort Loop
We place each number at its correct index (i.e., val should be at val - 1).

🔁 While Loop:
i = 0, arr[0] = 3, index = 2
→ arr[0] != arr[2] → swap → arr = {3, 3, 3, 3, 5} (no effect, all 3s)

→ Since swapping doesn't fix it, move to i = 1, i = 2, i = 3 → same, all 3s

i = 4, arr[4] = 5, index = 4
→ already at right place → i++

Final Array after swap loop:
{3, 3, 3, 3, 5}

🧠 Step 2: Find Missing Numbers
Loop through the array. If arr[i] != i+1, it means i+1 is missing.

🔁 For Loop:
i = 0, arr[0] = 3 → not 1 → 1 is missing

i = 1, arr[1] = 3 → not 2 → 2 is missing

i = 2, arr[2] = 3 → is 3 → ✅

i = 3, arr[3] = 3 → not 4 → 4 is missing

i = 4, arr[4] = 5 → is 5 → ✅

*/