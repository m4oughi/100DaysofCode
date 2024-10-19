#include <iostream>

class DynamicMoveAssignment {
    int* data;
public:
    DynamicMoveAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    DynamicMoveAssignment& operator=(DynamicMoveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;  // Release any existing memory
            data = other.data;  // Transfer ownership
            other.data = nullptr;  // Nullify source
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~DynamicMoveAssignment() {
        delete data;
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    DynamicMoveAssignment obj1(30);
    DynamicMoveAssignment obj2(40);
    obj2 = std::move(obj1);  // Move assignment operator is called
    obj2.display();
    obj1.display();
    return 0;
}
