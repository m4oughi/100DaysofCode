#include <iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = 77;
}

int main() {
    const int value = 10;
    void (*funcPtr)(int*) = modifyValue;

    funcPtr(const_cast<int*>(&value));  // Remove const and pass to a function pointer
    cout << "Modified value: " << value << endl;  // May result in undefined behavior
    return 0;
}
