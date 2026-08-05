#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Find maximum
    int max = (a > b) ? a : b;
    cout << "Maximum of " << a << " and " << b << " is " << max << endl;

    // Check even or odd
    int num = 15;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result << endl;

    // Nested ternary
    int marks = 75;
    string grade = (marks >= 90) ? "A" :
                   (marks >= 75) ? "B" :
                   (marks >= 50) ? "C" : "F";
    cout << "Marks " << marks << " → Grade " << grade << endl;

    return 0;
}
