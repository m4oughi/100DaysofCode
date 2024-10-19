#include <iostream>

class RuleOfThreeAssignment {
    int* data;
public:
    RuleOfThreeAssignment(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfThreeAssignment(const RuleOfThreeAssignment& other) {
        data = new int(*other.data);
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    RuleOfThreeAssignment& operator=(const RuleOfThreeAssignment& other) {
        if (this != &other) {  // Self-assignment check
            delete data;  // Clean up existing memory
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfThreeAssignment() {
        delete data;  // Free dynamically allocated memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    RuleOfThreeAssignment obj1(70);
    RuleOfThreeAssignment obj2(80);
    obj2 = obj1;  // Deep copy with assignment
    obj2.display();
    return 0;
}
