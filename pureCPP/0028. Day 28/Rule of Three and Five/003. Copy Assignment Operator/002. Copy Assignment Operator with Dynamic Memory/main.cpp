#include <iostream>

class DynamicAssignment {
    int* data;
public:
    DynamicAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    DynamicAssignment& operator=(const DynamicAssignment& other) {
        if (this != &other) {  // Self-assignment check
            delete data;  // Free the existing memory
            data = new int(*other.data);  // Allocate new memory and copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~DynamicAssignment() {
        delete data;  // Free dynamic memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DynamicAssignment obj1(30);
    DynamicAssignment obj2(40);
    obj2 = obj1;  // Deep copy through assignment
    obj2.display();  // Display copied value
    return 0;
}
