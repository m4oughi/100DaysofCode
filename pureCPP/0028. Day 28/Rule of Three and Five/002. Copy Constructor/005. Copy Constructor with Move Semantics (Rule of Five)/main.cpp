#include <iostream>

class RuleOfFive {
    int* data;
public:
    RuleOfFive(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfFive(const RuleOfFive& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfFive& operator=(const RuleOfFive& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfFive(RuleOfFive&& other) noexcept {
        data = other.data;  // Transfer ownership of the resource
        other.data = nullptr;
        std::cout << "Move Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    RuleOfFive& operator=(RuleOfFive&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Transfer ownership of the resource
            other.data = nullptr;
            std::cout << "Move Assignment called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfFive() {
        delete data;  // Free dynamically allocated memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    RuleOfFive obj1(60);
    RuleOfFive obj2 = std::move(obj1);  // Move constructor
    RuleOfFive obj3(70);
    obj3 = std::move(obj2);  // Move assignment operator
    obj3.display();
    return 0;
}
