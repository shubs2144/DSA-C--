
/*
optimal approach to find the missing number in an array of size n, where the numbers are from 1 to n+1

int missingNumber(int n[], int size) {
    int xor1 = 0; // XOR of all array elements
    int xor2 = 0; // XOR of all numbers from 1 to size+1

    for (int i = 0; i < size; i++) {
        xor1 ^= n[i];       // XOR all given elements
        xor2 ^= (i + 1);    // XOR all numbers from 1 to size
    }

    xor2 ^= (size + 1);     // Add the missing number (from 1 to size+1)

    return xor1 ^ xor2;     // Missing number = xor of above
}

Efficient approach to find the missing number in an array of size n, where the numbers are from 1 to n+1

int missingNumber(int n[], int size){
    int expected_sum = (size + 1) * (size + 2) / 2; // Calculate the expected sum of numbers from 1 to size
    int actual_sum = 0; // Initialize actual sum to 0
    for(int i = 0; i < size; i++){
        actual_sum += n[i]; // Calculate the actual sum of the array elements
    }
    return expected_sum - actual_sum; // Return the difference between expected and actual sum
}

Brute force approach to find the missing number in an array of size n, where the numbers are from 1 to n+1

int missingNumber(int n[], int size){
    // int flag; // Initialize flag to 0
    for(int i=1 ; i<=size ; i++){
       int flag = 0; // Reset flag for each number from 1 to size+1
        for(int j=0 ; j<size ; j++){
            if(n[j] == i){ // Check if the number is present in the array
                flag = 1; // Set flag to 1 if found
                break; // Break the inner loop
            }
        }
        if(flag == 0){ // If the number is not found in the array
            return i; // Return the missing number
        }
    }
    return -1; // Return -1 if no missing number is found (should not happen in this case)
};



optimal approach to find the largest number in an array of size n


int printLargest(int n[], int size) {
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (n[i] > maxi) { // Check if the current element is greater than the current maximum
            maxi = n[i]; // Update the maximum value
        }
    }
    return maxi; // Return the maximum value found in the array

}


better approach to find the second largest number in an array of size n
time complexity: O(2n) and space complexity: O(1)


int print2Largest(int n[], int size) {
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (n[i] > maxi) { // Check if the current element is greater than the current maximum
            maxi = n[i]; // Update the maximum value
        }
    }

    int second_maxi = INT_MIN; // Initialize second maximum to minimum integer value
    for (int i = 0; i < size; i++) {
        if (n[i] > second_maxi && n[i] != maxi) { // Check if the current element is greater than the second maximum and not equal to the maximum
            second_maxi = n[i]; // Update the second maximum value
        }
    }
    return second_maxi; // Return the second maximum value found in the array

}



int main() {
   int n[] = {1, 2, 3, 4, 6}; // Example array with a missing number (5)
   int size = sizeof(n)/sizeof(n[0]);

   int find = print2Largest(n, size); // Call the function to find the missing number
    cout << "The answer is: " << find << endl;

    return 0;
}


---> reverse string

#include <bits/stdc++.h>
using namespace std;

int main () {
    string name = "aba";

    string ans = name ;

    reverse(name.rbegin(), name.rend());

    if(ans == name ){
        cout << "palindrome";
    }

else {

cout << "not" ;
}

}

#### 2 pointer reverse

#include <bits/stdc++.h>
using namespace std;

int main(){
     string s = "lkndkndlkewd";
    int start = 0;
    int end = s.length()-1;

    while (start < end)
    {
       swap(start, end);
       start++;
       end--;
    }

    cout << s;

}


----------> Decimal to binary

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 10;

   int ans = 0;
   int i = 0;
   int place = 1;

   while( n != 0) {
      int bit = n & 1;

       ans += bit * place;
       n = n >> 1;
       place *= 10;
   }
   cout << ans;
}


---------> binary to digit


#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 110;


   int ans = 0 , place = 1;
   while (n != 0 ){
      int digit = n % 10;
      ans += digit * place;
      place *= 2;
      n = n/10;

   }

   cout << ans ;
}

-------------> reverse integer

int main() {

int n = 123;
int rev = 0;

while (n != 0){
   int mod = n % 10;
   rev = rev * 10 + mod;

   n /= 10;
}

cout << rev;

}


--------------> Sun of N nunber


int sumN(int n){
   int sum = 0;
   for(int i=0; i<n; i++){
      sum += i;
   }
   return sum;
}


-------------> Factorial

int main() {
   cout << sumN(20) << endl;
}

int fact(int n){
   int factorial = 1;
   for(int i=n; i>=1; i--){
      factorial = factorial * i;
   }
   return factorial;
}

int main() {
   int ans = fact(5);
   cout << ans;
   return 0;
}

----> calculate sum 0f digit on number


int main() {
   int n = 1237;
   int ans = 0;
   while (n != 0) {
      int rem = n % 10;
      ans = ans + rem;
      n/=10;
   }
   cout << ans;
}


-------> Ncr


int fact(int n){
   int facto = 1;
   for(int i=n; i >= 1; i--){
      facto *= i;
   }
   return facto;
}

int main () {
   int n = 8 , r = 2;

   int ans = fact(n) / (fact(r) * fact(n-r));
   cout << ans ;
}

------> Smallest and Largest

int main() {
   int arr [] = {2,4,5,6,7,2,1,8,4, 55};
   int size = 10;

   int maxi = INT_MIN;

   for(int i=0; i<size; i++) {
      if(arr[i] > maxi){
         maxi = arr[i];
      }
   }
   cout << maxi;
}


-----> liner search

bool findTarget(int arr[], int size, int target){
   for(int i=0; i<size; i++){
      if(arr[i] == target){
         return true;
      }
   }
   return false;
}

int main() {
   int arr[] = {1,2,3,45,6,6,7,8,4,2};
   int size = sizeof(arr)/ sizeof(int);
   int target = 7;

   if(findTarget(arr, size, target)) {
     cout << "found " ;
   }
 else {
     cout << "not found ";
 }
}


-----> find single element in vector

#### Bruit force

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


#### optimize

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

#### for each

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



--------> find subarray

#### formaule === n + (n+1) / 2;


int main() {
   int arr[] = {1,2,3,4,5};
   int size = 5;

   for(int start=0; start<size; start++){
      for(int end=start; end<size; end++){
         for(int i=start; i<=end; i++){
            cout << arr[i];
         }
         cout << " ";
      }
      cout << endl;
   }
}

------> maximum of subarray sum

int main() {
   vector<int>arr{1,2,3,4,5};
   int maxSum = INT_MIN;
   for(int start=0; start<arr.size(); start++){
      int currSum = 0;
      for(int end=0; end<arr.size(); end++){
         currSum += arr[end];
      }
      maxSum = max(currSum, maxSum);
   }
   cout << maxSum;
}


### optimize way

#### Kadane's algotithm

int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = 0;
        for(int val : nums){
            curSum += val;
            maxSum = max(curSum , maxSum);
            if(curSum < 0) {
                curSum =0;
            }
        }
        return maxSum;
    }


------> pair sum

### bruit force

int main() {
vector<int>arr{1,2,3,4,5,6,7};
int sum = 5;
for(int i=0; i<arr.size(); i++){
   int element1 = arr[i];
   for(int j=i+1; j<arr.size(); j++){
      if(element1 + arr[j] == sum){
         cout << "( " << element1 << " , " << arr[j] << " )" << endl;
      }
   }
}
return -1;
}



#### optimized

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = arr.size() - 1;
    int target = 7;

    while (start < end) {
        int sum = arr[start] + arr[end];

        if (sum == target) {
            cout << "( " << arr[start] << " , " << arr[end] << " )" << endl;
            start++;
            end--; // move both pointers to look for next unique pair
        } else if (sum > target) {
            end--;
        } else {
            start++;
        }
    }

    return 0;
}


-----> Mejority element

###  find the majority element (an element that appears more than n/2 times).

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 1, 1, 1, 6};
    int n = arr.size() / 2;

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;

       #### count how many times arr[i] appears

        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n) {
            cout << "Majority element: " << arr[i] << endl;
            break; // once found, no need to continue
        }
    }

    return 0;
}


#### Littele optimized

int main() {
   vector<int>arr{1,2,2,2,2,6};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int fre = 1;
    int ans = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            fre++;
        }
        else{
            fre = 1;
            ans = arr[i];
        }
        if(fre > n/2){
            cout << ans;
        }
    }

   return 0;
    }


    ##### Moores voting algorithm


int main()
{
   vector<int> arr{1, 2, 2, 2, 2, 6};
   int n = arr.size();

   int freq = 0;
   int ans = 0;

   for (int i = 0; i < n; i++)
   {
      if (freq == 0)
      {
         ans = arr[i];
      }
      if (ans == arr[i])
      {
         freq++;
      }
      else
      {
         freq--;
      }
   }
   cout << ans;
   return 0;
}


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr{1, 2, 2, 2, 2, 6};
   int n = arr.size();

   int freq = 0;
   int ans = 0;

   for (int i = 0; i < n; i++)
   {
      if (freq == 0)
      {
         ans = arr[i];
      }
      if (ans == arr[i])
      {
         freq++;
      }
      else
      {
         freq--;
      }
   }
   cout << ans;
   return 0;
}
