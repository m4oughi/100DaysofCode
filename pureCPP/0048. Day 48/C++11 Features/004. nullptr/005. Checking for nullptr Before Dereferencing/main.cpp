#include <iostream>

void safeDereference(int* ptr) {
    if (ptr) {
        std::cout << "Value: " << *ptr << std::endl;
    } else {
        std::cout << "Pointer is null, cannot dereference." << std::endl;
    }
}

int main() {
    int* ptr = nullptr;
    safeDereference(ptr);

    int value = 10;
    ptr = &value;
    safeDereference(ptr);

    return 0;
}
