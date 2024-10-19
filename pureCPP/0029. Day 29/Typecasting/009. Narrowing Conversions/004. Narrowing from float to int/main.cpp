#include <iostream>
using namespace std;

int main() {
    float largeFloat = 123.987f;
    int intValue = largeFloat;  // Narrowing conversion: fractional part lost

    cout << "Original float value: " << largeFloat << endl;
    cout << "Narrowed int value: " << intValue << endl;  // 123

    return 0;
}
