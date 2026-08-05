#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 5;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;      // integer division
    cout << "a % b = " << a % b << endl;      // remainder

    // Floating point division
    double x = 17.0, y = 5.0;
    cout << "\nFloating division: 17.0 / 5.0 = " << x / y << endl;

    return 0;
}
