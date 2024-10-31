#include <iostream>
#include <stdexcept>

void riskyFunction() {
    int* arr = new int[10];  // Dynamically allocated memory
    std::cout << "Memory allocated." << std::endl;

    try {
        throw std::runtime_error("Error occurred!");  // Exception thrown
    } catch (const std::exception& e) {
        delete[] arr;  // Clean up memory manually
        std::cout << "Memory freed in catch block." << std::endl;
        throw;  // Rethrow exception
    }

    delete[] arr;  // Normal cleanup (this won't be executed)
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught in main: " << e.what() << std::endl;
    }
    return 0;
}
