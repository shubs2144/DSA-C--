/*

Example for n = 10:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34   
(Writing: Start with 0 and 1 → 0+1=1 → 1+1=2 → 1+2=3 → 2+3=5 → and so on.)

*/

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << ans << endl;

    return 0;
}

// if print all no 

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout << t1 << " " ;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main(){
    int n;
    cout << "Enter the no : ";
    cin >> n;

    fib(n);
    return 0;
}