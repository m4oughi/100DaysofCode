#include <iostream>
using namespace std;

int main() {
    unsigned int largeUnsigned = 4000000000;  // Larger than the maximum int
    int narrowedInt = largeUnsigned;  // Narrowing conversion to signed int

    cout << "Original unsigned int value: " << largeUnsigned << endl;
    cout << "Narrowed int value: " << narrowedInt << endl;  // Negative value due to overflow

    return 0;
}
