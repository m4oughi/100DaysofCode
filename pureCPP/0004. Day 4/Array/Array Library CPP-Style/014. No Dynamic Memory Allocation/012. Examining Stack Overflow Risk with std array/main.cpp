#include <iostream>
#include <array>

// Large array to potentially cause a stack overflow
void createLargeArray() {
    std::array<int, 1000000> largeArr;
    std::cout << "Large array created on the stack." << std::endl;
}

int main() {
    try {
        createLargeArray();  // May cause a stack overflow due to large size
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}