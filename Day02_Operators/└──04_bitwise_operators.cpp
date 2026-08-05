#include <iostream>
using namespace std;

int main() {
    int a = 5;   // binary: 0101
    int b = 3;   // binary: 0011

    cout << "a = " << a << " (binary 0101)" << endl;
    cout << "b = " << b << " (binary 0011)" << endl << endl;

    cout << "a & b  = " << (a & b)  << "  (AND)" << endl;   // 0001 = 1
    cout << "a | b  = " << (a | b)  << "  (OR)"  << endl;   // 0111 = 7
    cout << "a ^ b  = " << (a ^ b)  << "  (XOR)" << endl;   // 0110 = 6
    cout << "\~a     = " << (\~a)     << "  (NOT)" << endl;   // ...1010 (two's complement)

    cout << "\na << 1 = " << (a << 1) << "  (Left shift by 1 → multiply by 2)" << endl;
    cout << "a >> 1 = " << (a >> 1) << "  (Right shift by 1 → divide by 2)" << endl;

    return 0;
}
