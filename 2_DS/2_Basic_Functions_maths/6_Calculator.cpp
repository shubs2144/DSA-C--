#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Cannot divide by zero!" << endl;
        } else {
            cout << "Result: " << num1 / num2 << endl;
        }
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
