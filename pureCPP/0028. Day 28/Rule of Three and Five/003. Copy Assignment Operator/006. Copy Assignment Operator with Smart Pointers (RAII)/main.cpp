#include <iostream>
#include <memory>

class SmartPointerAssignment {
    std::unique_ptr<int> data;
public:
    SmartPointerAssignment(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Custom Copy Assignment Operator for deep copy of smart pointer
    SmartPointerAssignment& operator=(const SmartPointerAssignment& other) {
        if (this != &other) {
            data = std::make_unique<int>(*other.data);  // Deep copy
            std::cout << "Custom Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    SmartPointerAssignment obj1(110);
    SmartPointerAssignment obj2(120);
    obj2 = obj1;  // Custom copy assignment operator
    obj2.display();
    return 0;
}
