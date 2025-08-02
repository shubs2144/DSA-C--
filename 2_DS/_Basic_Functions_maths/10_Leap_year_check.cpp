/*

A leap year is a year that is divisible by 4, but not divisible by 100, unless it is also divisible by 400.

This code checks whether a given year is a leap year based on this rule.
Example:
2020 is a leap year (divisible by 4).
1900 is not a leap year (divisible by 100 but not 400).
2000 is a leap year (divisible by 400).

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;

    cout << "Enter Year:" << endl;
    cin >> year;

    if (year % 400 == 0)
        cout << year << " is a Leap Year";

    else if (year % 4 == 0 && year % 100 != 0)
        cout << year << " is a Leap Year";

    else
        cout << year << " is not a Leap Year";

    return 0;
}