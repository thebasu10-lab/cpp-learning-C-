#include <iostream>
using namespace std;

int main() {
    int marks = 85;

    if (marks >= 40) {
        cout << "Passed" << endl;

        if (marks >= 90) {
            cout << "Grade: A+" << endl;
        } else if (marks >= 75) {
            cout << "Grade: A" << endl;
        } else {
            cout << "Grade: B" << endl;
        }
    } else {
        cout << "Failed" << endl;
    }
    return 0;
}
