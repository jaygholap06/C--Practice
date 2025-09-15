#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {       // base case
        return a;
    }
    return gcd(b, a % b);  // recursive call
}

int main() {
    int x, y;
    cout << "enter the first number: ";
    cin >> x;
    cout << "enter the second number: ";
    cin >> y;
    cout << "The GCD is: " << gcd(x, y) << endl;
    return 0;
}
