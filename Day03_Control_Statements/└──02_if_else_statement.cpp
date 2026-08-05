#include <iostream>
using namespace std;

//if (condition) {
    // true path
//}// //else //{//
    // false path
//}//

int main() {
    int number = 7;

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}
