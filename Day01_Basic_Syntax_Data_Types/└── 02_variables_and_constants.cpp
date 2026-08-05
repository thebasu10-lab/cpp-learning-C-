#include <iostream>
using namespace std;

int main() {
    // Variable (value can change)
    int score = 100;
    cout << "Initial score: " << score << endl;
    score = 150;
    cout << "Updated score: " << score << endl;

    // Constant using const
    const int MAX_SCORE = 100;
    cout << "Maximum score: " << MAX_SCORE << endl;
    // MAX_SCORE = 200;   // Error: cannot modify const

    // Constant using #define
    #define PI 3.14159
    cout << "Value of PI: " << PI << endl;

    return 0;
}
