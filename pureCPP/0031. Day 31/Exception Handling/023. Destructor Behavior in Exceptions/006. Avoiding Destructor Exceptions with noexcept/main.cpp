#include <iostream>
#include <stdexcept>

class SafeResource {
public:
    SafeResource() {
        std::cout << "SafeResource acquired." << std::endl;
    }

    ~SafeResource() noexcept {  // Ensures no exceptions will be thrown
        std::cout << "SafeResource released in destructor." << std::endl;
    }
};

void riskyFunction() {
    SafeResource res;  // Destructor marked noexcept
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
