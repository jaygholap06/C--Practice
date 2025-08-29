#include<iostream>
using namespace std;
int main() {
    float a, b;
    char P;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> P;

    switch (P) {
        case '+':
            cout << "The addition is: " << a + b << endl;
            break;
        case '-':
            cout << "The difference is: " << a - b << endl;
            break;
        case '*':
            cout << "The multiplication is: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero not allowed!" << endl;
            } else {
                cout << "The division is: " << a / b << endl;
            }
            break;
        default:
            cout << "Invalid operator entered." << endl;
    }

    return 0;
}
