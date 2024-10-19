#include <iostream>
#include <memory>

class SmartPointerExample {
    std::unique_ptr<int> data;
public:
    SmartPointerExample(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor called with value: " << *data << std::endl;
    }

    ~SmartPointerExample() {
        std::cout << "Destructor called, memory automatically managed!" << std::endl;
    }
};

int main() {
    SmartPointerExample obj(42);
    // No need to manually delete data, it's handled by unique_ptr
    return 0;
}
