/*
Example: Find GCD of 36 and 60:
The common divisors of 36 and 60 are 1, 2, 3, 4, 6, 9, 12, 18, 36 and 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.
The largest common divisor is 12.
*/

#include<bits/stdc++.h>
using namespace std;


// Brute force solution 
// TC --> O(min(n1, n2))

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 

    int gcd = 1;

    for(int i=1; i<min(n1, n2); i++){
        if((n1 % i == 0) && (n2 % i == 0)){
            gcd = i;
        }
    }
    cout << "  GCD is : " << gcd ;
    return 0;
}

//Method 2 --> # optimize solution # div from reverse 

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 


    for(int i=min(n1, n2); i>=1; i--){
        if((n1 % i == 0) && (n2 % i == 0)){
            cout << "  GCD is : " << i ;
            break;
        }
    }
    return 0;
}


/*

How It Works:
Input two numbers → User enters n1 and n2.

Start from the smaller of the two numbers (using min(n1, n2)), because the GCD can't be bigger than the smaller number.

Loop from that number down to 1:

In each step, check if both n1 and n2 are divisible by the current number i.

The first number that satisfies this is the GCD.

Print the GCD and exit the loop immediately (break).

🧠 Example:
Let’s say n1 = 12, n2 = 18

min(12, 18) = 12

Loop starts from 12 down to 1:

12 ❌ (12 % 12 = 0, but 18 % 12 ≠ 0)

6 ✅ (both divisible by 6)

So, GCD = 6


*/

//-----------------------------------------------------------------------------------------------------------------------------------

/* Method 3 ---> Euclidean Algorithm 

 TC --> O(log(min(a, b))) --< Very fast

GCD(a,b)=GCD(b, a % b)
 
This recursive formula keeps reducing the problem until b=0, at which point a is the GCD.
*/

int main(){
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2; 

    while( n1 > 0 && n2 > 0){
        if(n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

    if( n1 == 0) {
        cout << n2 << " is GCF  ";
    }else {
        cout << n1 << " is GCF  ";
    }

}



/*
### Detailed explaination of above code 

This C++ program calculates the GCF (Greatest Common Factor), also known as GCD (Greatest Common Divisor), of two numbers using the Euclidean Algorithm. Let's break it down:

---

### ✅ Code Explanation

int main() {
    int n1 , n2;
    cout << "enter N1 : ";
    cin >> n1;
    cout << "enter N2 : ";
    cin >> n2;

 The program prompts the user to input two numbers `n1` and `n2`.

---

    while( n1 > 0 && n2 > 0){
        if(n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

 This is the Euclidean algorithm:

   While both numbers are greater than 0, replace the larger number with the remainder when the larger number is divided by the smaller one.
   Repeat until one of the numbers becomes 0.
   At this point, the other number (the non-zero one) is the GCD/GCF.

---

    if( n1 == 0) {
        cout << n2 << " is GCF  ";
    } else {
        cout << n1 << " is GCF  ";
    }

 If `n1` is 0, then `n2` is the GCF, and vice versa.

---

### 🧠 Example Walkthrough

Suppose user inputs:

n1 = 24, n2 = 18

Steps:

 24 > 18 → 24 % 18 = 6 → n1 = 6, n2 = 18
 18 > 6 → 18 % 6 = 0 → n2 = 0

Now `n2 = 0`, so GCF = `n1 = 6`

Output:

6 is GCF

---

### ✅ Summary:

 This is an efficient method to find the GCF using repeated division.
 Time complexity is O(log min(n1, n2)).


*/