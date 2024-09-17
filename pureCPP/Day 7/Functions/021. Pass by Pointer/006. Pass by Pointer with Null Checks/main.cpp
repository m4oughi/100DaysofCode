#include <iostream>

void safePrint(const int* ptr) {
    if (ptr) {
        std::cout << "Value: " << *ptr << std::endl;
    } else {
        std::cout << "Pointer is null" << std::endl;
    }
}

int main() {
    int num = 42;
    int* validPtr = &num;
    int* nullPtr = nullptr;

    safePrint(validPtr);  // Valid pointer
    safePrint(nullPtr);   // Null pointer
    
    return 0;
}
