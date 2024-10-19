#include <iostream>

class ShallowAssignment {
    int* data;
public:
    ShallowAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }

    ~ShallowAssignment() {
        delete data;  // Free dynamically allocated memory
        std::cout << "Destructor called!" << std::endl;
    }
};

void createObject() {
    ShallowAssignment obj1(50);
    ShallowAssignment obj2(60);
    obj2 = obj1;  // Shallow copy, both objects point to the same memory
    // Double-free problem occurs when destructors are called!
}

int main() {
    createObject();
    return 0;
}
