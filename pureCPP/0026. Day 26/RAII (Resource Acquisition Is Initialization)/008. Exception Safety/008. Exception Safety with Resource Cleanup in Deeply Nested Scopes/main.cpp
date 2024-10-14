#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

void nestedFunction() {
    Resource res;
    std::cout << "In nested function." << std::endl;
    throw std::runtime_error("Exception in nested function.");
}

int main() {
    try {
        Resource mainResource;
        std::cout << "In main function." << std::endl;
        nestedFunction();  // Exception thrown here.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Both resources are released in the correct order.
}
