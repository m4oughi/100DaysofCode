#include <iostream>

class SimpleAssignment {
    int data;
public:
    SimpleAssignment(int value) : data(value) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    SimpleAssignment& operator=(const SimpleAssignment& other) {
        if (this != &other) {  // Self-assignment check
            data = other.data;  // Simple assignment
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    SimpleAssignment obj1(10);
    SimpleAssignment obj2(20);
    obj2 = obj1;  // Copy assignment operator is called
    obj2.display();  // Display copied value
    return 0;
}
