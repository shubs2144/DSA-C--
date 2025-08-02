#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    int transpose[3][3];

    // Transposing the arr
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = arr[i][j];  //Element at arr[i][j] becomes transpose[j][i]
        }
    }

    // Displaying the transpose
    cout << "Transpose:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}