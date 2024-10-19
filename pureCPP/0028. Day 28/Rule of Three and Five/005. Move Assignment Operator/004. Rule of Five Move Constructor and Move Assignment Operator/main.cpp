#include <iostream>

class RuleOfFiveMoveAssignment {
    int* data;
public:
    RuleOfFiveMoveAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor
    RuleOfFiveMoveAssignment(const RuleOfFiveMoveAssignment& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfFiveMoveAssignment& operator=(const RuleOfFiveMoveAssignment& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfFiveMoveAssignment(RuleOfFiveMoveAssignment&& other) noexcept {
        data = other.data;  // Transfer ownership
        other.data = nullptr;
        std::cout << "Move Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    RuleOfFiveMoveAssignment& operator=(RuleOfFiveMoveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Transfer ownership
            other.data = nullptr;
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfFiveMoveAssignment() {
        delete data;  // Free dynamically allocated memory
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
    RuleOfFiveMoveAssignment obj1(70);
    RuleOfFiveMoveAssignment obj2(80);
    obj2 = std::move(obj1);  // Move assignment operator
    RuleOfFiveMoveAssignment obj3(90);
    obj3 = std::move(obj2);  // Move assignment operator
    obj3.display();
    obj1.display();
    obj2.display();
    return 0;
}
