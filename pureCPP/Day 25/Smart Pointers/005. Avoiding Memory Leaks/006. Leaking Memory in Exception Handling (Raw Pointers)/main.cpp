#include <iostream>

void func() {
    int* ptr = new int(50);  // Dynamically allocated memory

    // Exception occurs before ptr is deleted, causing a memory leak
    throw std::runtime_error("Error occurred!");

    delete ptr;  // This will never be reached
}

int main() {
    try {
        func();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
