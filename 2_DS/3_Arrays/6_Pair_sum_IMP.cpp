/*

Input:
arr1 = [1, 2, 3]
arr2 = [3, 4, 5]
target = 6

Output:
(1, 5)
(2, 4)
(3, 3)

*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{2,6,4,5,9,6};
    int target = 9;

    for(auto val: arr){
        for(auto val2: brr){
            if(val + val2 == target){
                cout << "(" << val << "," << val2 << ")" << endl;
            }
        }
    }
}