#include <iostream>
#include <memory>
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

void riskyOperation() {
    std::unique_ptr<Resource> res = std::make_unique<Resource>();
    throw std::runtime_error("An error occurred.");
    // Resource is still released when `res` goes out of scope.
}

int main() {
    try {
        riskyOperation();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}
