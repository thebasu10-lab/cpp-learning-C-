#include <iostream>
using namespace std;

int main() {
    // Valid identifiers
    int age = 25;
    int _count = 10;
    int studentMarks = 95;

    // Keywords cannot be used as identifiers
    // int float = 10;     // Error
    // int return = 5;     // Error

    cout << "Age: " << age << endl;
    cout << "_count: " << _count << endl;
    cout << "studentMarks: " << studentMarks << endl;

    return 0;
}
