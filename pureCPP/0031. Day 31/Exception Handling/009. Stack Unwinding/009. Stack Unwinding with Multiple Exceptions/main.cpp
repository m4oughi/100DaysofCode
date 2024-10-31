#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { 
        std::cout << "Resource released (unwinding)" << std::endl; 
        throw std::runtime_error("Exception in destructor");  // Exception during unwinding
    }
};

void riskyFunction() {
    Resource res;
    throw std::runtime_error("Exception during work");
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
