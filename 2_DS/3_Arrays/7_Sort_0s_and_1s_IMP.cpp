/*

Input:  arr = [1, 0, 1, 0, 1, 0]
Output: [0, 0, 0, 1, 1, 1]

*/

#include <iostream>
#include <vector>
using namespace std;

void  sortzero_one(vector<int>& arr){
    int start = 0 ;
    int end = arr.size()-1;

    while(start < end){
        if(arr[start] == 1){
            swap(arr[start], arr[end]);
                end--;
        }
        else {
            start++;
        }
    }
}

int main() {
     vector<int> arr = {1, 0, 1, 0, 1, 0};
     sortzero_one(arr);

    for(auto val: arr){
        cout << val << " ";
    }

    return 0;
}