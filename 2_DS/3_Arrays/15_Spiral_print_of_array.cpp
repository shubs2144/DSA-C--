/*
matrix = [
    [1,  2,  3,  4],
    [5,  6,  7,  8],
    [9, 10, 11, 12],
    [13,14, 15, 16]
]
# Expected Output: [1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(int arr[4][4], int row, int col)
{
    vector<int> ans;

    int totalEle = col * row;
    int startingRow = 0, startingCol = 0;
    int endingRow = row - 1, endingCol = col - 1;

    int count = 0;

    while (count < totalEle)
    {
        // Traverse Top Row
        for (int i = startingCol; i <= endingCol && count < totalEle; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // Traverse Right Column
        for (int i = startingRow; i <= endingRow && count < totalEle; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // Traverse Bottom Row
        for (int i = endingCol; i >= startingCol && count < totalEle; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // Traverse Left Column
        for (int i = endingRow; i >= startingRow && count < totalEle; i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int row = 4;
    int col = 4;

    vector<int> result = spiralPrint(arr, row, col);

    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}

/*
 **simple short dry run** of spiral traversal for the matrix:

```
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
```

### 🌀 Spiral Order (Step-by-step):

1. **Top row**      → `1 2 3 4`
2. **Right col**    ↓ `8 12 16`
3. **Bottom row**   ← `15 14 13`
4. **Left col**     ↑ `9 5`

5. **Next inner layer**

   * Top row     → `6 7`
   * Right col   ↓ `11`
   * Bottom row  ← `10`

### ✅ Final Output:

```
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
```

*/