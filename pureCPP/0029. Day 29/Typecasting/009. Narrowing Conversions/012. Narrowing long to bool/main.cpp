#include <iostream>
using namespace std;

int main() {
    long largeValue = 123456789L;
    bool narrowedBool = largeValue;  // Narrowing conversion

    cout << "Original long value: " << largeValue << endl;
    cout << "Narrowed bool value: " << narrowedBool << endl;  // true (1)

    return 0;
}
