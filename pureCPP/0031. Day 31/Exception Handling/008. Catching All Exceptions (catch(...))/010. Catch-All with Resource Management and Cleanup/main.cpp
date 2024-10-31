#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource released" << std::endl; }
};

void riskyOperation() {
    Resource res;  // Resource will be cleaned up even after exception
    throw "Unknown exception";  // Throwing a non-standard exception
}

int main() {
    try {
        riskyOperation();
    } catch (...) {
        std::cout << "Caught an unknown exception, cleaning up" << std::endl;
    }
    return 0;
}
