#include <iostream>
#include <memory>

class SmartPointerCopy {
    std::unique_ptr<int> data;
public:
    SmartPointerCopy(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Custom Copy Constructor for deep copy of smart pointer
    SmartPointerCopy(const SmartPointerCopy& other) {
        data = std::make_unique<int>(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    SmartPointerCopy obj1(80);
    SmartPointerCopy obj2 = obj1;  // Custom copy constructor
    obj2.display();
    return 0;
}
