#include <iostream>

class RuleOfFiveAssignment {
    int* data;
public:
    RuleOfFiveAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfFiveAssignment(const RuleOfFiveAssignment& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    RuleOfFiveAssignment& operator=(const RuleOfFiveAssignment& other) {
        if (this != &other) {
            delete data;  // Clean up existing memory
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfFiveAssignment(RuleOfFiveAssignment&& other) noexcept {
        data = other.data;  // Take ownership of the resource
        other.data = nullptr;
        std::cout << "Move Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    RuleOfFiveAssignment& operator=(RuleOfFiveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;  // Clean up existing memory
            data = other.data;  // Transfer ownership of the resource
            other.data = nullptr;
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfFiveAssignment() {
        delete data;  // Free dynamically allocated memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    RuleOfFiveAssignment obj1(90);
    RuleOfFiveAssignment obj2(100);
    obj2 = std::move(obj1);  // Move assignment operator
    obj2.display();
    return 0;
}
