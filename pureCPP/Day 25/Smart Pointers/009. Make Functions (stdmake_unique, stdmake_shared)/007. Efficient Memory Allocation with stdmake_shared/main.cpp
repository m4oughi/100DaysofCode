#include <iostream>
#include <memory>

struct LargeObject {
    LargeObject() {
        std::cout << "LargeObject constructor" << std::endl;
    }
    ~LargeObject() {
        std::cout << "LargeObject destructor" << std::endl;
    }
};

int main() {
    auto sharedPtr = std::make_shared<LargeObject>();  // Allocates memory for both control block and object
    std::cout << "Shared pointer created" << std::endl;

    return 0;
}
