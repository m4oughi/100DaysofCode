#include <iostream>
#include <stdexcept>
#include <memory>

class SafeMultiResource {
    std::unique_ptr<int> data1;
    std::unique_ptr<int> data2;
public:
    SafeMultiResource(int value1, int value2)
        : data1(std::make_unique<int>(value1)), data2(std::make_unique<int>(value2)) {
        std::cout << "Resources allocated!" << std::endl;
    }

    void riskyOperation() {
        std::cout << "Performing risky operation!" << std::endl;
        throw std::runtime_error("Error occurred in riskyOperation!");
    }

    void display() const {
        std::cout << "Data1: " << *data1 << " Data2: " << *data2 << std::endl;
    }
};

int main() {
    try {
        SafeMultiResource obj(600, 700);
        obj.display();
        obj.riskyOperation();  // Exception will be thrown here
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // std::unique_ptr ensures that both resources are safely deallocated
    return 0;
}
