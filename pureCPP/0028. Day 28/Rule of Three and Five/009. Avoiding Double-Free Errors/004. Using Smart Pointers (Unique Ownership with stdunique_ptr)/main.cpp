#include <iostream>
#include <memory>

class SmartPointerExample {
    std::unique_ptr<int> data;
public:
    SmartPointerExample(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Resource allocated (SmartPointerExample)!" << std::endl;
    }

    // No need for a copy constructor or destructor, as `std::unique_ptr` manages the resource
    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    SmartPointerExample obj1(42);
    obj1.display();

    // Automatic resource management, no manual deletion or risk of double-free
    return 0;
}
