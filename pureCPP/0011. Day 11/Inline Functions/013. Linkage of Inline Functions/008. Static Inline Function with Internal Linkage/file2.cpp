#include <iostream>

// Static inline function with the same name but different definition
static inline void printMessage() {
    std::cout << "This is file2.cpp's printMessage." << std::endl;
}

int main() {
    printMessage(); // Output: This is file2.cpp's printMessage.
    return 0;
}
