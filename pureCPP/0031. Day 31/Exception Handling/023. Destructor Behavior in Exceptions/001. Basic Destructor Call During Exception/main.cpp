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

void riskyFunction() {
    Resource res;  // Local object, destructor will be called automatically
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
