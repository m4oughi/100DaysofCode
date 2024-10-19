#include <iostream>

class MoveExample {
    int* data;
public:
    MoveExample(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    MoveExample(const MoveExample& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    MoveExample& operator=(const MoveExample& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    MoveExample(MoveExample&& other) noexcept {
        data = other.data;  // Take ownership of the resource
        other.data = nullptr;  // Leave the moved object in a valid state
        std::cout << "Move Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    MoveExample& operator=(MoveExample&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Take ownership of the resource
            other.data = nullptr;  // Leave the moved object in a valid state
            std::cout << "Move Assignment called!" << std::endl;
        }
        return *this;
    }

    ~MoveExample() {
        delete data;  // Clean up dynamic memory
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    MoveExample obj1(5);
    MoveExample obj2 = std::move(obj1);  // Move constructor
    MoveExample obj3(10);
    obj3 = std::move(obj2);  // Move assignment
    return 0;
}
