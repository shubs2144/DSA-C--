#include <bits/stdc++.h>
// using namespace std;

// Factorial of small no 

// 5! = 1*2*3*4*5 = 120


void factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout << fact;
}

int main() {
    int n = 5;
    factorial(n);
    return 0;
}


// Factorial of large no , above code is not supporting large no , above 13 , beacuse of INT 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int n) {
    vector<int> ans;
    ans.push_back(1);  // Initialize with 1 (0! = 1, 1! = 1)
    
    for(int i = 2; i <= n; i++) {
        int carry = 0;
        for(int j = 0; j < ans.size(); j++) {
            int product = ans[j] * i + carry;
            ans[j] = product % 10;
            carry = product / 10;
        }
        
        while(carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    reverse(ans.begin(), ans.end()); 
    return ans;
}

int main() {
    int n = 50;
    vector<int> ans = factorial(n);
    
    cout << n << "! = ";
    for(int digit : ans) {
        cout << digit;
    }
    cout << endl;
    
    return 0;
}


/*

Let's dry run the  `factorial(5)` function (instead of 50, for simplicity). The logic is the same for any `n`.



### 📌 Initial Setup:

 Input: `n = 5`
 `ans` = `{1}`  → This represents 1 (initial value for 0! or 1!)
 We loop from `i = 2` to `5`



### 🔁 Step-by-step Loop:



#### ✅ `i = 2`

 Multiply each digit in `ans` with 2:

   `1 * 2 = 2`, `ans[0] = 2`
 Result: `ans = {2}`



#### ✅ `i = 3`

 Multiply each digit with 3:

   `2 * 3 = 6`, `ans[0] = 6`
 Result: `ans = {6}`



#### ✅ `i = 4`

 Multiply:

   `6 * 4 = 24`, `ans[0] = 4`, `carry = 2`
 Carry remains:

   Add `carry % 10 = 2` → `ans = {4, 2}`
 Now `ans` (in reverse): 24



#### ✅ `i = 5`

 Multiply each digit with 5:

   `4 * 5 = 20`, `ans[0] = 0`, `carry = 2`
   `2 * 5 = 10 + 2 = 12`, `ans[1] = 2`, `carry = 1`
 Carry remains:

   Add `carry % 10 = 1` → `ans = {0, 2, 1}`
 Now `ans` (in reverse): 120



### 🔄 `reverse(ans)`:

 Final vector: `{1, 2, 0}`
 Output: `5! = 120`



### ✅ Summary:

 Each step multiplies the current number with the result stored as digits in a vector.
 Handles large numbers by storing digits individually.
 Output for `factorial(50)` will be a vector of \~65 digits.

Let me know if you want the dry run for `n = 6` or `n = 10` too!


*/