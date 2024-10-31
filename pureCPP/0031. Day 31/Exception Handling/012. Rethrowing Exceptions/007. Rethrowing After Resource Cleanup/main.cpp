#include <iostream>
#include <stdexcept>

void resourceManagingFunction() {
    int* resource = new int(100);  // Dynamically allocated resource

    try {
        throw std::runtime_error("Error during resource operation");
    } catch (...) {
        delete resource;  // Clean up the resource before rethrowing
        std::cout << "Cleaned up resources, rethrowing exception..." << std::endl;
        throw;
    }
}

int main() {
    try {
        resourceManagingFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
