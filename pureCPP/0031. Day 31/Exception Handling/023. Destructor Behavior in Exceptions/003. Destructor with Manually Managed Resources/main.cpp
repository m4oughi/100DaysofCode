#include <iostream>
#include <stdexcept>

class ResourceHandler {
public:
    ResourceHandler() : data(new int[10]) {
        std::cout << "Resource allocated." << std::endl;
    }

    ~ResourceHandler() {
        delete[] data;  // Memory cleanup
        std::cout << "Resource released in destructor." << std::endl;
    }

private:
    int* data;
};

void riskyFunction() {
    ResourceHandler handler;  // Local object, memory managed by destructor
    throw std::runtime_error("Error occurred!");  // Exception thrown
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
