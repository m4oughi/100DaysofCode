#include <iostream>

void checkPointer(int* ptr) {
    if (ptr == nullptr) {
        std::cout << "Received nullptr" << std::endl;
    } else {
        std::cout << "Pointer is valid" << std::endl;
    }
}

int main() {
    int* ptr1 = nullptr;
    checkPointer(ptr1);

    return 0;
}
