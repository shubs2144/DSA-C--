#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,3,5,85,32,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < size-1; i++){
        int minIndex = i;
        for(int j = i+1; j<size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}





/*

🔍 What is Selection Sort?
Selection Sort is a simple sorting algorithm that works by repeatedly finding the smallest (or largest) element from the unsorted part of the array and putting it at the beginning.

📚 How it works (step-by-step):
Let’s sort this array in ascending order:
[64, 25, 12, 22, 11]

🔁 Pass 1:
Find the smallest number in the whole array → 11

Swap it with the first element (64)

Array becomes: [11, 25, 12, 22, 64]

🔁 Pass 2:
Find the smallest in the remaining [25, 12, 22, 64] → 12

Swap with 25

Array becomes: [11, 12, 25, 22, 64]

🔁 Pass 3:
Find smallest in [25, 22, 64] → 22

Swap with 25

Array becomes: [11, 12, 22, 25, 64]

🔁 Pass 4:
Find smallest in [25, 64] → already 25

No swap needed

✅ Done! Sorted array: [11, 12, 22, 25, 64]


📌 Key Points:
You select the smallest and swap it to the front.

Repeat this process for the rest of the array.

It's called "Selection" because you're selecting the minimum element each time.

⏱️ Time Complexity:

Best case: O(n²)

Worst case: O(n²)

Space complexity: O(1) (in-place)
*/