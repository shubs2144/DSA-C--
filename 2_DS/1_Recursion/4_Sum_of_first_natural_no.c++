/* Program to find sum of first n natural numbers using recursion
Example: sum(5) = 1 + 2 + 3 + 4 + 5 = 15

*/


// #1 using formula#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum = n * (n + 1) / 2; // Formula for sum of first n natural numbers
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
}

// #2 using loop
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
}

// #3 using recursion
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sum(n) << endl;
    return 0;
}

/*

## Comparison with Other Methods
| **Method**       | Code                          | Time   | Space   |
|------------------|-------------------------------|--------|---------|
| **Recursion**    | `sum(n-1) + n`                | O(n)   | O(n)    |
| **Loop**         | `for(i=1;i<=n;i++) s += i;`   | O(n)   | O(1)    |
| **Formula**      | `n*(n+1)/2`                   | O(1)   | O(1)    |


Key Insights:
    --Recursion is intuitive but costly in space (stack usage)

    --Loop method balances readability and efficiency

    --Formula method is optimal for this specific problem

    --Recursion shines for problems without closed-form formulas

    --Base case (n=0) handles the termination condition naturally

Rule: Always prefer closed-form formulas or loops when available, but use recursion for naturally recursive problems (e.g., tree traversals).

*/


