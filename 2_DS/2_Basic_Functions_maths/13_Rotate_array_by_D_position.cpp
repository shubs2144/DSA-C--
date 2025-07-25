/*
rotation of an array by K positions.
This problem asks to find the circular rotation of an array by K positions.

In a circular rotation, elements that are moved from the end of the array are appended to the beginning.
Example for array [1, 2, 3, 4, 5] and K = 2:
After rotating the array by 2 positions, the result will be [4, 5, 1, 2, 3].



------> 🔁 Brute-force

with Temp Variable (Right Rotation)
We will:

Create a temporary array to hold rotated values.

Copy elements to the rotated positions.

Copy the temp array back to the original.


⏱ Time Complexity

Each operation runs in linear time:

Copy to temp array: O(d)
Shift remaining elements: O(n - d)
Copy from temp array: O(d)

Total Time: O(n)

💾 Space Complexity

Temp array of size d is used.
Space: O(d) → In worst case, if d = n, space is O(n)
*/

#include <iostream>
using namespace std;

// Function to rotate array to the left by d positions using temp array
void rotateArrayLeft(int arr[], int size, int d)
{
    d = d % size; // Normalize rotation value

    int temp[d]; // Temp array to store first d elements

    // Step 1: Store first d elements in temp
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // Step 2: Shift remaining elements to the left
    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i];
    }

    // Step 3: Copy temp elements to the end
    for (int i = size - d; i < size; i++)
    {
        arr[i] = temp[i - (size - d)];
    }

    /*
    Now plug in values:

    i = 3:
    arr[3] = temp[3 - 3] = temp[0] = 1

    i = 4:
    arr[4] = temp[4 - 3] = temp[1] = 2

    ✅ Correctly fills the last two positions!
    */
}

int main()
{
    int size, d;

    // Take size input
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Take array input
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Take rotation input
    cout << "Enter number of positions to rotate (left): ";
    cin >> d;

    // Rotate array
    rotateArrayLeft(arr, size, d);

    // Output result
    cout << "Array after rotating left by " << d << " positions: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//------> #method 2  ### optimize way

int rotateArrayLeft(int arr[], int size, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + size);
    reverse(arr, arr + size);
}

int main()
{
    int size, d;

    // Take size input
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Take array input
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Take rotation input
    cout << "Enter number of positions to rotate (left): ";
    cin >> d;

    // Rotate array
    rotateArrayLeft(arr, size, d);

    // Output result
    cout << "Array after rotating left by " << d << " positions: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}