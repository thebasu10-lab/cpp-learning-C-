#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << boolalpha;   // print true/false instead of 1/0

    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b)  << endl;
    cout << "a < b  : " << (a < b)  << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    return 0;
}
