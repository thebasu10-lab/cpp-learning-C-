#include <iostream>
using namespace std;
//do {
    // body//}// //while (condition);//

int main() {
    int i = 1;
    do {
        cout << i << " ";
        ++i;
    } while (i <= 5);
    cout << endl;

    // Menu example
    char choice;
    do {
        cout << "\n1. Option A\n2. Option B\n0. Exit\nChoice: ";
        cin >> choice;
        // process choice...
    } while (choice != '0');
    return 0;
}
