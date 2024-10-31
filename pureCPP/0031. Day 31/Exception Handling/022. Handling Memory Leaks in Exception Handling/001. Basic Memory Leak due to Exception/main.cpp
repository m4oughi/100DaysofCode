#include <iostream>
#include <stdexcept>

void riskyFunction() {
    int* arr = new int[10];  // Dynamically allocated memory
    std::cout << "Memory allocated." << std::endl;

    throw std::runtime_error("Error occurred!");  // Memory leak if exception is thrown

    delete[] arr;  // This won't be executed due to the exception
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
