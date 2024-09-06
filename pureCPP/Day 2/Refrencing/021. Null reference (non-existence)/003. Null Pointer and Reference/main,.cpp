#include <iostream>

void processPointer(int* ptr) {
    if (ptr) {
        std::cout << "Pointer points to: " << *ptr << std::endl;
    } else {
        std::cout << "Pointer is null." << std::endl;
    }
}

int main() {
    int* nullPtr = nullptr;
    processPointer(nullPtr);  // Pointer is null

    return 0;
}
