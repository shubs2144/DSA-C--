/*
Example for array [1, 2, 3, 4, 5] and K = 1:
After rotating the array by 2 positions, the result will be [5, 1, 2, 3, 4].
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int first = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = first;

    for (auto val : arr)
    {
        cout << val << " ";
    }
}