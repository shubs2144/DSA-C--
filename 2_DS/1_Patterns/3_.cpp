/*

1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28

*/

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    int c = 1;
    for(int i=0; i<n; i++){
        for (int j=0 ; j<i+1; j++){
            cout << c << " ";
            // Increment the counter
            c++;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    nNumberTriangle(n);
    return 0;
}