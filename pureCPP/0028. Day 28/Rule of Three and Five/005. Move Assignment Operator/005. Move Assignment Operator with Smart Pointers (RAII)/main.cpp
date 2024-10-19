#include <iostream>
#include <memory>

class SmartPointerMoveAssignment {
    std::unique_ptr<int> data;
public:
    SmartPointerMoveAssignment(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    SmartPointerMoveAssignment& operator=(SmartPointerMoveAssignment&& other) noexcept {
        if (this != &other) {
            data = std::move(other.data);  // Transfer ownership of smart pointer
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    SmartPointerMoveAssignment obj1(100);
    SmartPointerMoveAssignment obj2(110);
    obj2 = std::move(obj1);  // Move assignment with smart pointer
    obj2.display();
    obj1.display();  // obj1 is left in a null state
    return 0;
}
