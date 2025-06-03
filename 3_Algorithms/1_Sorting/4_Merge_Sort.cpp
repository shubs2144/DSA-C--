/*
✅ Merge Sort Explanation (Simple & Clear)
Merge Sort is a Divide and Conquer algorithm. It divides the array into halves, sorts them, and then merges the sorted halves.

🔁 Steps of Merge Sort
Divide the array into two halves.

Recursively sort both halves.

Merge the sorted halves to get a fully sorted array.

🧠 Intuition
Imagine breaking the array into small parts until each part has only 1 element (which is always sorted). Then you combine (merge) them in sorted order step-by-step.

📦 Example
Array: [38, 27, 43, 3, 9, 82, 10]


1. Split:          [38, 27, 43, 3, 9, 82, 10]
                  /                           \
            [38, 27, 43, 3]               [9, 82, 10]
            /           \                 /       \
       [38, 27]       [43, 3]         [9, 82]     [10]
       /     \        /    \         /    \        |
     [38]   [27]    [43]  [3]     [9]    [82]     [10]

2. Merge back:
   [27, 38]   [3, 43]       [9, 82]      [10]
       ↓         ↓             ↓          ↓
     [3, 27, 38, 43]       [9, 10, 82]

3. Final merge:
     [3, 9, 10, 27, 38, 43, 82]

⚙️ Time Complexity

Best, Average, Worst: O(n log n)

Space Complexity: O(n) (because it needs temporary arrays for merging)

✅ When to Use Merge Sort?

When stable sorting is required.

For linked lists (since it doesn’t need random access).

When sorting large datasets where predictable performance is preferred.


*/