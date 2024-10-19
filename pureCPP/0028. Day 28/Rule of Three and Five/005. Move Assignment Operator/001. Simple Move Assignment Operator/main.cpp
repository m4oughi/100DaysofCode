#include <iostream>

class SimpleMoveAssignment {
    int* data;
public:
    SimpleMoveAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    SimpleMoveAssignment& operator=(SimpleMoveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;  // Release any existing resource
            data = other.data;  // Transfer ownership of resource
            other.data = nullptr;  // Nullify the source
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~SimpleMoveAssignment() {
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
    SimpleMoveAssignment obj1(10);
    SimpleMoveAssignment obj2(20);
    obj2 = std::move(obj1);  // Move assignment operator is called
    obj2.display();  // obj2 takes ownership of obj1's resource
    obj1.display();  // obj1 is left in a valid but empty state
    return 0;
}
