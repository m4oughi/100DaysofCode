#include <iostream>
#include <memory>

void func() {
    std::unique_ptr<int> ptr = std::make_unique<int>(60);  // Automatically managed
    throw std::runtime_error("Error occurred!");  // Memory will be automatically deallocated
}

int main() {
    try {
        func();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
