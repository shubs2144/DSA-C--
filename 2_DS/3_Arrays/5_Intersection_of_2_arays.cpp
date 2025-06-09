/*
🔗 Intersection of Two Arrays
Problem: Return the common elements from two arrays.

Input: arr1 = [1, 2, 2, 3], arr2 = [2, 2, 4]
Output: [2, 2]
*/



#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{2,6,4,5,9,6};
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                ans.push_back(arr[i]);
                arr[i] = -1;
            }
        }
    }
    for(auto val: ans){
        cout << val << " ";
    }
}