#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cout << i * j << "\t";
        }
        cout << endl;
        cout << "\n3. Inverted triangle:" << endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;

        /*
=============================================================
  Topic 08 : Nested Loops in C++
=============================================================

Theory
------
A nested loop means placing one loop inside another loop.
The inner loop runs completely for every single iteration of the outer loop.

Common uses:
- Printing patterns (stars, numbers, pyramids)
- Working with 2D data (matrices, tables)
- Generating combinations / permutations

Important:
- Time complexity becomes O(n²) or higher → can be slow for large n.
- Always make sure the inner loop has a proper terminating condition.

*/

#include <iostream>
using namespace std;

int main() {
    // 1. Simple rectangle of stars
    cout << "1. Rectangle of stars (4 rows × 6 columns):" << endl;
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 6; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Right-angled triangle
    cout << "\n2. Right-angled triangle:" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 3. Inverted triangle
    cout << "\n3. Inverted triangle:" << endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 4. Number pyramid
    cout << "\n4. Number pyramid:" << endl;
    for (int i = 1; i <= 5; i++) {
        // spaces
        for (int s = 1; s <= 5 - i; s++) {
            cout << "  ";
        }
        // numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // 5. Multiplication table (1 to 5)
    cout << "\n5. Multiplication tables (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Table of " << i << ": ";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
=============================================================
  Sample Output
=============================================================

1. Rectangle of stars (4 rows × 6 columns):
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 

2. Right-angled triangle:
* 
* * 
* * * 
* * * * 
* * * * * 

3. Inverted triangle:
* * * * * 
* * * * 
* * * 
* * 
* 

4. Number pyramid:
        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 

5. Multiplication tables (1 to 5):
Table of 1: 1 2 3 4 5 6 7 8 9 10 
Table of 2: 2 4 6 8 10 12 14 16 18 20 
Table of 3: 3 6 9 12 15 18 21 24 27 30 
Table of 4: 4 8 12 16 20 24 28 32 36 40 
Table of 5: 5 10 15 20 25 30 35 40 45 50 
=============================================================
*/
        
    }
    }
    return 0;
}
