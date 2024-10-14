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

void riskyFunction() {
    Resource res;
    throw std::runtime_error("An error occurred!");  // Exception thrown.
    // RAII ensures `res` is released even though this line is never reached.
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}
