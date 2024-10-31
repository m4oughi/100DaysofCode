#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released in destructor." << std::endl;
    }
};

void innerFunction() {
    Resource res;  // Destructor will be called if exception occurs
    throw std::runtime_error("Inner function error!");  // Exception thrown
}

void outerFunction() {
    Resource res;  // Destructor will be called when stack unwinds
    innerFunction();  // Call to inner function
}

int main() {
    try {
        outerFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
