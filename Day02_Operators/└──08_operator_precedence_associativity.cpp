#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;

    // Multiplication has higher precedence than addition
    cout << "a + b * c = " << a + b * c << endl;          // 5 + 150 = 155

    // Parentheses change the order
    cout << "(a + b) * c = " << (a + b) * c << endl;      // 15 * 15 = 225

    // Relational and logical
    cout << boolalpha;
    cout << "a < b && b < c : " << (a < b && b < c) << endl;

    // Assignment is right-associative
    int x, y, z;
    x = y = z = 100;     // equivalent to x = (y = (z = 100))
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    // Mixed example
    int result = 2 + 3 * 4 > 10 && 5 != 0;   // (2 + 12) > 10 && true → true && true → true
    cout << "2 + 3 * 4 > 10 && 5 != 0  →  " << result << endl;

    return 0;
}
