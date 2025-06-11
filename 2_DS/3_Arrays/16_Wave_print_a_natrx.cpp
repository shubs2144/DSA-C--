/*
1  2  3
4  5  6
7  8  9

Wave Output:
1 4 7 8 5 2 3 6 9

*/

#include <bits/stdc++.h>
using namespace std;

/*
Wave-col wise print

vector<int> wavePrint(int arr[][4], int row, int col)
{
    vector<int> ans;

    for (int startCol = 0; startCol < col; startCol++)
    {
        if (startCol % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                ans.push_back(arr[i][startCol]); // Go top to bottom
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                ans.push_back(arr[i][startCol]); // Go bottom to top
            }
        }
    }
    return ans;
}
*/

// Wave-row wise print

vector<int> wavePrint(int arr[][4], int row, int col)
{
    vector<int> ans;

    for (int startingRow = 0; startingRow < col; startingRow++)
    {
        if (startingRow % 2 == 0)
        {
            for (int i = 0; i < col; i++)
            {
                ans.push_back(arr[startingRow][i]); // Go top to bottom
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                ans.push_back(arr[startingRow][i]); // Go bottom to top
            }
        }
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

    vector<int> result = wavePrint(arr, row, col);

    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}

