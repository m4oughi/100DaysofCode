#include <iostream>
using namespace std;

int main() {
    unsigned long long largeValue = 5123456789ULL;  // Larger than 8-bit
    unsigned char smallValue = largeValue;  // Narrowing conversion

    cout << "Original unsigned long long value: " << largeValue << endl;
    cout << "Narrowed unsigned char value: " << static_cast<int>(smallValue) << endl;  // Truncated value

    return 0;
}
