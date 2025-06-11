#include <bits/stdc++.h>
// using namespace std;

// Factorial of small no 

// 5! = 1*2*3*4*5 = 120

/*
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
*/

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