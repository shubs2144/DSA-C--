/*
 🤝 Union of Two Arrays
Problem: Return the union of two arrays (unique elements from both).

Input: arr1 = [1, 2, 3], arr2 = [3, 4, 5]
Output: [1, 2, 3, 4, 5]
*/


#include <bits/stdc++.h>

using namespace std;


int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{2,6,4,5,9,6};
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
         ans.push_back(arr[i]);
    }
        for(int j=0; j<brr.size(); j++){
            ans.push_back(brr[j]);
        }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}

//ignore duplicate numbers

/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> arr{1, 2, 3, 4, 6, 8};
    vector<int> brr{2, 6, 4, 5, 9, 6};
    set<int> uniqueSet; // Will store only unique values

### Insert elements from both arrays

    for (int num : arr) {
        uniqueSet.insert(num);
    }

    for (int num : brr) {
        uniqueSet.insert(num);
    }

### Print unique elements (union without duplicates)

    for (int num : uniqueSet) {
        cout << num << " ";
    }

    return 0;
}

*/