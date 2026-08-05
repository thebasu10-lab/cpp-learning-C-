#include <iostream>
using namespace std;

int main() {
    // Print 1 to 5
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Sum of first n numbers
    int n = 10, sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
