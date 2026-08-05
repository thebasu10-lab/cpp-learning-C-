#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;

    cout << boolalpha;

    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x)     << endl;
    cout << "!y     : " << (!y)     << endl;

    // Practical example
    int age = 25;
    bool hasLicense = true;

    if (age >= 18 && hasLicense)
        cout << "\nYou can drive." << endl;
    else
        cout << "\nYou cannot drive." << endl;

    return 0;
}
