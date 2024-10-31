#include <iostream>

class ResourceA {
public:
    ResourceA() { std::cout << "Resource A acquired" << std::endl; }
    ~ResourceA() { std::cout << "Resource A released (unwinding)" << std::endl; }
};

class ResourceB {
public:
    ResourceB() { std::cout << "Resource B acquired" << std::endl; }
    ~ResourceB() { std::cout << "Resource B released (unwinding)" << std::endl; }
};

void riskyOperation() {
    ResourceA resA;
    ResourceB resB;
    throw std::runtime_error("Error in risky operation");
}

int main() {
    try {
        riskyOperation();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
