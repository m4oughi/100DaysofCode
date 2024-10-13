#include <iostream>
using namespace std;

void checkPointer(int* ptr) {
    if (ptr == nullptr) {
        cout << "Pointer passed to function is null." << endl;
    } else {
        cout << "Pointer points to value: " << *ptr << endl;
    }
}

int main() {
    int* ptr = nullptr; // null pointer
    checkPointer(ptr);  // pass null pointer to function

    int value = 10;
    checkPointer(&value); // pass valid pointer

    return 0;
}
