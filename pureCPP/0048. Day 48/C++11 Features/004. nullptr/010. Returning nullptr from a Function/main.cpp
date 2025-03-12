#include <iostream>

int* getPointer(bool returnNull) {
    if (returnNull) return nullptr;
    
    static int value = 42;
    return &value;
}

int main() {
    int* ptr = getPointer(true);

    if (ptr == nullptr) {
        std::cout << "Function returned nullptr." << std::endl;
    } else {
        std::cout << "Function returned a valid pointer: " << *ptr << std::endl;
    }

    return 0;
}
