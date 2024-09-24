#include <iostream>

void modifyValue(const int* ptr) {
    int* nonConstPtr = const_cast<int*>(ptr); // Removing constness from pointer
    *nonConstPtr = 50; // Modifying the value
}

int main() {
    int value = 30;
    const int* ptr = &value;

    modifyValue(ptr);
    std::cout << "value: " << value << std::endl; // Prints 50 (undefined behavior, but shows the modification)
}
