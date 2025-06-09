/*
🧩 Find the Unique Element (All Others Twice)
Problem: In an array where every element appears twice except one, find the unique one.

Input: arr = [2, 3, 5, 4, 5, 3, 4]
Output: 2
*/

#include <bits/stdc++.h>
using namespace std;


// #### Bruit force

int singleElement(vector<int>arr){
   for(int i=0; i<arr.size(); i++){
      int count = 0;
      for(int j=0; j<arr.size(); j++){
         if(arr[i] == arr[j]){
            count++;
         }
      }
     if(count == 1){
      return arr[i];
     }
   }
   return -1;
}

int main() {

   vector<int>arr{1,1,2,2,4};
   int find = singleElement(arr);
   cout << find ;
   return 0;
}


// #### optimize

int findSingle(vector<int>arr){
   int single = 0;
   for(int i=0; i<arr.size(); i++){
      single = single ^ arr[i];
   }
   return single;
}

int main() {
   vector<int>arr{3,5,5,4,6,3,4};
   int ans = findSingle(arr);
   cout << ans;
   return 0;
}


// #### for each

int findSingle(vector<int>arr){
   int single = 0;
   for(int val : arr){
      single = single ^ val;
   }
   return single;
}

int main() {
   vector<int>arr{3,5,5,4,6,3,4};
   int ans = findSingle(arr);
   cout << ans;
   return 0;
}


