#include <iostream>
using namespace std;

void modifyValue(const int* ptr) {
    int* modifiablePtr = const_cast<int*>(ptr);  // Remove constness using const_cast
    *modifiablePtr = 100;
}

int main() {
    const int value = 42;
    cout << "Before modification: " << value << endl;
    modifyValue(&value);
    cout << "After modification: " << value << endl;  // Undefined behavior
    return 0;
}
