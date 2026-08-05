#include <iostream>
using namespace std;

int main() {
    int i = 5;

    cout << "Initial i = " << i << endl << endl;

    cout << "Pre-increment  (++i) : " << ++i << endl;  // i becomes 6, then printed
    cout << "After ++i, i = " << i << endl << endl;

    cout << "Post-increment (i++) : " << i++ << endl;  // print 6, then i becomes 7
    cout << "After i++, i = " << i << endl << endl;

    cout << "Pre-decrement  (--i) : " << --i << endl;  // i becomes 6, then printed
    cout << "Post-decrement (i--) : " << i-- << endl;  // print 6, then i becomes 5
    cout << "Final i = " << i << endl;

    return 0;
}
