/*
Input : arr1[] = [1, 2], arr2[] = [2, 1]
Output : 33
Explanation: arr1[]=[1,2] number represented by first array is 12. arr2[] = [2, 1] number represented by second array is 21. Sum = 12 + 21 = 33.
Input : arr1[] = [9, 5, 4, 9], arr2[] = [2, 1, 4] 
Output : 9763 
Explanation : sum of 9549 and 214 is 9763. 
*/

#include <bits/stdc++.h>
using namespace std;

string calc_Sum(vector<int> &arr1, vector<int> &arr2)
{
    string ans;
    int carry = 0;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    while (i >= 0 && j >= 0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum / 10;
        i--;
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry + '0');
    }

    while (ans.size() - 1 == 0)
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    return ans;
};

int main()
{
    vector<int> arr1{1, 2, 3, 5};
    vector<int> arr2{4, 5, 7};

    string ans = calc_Sum(arr1, arr2); 

    cout << ans << endl;

    return 0;
}