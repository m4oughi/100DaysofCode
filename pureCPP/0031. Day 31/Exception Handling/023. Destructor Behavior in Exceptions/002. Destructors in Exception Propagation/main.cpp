#include <iostream>
#include <stdexcept>

class ResourceA {
public:
    ResourceA() {
        std::cout << "ResourceA acquired." << std::endl;
    }

    ~ResourceA() {
        std::cout << "ResourceA released." << std::endl;
    }
};

class ResourceB {
public:
    ResourceB() {
        std::cout << "ResourceB acquired." << std::endl;
    }

    ~ResourceB() {
        std::cout << "ResourceB released." << std::endl;
    }
};

void riskyFunction() {
    ResourceA resA;  // Acquired first
    ResourceB resB;  // Acquired second
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
