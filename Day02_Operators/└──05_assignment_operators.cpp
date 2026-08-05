#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Initial a = " << a << endl;

    a += 5;   cout << "a += 5  → " << a << endl;
    a -= 3;   cout << "a -= 3  → " << a << endl;
    a *= 2;   cout << "a *= 2  → " << a << endl;
    a /= 4;   cout << "a /= 4  → " << a << endl;
    a %= 3;   cout << "a %= 3  → " << a << endl;

    a = 12;
    a &= 7;   cout << "\na = 12; a &= 7  → " << a << endl;   // 12 & 7 = 4
    a |= 2;   cout << "a |= 2        → " << a << endl;       // 4 | 2 = 6

    return 0;
}
