#include <iostream>
#include <stdexcept>

class ComplexResource {
public:
    ComplexResource() {
        std::cout << "Complex resource acquired." << std::endl;
    }

    ~ComplexResource() {
        std::cout << "Complex resource released." << std::endl;
    }
};

void riskyOperation() {
    ComplexResource resource;
    throw std::runtime_error("Operation failed!");
}

int main() {
    try {
        riskyOperation();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    std::cout << "Complex resource handled safely." << std::endl;
}
