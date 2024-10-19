#include <iostream>

class RuleOfFiveMove {
    int* data;
public:
    RuleOfFiveMove(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor
    RuleOfFiveMove(const RuleOfFiveMove& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfFiveMove& operator=(const RuleOfFiveMove& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfFiveMove(RuleOfFiveMove&& other) noexcept {
        data = other.data;  // Transfer ownership
        other.data = nullptr;
        std::cout << "Move Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    RuleOfFiveMove& operator=(RuleOfFiveMove&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Transfer ownership
            other.data = nullptr;
            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfFiveMove() {
        delete data;  // Free memory
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
    RuleOfFiveMove obj1(40);
    RuleOfFiveMove obj2 = std::move(obj1);  // Move constructor
    RuleOfFiveMove obj3(50);
    obj3 = std::move(obj2);  // Move assignment operator
    obj3.display();
    obj1.display();  // Moved-from object is in null state
    obj2.display();
    return 0;
}
