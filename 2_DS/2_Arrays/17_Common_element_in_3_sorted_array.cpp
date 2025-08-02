/*
Input: arr1 = [1, 5, 10, 20, 40, 80] ,
       arr2 = [6, 7, 20, 80, 100] ,
       arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
Output: [20, 80]
Explanation: 20 and 80 are the only common elements in arr, brr and crr.

Input: arr1 = [1, 2, 3, 4, 5] ,
       arr2 = [6, 7] ,
       arr3 = [8,9,10]
Output: [-1]
Explanation: There are no common elements in arr, brr and crr.

Input: arr1 = [1, 1, 1, 2, 2, 2],
       B =    [1, 1, 2, 2, 2],
       arr3 = [1, 1, 1, 1, 2, 2, 2, 2]
Output: [1, 2]
Explanation: We do not need to consider duplicates
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> commonElement(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
       vector<int> ans;

       int i = 0,
           j = 0,
           k = 0;

       while (i < size1 && j < size2 && k < size3)
       {
              if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
              {
                     // Avoid duplicates
                     if (ans.empty() || ans.back() != arr1[i])
                     {
                            ans.push_back(arr1[i]);
                     }
                     i++;
                     j++;
                     k++;
              }

              else if (arr1[i] < arr2[j])
                     i++;

              else if (arr2[j] < arr3[k])
                     j++;

              else
                     k++;
       }
       if (ans.empty())
       {
              return {-1};
       }

       return ans;
}

int main()
{
       int arr1[] = {1, 5, 10, 20, 40, 80};
       int arr2[] = {6, 7, 20, 80, 100};
       int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

       int size1 = sizeof(arr1) / sizeof(arr1[0]);
       int size2 = sizeof(arr2) / sizeof(arr2[0]);
       int size3 = sizeof(arr3) / sizeof(arr3[0]);

       vector<int> ans = commonElement(arr1, arr2, arr3, size1, size2, size3);

       for (auto val : ans)
       {
              cout << val << " ";
       }

       return 0;
}