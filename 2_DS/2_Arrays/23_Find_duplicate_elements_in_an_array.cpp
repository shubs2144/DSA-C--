//Without Extra Space (Brute Force)

void findDuplicates(int arr[], int n) {
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

//🔴 Not efficient for large arrays – O(n²) time.



// Optimizw way


#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements: ";
    for (auto pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);
    return 0;
}


/*

 Step-by-step Explanation:


✅ for (auto pair : freq)
This loops through each entry in the unordered_map named freq.

Each entry (pair) has:

pair.first: the number from the array

pair.second: how many times that number appeared

✅ if (pair.second > 1)
This checks: Is this number repeated?

If the frequency is more than 1, it's a duplicate.

✅ cout << pair.first << " ";
Prints the number that was found more than once.

🧠 Example:
If your array is:


int arr[] = {1, 2, 3, 2, 4, 5, 1};
Then freq map will look like:


{
  1: 2,
  2: 2,
  3: 1,
  4: 1,
  5: 1
}
So the loop prints:

Duplicate elements: 1 2


-> Great question! You're referring to this line:


for (auto pair : freq)

Let’s break it down clearly:


✅ `pair.first` and `pair.second` Explained:

When you use a map (or `unordered_map`) in C++, it stores data in key-value pairs.

So in:


unordered_map<int, int> freq;

* The key (`int`) is the element from the array
* The value (`int`) is the number of times that element appears (its frequency)


In `for (auto pair : freq)`:

Each `pair` is like:


pair = {element, frequency}

So:

* `pair.first` → the array element (the key)
* `pair.second` → the count of how many times that element appears (the value)


🧠 Example:

If the array is:


int arr[] = {1, 2, 2, 3};

Then the `freq` map becomes:


{
  1: 1,
  2: 2,
  3: 1
}

Now, during the loop:

* First `pair` → `pair.first = 1`, `pair.second = 1`
* Second `pair` → `pair.first = 2`, `pair.second = 2`
* Third `pair` → `pair.first = 3`, `pair.second = 1`

Only `pair.second > 1` (i.e., frequency > 1) means it’s a duplicate → so only `2` gets printed.


Let me know if you'd like a visual diagram or animation-style explanation!


*/