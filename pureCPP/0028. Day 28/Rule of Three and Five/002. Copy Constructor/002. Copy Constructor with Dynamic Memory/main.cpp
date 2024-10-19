#include <iostream>

class DynamicCopy {
    int* data;
public:
    DynamicCopy(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    DynamicCopy(const DynamicCopy& other) {
        data = new int(*other.data);  // Deep copy of dynamically allocated memory
        std::cout << "Copy Constructor called!" << std::endl;
    }

    ~DynamicCopy() {
        delete data;
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DynamicCopy obj1(20);
    DynamicCopy obj2 = obj1;  // Deep copy
    obj2.display();  // Display copied value
    return 0;
}
