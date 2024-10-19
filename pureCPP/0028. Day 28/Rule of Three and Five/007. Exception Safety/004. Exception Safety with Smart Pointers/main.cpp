#include <iostream>
#include <memory>

class SafeSmartPointer {
    std::unique_ptr<int> data;
public:
    SafeSmartPointer(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Resource allocated!" << std::endl;
    }

    void riskyOperation() {
        std::cout << "Performing risky operation!" << std::endl;
        throw std::runtime_error("Error occurred in riskyOperation!");
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    try {
        SafeSmartPointer obj(500);
        obj.display();
        obj.riskyOperation();  // Exception will be thrown here
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // std::unique_ptr automatically manages the resource, ensuring exception safety
    return 0;
}
