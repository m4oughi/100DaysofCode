#include <iostream>

class RuleOfThreeMoveAssignment {
    int* data;
public:
    RuleOfThreeMoveAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor
    RuleOfThreeMoveAssignment(const RuleOfThreeMoveAssignment& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfThreeMoveAssignment& operator=(const RuleOfThreeMoveAssignment& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    // Move Assignment Operator
    RuleOfThreeMoveAssignment& operator=(RuleOfThreeMoveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Transfer ownership
            other.data = nullptr;
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfThreeMoveAssignment() {
        delete data;  // Release dynamically allocated memory
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
    RuleOfThreeMoveAssignment obj1(50);
    RuleOfThreeMoveAssignment obj2(60);
    obj2 = std::move(obj1);  // Move assignment operator
    obj2.display();
    obj1.display();
    return 0;
}
