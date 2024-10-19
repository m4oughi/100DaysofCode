#include <iostream>
using namespace std;

void modifyValue(const int* ptr) {
    int* modifiablePtr = const_cast<int*>(ptr);  // Remove const
    *modifiablePtr = 100;
}

int main() {
    int x = 50;
    modifyValue(&x);
    cout << "Modified value: " << x << endl;
    return 0;
}
