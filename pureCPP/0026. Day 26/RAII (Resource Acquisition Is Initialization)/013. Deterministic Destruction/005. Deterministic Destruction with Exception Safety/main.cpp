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

void riskyOperation() {
    Resource res;
    throw std::runtime_error("Something went wrong!");
    // Resource is still deterministically destroyed despite the exception.
}

int main() {
    try {
        riskyOperation();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}
