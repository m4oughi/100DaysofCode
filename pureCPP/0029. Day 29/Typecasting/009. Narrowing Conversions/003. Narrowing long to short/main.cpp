#include <iostream>
using namespace std;

int main() {
    long largeNumber = 70000;  // Outside short's range (-32768 to 32767)
    short narrowedNumber = largeNumber;  // Narrowing conversion

    cout << "Original long value: " << largeNumber << endl;
    cout << "Narrowed short value: " << narrowedNumber << endl;  // Unexpected result due to overflow

    return 0;
}
