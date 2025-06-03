#include<bits/stdc++.h>
using namespace std;


int main() {

    int arr[] = {1,8,4,3,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int round=1; round < size; round++){
        for(int j=0; j<size-round; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}




/*
✅ Simple & Short Explanation of Bubble Sort:

Bubble Sort is a sorting algorithm that:

Repeatedly compares each pair of adjacent elements & Swaps them if they are in the wrong order , This process is repeated until the array is fully sorted

🔁 Think of it like bubbling up the largest element to the end in each pass.

🧠 Step-by-Step Dry Run (Bubble Sort):

Digits: 9 8 3 4
Index : 0 1 2 3

🔁 Pass 1 (i = 0):
Compare 9 > 8 → Swap → 8 9 3 4

Compare 9 > 3 → Swap → 8 3 9 4

Compare 9 > 4 → Swap → 8 3 4 9

✅ Largest number "9" has bubbled to the end.


🧠 Time Complexity:

Worst case: O(n²)

Best case (already sorted): O(n) (with optimization)
*/