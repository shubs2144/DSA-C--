/*
Problem: Reverse the elements of an array.

Input: arr = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
*/

#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=size-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
}
*/

// ### ---> using swap 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    };

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
