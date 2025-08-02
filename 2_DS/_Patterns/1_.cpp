/*

*
**
***
**
*

*/

#include <iostream>
using namespace std;

void nStarTriangle(int n) {

    // First half of the pattern
    for(int i=0; i<n; i++){
		for(int j=0; j<i+1 ; j++){
			cout << "*" ;
		}
        cout << endl;
    }
    //
    for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1 ; j++){
			cout << "*";
		}
        cout << endl;
    }
}

int main() {
    int n = 5;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    nStarTriangle(n);
    return 0;
}
// **Explanation:** 
// - The first loop prints the first half of the triangle, where the number of stars increases with each row.
// - The second loop prints the second half of the triangle, where the number of stars decreases with each row.
