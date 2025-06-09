#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start];
            break;
        }
        else
        {
            cout << arr[start] << " ";
            start++;

            cout << arr[end] << " ";
            end--;
        }
    }
}