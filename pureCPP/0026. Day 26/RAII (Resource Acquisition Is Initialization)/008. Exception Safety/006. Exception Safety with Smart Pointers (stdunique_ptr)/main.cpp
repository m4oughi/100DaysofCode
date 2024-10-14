#include <iostream>
#include <memory>
#include <stdexcept>

void simulateException() {
    throw std::runtime_error("Simulated exception with smart pointers.");
}

int main() {
    try {
        std::unique_ptr<int[]> memory = std::make_unique<int[]>(10);
        std::cout << "Memory allocated using std::unique_ptr." << std::endl;
        simulateException();  // Exception thrown here.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Memory is automatically deallocated by std::unique_ptr.
}
