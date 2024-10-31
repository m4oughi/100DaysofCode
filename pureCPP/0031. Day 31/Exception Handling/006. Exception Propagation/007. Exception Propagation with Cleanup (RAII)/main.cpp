#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

void level2() {
    Resource r;  // Acquiring a resource
    throw std::runtime_error("Error in level2");  // Exception propagates, but resource is cleaned up
}

void level1() {
    level2();  // Exception propagates through level1
}

int main() {
    try {
        level1();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
