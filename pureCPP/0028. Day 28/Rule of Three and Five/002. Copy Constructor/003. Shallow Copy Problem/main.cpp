#include <iostream>

class ShallowCopy {
    int* data;
public:
    ShallowCopy(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Default Copy Constructor (Shallow Copy)
    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }

    ~ShallowCopy() {
        delete data;
        std::cout << "Destructor called!" << std::endl;
    }
};

void createObject() {
    ShallowCopy obj1(30);
    ShallowCopy obj2 = obj1;  // Shallow copy, both obj1 and obj2 point to the same memory
    // Double-free issue will occur when both destructors are called!
}

int main() {
    createObject();
    return 0;
}
