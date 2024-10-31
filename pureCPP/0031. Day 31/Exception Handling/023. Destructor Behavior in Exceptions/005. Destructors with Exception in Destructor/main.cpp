#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released in destructor." << std::endl;
        throw std::runtime_error("Error in destructor!");  // Dangerous! Exception in destructor
    }
};

void riskyFunction() {
    Resource res;  // Destructor will be called, exception thrown from here
    throw std::runtime_error("Error in function!");  // First exception
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
