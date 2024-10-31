#include <iostream>
#include <memory>
#include <stdexcept>

class ComplexObject {
public:
    ComplexObject() {
        std::cout << "ComplexObject created." << std::endl;
    }

    ~ComplexObject() {
        std::cout << "ComplexObject destroyed." << std::endl;
    }
};

void complexFunction() {
    std::shared_ptr<ComplexObject> obj1 = std::make_shared<ComplexObject>();
    std::shared_ptr<ComplexObject> obj2 = obj1;  // Shared ownership of ComplexObject

    throw std::runtime_error("Error occurred!");  // Memory is still properly managed
}

int main() {
    try {
        complexFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
