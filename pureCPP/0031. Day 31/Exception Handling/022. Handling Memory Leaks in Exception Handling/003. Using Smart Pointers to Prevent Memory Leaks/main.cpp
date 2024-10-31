#include <iostream>
#include <memory>
#include <stdexcept>

void safeFunction() {
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(10);  // Automatically managed memory
    std::cout << "Memory allocated using smart pointer." << std::endl;

    throw std::runtime_error("Error occurred!");  // Memory is automatically freed
}

int main() {
    try {
        safeFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
