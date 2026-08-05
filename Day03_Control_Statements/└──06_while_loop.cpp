#include <iostream>
using namespace std;
//while (condition) //{
    // body
}//

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    cout << endl;

    // Read until user enters 0
    int num;
    cout << "Enter numbers (0 to stop): ";
    cin >> num;
    while (num != 0) {
        cout << "You entered: " << num << endl;
        cin >> num;
    }
    return 0;
}
