/*

1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 

*/



#include <iostream>
using namespace std;

void numberCrown(int n) {
    
    for(int i=0; i<n; i++){
        
    // First half of the pattern
        for(int j=0; j<i+1; j++){
            cout << j+1 <<" ";
        }

    // Spaces in between
        for(int s=0;  s<n*2-2-2*i; s++){
            cout << "  ";
        }

    // Second half of the pattern
        for (int j=i+1; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }

}

int main(){
    int n = 5;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    numberCrown(n);
    return 0;
}