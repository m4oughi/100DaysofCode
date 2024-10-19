#include <iostream>

class DeepCopy {
    int* data;
public:
    DeepCopy(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    DeepCopy(const DeepCopy& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    DeepCopy& operator=(const DeepCopy& other) {
        if (this != &other) {
            delete data;  // Clean up existing memory
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment called!" << std::endl;
        }
        return *this;
    }

    ~DeepCopy() {
        delete data;  // Clean up dynamic memory
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    DeepCopy obj1(5);
    DeepCopy obj2 = obj1;  // Deep copy, no double-free issues
    obj2 = obj1;  // Deep copy assignment
    return 0;
}
