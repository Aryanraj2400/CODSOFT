#include <iostream>
using namespace std;

int main() {
    char sign;
    int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter the Operation (+, -, *, /): ";
    cin >> sign;
    cout << "Enter Second Number: ";
    cin >> num2;

    switch (sign) {
        case '+':
            cout << "Result = " << num1 + num2;
            break;
        case '-':
            cout << "Result = " << num1 - num2;
            break;
        case '*':
            cout << "Result = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result = " << num1 / num2;
            } else {
                cout << "Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Enter Valid Operation";
    }

    return 0;
}
