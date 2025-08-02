/*

A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself. 
Example: Is 28 a perfect number?
The divisors of 28 are 1, 2, 4, 7, 14.
Sum of divisors: 1 + 2 + 4 + 7 + 14 = 28, so 28 is a perfect number.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the No : ";
    cin >> n;

    int ans = 0;

    for(int i=1; i<n; i++){
        if(n % i == 0){
            ans += i;
        }
    }
    if(ans == n) cout << n << " is a perfect number.";
  else
    cout << n << " is not a perfect number.";
  return 0;
}