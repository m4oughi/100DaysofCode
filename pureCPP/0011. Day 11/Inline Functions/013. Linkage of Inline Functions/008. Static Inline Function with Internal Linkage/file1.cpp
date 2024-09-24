#include <iostream>

// Static inline function with internal linkage
static inline void printMessage() {
    std::cout << "This is file1.cpp's printMessage." << std::endl;
}

int main() {
    printMessage(); // Output: This is file1.cpp's printMessage.
    return 0;
}
