/*
Example for array [1, 2, 3, 4, 5] and K = 1:
After rotating the array by 2 positions, the result will be [5, 1, 2, 3, 4].
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int temp = arr[0];

    for(int i=1; i<size; i++){
        arr[i-1] = arr[i];
    }

    arr[size-1] = temp;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}