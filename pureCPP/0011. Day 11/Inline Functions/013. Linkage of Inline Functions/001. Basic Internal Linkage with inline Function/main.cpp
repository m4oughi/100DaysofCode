#include <iostream>

// Inline function with internal linkage
inline void printMessage() {
    std::cout << "This is an inline function with internal linkage." << std::endl;
}

int main() {
    printMessage(); // Output: This is an inline function with internal linkage.
    return 0;
}
