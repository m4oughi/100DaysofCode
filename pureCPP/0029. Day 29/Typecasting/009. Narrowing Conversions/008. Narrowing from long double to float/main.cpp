#include <iostream>
using namespace std;

int main() {
    long double largePrecision = 123456789.123456789L;  // More precision than float can handle
    float narrowedFloat = largePrecision;  // Narrowing conversion

    cout << "Original long double: " << largePrecision << endl;
    cout << "Narrowed float: " << narrowedFloat << endl;  // Precision loss

    return 0;
}
