/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0; // Start with 0 for even rows
        else
            start = 1; // Start with 1 for odd rows
            
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    printPattern(n);
    return 0;
}