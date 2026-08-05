#include <iostream>
using namespace std;

int main() {
    short int s = 32000;
    unsigned int u = 4000000000;
    long int l = 1234567890L;
    long long int ll = 9223372036854775807LL;
    unsigned long long ull = 18446744073709551615ULL;

    cout << "short int: " << s << endl;
    cout << "unsigned int: " << u << endl;
    cout << "long int: " << l << endl;
    cout << "long long int: " << ll << endl;
    cout << "unsigned long long: " << ull << endl;

    return 0;
}
